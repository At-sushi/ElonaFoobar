require "tests/lua/support/minctest"

local I18N = Elona.require("I18N")

local Chara = Elona.require("Chara")
local FOV = Elona.require("FOV")
local Item = Elona.require("Item")

lrun("test I18N.get", function()
        Testing.start_in_debug_map()

        Testing.load_translations([[
locale {
  foo = "bar"
  baz = "You passed in ${_1} and ${_2}."
  hoge = "You ${is(true)} nice."
  piyo = "She ${is(false)} nice."
  hello = "Hello, ${name(_1)}!"
  hello_base = "Hello, ${basename(_1)}!"
  item = "Got ${itemname(_1)}!"
  item_base = "Got ${itembasename(_1)}!"
}
]])

        lequal(I18N.get("core.locale.foo"), "bar")
        lequal(I18N.get("core.locale.baz", "dood", 42), "You passed in dood and 42.")
        lequal(I18N.get("core.locale.baz", "dood"), "You passed in dood and <error>.")
        lequal(I18N.get("core.locale.hoge", "dood", 42), "You are nice.")
        lequal(I18N.get("core.locale.piyo", "dood", 42), "She is nice.")

        local chara = Chara.create(23, 23, 3)
        FOV.refresh();
        lequal(I18N.get("core.locale.hello", chara), "Hello, プチ!")
        lequal(I18N.get("core.locale.hello_base", chara), "Hello, プチ!")

        local item = Item.create(0, 1, 792, 3)
        lequal(I18N.get("core.locale.item", item), "Got 3個のプチトロ!")
        lequal(I18N.get("core.locale.item_base", item), "Got プチトロ!")
end)

lrun("test I18N.get_optional", function()
        Testing.start_in_debug_map()

        Testing.load_translations([[
locale {
  foo = "bar"
  baz = "You passed in ${_1} and ${_2}."
  hoge = "You ${is(true)} nice."
  piyo = "She ${is(false)} nice."
  hello = "Hello, ${name(_1)}!"
  hello_base = "Hello, ${basename(_1)}!"
  item = "Got ${itemname(_1)}!"
  item_base = "Got ${itembasename(_1)}!"
}
]])

        lequal(I18N.get_optional("core.locale.foo"), "bar")
        lequal(I18N.get_optional("core.locale.baz", "dood", 42), "You passed in dood and 42.")
        lequal(I18N.get_optional("core.locale.baz", "dood"), "You passed in dood and <error>.")
        lequal(I18N.get_optional("core.locale.hoge", "dood", 42), "You are nice.")
        lequal(I18N.get_optional("core.locale.piyo", "dood", 42), "She is nice.")

        local chara = Chara.create(23, 23, 3)
        FOV.refresh();
        lequal(I18N.get_optional("core.locale.hello", chara), "Hello, プチ!")
        lequal(I18N.get_optional("core.locale.hello_base", chara), "Hello, プチ!")

        local item = Item.create(0, 1, 792, 3)
        lequal(I18N.get_optional("core.locale.item", item), "Got 3個のプチトロ!")
        lequal(I18N.get_optional("core.locale.item_base", item), "Got プチトロ!")

        lequal(I18N.get_optional("core.locale.asdfg"), nil)
        lequal(I18N.get_optional(""), nil)
end)

lrun("test I18N.get_enum", function()
        Testing.load_translations([[
locale {
  foo {
    _0 = "bar"
    _1 = "baz"
    _2 = "hoge ${_1}"
  }
}
]])

        lequal(I18N.get_enum("core.locale.foo", 0), "bar")
        lequal(I18N.get_enum("core.locale.foo", 1), "baz")
        lequal(I18N.get_enum("core.locale.foo", 2), "hoge <error>")
        lequal(I18N.get_enum("core.locale.foo", 2, "quux"), "hoge quux")
end)

lrun("test I18N.get_enum_property", function()
        Testing.load_translations([[
locale {
  foo {
    _0 {
        name = "foo"
        desc = "bar"
    }
    _1 {
        name = "baz"
        desc = "quux"
    }
    _2 {
        name = "hoge"
        desc = "piyo ${_1}"
    }
  }
}
]])

        lequal(I18N.get_enum_property("core.locale.foo", "name", 0), "foo")
        lequal(I18N.get_enum_property("core.locale.foo", "name", 1), "baz")
        lequal(I18N.get_enum_property("core.locale.foo", "name", 2), "hoge")
        lequal(I18N.get_enum_property("core.locale.foo", "desc", 0), "bar")
        lequal(I18N.get_enum_property("core.locale.foo", "desc", 1), "quux")
        lequal(I18N.get_enum_property("core.locale.foo", "desc", 2), "piyo <error>")
        lequal(I18N.get_enum_property("core.locale.foo", "desc", 2, "fuga"), "piyo fuga")
end)

lrun("test I18N.get_enum_property_optional", function()
        Testing.load_translations([[
locale {
  foo {
    _0 {
        name = "foo"
    }
    _1 {
        name = "baz"
        desc = "bar ${_1}"
    }
  }
}
]])

        lequal(I18N.get_enum_property_optional("core.locale.foo", "name", 0), "foo")
        lequal(I18N.get_enum_property_optional("core.locale.foo", "name", 1), "baz")
        lequal(I18N.get_enum_property_optional("core.locale.foo", "desc", 0), nil)
        lequal(I18N.get_enum_property_optional("core.locale.foo", "desc", 0, "hoge"), nil)
        lequal(I18N.get_enum_property_optional("core.locale.foo", "desc", 1), "bar <error>")
        lequal(I18N.get_enum_property_optional("core.locale.foo", "desc", 1, "hoge"), "bar hoge")
end)
