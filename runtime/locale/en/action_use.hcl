locale {
    action {
        use {
            useable_again_at = "This item will be useable again at ${_1}."
            out_of_charge = "It's out of charge."
            not_sleepy = "You don't feel sleepy yet."

            living {
                needs_more_blood = "The weapon needs more blood."
                ready_to_grow = "${itemname(_1)} sucked enough blood and ready to grow!"
                weird = "But you sense something weird."
                it = "It..."

                bonus = "Bonus+1"

                displeased = "${itemname(_1)} vibrates as if she is displeased."
                pleased = "${itemname(_1)} vibrates as if she is pleased."
                becoming_a_threat = "Its power is becoming a threat."
                removes_enchantment = "${itemname(_1)} removes an enchantment."
            }


            mine {
                cannot_use_here = "You can't place it here."
                cannot_place_here = "You can't place it here."
                you_set_up = "You set up the mine."
            }

            chair {
                needs_place_on_ground = "You need to put it on the ground."
                you_sit_on = "You sit on ${itemname(_1, 1)}."

                choices {
                    relax = "Relax."
                    my_chair = "It's my chair."
                    guest_chair = "It's for my guest."
                    free_chair = "It's free to use."
                }

                relax = "You relax as much as you like."
                my_chair = "${itemname(_1, 1)} is your seat now."
                guest_chair = "${itemname(_1, 1)} is used by your guests now."
                free_chair = "${itemname(_1, 1)} can be used by anyone."
            }

            house_board {
                cannot_use_it_here = "You can't use it here."
            }

            dresser {
                prompt = "Make up who?"
            }

            snow {
                need_more = "You need more snow."
                make_snowman = "${name(_1)} make${s(_1)} a snow man!"
            }

            torch {
                light = "You light up the torch."
                put_out = "You put out the fire."
            }

            stethoscope {
                prompt = "Auscultate who?"
                self = "You blush."
                other {
                    start {
                        text = "You no longer watch on ${his(_1)} health."
                        female {
                            text = "${name(_1)} blush${s(_1, true)}."
                            dialog = "\"Pervert!\""
                        }
                    }
                    stop = "You start to keep an eye on ${his(_1)} health."
                }
            }

            leash {
                prompt = "Leash who?"
                self = "You leash yourself..."
                other {
                    start {
                        resists = "The leash is cut as ${name(_1)} resists."
                        text = "You leash ${name(_1)}."
                        dialog = "${name(_1)} gasp${s(_1)}, \"Pervert!\""
                    }
                    stop {
                        text = "You unleash ${name(_1)}."
                        dialog = "${name(_1)} gasp${s(_1)}, \"D-don't sto....N-nothing!\""
                    }
                }
            }

            sandbag {
                cannot_use_here = "You cant use it in this area."
                prompt = "Hang who?"

                not_weak_enough = "The target needs to be weakened."
                already = "It's already hanged up."
                ally = "Hanging your ally is a brutal idea!"
                self = "You try to hang yourself but rethink..."
                start = "You hang up ${name(_1)}."
            }

            music_disc {
                play = "You play ${itemname(_1, 1)}."
            }

            shelter {
                only_in_world_map = "You can only build it in the world map."
                cannot_build_it_here = "You can't build it here."
                during_quest = "Really give up the quest and evacuate to the shelter?"
            }

            money_box {
                not_enough_gold = "You count your coins and sigh..."
                full = "The money box is full."
            }

            summoning_crystal {
                use = "It glows dully."
            }

            rune {
                only_in_town = "You can only use it in a town."
                use = "Suddenly, a strange gate opens."
            }

            hammer {
                use = "You swing ${itemname(_1, 1)}."
            }

            unicorn_horn {
                use = "You hold ${itemname(_1, 1)} up high."
            }

            statue {
                activate = "You activate ${itemname(_1, 1)}."

                opatos = "A voice echoes, \"Muwahahaha! I shall shake the land for you!\""
                jure = "A voice echoes, \"I-I'm not doing for you! Silly!\""
                ehekatl = "A voice echoes, \"Did you call me? Call me?\""
                lulwy {
                    during_etherwind = "A rather angry voice echoes, \"Listen my little slave. Did you really think I would turn a hand in this filthy wind for you?\""
                    normal = "An impish voice echoes, \"Ah you ask too much for a mortal. Still, it is hard to refuse a call from such a pretty slave like you.\""
                }

                creator {
                    in_usermap = "Watching this strange statue makes you want to throw something at it!"
                    normal = "It looks so dumb here."
                }
            }

            nuke {
                cannot_place_here = "You can't place it here."
                not_quest_goal = "This location is not your quest goal. Really place it here?"
                set_up = "You set up the nuke...now run!!"
            }

            secret_treasure {
                use = "You gain a new feat."
            }

            secret_experience {
                kumiromi {
                    not_enough_exp = "Kumiromi talks to you, \"No...you aren't...experienced enough...for this...\""
                    use {
                        dialog = "\"...You have acquired enough...experience...I shall reward you...\""
                        text = "Kumiromi blesses you. You can obtain one more feat now!"
                    }
                }

                lomias = "You have a bad feeling about this..."
            }

            rope {
                prompt = "Really hang yourself?"
            }

            monster_ball {
                empty = "This ball is empty."
                party_is_full = "Your party is full."
                use = "You activate ${itemname(_1, 1)}."
            }

            gem_stone {
                kumiromi {
                    no_plant = "You don't see any plant on the ground."
                    already_grown = "The plant has already grown full."
                    revives = "The plant revives."
                    grows = "The plant grows."
                }
            }

            gene_machine {
                choose_original = "Choose an original body."
                choose_subject  = "Choose a gene. Once you extract a gene, the subject will be lost forever."
                prompt = "Really add ${basename(_1)}'s gene to ${basename(_2)}?"
                has_inherited = "${basename(_1)} has inherited ${basename(_2)}'s gene!"
                gains {
                    body_part = "${basename(_1)} gains new ${_2}!"
                    ability = "${basename(_1)} learns${_2} skill!"
                    level = "${basename(_1)} is now level ${_2}!"
                }
            }

            iron_maiden {
                use = "You enter the iron maiden."
                interesting = "\"Interesting!\""
                someone_activates = "Suddenly, someone closes the door."
                grin = "*Grin*"
            }

            guillotine {
                use = "You set your head on the guillotine."
                someone_activates = "Suddenly, someone activates the guillotine."
            }

            whistle {
                use = "*Peeeeeeeeeep* "
            }

            deck {
                title = "Card"

                npc_name = "NPC name"
                kill = "Kill"
                generate = "Generate"
            }
        }
    }
}
