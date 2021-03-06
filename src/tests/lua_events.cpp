#include "../thirdparty/catch2/catch.hpp"
#include "../thirdparty/sol2/sol.hpp"

#include "../character.hpp"
#include "../dmgheal.hpp"
#include "../filesystem.hpp"
#include "../item.hpp"
#include "../itemgen.hpp"
#include "../lua_env/lua_env.hpp"
#include "../testing.hpp"
#include "../variables.hpp"
#include "tests.hpp"

using namespace elona::testing;

TEST_CASE("Test registering of callback", "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("test", R"(
local Event = Elona.require("Event")

local function my_handler()
   Store.global.thing = "dood"
end

Store.global.thing = nil

Event.register(Event.EventKind.AllTurnsFinished, my_handler)
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();

    REQUIRE_NOTHROW(lua.run_in_mod("test", R"(assert(Store.global.thing == "dood"))"));
}

TEST_CASE("Test registering of callback multiple times", "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("test", R"(
local Event = Elona.require("Event")

local function my_handler()
   Store.global.called_times = Store.global.called_times + 1
end

Store.global.called_times = 0

Event.register(Event.EventKind.AllTurnsFinished, my_handler)
Event.register(Event.EventKind.AllTurnsFinished, my_handler)
Event.register(Event.EventKind.AllTurnsFinished, my_handler)
Event.register(Event.EventKind.AllTurnsFinished, my_handler)
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();

    REQUIRE_NOTHROW(
        lua.run_in_mod("test", R"(assert(Store.global.called_times == 4))"));
}

TEST_CASE("Test unregistering of callback", "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("test", R"(
local Event = Elona.require("Event")

local function my_handler()
   Store.global.thing = "dood"
end

Store.global.thing = nil

Event.register(Event.EventKind.AllTurnsFinished, my_handler)
Event.unregister(Event.EventKind.AllTurnsFinished, my_handler)
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();

    REQUIRE_NOTHROW(lua.run_in_mod("test", R"(assert(Store.global.thing == nil))"));
}

TEST_CASE("Test unregistering of callback multiple times", "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("test", R"(
local Event = Elona.require("Event")

local function my_handler()
   Store.global.called_times = Store.global.called_times + 1
end

Store.global.called_times = 0

Event.register(Event.EventKind.AllTurnsFinished, my_handler)
Event.register(Event.EventKind.AllTurnsFinished, my_handler)
Event.register(Event.EventKind.AllTurnsFinished, my_handler)
Event.register(Event.EventKind.AllTurnsFinished, my_handler)

Event.unregister(Event.EventKind.AllTurnsFinished, my_handler)
Event.unregister(Event.EventKind.AllTurnsFinished, my_handler)
Event.unregister(Event.EventKind.AllTurnsFinished, my_handler)
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();

    REQUIRE_NOTHROW(
        lua.run_in_mod("test", R"(assert(Store.global.called_times == 1))"));
}

TEST_CASE("Test unregistering of callback without registering", "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("test", R"(
local Event = Elona.require("Event")

local function my_handler()
   Store.global.called_times = Store.global.called_times + 1
end

Store.global.called_times = 0

Event.unregister(Event.EventKind.AllTurnsFinished, my_handler)
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();

    REQUIRE_NOTHROW(
        lua.run_in_mod("test", R"(assert(Store.global.called_times == 0))"));
}

TEST_CASE("Test unregistering of callback inside callback", "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("test", R"(
local Event = Elona.require("Event")

local function my_handler()
   Store.global.called_times = Store.global.called_times + 1
   Event.unregister(Event.EventKind.AllTurnsFinished, my_handler)
end

Store.global.called_times = 0

Event.register(Event.EventKind.AllTurnsFinished, my_handler)
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();
    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();

    REQUIRE_NOTHROW(
        lua.run_in_mod("test", R"(assert(Store.global.called_times == 1))"));
}

TEST_CASE("Test clearing of single callback type", "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("test", R"(
local Event = Elona.require("Event")

local function my_handler()
   Store.global.called_times = Store.global.called_times + 1
end

Store.global.called_times = 0

Event.register(Event.EventKind.AllTurnsFinished, my_handler)
Event.register(Event.EventKind.PlayerTurn, my_handler)

Event.clear(Event.EventKind.AllTurnsFinished)
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();
    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::player_turn>();

    REQUIRE_NOTHROW(
        lua.run_in_mod("test", R"(assert(Store.global.called_times == 1))"));
}

TEST_CASE("Test clearing of all callback types", "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("test", R"(
local Event = Elona.require("Event")

local function my_handler()
   Store.global.called_times = Store.global.called_times + 1
end

Store.global.called_times = 0

Event.register(Event.EventKind.AllTurnsFinished, my_handler)
Event.register(Event.EventKind.PlayerTurn, my_handler)

Event.clear()
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();
    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::player_turn>();

    REQUIRE_NOTHROW(
        lua.run_in_mod("test", R"(assert(Store.global.called_times == 0))"));
}

TEST_CASE("Test isolation of event clearing between mods", "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("first_mod", R"(
local Event = Elona.require("Event")

local function my_handler()
   Store.global.called_times = Store.global.called_times + 1
end

Store.global.called_times = 0

Event.register(Event.EventKind.AllTurnsFinished, my_handler)
)"));

    REQUIRE_NOTHROW(lua.load_mod_from_script("second_mod", R"(
local Event = Elona.require("Event")
Event.clear()
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();

    REQUIRE_NOTHROW(
        lua.run_in_mod("first_mod", R"(assert(Store.global.called_times == 1))"));
}

TEST_CASE(
    "Test triggering of callback inside another callback",
    "[Lua: Events]")
{
    elona::lua::lua_env lua;
    lua.reload();

    REQUIRE_NOTHROW(lua.load_mod_from_script("test", R"(
local Event = Elona.require("Event")

local function first_handler()
   Store.global.first = true
   Event.trigger(Event.EventKind.PlayerTurn, {})
end

local function second_handler()
   Store.global.second = true
end

Store.global.first = false
Store.global.second = false

Event.register(Event.EventKind.AllTurnsFinished, first_handler)
Event.register(Event.EventKind.PlayerTurn, second_handler)
)"));

    lua.get_event_manager()
        .run_callbacks<elona::lua::event_kind_t::all_turns_finished>();

    REQUIRE_NOTHROW(lua.run_in_mod("test", R"(assert(Store.global.first == true))"));
    REQUIRE_NOTHROW(lua.run_in_mod("test", R"(assert(Store.global.second == true))"));
}
