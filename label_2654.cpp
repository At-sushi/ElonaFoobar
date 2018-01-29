#include "elona.hpp"
#include "variables.hpp"

#include "dup.hpp"


namespace elona
{


int label_2654()
{
    if (dbid == 0) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"バグ"s;
                    return 0;
                } else {
                    refstr = u8"bug"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"slime"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 0;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"バグ"s;
            } else {
                cdatan(0, rc) = u8"bug"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"slime"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 343) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"user"s;
                    return 0;
                } else {
                    refstr = u8"user"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"god"s;
            dbmode = 2;
            label_2297();
            cpicref = 1;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 343;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"user"s;
            } else {
                cdatan(0, rc) = u8"user"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"god"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 1;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 1) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ガード！ガード！」"s, u8"「襲撃だ！」"s, u8"「強盗め！」"s);
                return 1;
            } else {
                txt(u8"\"Guard! Guard!\""s, u8"\"Ambush!\""s, u8"\"You thief!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「命だけわぁ」"s, u8"「あぁぁ…」"s);
                return 1;
            } else {
                txt(u8"\"Please spare my life.\""s, u8"\"Ahhhh....\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「あの世で後悔するがいい」"s, u8"「虫けらめ」"s);
                return 1;
            } else {
                txt(u8"\"Die thief.\""s, u8"\"You deserve this.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"店主"s;
                    return 0;
                } else {
                    refstr = u8"shopkeeper"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 140;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 1;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 35;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 80;
            cdata(208, rc) = 6;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"店主"s;
            } else {
                cdatan(0, rc) = u8"shopkeeper"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 140;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 141;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 353) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"キャラバンの隊長"s;
                    return 0;
                } else {
                    refstr = u8"caravan master"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 443;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 353;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 3;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"キャラバンの隊長"s;
            } else {
                cdatan(0, rc) = u8"caravan master"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 443;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 70) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"カクテルをシェイクする音が聞こえる。"s, u8"「一杯どうだい？」"s, u8"「年季物のクリムエールがあるよ」"s, u8"酒場は多くの人でにぎわっている。"s);
                return 1;
            } else {
                txt(u8"You hear the sound of cocktail shakers."s, u8"\"How 'bout a drink sir?\""s, u8"\"We got vintage crim ales.\""s, u8"The bar is crowded with people."s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「この酔っ払いめ！」"s, u8"「悪酔いはいけませんよ」"s);
                return 1;
            } else {
                txt(u8"\"Hey, stop it drunkard.\""s, u8"\"Are you sick from drinking too much?\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「酔っ払いごときに…」"s, u8"「ふざけた運命だ」"s);
                return 1;
            } else {
                txt(u8"\"I got killed by a drunkard.\""s, u8"\"This is ridiculous.\""s);
                return 1;
            }
        }
        if (dbmode == 104) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「お帰りですか。美味い酒を用意してありますよ」"s, u8"「お疲れだったでしょう。冷酒でもどうですか」"s);
                return 1;
            } else {
                txt(u8"\"Welcome home. I've got some decent ales for you.\""s, u8"\"Are you tired? How'bout a drink?\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「酔いは覚めましたか？」"s);
                return 1;
            } else {
                txt(u8"\"Sober up now huh?\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"バーテンダー"s;
                    return 0;
                } else {
                    refstr = u8"bartender"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 144;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 70;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"バーテンダー"s;
            } else {
                cdatan(0, rc) = u8"bartender"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 144;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 145;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 69) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"情報屋"s;
                    return 0;
                } else {
                    refstr = u8"informer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 15;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 69;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"情報屋"s;
            } else {
                cdatan(0, rc) = u8"informer"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 15;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 16;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 73) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"アリーナマスター"s;
                    return 0;
                } else {
                    refstr = u8"arena master"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 41;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 73;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 40;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"アリーナマスター"s;
            } else {
                cdatan(0, rc) = u8"arena master"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 41;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 74) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 104) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「お怪我はありませんか？」"s, u8"「無事な姿で何よりです。おかえりなさい」"s);
                return 1;
            } else {
                txt(u8"\"Are you wonded?\""s, u8"\"Good to see you again. Welcome home.\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1592();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"癒し手"s;
                    return 0;
                } else {
                    refstr = u8"healer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 69;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 74;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"癒し手"s;
            } else {
                cdatan(0, rc) = u8"healer"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 69;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 206) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"誰かが祈りを捧げる声が聞こえる。"s, u8"「おお、この迷える子猫に道標の光を…」"s, u8"「祈りなさい。どんな時でも救いはあります」"s, u8"「他人を憎んではなりません」"s);
                return 1;
            } else {
                txt(u8"You hear the chants of prayer in the distance."s, u8"\"Come hither stray kittens, I shall guide you to the light.\""s, u8"\"Pray hard. There's always chance for salvation.\""s, u8"\"Do unto others as you wish others to do unto you.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「償いなさい」"s, u8"「あなたには罰が必要なようですね」"s, u8"「てめー♪」"s, u8"「くそがーっ」"s);
                return 1;
            } else {
                txt(u8"\"Atone for you sin.\""s, u8"\"Well, you need to be punished.\""s, u8"\"You sonova...\""s, u8"\"Shit!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「おお、神よー」"s);
                return 1;
            } else {
                txt(u8"\"God help me!\""s);
                return 1;
            }
        }
        if (dbmode == 104) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「お怪我はありませんか？」"s, u8"「無事な姿で何よりです。おかえりなさい」"s);
                return 1;
            } else {
                txt(u8"\"Are you wonded?\""s, u8"\"Good to see you again. Welcome home.\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「地獄に墜ちなさい♪」"s);
                return 1;
            } else {
                txt(u8"\"Go to hell.\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1592();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"シスター"s;
                    return 0;
                } else {
                    refstr = u8"sister"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 163;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 206;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 50;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"シスター"s;
            } else {
                cdatan(0, rc) = u8"sister"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 163;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 38) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"長"s;
                    return 0;
                } else {
                    refstr = u8"elder"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 142;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 38;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"長"s;
            } else {
                cdatan(0, rc) = u8"elder"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 142;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 143;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 40) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「準備はいいかい？いくぞ！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"トレイナー"s;
                    return 0;
                } else {
                    refstr = u8"trainer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 7;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 40;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 40;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"トレイナー"s;
            } else {
                cdatan(0, rc) = u8"trainer"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 7;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 10;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 333) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「準備はいいかい？いくぞ！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ギルドトレイナー"s;
                    return 0;
                } else {
                    refstr = u8"guild trainer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 415;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 333;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 69;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ギルドトレイナー"s;
            } else {
                cdatan(0, rc) = u8"guild trainer"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 415;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 414;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 76) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「お尋ね者だ！」"s, u8"「犯罪者め、おとなしくしろ」"s, u8"「のこのこ現れるとはな！」"s, u8"「罪をつぐなってもらおう」"s);
                return 1;
            } else {
                txt(u8"\"Stop there criminal!\""s, u8"\"You scum! Stay there.\""s, u8"\"You are under arrest.\""s, u8"\"You will pay for your sin.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1594();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ガード"s;
                    return 0;
                } else {
                    refstr = u8"guard"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 363;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 76;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 40;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ガード"s;
            } else {
                cdatan(0, rc) = u8"guard"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 363;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 363;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 77) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「お尋ね者だ！」"s, u8"「犯罪者め、おとなしくしろ」"s, u8"「のこのこ現れるとはな！」"s, u8"「罪をつぐなってもらおう」"s);
                return 1;
            } else {
                txt(u8"\"Stop there criminal!\""s, u8"\"You scum! Stay there.\""s, u8"\"You are under arrest.\""s, u8"\"You will pay for your sin.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1594();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ガード"s;
                    return 0;
                } else {
                    refstr = u8"guard"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 25;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 77;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 40;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ガード"s;
            } else {
                cdatan(0, rc) = u8"guard"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 25;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 25;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 204) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「どこの馬鹿がこいつを放った！」"s, u8"「撃て、撃て、撃ちまくれー！！」"s, u8"「こいつは、ちょっと無理です」"s, u8"「隊長！血が血がー！！」"s, u8"「くそっ。この化け物め！」"s, u8"「なんなんだこの怪物は！」"s, u8"「ひるむな、突撃しろ！」"s);
                return 1;
            } else {
                txt(u8"\"Who the hell released this monster!\""s, u8"\"Fire, fire, fire!\""s, u8"\"This is ridiculous.\""s, u8"\"Blood! My blooood!\""s, u8"\"Holy cow!\""s, u8"\"What is THIS?\""s, u8"\"Go go go!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「隊長！もうダメです…」"s, u8"「うぎゃぁぁぁぁぁぁ」"s, u8"「隊長！味方がまた一人やられました！」"s, u8"「ぐふっ」"s, u8"「ふばぼー」"s);
                return 1;
            } else {
                txt(u8"\"Ok, I'm done.\""s, u8"\"Arrrrrggghhh!\""s, u8"\"Man down! Man down!\""s, u8"\"M-Medic!\""s, u8"\"We got another man killed!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パルミア特殊部隊"s;
                    return 0;
                } else {
                    refstr = u8"palmian elite soldier"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 74;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 204;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(216, rc) = -3;
            cdata(217, rc) = -2;
            cdata(212, rc) = 3;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"パルミア特殊部隊"s;
            } else {
                cdatan(0, rc) = u8"palmian elite soldier"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 74;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 75;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 2) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"ひどくしゃがれた笑い声が聞こえる… "s);
                return 1;
            } else {
                txt(u8"You hear raspy bitter laughter in the distance…"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「愚かな！」"s);
                return 1;
            } else {
                txt(u8"\"Fool!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ば、馬鹿な…！」"s);
                return 1;
            } else {
                txt(u8"\"Impossible!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ふははははっ」"s);
                return 1;
            } else {
                txt(u8"\"Hahaha!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"偽りの預言者『ゼーム』"s;
                    return 0;
                } else {
                    refstr = u8"<Zeome> the false prophet"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"elea"s;
            dbmode = 2;
            label_2297();
            cpicref = 297;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 2;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 55;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 53;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = 414;
            cdata(216, rc) = -1;
            cdata(217, rc) = 433;
            cdata(220, rc) = 424;
            cdata(212, rc) = 13;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(211, rc) = 403;
            if (jp) {
                cdatan(0, rc) = u8"偽りの預言者『ゼーム』"s;
            } else {
                cdatan(0, rc) = u8"<Zeome> the false prophet"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"elea"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 297;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 63;
            return 0;
        }
        return 0;
    }
    if (dbid == 37) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「Ｑｙ＠」"s);
                return 1;
            } else {
                txt(u8"\"Qy@\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「Ｑｙ＠！！」"s);
                return 1;
            } else {
                txt(u8"\"Qy@!!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「Ｑ…Ｑｙ＠…」"s);
                return 1;
            } else {
                txt(u8"\"Q...Qy...@\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「Ｑｙ＠！」"s);
                return 1;
            } else {
                txt(u8"\"Qy@!\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1593();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"＠"s;
                    return 0;
                } else {
                    refstr = u8"@"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 347;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 37;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 53;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"＠"s;
            } else {
                cdatan(0, rc) = u8"@"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 347;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 23) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"何かがクスクスと笑った。"s, u8"あなたは誰かに見つめられている感じがした。"s);
                return 1;
            } else {
                txt(u8"You hear childish laughter, only it's oddly distorted in some eldritch manner"s, u8"You have been looking for someone like this…"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"オルフェ 「お前がこうすることを、予期していなかったとでも？」"s, u8"オルフェ 「さあ、少しは楽しませてくれ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"オルフェ「こんな結末があるとは…」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *クスクス* "s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 1;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"混沌の寵児『オルフェ』"s;
                    return 0;
                } else {
                    refstr = u8"<Orphe> the chaos child"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 331;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 23;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 51;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"混沌の寵児『オルフェ』"s;
            } else {
                cdatan(0, rc) = u8"<Orphe> the chaos child"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 331;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 64;
            return 0;
        }
        return 0;
    }
    if (dbid == 26) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 1;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"『マッドサイエンティスト』"s;
                    return 0;
                } else {
                    refstr = u8"<Mad scientist>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 332;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 26;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 6;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 6;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"『マッドサイエンティスト』"s;
            } else {
                cdatan(0, rc) = u8"<Mad scientist>"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 332;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 27) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 1;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"堕天使『イスカ』"s;
                    return 0;
                } else {
                    refstr = u8"<Isca> the fallen angel"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 333;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 27;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 42;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 51;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"堕天使『イスカ』"s;
            } else {
                cdatan(0, rc) = u8"<Isca> the fallen angel"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 333;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 28) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"あなたはひどい無力感に襲われた。"s, u8"重たい空気が辺りに漂っている。しかし希望はまだ失われてはいない、とあなたは感じた。"s, u8"「エリシェ…なぜ……お前が…」"s);
                return 1;
            } else {
                txt(u8"You have been struck by a terrible feeling of powerlessness. "s, u8"The air around here is heavy and sorrowful. But you somehow feel not all is lost."s, u8"\"Elishe...why did it have to be you...\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"『虚空を這いずる者』はあなたに冷ややかな視線を送った。"s, u8"「くだらない…」と誰かが言った。"s, u8"あなたは死を覚悟した。"s);
                return 1;
            } else {
                txt(u8"You are like a rabbit fascinated by a snake."s, u8"Someone mutters. \"Worthless.\""s, u8"You sense death."s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「やっと…これでお前の元に…」"s);
                return 1;
            } else {
                txt(u8"\"Finally...I come to you...Elishe...\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"『虚空を這いずる者』は深いため息をついた。「…また生き延びてしまった」"s);
                return 1;
            } else {
                txt(u8"\"I live again...in vain.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 1;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"『虚空を這いずる者』"s;
                    return 0;
                } else {
                    refstr = u8"<Whom dwell in the vanity>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 334;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 28;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 78;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 50;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"『虚空を這いずる者』"s;
            } else {
                cdatan(0, rc) = u8"<Whom dwell in the vanity>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 334;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 73;
            return 0;
        }
        return 0;
    }
    if (dbid == 29) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"ロイター「…情けないな！」"s, u8"誰かが呟く声が聞こえる。"s, u8"ロイター「まだあの男に未練があるのか？」"s);
                return 1;
            } else {
                txt(u8"Loyter grumbles incessantly. \"How he sounds so miserable...\""s, u8"You hear someone muttering sulfurously somewhere"s, u8"Loyter mutters to himself. \"Why are you still attached to him...\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「馬鹿な奴だ！」"s, u8"「身の程を思い知らせやる」"s);
                return 1;
            } else {
                txt(u8"\"Oh what a jerk.\""s, u8"\"Die like a maggot you are.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「俺が…奴以外の者に負けるだと？」"s);
                return 1;
            } else {
                txt(u8"\"You are shit.\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「もう終わりか？」"s);
                return 1;
            } else {
                txt(u8"\"Huh? Done already?\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 1;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ザナンの紅の英雄『ロイター』"s;
                    return 0;
                } else {
                    refstr = u8"<Loyter> the crimson of Zanan"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 337;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 29;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 50;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 49;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ザナンの紅の英雄『ロイター』"s;
            } else {
                cdatan(0, rc) = u8"<Loyter> the crimson of Zanan"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 337;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 140) {
        if (dbmode == 12) {
            label_1595();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 5;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 1;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"火炎竜『ヴェスダ』"s;
                    return 0;
                } else {
                    refstr = u8"<Vesda> the fire dragon"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dragon"s;
            dbmode = 2;
            label_2297();
            cpicref = 338;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 140;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 602;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"火炎竜『ヴェスダ』"s;
            } else {
                cdatan(0, rc) = u8"<Vesda> the fire dragon"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dragon"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(50, rc) = 500;
            cdata(7, rc) = 338;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 30) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"小鳥のさえずりのような笑い声がする。"s, u8"「ねえ、君って面白い顔してるね」"s, u8"「旅は楽しい？」"s, u8"「退屈だよ。どこかに連れていって欲しいな」"s);
                return 1;
            } else {
                txt(u8"You hear childish laughter nearby"s, u8"\"You know your face is funny looking. Were you born that way?\""s, u8"\"How are your travels? I'd love to go but I'm stuck here...\""s, u8"\"I'm so bored. Maybe we can play a game of Purits & Yeeks later.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「何するのよ、変態！」"s, u8"「いや！」"s);
                return 1;
            } else {
                txt(u8"\"You molester!\""s, u8"\"Stop it!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「だめぇ…」"s);
                return 1;
            } else {
                txt(u8"\"N-Nooo...\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「なーんだ、弱いじゃない」"s);
                return 1;
            } else {
                txt(u8"\"You are so weak.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"見習い『ミシェス』"s;
                    return 0;
                } else {
                    refstr = u8"<Miches> the apprentice"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 8;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 30;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 50;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"見習い『ミシェス』"s;
            } else {
                cdatan(0, rc) = u8"<Miches> the apprentice"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 8;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 31) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「お酒いかが〜」"s, u8"「やだっ。どこ触ってるんですか」"s, u8" *ざわざわ* "s, u8"盃を交わす音が聞こえる。"s);
                return 1;
            } else {
                txt(u8"\"Come on in! The ale is flowing well tonight!\""s, u8"\"Hey! Keep yer stinking hands of the serving ladies!\""s, u8"The rowdy crowd is making a fair bit of noise tonight"s, u8"You hear the sound of tankerds striking in a toast "s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ちょっと飲みすぎですよ！」"s, u8"「いい加減怒りますからね」"s);
                return 1;
            } else {
                txt(u8"\"You are drinking too much!\""s, u8"\"Stop it before I get angry.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「なんであたしがこんな目に…」"s);
                return 1;
            } else {
                txt(u8"\"Why me?\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「キャー！お客さま、大丈夫ですか？！"s);
                return 1;
            } else {
                txt(u8"\"Ahhh! Are you alright, sir?\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"看板娘『シーナ』"s;
                    return 0;
                } else {
                    refstr = u8"<Shena> the draw"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 109;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 31;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 49;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"看板娘『シーナ』"s;
            } else {
                cdatan(0, rc) = u8"<Shena> the draw"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 109;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 351) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「暁の女神アウラ…その名をどうやら俺は知っているようだ」"s, u8"「俺はあなたが好きだ。あなたは俺のたったひとりの姫だ。可愛いシルヴィア」"s, u8"「子供たちよ戦え、そして希望しろ」"s, u8"「俺は自分が何者で、この仮面は何故かを、着き止めねばならん」"s, u8"「俺は…誰だ…？」"s, u8"「ヤーンがそう望むのなら」"s);
                return 1;
            } else {
                txt(u8"\"Aural...it seems I know that name\""s, u8"\"Lady Silvia, you are my only princess\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ヤーンがそう望むならば仕方あるまい」"s, u8"「ガルルル」"s, u8"「ドールめ！」"s, u8"「追い詰められたトルクに噛まれぬよう、気をつけなければな」"s);
                return 1;
            } else {
                txt(u8"\"If Jarn wishes, then let it be done.\""s, u8"\"Grrrrrr!\""s, u8"\"Doal!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ニャァー…ァ」"s);
                return 1;
            } else {
                txt(u8"\"Me...meow....\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ヤヌスのみ心のままに」"s, u8"「ヤーンは与えたまい、また奪いたまう」"s);
                return 1;
            } else {
                txt(u8"\"Let Janus decide your fate\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"『豹頭の戦士』"s;
                    return 0;
                } else {
                    refstr = u8"<The leopard warrior>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"cat"s;
            dbmode = 2;
            label_2297();
            cpicref = 478;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 351;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 130;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 2;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 647;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"『豹頭の戦士』"s;
            } else {
                cdatan(0, rc) = u8"<The leopard warrior>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"cat"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 478;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            eqweapon1 = 232;
            return 0;
        }
        return 0;
    }
    if (dbid == 352) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「何よ、この、ばか豹！いじわるの、ばかの、何もわかってない唐変木のでくのぼう！」"s, u8"「触らないで！私に触らないでよ、この豹！」"s, u8"誰かが足で床を踏み鳴らす音が聞こえる。"s, u8"「どうせ私は姉さんとはメダカとクジラほど違う、ガリガリの痩せっぽっちで貧相なちびの妹よ。私の味方なんて、一人もいやしないんだわ！」"s, u8"「あんたが＊＊＊してくれないんなら、宮廷中の男をくわえこんで＊＊＊してやる！」"s);
                return 1;
            } else {
                txt(u8"\"Come on, you stupid leopard! You ignorant, mean, stupid, uncouth numbnut!\""s, u8"\"Don't touch! Don't touch me, leopard!\""s, u8"You hear someone stamps her feet."s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ムチをくれるわよ！」"s, u8"「こ、この、無礼者！お前なんか死刑にするわよ！」"s, u8"「よくも切ったな！よくも私を切ったな！」"s, u8"「アアアアア！ヒィィィィ！人殺し！お父様にいってやる！」"s, u8"「いまやっとわかったわ。あなたは私が死ねばいいと本気で思ってるのね！」"s);
                return 1;
            } else {
                txt(u8"\"I will beat you with a whip!\""s, u8"\"You...you insolent peasant! I will bring you to the scaffold!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私なんか、生まれてこなければよかったんだわ！」"s, u8"「非人！悪魔！鬼！人殺し、人殺し、人殺し！」"s);
                return 1;
            } else {
                txt(u8"\"To hell with me!\""s, u8"\"Villain! Devil! Fiend! Murderer, murderer murderer!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私を一人にしないでって約束した、あんなに固く約束したのに」"s);
                return 1;
            } else {
                txt(u8"\"And you promised you wouldn't leave me alone...\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"皇女『シルヴィア』"s;
                    return 0;
                } else {
                    refstr = u8"<Silvia> The princess"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 479;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 352;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 5;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"皇女『シルヴィア』"s;
            } else {
                cdatan(0, rc) = u8"<Silvia> The princess"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 479;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 32) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"*ぶ〜ん* "s, u8"何かが高速で回転している。"s);
                return 1;
            } else {
                txt(u8"*bzzzz*whirrrrrrr*click*"s, u8"Something is buffing the floor at an inhuman speed"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「Target Acquired.」"s, u8"「Resistance is futile!」"s);
                return 1;
            } else {
                txt(u8"\"Target accuired!\""s, u8"\"Resistance is futile!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「Pwned!」"s);
                return 1;
            } else {
                txt(u8"\"Pwned!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「wtf」"s);
                return 1;
            } else {
                txt(u8"\"WTF\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"『ダンジョンクリーナー』"s;
                    return 0;
                } else {
                    refstr = u8"<Dungeon cleaner>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 344;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 32;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"『ダンジョンクリーナー』"s;
            } else {
                cdatan(0, rc) = u8"<Dungeon cleaner>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 344;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 33) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「獣に変えられた王子の童話をしっているかしら？」"s, u8"痺れるほど美しいエレアの横顔にあなたは見とれた。"s, u8"「この世界は今、大きく変わろうとしているの」"s, u8"「ヴェルニースで見かけたあの男…まさか…」"s, u8"神秘的な古代の言葉で誰かが囁いた。"s, u8"「あなたはプライドが高すぎるのよ。ただでさえエレアは異端視されているのに」"s);
                return 1;
            } else {
                txt(u8"\"You know the fairy tale where a wicked witch transforms a dashing prince into an monster?\""s, u8"The stunning beauty of Elea's face halts your step a moment."s, u8"\"The world is thrown into bedlam and chaos. We must remain strong in the face of it.\""s, u8"\"The man we saw in Vernis, he just might be...\""s, u8"Someone mutters in mysterious ancient language."s, u8"\"Eleas is already being regarded as a heretic, your lofty dignity isn't helping this.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「なぜ戦わなければならないの？」"s, u8"「悪いけど、遊んでいる暇は無いの」"s, u8"エレアの少女は凍りつくような美しい瞳をとがらせた。"s);
                return 1;
            } else {
                txt(u8"\"Do we really have to fight?\""s, u8"\"Sorry, I don't have time for this.\""s, u8"The Elean little girl has an angry look in her beautiful cold eyes."s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「うぅ…誰かが…ジャビ王に風の異変を伝えなければ…このままでは…」"s);
                return 1;
            } else {
                txt(u8"\"A-ah...I failed my task...this world....this world will....\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ごめんなさい…」"s);
                return 1;
            } else {
                txt(u8"\"Sorry...\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"風を聴く者『ラーネイレ』"s;
                    return 0;
                } else {
                    refstr = u8"<Larnneire> the listener of wind"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"elea"s;
            dbmode = 2;
            label_2297();
            cpicref = 345;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 33;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 48;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 416;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"風を聴く者『ラーネイレ』"s;
            } else {
                cdatan(0, rc) = u8"<Larnneire> the listener of wind"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"elea"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 345;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 206;
            return 0;
        }
        return 0;
    }
    if (dbid == 34) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「異形の森、か…。我等のもたらす真実を、彼らはどう受け止めるか」"s, u8"「この洞窟は、なかなか住み心地がよさそうじゃないか」"s, u8"「ヴェルニースの炭鉱街までは、子供の足でも一日でたどり着けるだろう」"s, u8"「あの酒場の娘にはまいったな！」"s, u8"誰かが弓矢を手入れする音が聞こえた。"s);
                return 1;
            } else {
                txt(u8"\"Wait'll they hear the news we bring. And they think they have problems. Hah!\""s, u8"\"Hey... This is a fine looking cave. I oughta enquire about it sometime. Everyone needs a hideaway...\""s, u8"\"Pah! It would take a child less than a day to walk to Vernis, we won't be late.\""s, u8"\"Man, that girl at the pub... She could clean my glass if you know what I mean!\""s, u8"You hear someone testing the string of his bow."s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「恩を仇で返すとはこのことだ」"s, u8"「貴様、かの者の手先だったのか？」"s);
                return 1;
            } else {
                txt(u8"\"You repay kindness with ingratitude?\""s, u8"\"Do you really mean it?\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「おいおい、冗談だろう…」"s);
                return 1;
            } else {
                txt(u8"\"Jesus...you are kidding...\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「世の中には、おかしな奴がいるものだ」"s);
                return 1;
            } else {
                txt(u8"\"There's always someone I can never understand.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"異形の森の使者『ロミアス』"s;
                    return 0;
                } else {
                    refstr = u8"<Lomias> the messenger from Vindale"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"elea"s;
            dbmode = 2;
            label_2297();
            cpicref = 346;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 34;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 57;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 3;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 447;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"異形の森の使者『ロミアス』"s;
            } else {
                cdatan(0, rc) = u8"<Lomias> the messenger from Vindale"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"elea"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 346;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 1;
            eqrange = 207;
            eqammo(0) = 25001;
            eqammo(1) = 3;
            return 0;
        }
        return 0;
    }
    if (dbid == 139) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「…うぅ…」"s, u8"「誰か、誰かいないか？」"s, u8"何者かが助けを求める声が聞こえる。"s);
                return 1;
            } else {
                txt(u8"\"H-help me… please...\""s, u8"\"Is someone there? Help me... The King must be forewarned!\""s, u8"You hear cries of help echoing off the walls. They sound quite weak...."s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パルミアの影『スラン』"s;
                    return 0;
                } else {
                    refstr = u8"<Slan> the shadow of Palmia"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 99;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 139;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 56;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"パルミアの影『スラン』"s;
            } else {
                cdatan(0, rc) = u8"<Slan> the shadow of Palmia"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 99;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 146) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「…不覚だった…」"s, u8"「こんな場所が墓場になるとは…」"s, u8"何者かのうめき声が聞こえる。"s);
                return 1;
            } else {
                txt(u8"\"Curse my weakness! This shouldn't have happened.\""s, u8"\"This place will be the end of me I fear.\""s, u8"You hear a low moan of pain somewhere"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"カルーンの孤狼『カラム』"s;
                    return 0;
                } else {
                    refstr = u8"<Karam> the lonely wolf of Karune"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 99;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 146;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 56;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"カルーンの孤狼『カラム』"s;
            } else {
                cdatan(0, rc) = u8"<Karam> the lonely wolf of Karune"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 99;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 142) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「この文はどういう意味かしら…」"s, u8"「興味深いわね」"s, u8"誰かが本を整理する音が聞こえる。"s);
                return 1;
            } else {
                txt(u8"\"I wonder what the runic translation of this is...\""s, u8"\"Hmm...interesting. Interesting indeed...\""s, u8"You hear someone arranging books on shelves."s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「やめてください！」"s, u8"「あなたは、そんな人だったのですね」"s);
                return 1;
            } else {
                txt(u8"\"Stop it, please!\""s, u8"\"Why are you doing this?\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ひどい…」"s);
                return 1;
            } else {
                txt(u8"\"How can you....\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「この役立たず！」"s);
                return 1;
            } else {
                txt(u8"\"You are useless!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"歴史を学ぶ『エリステア』"s;
                    return 0;
                } else {
                    refstr = u8"<Erystia> the scholar of history"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 340;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 142;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 55;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"歴史を学ぶ『エリステア』"s;
            } else {
                cdatan(0, rc) = u8"<Erystia> the scholar of history"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 340;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 141) {
        if (dbmode == 12) {
            label_1596();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"闇の奇形『イスシズル』"s;
                    return 0;
                } else {
                    refstr = u8"<Issizzle> the dark abomination"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"lich"s;
            dbmode = 2;
            label_2297();
            cpicref = 339;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 141;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 28;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(217, rc) = 419;
            cdata(218, rc) = 422;
            cdata(220, rc) = 410;
            cdata(221, rc) = 443;
            cdata(212, rc) = 24;
            if (jp) {
                cdatan(0, rc) = u8"闇の奇形『イスシズル』"s;
            } else {
                cdatan(0, rc) = u8"<Issizzle> the dark abomination"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"lich"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 339;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 358;
            return 0;
        }
        return 0;
    }
    if (dbid == 143) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"古城の主『ワイナン』"s;
                    return 0;
                } else {
                    refstr = u8"<Wynan> the lord of the Ancient Castle"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 341;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 143;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(217, rc) = 419;
            cdata(218, rc) = 422;
            cdata(220, rc) = 410;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"古城の主『ワイナン』"s;
            } else {
                cdatan(0, rc) = u8"<Wynan> the lord of the Ancient Castle"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 341;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 359;
            return 0;
        }
        return 0;
    }
    if (dbid == 144) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"赤き義眼の『クルイツゥア』"s;
                    return 0;
                } else {
                    refstr = u8"<Quruiza> the red-eyed Deceiver"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 343;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 144;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 24;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(217, rc) = 419;
            cdata(218, rc) = 422;
            cdata(220, rc) = 410;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"赤き義眼の『クルイツゥア』"s;
            } else {
                cdatan(0, rc) = u8"<Quruiza> the red-eyed Deceiver"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            sdata(50, rc) = 500;
            cdata(7, rc) = 343;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 356;
            return 0;
        }
        return 0;
    }
    if (dbid == 145) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 5;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"鋼鉄竜『コルゴン』"s;
                    return 0;
                } else {
                    refstr = u8"<Corgon> the steel dragon"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dragon"s;
            dbmode = 2;
            label_2297();
            cpicref = 342;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 145;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 16;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"鋼鉄竜『コルゴン』"s;
            } else {
                cdatan(0, rc) = u8"<Corgon> the steel dragon"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dragon"s;
            dbmode = 3;
            label_2297();
            sdata(50, rc) = 500;
            cdata(7, rc) = 342;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqring1 = 357;
            return 0;
        }
        return 0;
    }
    if (dbid == 306) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"《風のルルウィ》"s;
                    return 0;
                } else {
                    refstr = u8"<Luluwy>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"god"s;
            dbmode = 2;
            label_2297();
            cpicref = 393;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 306;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 350;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 2;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 648;
            cdata(221, rc) = 636;
            cdata(212, rc) = 21;
            if (jp) {
                cdatan(0, rc) = u8"《風のルルウィ》"s;
            } else {
                cdatan(0, rc) = u8"<Luluwy>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"god"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 393;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 331) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"《幸運のエヘカトル》"s;
                    return 0;
                } else {
                    refstr = u8"<Ehekatl>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"god"s;
            dbmode = 2;
            label_2297();
            cpicref = 413;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 331;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 350;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 2;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 657;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"《幸運のエヘカトル》"s;
            } else {
                cdatan(0, rc) = u8"<Ehekatl>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"god"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 413;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 336) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"《エヘカトルの中の神》"s;
                    return 0;
                } else {
                    refstr = u8"<God inside Ehekatl>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"god"s;
            dbmode = 2;
            label_2297();
            cpicref = 413;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 336;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1200;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 612;
            cdata(221, rc) = 459;
            cdata(222, rc) = 620;
            cdata(223, rc) = 601;
            cdata(212, rc) = 41;
            if (jp) {
                cdatan(0, rc) = u8"《エヘカトルの中の神》"s;
            } else {
                cdatan(0, rc) = u8"<God inside Ehekatl>"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"god"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 413;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            eqweapon1 = 739;
            return 0;
        }
        return 0;
    }
    if (dbid == 338) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"《地のオパートス》"s;
                    return 0;
                } else {
                    refstr = u8"<Opatos>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"god"s;
            dbmode = 2;
            label_2297();
            cpicref = 432;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 338;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 350;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 657;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"《地のオパートス》"s;
            } else {
                cdatan(0, rc) = u8"<Opatos>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"god"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 432;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            eqweapon1 = 739;
            return 0;
        }
        return 0;
    }
    if (dbid == 339) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"《収穫のクミロミ》"s;
                    return 0;
                } else {
                    refstr = u8"<Kumiromi>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"god"s;
            dbmode = 2;
            label_2297();
            cpicref = 433;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 339;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 350;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 657;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"《収穫のクミロミ》"s;
            } else {
                cdatan(0, rc) = u8"<Kumiromi>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"god"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"farmer"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 433;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            eqweapon1 = 739;
            return 0;
        }
        return 0;
    }
    if (dbid == 342) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"《機械のマニ》"s;
                    return 0;
                } else {
                    refstr = u8"<Mani>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"god"s;
            dbmode = 2;
            label_2297();
            cpicref = 447;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 342;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 350;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 657;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"《機械のマニ》"s;
            } else {
                cdatan(0, rc) = u8"<Mani>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"god"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 447;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            eqweapon1 = 739;
            return 0;
        }
        return 0;
    }
    if (dbid == 340) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"_test"s;
                    return 0;
                } else {
                    refstr = u8"_test"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"god"s;
            dbmode = 2;
            label_2297();
            cpicref = 435;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 340;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1200;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 612;
            cdata(221, rc) = 459;
            cdata(222, rc) = 620;
            cdata(223, rc) = 601;
            cdata(212, rc) = 41;
            if (jp) {
                cdatan(0, rc) = u8"_test"s;
            } else {
                cdatan(0, rc) = u8"_test"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"god"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 435;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            eqweapon1 = 739;
            return 0;
        }
        return 0;
    }
    if (dbid == 3) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぷちゅ* "s);
                return 1;
            } else {
                txt(u8"*putit*"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1597();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 80;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"プチ"s;
                    return 0;
                } else {
                    refstr = u8"putit"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/slime/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"slime"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 3;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 3;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"プチ"s;
            } else {
                cdatan(0, rc) = u8"putit"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"slime"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            sdata(63, rc) = 500;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 4) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぷちゅ* "s);
                return 1;
            } else {
                txt(u8"*putit*"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1597();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ベスプチ"s;
                    return 0;
                } else {
                    refstr = u8"red putit"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/slime/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"slime"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 4;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 3;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ベスプチ"s;
            } else {
                cdatan(0, rc) = u8"red putit"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"slime"s;
            dbmode = 3;
            label_2297();
            sdata(63, rc) = 500;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 169) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぷちゅ* "s);
                return 1;
            } else {
                txt(u8"*putit*"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"スライム"s;
                    return 0;
                } else {
                    refstr = u8"slime"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/slime/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"slime"s;
            dbmode = 2;
            label_2297();
            cpicref = 257;
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 169;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 3;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"スライム"s;
            } else {
                cdatan(0, rc) = u8"slime"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"slime"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(63, rc) = 500;
            cdata(7, rc) = 257;
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            cdata(78, rc) = 100063;
            return 0;
        }
        return 0;
    }
    if (dbid == 194) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぷちゅ* "s);
                return 1;
            } else {
                txt(u8"*putit*"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 2;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"弱酸性スライム"s;
                    return 0;
                } else {
                    refstr = u8"acid slime"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/slime/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"slime"s;
            dbmode = 2;
            label_2297();
            cpicref = 257;
            cpicref += 2000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 194;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 16;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 3;
            cdata(215, rc) = -1;
            cdata(220, rc) = 455;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"弱酸性スライム"s;
            } else {
                cdatan(0, rc) = u8"acid slime"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"slime"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(230, rc) = 6300100;
            sdata(63, rc) = 500;
            cdata(7, rc) = 257;
            cdata(7, rc) += 2000;
            cspecialeq = 0;
            cdata(78, rc) = 200063;
            return 0;
        }
        return 0;
    }
    if (dbid == 286) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぷちゅ* "s);
                return 1;
            } else {
                txt(u8"*putit*"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"バブル"s;
                    return 0;
                } else {
                    refstr = u8"bubble"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/slime/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"slime"s;
            dbmode = 2;
            label_2297();
            cpicref = 400;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 286;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 9;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"バブル"s;
            } else {
                cdatan(0, rc) = u8"bubble"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"slime"s;
            dbmode = 3;
            label_2297();
            sdata(63, rc) = 500;
            cdata(7, rc) = 400;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 285) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぷちゅ* "s);
                return 1;
            } else {
                txt(u8"*putit*"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ブルーバブル"s;
                    return 0;
                } else {
                    refstr = u8"blue bubble"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/slime/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"slime"s;
            dbmode = 2;
            label_2297();
            cpicref = 400;
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 285;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ブルーバブル"s;
            } else {
                cdatan(0, rc) = u8"blue bubble"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"slime"s;
            dbmode = 3;
            label_2297();
            sdata(63, rc) = 500;
            cdata(7, rc) = 400;
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 287) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"塊の怪物"s;
                    return 0;
                } else {
                    refstr = u8"mass monster"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"drake"s;
            dbmode = 2;
            label_2297();
            cpicref = 401;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 287;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 20;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = 613;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"塊の怪物"s;
            } else {
                cdatan(0, rc) = u8"mass monster"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"drake"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 401;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 327) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 15;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"キューブ"s;
                    return 0;
                } else {
                    refstr = u8"cube"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"machine"s;
            dbmode = 2;
            label_2297();
            cpicref = 282;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 327;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 52;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 20;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = 638;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"キューブ"s;
            } else {
                cdatan(0, rc) = u8"cube"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"machine"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 282;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 5) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"野うさぎ"s;
                    return 0;
                } else {
                    refstr = u8"rabbit"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"rabbit"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 5;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"野うさぎ"s;
            } else {
                cdatan(0, rc) = u8"rabbit"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"rabbit"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 6) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"ズルズル…"s);
                return 1;
            } else {
                txt(u8"*Zzzzle*"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"かたつむり"s;
                    return 0;
                } else {
                    refstr = u8"snail"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"snail"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 6;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"かたつむり"s;
            } else {
                cdatan(0, rc) = u8"snail"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"snail"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 7) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「なにしやがる！」"s, u8"「この野郎」"s, u8"「今更謝っても遅いぞ」"s, u8"「なめやがって」"s, u8"「上等だ！」"s, u8"「かかってこい、おらぁ」"s, u8"「指一本触れて見やがれ」"s);
                return 1;
            } else {
                txt(u8"\"What the hell!\""s, u8"\"You will regret this.\""s, u8"\"Ok, no turning back now.\""s, u8"\"Now you die!\""s, u8"\"Come on chicken.\""s, u8"\"Huh.\""s, u8"\"You touch me, you die.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「貴様…覚えていろ」"s, u8"「うわぁぁ」"s, u8"「人殺し！」"s, u8"「やめろー」"s, u8"「次があるとは思うなよ」"s, u8"「ひぃー」"s, u8"「命だけは助けてくれー」"s);
                return 1;
            } else {
                txt(u8"\"You....you will pay for this someday...\""s, u8"\"Nooo!\""s, u8"\"A murderer!\""s, u8"\"Stop it!\""s, u8"\"F-forgive me...\""s, u8"\"Arrr--rr...\""s, u8"\"D-don't!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「いいざまだ」"s, u8"「出直して来い」"s);
                return 1;
            } else {
                txt(u8"\"Look at you.\""s, u8"\"Bye bye.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"敗残兵"s;
                    return 0;
                } else {
                    refstr = u8"fallen soldier"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 37;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 7;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 3;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"敗残兵"s;
            } else {
                cdatan(0, rc) = u8"fallen soldier"s;
            }
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 37;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 8) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「なにしやがる！」"s, u8"「この野郎」"s, u8"「今更謝っても遅いぞ」"s, u8"「なめやがって」"s, u8"「上等だ！」"s, u8"「かかってこい、おらぁ」"s, u8"「指一本触れて見やがれ」"s);
                return 1;
            } else {
                txt(u8"\"What the hell!\""s, u8"\"You will regret this.\""s, u8"\"Ok, no turning back now.\""s, u8"\"Now you die!\""s, u8"\"Come on chicken.\""s, u8"\"Huh.\""s, u8"\"You touch me, you die.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「貴様…覚えていろ」"s, u8"「うわぁぁ」"s, u8"「人殺し！」"s, u8"「やめろー」"s, u8"「次があるとは思うなよ」"s, u8"「ひぃー」"s, u8"「命だけは助けてくれー」"s);
                return 1;
            } else {
                txt(u8"\"You....you will pay for this someday...\""s, u8"\"Nooo!\""s, u8"\"A murderer!\""s, u8"\"Stop it!\""s, u8"\"F-forgive me...\""s, u8"\"Arrr--rr...\""s, u8"\"D-don't!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「いいざまだ」"s, u8"「出直して来い」"s);
                return 1;
            } else {
                txt(u8"\"Look at you.\""s, u8"\"Bye bye.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"傭兵"s;
                    return 0;
                } else {
                    refstr = u8"mercenary"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 139;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 8;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"傭兵"s;
            } else {
                cdatan(0, rc) = u8"mercenary"s;
            }
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 139;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 178;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 9) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「やめて下さい、旦那」"s, u8"「ひぃ！」"s, u8"「私を殺しても何の得にもならないよ」"s, u8"「馬鹿にするな！」"s, u8"「なぜこんなことを！」"s, u8"「暴力反対！」"s, u8"「ちょ、ちょっと…！」"s);
                return 1;
            } else {
                txt(u8"\"P-please, no sir...\""s, u8"\"Waaaa!\""s, u8"\"You get nothing from killing me...\""s, u8"\"Don't make a fool of me!\""s, u8"\"Why are you doing this?\""s, u8"\"A violent revolution!\""s, u8"\"W-w-what...!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「殺生な！」"s, u8"「ぐわぁ」"s, u8"「なんでこんな目に…」"s, u8"「ひどい」"s, u8"「乞食だからって…」"s, u8"「私の人生っていったい」"s);
                return 1;
            } else {
                txt(u8"\"You are cruel.\""s, u8"\"Ahhhh!\""s, u8"\"I don't deserve this...\""s, u8"\"It's unfair.\""s, u8"\"Beggars always cry...\""s, u8"\"My life is pathetic.\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「よわ！」"s, u8"「何がしたかったんだ？」"s, u8"「ははは！」"s);
                return 1;
            } else {
                txt(u8"\"Weak! Weak!\""s, u8"\"Huh?\""s, u8"\"Ha ha ha!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"乞食"s;
                    return 0;
                } else {
                    refstr = u8"beggar"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 102;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 9;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 2;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"乞食"s;
            } else {
                cdatan(0, rc) = u8"beggar"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 102;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 103;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 269) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「なにするだー」"s, u8"「やめるだー」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おらは…おらはー！」"s, u8"「田舎モンだからって…！」"s, u8"「食べ物を粗末にするな！」"s, u8"「はぐわ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「よわいべ」"s);
                return 1;
            } else {
                txt(u8"\"Weak!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"農夫"s;
                    return 0;
                } else {
                    refstr = u8"farmer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 179;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 269;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"農夫"s;
            } else {
                cdatan(0, rc) = u8"farmer"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 179;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 180;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 320) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「なめくじぃ」"s, u8"「俺様に歯向かうとはいい度胸だ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ああ、俺の肉片が街を汚してしまう！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「フハハハハ！」"s, u8"「この下等生物め」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"清掃員"s;
                    return 0;
                } else {
                    refstr = u8"cleaner"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 410;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 320;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 32;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 5;
            cdata(207, rc) = 50;
            cdata(208, rc) = 3;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = -9996;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"清掃員"s;
            } else {
                cdatan(0, rc) = u8"cleaner"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 410;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 273) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「炭鉱の毒にでもやられたか？」"s, u8"「この街の平和は俺が守る」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「夢だ。これは悪い夢なんだ」"s, u8"「うげあー」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「炭鉱で鍛えた成果だな」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"鉱夫"s;
                    return 0;
                } else {
                    refstr = u8"miner"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 187;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 273;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"鉱夫"s;
            } else {
                cdatan(0, rc) = u8"miner"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 187;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 188;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 326) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「タラララララー♪」"s, u8"「チキチキ♪」"s, u8"「ドナドナドナ〜♪」"s, u8"「ダバダ〜♪」"s);
                return 1;
            } else {
                txt(u8"\"Oh I once heard of a place called Nantucket...\""s, u8"\"Ninety-nine Yeeks in a dank hole. Ninety-nine Yeeks in a Hole!\""s, u8"\"Crawling in my Robes! These wounds will need a Healer!\""s, u8"\"If you go down to the woods today. You're sure of a big surprise. If you go down to the woods today. You'd better go in disguise.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「や、やめてくれたまえ」"s, u8"「そんなに耳障りな演奏だったかい？」"s);
                return 1;
            } else {
                txt(u8"\"S-Stop it..!\""s, u8"\"Was my music that bad?\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「そんな馬鹿な…」"s, u8"「厳しい客だぜ」"s, u8"「下手で悪かったよ」"s);
                return 1;
            } else {
                txt(u8"\"No way!\""s, u8"\"It's a bitter tirade.\""s, u8"\"Did I suck that bad?\" "s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"吟遊詩人"s;
                    return 0;
                } else {
                    refstr = u8"bard"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 148;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 326;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 16;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 5;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"吟遊詩人"s;
            } else {
                cdatan(0, rc) = u8"bard"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"pianist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 148;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 270) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おやめなさい」"s, u8"「暴力はダメです」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「なんという悪」"s, u8"「大罪です…」"s, u8"「ふにゃー」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"修道女"s;
                    return 0;
                } else {
                    refstr = u8"sister"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 181;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 270;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"修道女"s;
            } else {
                cdatan(0, rc) = u8"sister"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 181;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 182;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 349) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「おめでたや。おめでたや」"s, u8"祭りは人で溢れかえり、太鼓や笛の音が絶え間なく聞こえる。"s, u8"「祭りじゃー」"s, u8"あなたはワクワクしてきた。"s, u8"祭りの熱気で雪も溶けてしまいそうだ！"s);
                return 1;
            } else {
                txt(u8"\"Happy holy night!\""s, u8"The town is awash with people arriving at the festival and drums and whistles make a merry rhythm."s, u8"\"It's a festival!\""s, u8"You feel excited."s, u8"Fervor!"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"聖獣"s;
                    return 0;
                } else {
                    refstr = u8"holy beast"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 442;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 349;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"聖獣"s;
            } else {
                cdatan(0, rc) = u8"holy beast"s;
            }
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 442;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 348) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「今なら無料でジュア様の抱き枕が手に入るよ〜」"s, u8"「見てらっしゃい、よってらっしゃい」"s, u8"「そこの君、清楚で綺麗なお姉さんが君を待ってるよ」"s, u8"「この荒れすさんだ世に咲く一輪の花、気高く汚れを知らぬ純白の乙女、その名も癒しのジュア！」"s);
                return 1;
            } else {
                txt(u8"\"St.Jure's body pillow for FREE!\""s, u8"\"Step right up!\""s, u8"\"You there lucky one, a beautiful and sweet woman awaits for you!\""s, u8"\"A flower growing in the desert, fragile yet most noble. A maiden pure in heart with compassion and indomitable will to vanquish evil. Jure of Healing, our only Goddess!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"着ぐるみのバイト"s;
                    return 0;
                } else {
                    refstr = u8"part time worker"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 473;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 348;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 35;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"着ぐるみのバイト"s;
            } else {
                cdatan(0, rc) = u8"part time worker"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"pianist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 473;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 347) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ジュア様、ああ、ジュア様、罪深き私たちをどうかお許しください」"s, u8"「我々はあなた様のご光臨を強く願っております！」"s, u8"「ジュア様に栄光あれ！ジュア様に勝利を！」"s, u8"「さあ、あなたもジュア教に改宗しなさい」"s, u8"「異教徒に死を！ジュアの名を汚すものに裁きの鉄槌を！」"s);
                return 1;
            } else {
                txt(u8"\"Jure, oh holy Jure, forgive our sins and purify us from all unrighteousness.\""s, u8"\"We're so ready to see you, Goddness Jure!\""s, u8"\"Glory to Jure! May the victory always be with Jure!\""s, u8"\"Come, become a new servant of Jure today.\""s, u8"\"Death to the heretic! Crack down those who bring shame to the name of Jure!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ジュアの狂信者"s;
                    return 0;
                } else {
                    refstr = u8"Jure fanatic"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 285;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 347;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(211, rc) = 404;
            if (jp) {
                cdatan(0, rc) = u8"ジュアの狂信者"s;
            } else {
                cdatan(0, rc) = u8"Jure fanatic"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 285;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 284;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 271) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「喧嘩か」"s, u8"「みぐるみはいでやるよ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「きさまー」"s, u8"「このままでは終わらないぞ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おねんねしてな」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ならずもの"s;
                    return 0;
                } else {
                    refstr = u8"rogue"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 183;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 271;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 50;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 635;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ならずもの"s;
            } else {
                cdatan(0, rc) = u8"rogue"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 183;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 184;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 335) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「喧嘩か」"s, u8"「みぐるみはいでやるよ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「きさまー」"s, u8"「このままでは終わらないぞ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おねんねしてな」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"娼婦"s;
                    return 0;
                } else {
                    refstr = u8"prostitue"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 418;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 335;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 5;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"娼婦"s;
            } else {
                cdatan(0, rc) = u8"prostitue"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 418;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 417;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 337) {
        if (dbmode == 100) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「だしてくれ！」"s, u8"「私は無実なのだよ」"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「うわ、なにをする」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「あばよ」"s, u8"「死のう」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"囚人"s;
                    return 0;
                } else {
                    refstr = u8"prisoner"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 419;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 337;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 3;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"囚人"s;
            } else {
                cdatan(0, rc) = u8"prisoner"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 419;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 420;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 272) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「感性の下劣なやつめ！」"s, u8"「低俗なやつだ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「これぞ芸術！」"s, u8"「争いとは無縁の世界に生きていたのに」"s, u8"「アートだー！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「人をあやめてしまった！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"芸術家"s;
                    return 0;
                } else {
                    refstr = u8"artist"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 185;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 272;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 6;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"芸術家"s;
            } else {
                cdatan(0, rc) = u8"artist"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 185;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 186;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 274) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「無礼者！」"s, u8"「ガード、とっととこのアホを捕まえろ」"s, u8"「ガード！きてくれー！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「パパにいいつけてやるんだ」"s, u8"「なんという！なんという…！」"s, u8"「や、やめて…」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ゴミくずめ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"貴族"s;
                    return 0;
                } else {
                    refstr = u8"noble"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 189;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 274;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"貴族"s;
            } else {
                cdatan(0, rc) = u8"noble"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 189;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 190;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 289) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「侵入者か？」"s, u8"「ギルドメンバーを集めろ。敵襲だ！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「無念！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ネズミめ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"魔術士ギルド"s;
                    return 0;
                } else {
                    refstr = u8"mage guild member"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"eulderna"s;
            dbmode = 2;
            label_2297();
            cpicref = 195;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 289;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 26;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(217, rc) = 419;
            cdata(218, rc) = 422;
            cdata(212, rc) = 4;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"魔術士ギルド"s;
            } else {
                cdatan(0, rc) = u8"mage guild member"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"eulderna"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 195;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 194;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 293) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「侵入者か？」"s, u8"「ギルドメンバーを集めろ。敵襲だ！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「無念！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ネズミめ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"盗賊ギルド"s;
                    return 0;
                } else {
                    refstr = u8"thief guild member"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 76;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 293;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 26;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"盗賊ギルド"s;
            } else {
                cdatan(0, rc) = u8"thief guild member"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 76;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 77;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 295) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「侵入者か？」"s, u8"「ギルドメンバーを集めろ。敵襲だ！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「無念！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ネズミめ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"戦士ギルド"s;
                    return 0;
                } else {
                    refstr = u8"fighter guild member"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 78;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 295;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 26;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 90;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"戦士ギルド"s;
            } else {
                cdatan(0, rc) = u8"fighter guild member"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 78;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 79;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 35) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「たすけてー」"s, u8"「や、やめて」"s, u8"「悪の手先だ！」"s, u8"「変質者！」"s, u8"「わ、わわあ」"s, u8"「なんで叩くの？」"s, u8"「大人はこれだから」"s);
                return 1;
            } else {
                txt(u8"\"H-help-!\""s, u8"\"No no!\""s, u8"\"You are evil.\""s, u8"\"Pervert!\""s, u8"\"G-g-go away!\""s, u8"\"Why are you teasing me?\""s, u8"\"Adults.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「おかーさん…」"s, u8"「えーん」"s, u8"「地獄に落ちろ！」"s, u8"「わぁぁん」"s, u8"「うぐぅ！」"s, u8"「もっと…生きたかった…」"s, u8"「先立つ不幸をお許し下さい…」"s);
                return 1;
            } else {
                txt(u8"\"Mom....\""s, u8"\"A---ahh-\""s, u8"\"Go to hell!\""s, u8"\"Waaaan!\""s, u8"\"Urghhh!\""s, u8"\"My life ends here.\""s, u8"\"Sorry, mom, dad....\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「この人よわーい」"s);
                return 1;
            } else {
                txt(u8"\"Weak! You are weak!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"街の子供"s;
                    return 0;
                } else {
                    refstr = u8"town child"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 104;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 35;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"街の子供"s;
            } else {
                cdatan(0, rc) = u8"town child"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 104;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 357;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 36) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「止めてくだされ」"s, u8"「ご無体な」"s, u8"「なんと卑劣な」"s, u8"「たわけ！」"s, u8"「いまどきの若者は…」"s, u8"「老人をいたわれ！」"s, u8"「金などもっていないんじゃ」"s);
                return 1;
            } else {
                txt(u8"\"Stop it, please.\""s, u8"\"Unreasonable!\""s, u8"\"You foul scum.\""s, u8"\"Fool!\""s, u8"\"Youngsters.\""s, u8"\"Respect elders!\""s, u8"\"Leave me alone.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「神様はみておるぞ！」"s, u8"「わしの老後が…」"s, u8"「鬼！」"s, u8"「ぐほぉ」"s, u8"「化けて出ちゃるぞ」"s, u8"「わしゃ死んだのか」"s);
                return 1;
            } else {
                txt(u8"\"God will punish you.\""s, u8"\"My remaining years...\""s, u8"\"Demon!\""s, u8"\"Grrhhh\""s, u8"\"I hate this planet.\""s, u8"\"Am I dead?\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「なんとよわっちぃ奴じゃ」"s, u8"「いまどきの若者はなっとらんのぉ」"s);
                return 1;
            } else {
                txt(u8"\"Holy...why are you so weak?\""s, u8"\"Muwahahaha!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"老人"s;
                    return 0;
                } else {
                    refstr = u8"old person"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 106;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 36;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"老人"s;
            } else {
                cdatan(0, rc) = u8"old person"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 106;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 107;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 174) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「チキショー」"s, u8"「カモンベイベー」"s, u8"「ウラァ」"s, u8"「ヘドぶち吐きなッ！」"s, u8"「さあ、お仕置きの時間だよ」"s, u8"「コラー」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「逃げろぉぉ」"s, u8"「お前プッツンしてるぜ」"s, u8"「くそったれー」"s, u8"「やめてくれー」"s, u8"「うそだー」"s, u8"「俺は負けんのだぁ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「二度と俺を馬鹿にするな」"s, u8"「ギャハハハハ！」"s, u8"「ゴゥトゥヘル」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 0;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パンク"s;
                    return 0;
                } else {
                    refstr = u8"punk"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/sf/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 112;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 174;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"パンク"s;
            } else {
                cdatan(0, rc) = u8"punk"s;
            }
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 112;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 27;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 10) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"羊"s;
                    return 0;
                } else {
                    refstr = u8"wild sheep"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"sheep"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 10;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"羊"s;
            } else {
                cdatan(0, rc) = u8"wild sheep"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"sheep"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 11) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"飛び蛙"s;
                    return 0;
                } else {
                    refstr = u8"flying frog"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"frog"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 11;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 2;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"飛び蛙"s;
            } else {
                cdatan(0, rc) = u8"flying frog"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"frog"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 12) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「チキショー」"s, u8"「カモンベイベー」"s, u8"「ウラァ」"s, u8"「ヘドぶち吐きなッ！」"s, u8"「さあ、お仕置きの時間だよ」"s, u8"「コラー」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「逃げろぉぉ」"s, u8"「お前プッツンしてるぜ」"s, u8"「くそったれー」"s, u8"「やめてくれー」"s, u8"「うそだー」"s, u8"「俺は負けんのだぁ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「二度と俺を馬鹿にするな」"s, u8"「ギャハハハハ！」"s, u8"「ゴゥトゥヘル」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ごろつき"s;
                    return 0;
                } else {
                    refstr = u8"gangster"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 31;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 12;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 3;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ごろつき"s;
            } else {
                cdatan(0, rc) = u8"gangster"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 31;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 36;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 13) {
        if (dbmode == 12) {
            label_1599();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"コボルト"s;
                    return 0;
                } else {
                    refstr = u8"kobold"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"kobolt"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 13;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 3;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 5;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"コボルト"s;
            } else {
                cdatan(0, rc) = u8"kobold"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"kobolt"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 236) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"イーク"s;
                    return 0;
                } else {
                    refstr = u8"yeek"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/yeek/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yeek"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 236;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 2;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 7;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"イーク"s;
            } else {
                cdatan(0, rc) = u8"yeek"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yeek"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 238) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 6;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"イークの戦士"s;
                    return 0;
                } else {
                    refstr = u8"yeek warrior"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/yeek/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yeek"s;
            dbmode = 2;
            label_2297();
            cpicref += 6000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 238;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 6;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 7;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"イークの戦士"s;
            } else {
                cdatan(0, rc) = u8"yeek warrior"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yeek"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 6000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 241) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 2;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"イークの射手"s;
                    return 0;
                } else {
                    refstr = u8"yeek archer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/yeek/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yeek"s;
            dbmode = 2;
            label_2297();
            cpicref += 2000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 241;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 7;
            cdata(215, rc) = -3;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"イークの射手"s;
            } else {
                cdatan(0, rc) = u8"yeek archer"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yeek"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 2000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 240) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 8;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"マスター・イーク"s;
                    return 0;
                } else {
                    refstr = u8"master yeek"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/yeek/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yeek"s;
            dbmode = 2;
            label_2297();
            cpicref += 8000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 240;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 9;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 2;
            cdata(209, rc) = 20;
            creaturepack = 7;
            cdata(215, rc) = -1;
            cdata(216, rc) = 410;
            cdata(217, rc) = 418;
            cdata(218, rc) = -3;
            cdata(220, rc) = 640;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"マスター・イーク"s;
            } else {
                cdatan(0, rc) = u8"master yeek"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yeek"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 8000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 237) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 150;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"カミカゼ・イーク"s;
                    return 0;
                } else {
                    refstr = u8"kamikaze yeek"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/yeek/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yeek"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 237;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 6;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 12;
            cdata(215, rc) = 644;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"カミカゼ・イーク"s;
            } else {
                cdatan(0, rc) = u8"kamikaze yeek"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yeek"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 244) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「武士とは死ぬこととみつけたり！」"s, u8"「玉砕じゃ！」"s, u8"「死なばもろとも」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「バンザーイ！」"s, u8"「スシ！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「討ち取ったり！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"地雷侍"s;
                    return 0;
                } else {
                    refstr = u8"kamikaze samurai"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 385;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 244;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 12;
            cdata(215, rc) = 644;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"地雷侍"s;
            } else {
                cdatan(0, rc) = u8"kamikaze samurai"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 385;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 245) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 20;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"爆弾岩"s;
                    return 0;
                } else {
                    refstr = u8"bomb rock"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"rock"s;
            dbmode = 2;
            label_2297();
            cpicref = 386;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 245;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 10;
            cdata(208, rc) = 2;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = 644;
            cdata(220, rc) = 410;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"爆弾岩"s;
            } else {
                cdatan(0, rc) = u8"bomb rock"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"rock"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 386;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 321) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「フーーーーｰｰ！」"s, u8"「フーーー」"s, u8"「フゥーーーー！」"s);
                return 1;
            } else {
                txt(u8"\"Foooooo!\""s, u8"\"Fooooo\""s, u8"\"Foooooo!\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「フーーーーｰｰ！」"s, u8"「フーーー」"s, u8"「フゥーーーー！」"s);
                return 1;
            } else {
                txt(u8"\"Foooooo!\""s, u8"\"Fooooo\""s, u8"\"Foooooo!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「フーーーーｰｰ！」"s, u8"「フーーー」"s, u8"「フゥーーーー！」"s);
                return 1;
            } else {
                txt(u8"\"Foooooo!\""s, u8"\"Fooooo\""s, u8"\"Foooooo!\""s);
                return 1;
            }
        }
        if (dbmode == 104) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「フーーーーｰｰ！」"s, u8"「フーーー」"s, u8"「フゥーーーー！」"s);
                return 1;
            } else {
                txt(u8"\"Foooooo!\""s, u8"\"Fooooo\""s, u8"\"Foooooo!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「フーーーーｰｰ！」"s, u8"「フーーー」"s, u8"「フゥーーーー！」"s);
                return 1;
            } else {
                txt(u8"\"Foooooo!\""s, u8"\"Fooooo\""s, u8"\"Foooooo!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 15;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ハードゲイ"s;
                    return 0;
                } else {
                    refstr = u8"hard gay"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 411;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 321;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = 644;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ハードゲイ"s;
            } else {
                cdatan(0, rc) = u8"hard gay"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 411;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 242) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ケケケッ」"s, u8"「コロセ！」"s, u8"「愚か者に死を」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「イーク万歳！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「イーク万歳！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"イークの首領『ルードルボ』"s;
                    return 0;
                } else {
                    refstr = u8"yeek"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/yeek/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yeek"s;
            dbmode = 2;
            label_2297();
            cpicref = 381;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 242;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 14;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 7;
            cdata(215, rc) = -1;
            cdata(216, rc) = -3;
            cdata(217, rc) = 640;
            cdata(218, rc) = 418;
            cdata(220, rc) = 410;
            cdata(221, rc) = 645;
            cdata(212, rc) = 24;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(211, rc) = 402;
            if (jp) {
                cdatan(0, rc) = u8"イークの首領『ルードルボ』"s;
            } else {
                cdatan(0, rc) = u8"yeek"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yeek"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 381;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 239) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「何をするんですか！」"s, u8"「野蛮人！」"s, u8"「私だって」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「市民パワー」"s, u8"「ぺっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"温泉マニア"s;
                    return 0;
                } else {
                    refstr = u8"citizen"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 379;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 239;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"温泉マニア"s;
            } else {
                cdatan(0, rc) = u8"citizen"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 379;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 380;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 14) {
        if (dbmode == 12) {
            label_1599();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ムカデ"s;
                    return 0;
                } else {
                    refstr = u8"centipede"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"centipede"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 14;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ムカデ"s;
            } else {
                cdatan(0, rc) = u8"centipede"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"centipede"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 15) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"きのこ"s;
                    return 0;
                } else {
                    refstr = u8"mushroom"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mushroom"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 15;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 0;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(216, rc) = -3;
            cdata(217, rc) = 649;
            cdata(212, rc) = 3;
            if (jp) {
                cdatan(0, rc) = u8"きのこ"s;
            } else {
                cdatan(0, rc) = u8"mushroom"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mushroom"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 283) {
        if (dbmode == 12) {
            label_1599();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"胞子きのこ"s;
                    return 0;
                } else {
                    refstr = u8"spore mushroom"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mushroom"s;
            dbmode = 2;
            label_2297();
            cpicref = 399;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 283;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 0;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(216, rc) = 650;
            cdata(212, rc) = 2;
            if (jp) {
                cdatan(0, rc) = u8"胞子きのこ"s;
            } else {
                cdatan(0, rc) = u8"spore mushroom"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mushroom"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5400150;
            cdata(7, rc) = 399;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 284) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 8;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"混沌きのこ"s;
                    return 0;
                } else {
                    refstr = u8"chaos mushroom"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mushroom"s;
            dbmode = 2;
            label_2297();
            cpicref = 399;
            cpicref += 8000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 284;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 21;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 0;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(216, rc) = 650;
            cdata(212, rc) = 2;
            if (jp) {
                cdatan(0, rc) = u8"混沌きのこ"s;
            } else {
                cdatan(0, rc) = u8"chaos mushroom"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mushroom"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5900250;
            cdata(7, rc) = 399;
            cdata(7, rc) += 8000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 16) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「何をするんですか！」"s, u8"「野蛮人！」"s, u8"「私だって」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「市民パワー」"s, u8"「ぺっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"市民"s;
                    return 0;
                } else {
                    refstr = u8"citizen"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 136;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 16;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"市民"s;
            } else {
                cdatan(0, rc) = u8"citizen"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 136;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 137;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 39) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「何をするんですか！」"s, u8"「野蛮人！」"s, u8"「私だって」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「市民パワー」"s, u8"「ぺっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"市民"s;
                    return 0;
                } else {
                    refstr = u8"citizen"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 134;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 39;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"市民"s;
            } else {
                cdatan(0, rc) = u8"citizen"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 134;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 135;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 171) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「何をするんですか！」"s, u8"「野蛮人！」"s, u8"「私だって」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「市民パワー」"s, u8"「ぺっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"サイバードームの住人"s;
                    return 0;
                } else {
                    refstr = u8"citizen of cyber dome"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 128;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 171;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"サイバードームの住人"s;
            } else {
                cdatan(0, rc) = u8"citizen of cyber dome"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 128;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 129;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 172) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「何をするんですか！」"s, u8"「野蛮人！」"s, u8"「私だって」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「市民パワー」"s, u8"「ぺっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"サイバードームの住人"s;
                    return 0;
                } else {
                    refstr = u8"citizen of cyber dome"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 127;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 172;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"サイバードームの住人"s;
            } else {
                cdatan(0, rc) = u8"citizen of cyber dome"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 127;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 131;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 173) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ガード！ガード！」"s, u8"「襲撃だ！」"s, u8"「強盗め！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「命だけわぁ」"s, u8"「あぁぁ…」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「あの世で後悔するがいい」"s, u8"「虫けらめ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"セールスマン"s;
                    return 0;
                } else {
                    refstr = u8"sales person"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 146;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 173;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"セールスマン"s;
            } else {
                cdatan(0, rc) = u8"sales person"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 146;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 147;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 71) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"水夫"s;
                    return 0;
                } else {
                    refstr = u8"sailor"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 120;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 71;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"水夫"s;
            } else {
                cdatan(0, rc) = u8"sailor"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 120;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 121;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 72) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私は善良な市民だったのに」"s, u8"「くそめ」"s, u8"「まいった」"s, u8"「ぐえ」"s, u8"「嘘でしょ」"s, u8"「なぜなんだー」"s, u8"「何の冗談ですか」"s);
                return 1;
            } else {
                txt(u8"\"I was a good citizen.\""s, u8"\"Go to hell!\""s, u8"\"I give up.\""s, u8"\"Nooooo.....\""s, u8"\"Is it a joke?\""s, u8"\"Why me.\""s, u8"\"W-What have you done!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"船長"s;
                    return 0;
                } else {
                    refstr = u8"captain"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 119;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 72;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"船長"s;
            } else {
                cdatan(0, rc) = u8"captain"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 119;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 79) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"荘厳な感じが漂っている。"s, u8"辺りは厳重に警備されている。"s, u8"宮廷から華麗な音楽の響きが聞こえる。"s);
                return 1;
            } else {
                txt(u8"The quiet majesty of the room makes you feel small and grubby"s, u8"You note just how alert and well armed the guards are"s, u8"Somewhere, a harpsicord is playing a tune befitting nobility"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おやめなさい！」"s, u8"「皆の者、この曲者をどうにかするのです」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「無念じゃ…」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「さあ、この見苦しい死体を片付けるのです」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パルミア王妃『スターシャ』"s;
                    return 0;
                } else {
                    refstr = u8"<Stersha> the queen of Palmia"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 117;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 79;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 54;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"パルミア王妃『スターシャ』"s;
            } else {
                cdatan(0, rc) = u8"<Stersha> the queen of Palmia"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 117;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 80) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おお、乱心者だ！」"s, u8"「近衛兵、何をしている。奴をとらえよ！」"s, u8"「血迷ったか！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「役に立たない兵どもだ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「愚か者め」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パルミア王『ジャビ』"s;
                    return 0;
                } else {
                    refstr = u8"<Xabi> the king of Palmia"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 116;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 80;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 35;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 55;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"パルミア王『ジャビ』"s;
            } else {
                cdatan(0, rc) = u8"<Xabi> the king of Palmia"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 116;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 17) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"オーク"s;
                    return 0;
                } else {
                    refstr = u8"orc"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"orc"s;
            dbmode = 2;
            label_2297();
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 17;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 2;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"オーク"s;
            } else {
                cdatan(0, rc) = u8"orc"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"orc"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 281) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"リザードマン"s;
                    return 0;
                } else {
                    refstr = u8"lizard man"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"lizardman"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 281;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 7;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"リザードマン"s;
            } else {
                cdatan(0, rc) = u8"lizard man"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"lizardman"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 282) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ミノタウロス"s;
                    return 0;
                } else {
                    refstr = u8"minotaur"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/mino/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"minotaur"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 282;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ミノタウロス"s;
            } else {
                cdatan(0, rc) = u8"minotaur"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"minotaur"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 296) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ミノタウロスの術士"s;
                    return 0;
                } else {
                    refstr = u8"minotaur magician"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/mino/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"minotaur"s;
            dbmode = 2;
            label_2297();
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 296;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 420;
            cdata(217, rc) = 419;
            cdata(218, rc) = 415;
            cdata(220, rc) = 645;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"ミノタウロスの術士"s;
            } else {
                cdatan(0, rc) = u8"minotaur magician"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"minotaur"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"priest"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 298) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ミノタウロスの闘士"s;
                    return 0;
                } else {
                    refstr = u8"minotaur boxer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/mino/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"minotaur"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 298;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 23;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ミノタウロスの闘士"s;
            } else {
                cdatan(0, rc) = u8"minotaur boxer"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"minotaur"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 299) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 8;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ミノタウロスの戦士"s;
                    return 0;
                } else {
                    refstr = u8"minotaur king"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/mino/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"minotaur"s;
            dbmode = 2;
            label_2297();
            cpicref += 8000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 299;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ミノタウロスの戦士"s;
            } else {
                cdatan(0, rc) = u8"minotaur king"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"minotaur"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 8000;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 300) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 10;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ミノタウロスの王『ウンガガ』"s;
                    return 0;
                } else {
                    refstr = u8"<Ungaga> the minotaur king"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/mino/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"minotaur"s;
            dbmode = 2;
            label_2297();
            cpicref += 10000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 300;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 31;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 5;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 647;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ミノタウロスの王『ウンガガ』"s;
            } else {
                cdatan(0, rc) = u8"<Ungaga> the minotaur king"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"minotaur"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 10000;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 695;
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 251) {
        if (dbmode == 12) {
            label_1600();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"トロール"s;
                    return 0;
                } else {
                    refstr = u8"troll"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"troll"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 251;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 14;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 2;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"トロール"s;
            } else {
                cdatan(0, rc) = u8"troll"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"troll"s;
            dbmode = 3;
            label_2297();
            sdata(50, rc) = 50;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 18) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"エレアの戦士"s;
                    return 0;
                } else {
                    refstr = u8"warrior of Elea"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"elea"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 18;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 4;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"エレアの戦士"s;
            } else {
                cdatan(0, rc) = u8"warrior of Elea"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"elea"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 34;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 24) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"エレアの魔術士"s;
                    return 0;
                } else {
                    refstr = u8"wizard of Elea"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"elea"s;
            dbmode = 2;
            label_2297();
            cpicref = 47;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 24;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 4;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(220, rc) = 416;
            cdata(221, rc) = 410;
            cdata(212, rc) = 22;
            if (jp) {
                cdatan(0, rc) = u8"エレアの魔術士"s;
            } else {
                cdatan(0, rc) = u8"wizard of Elea"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"elea"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 47;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 42;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 309) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"阿修羅"s;
                    return 0;
                } else {
                    refstr = u8"asura"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"asura"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 309;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 90;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"阿修羅"s;
            } else {
                cdatan(0, rc) = u8"asura"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"asura"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqmultiweapon = 2;
            return 0;
        }
        return 0;
    }
    if (dbid == 310) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 2;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ミトラ"s;
                    return 0;
                } else {
                    refstr = u8"mitra"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"asura"s;
            dbmode = 2;
            label_2297();
            cpicref += 2000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 310;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 26;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 90;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ミトラ"s;
            } else {
                cdatan(0, rc) = u8"mitra"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"asura"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 2000;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqmultiweapon = 266;
            return 0;
        }
        return 0;
    }
    if (dbid == 311) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ヴァルナ"s;
                    return 0;
                } else {
                    refstr = u8"varuna"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"asura"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 311;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 37;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 90;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ヴァルナ"s;
            } else {
                cdatan(0, rc) = u8"varuna"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"asura"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 3000;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqmultiweapon = 224;
            return 0;
        }
        return 0;
    }
    if (dbid == 41) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"魔術士"s;
                    return 0;
                } else {
                    refstr = u8"wizard"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 13;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 41;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 2;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = 414;
            cdata(216, rc) = 415;
            cdata(220, rc) = 443;
            cdata(221, rc) = 447;
            cdata(222, rc) = 451;
            cdata(212, rc) = 32;
            if (jp) {
                cdatan(0, rc) = u8"魔術士"s;
            } else {
                cdatan(0, rc) = u8"wizard"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 13;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 14;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 75) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"戦士"s;
                    return 0;
                } else {
                    refstr = u8"warrior"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 21;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 75;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"戦士"s;
            } else {
                cdatan(0, rc) = u8"warrior"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 21;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 20;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 19) {
        if (dbmode == 12) {
            label_1603();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"マンドレイク"s;
                    return 0;
                } else {
                    refstr = u8"mandrake"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mandrake"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 19;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"マンドレイク"s;
            } else {
                cdatan(0, rc) = u8"mandrake"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mandrake"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 22) {
        if (dbmode == 12) {
            label_1602();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"かぶと虫"s;
                    return 0;
                } else {
                    refstr = u8"beetle"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"beetle"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 22;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"かぶと虫"s;
            } else {
                cdatan(0, rc) = u8"beetle"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"beetle"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 20) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"オークの戦士"s;
                    return 0;
                } else {
                    refstr = u8"orc warrior"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"orc"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 20;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 2;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"オークの戦士"s;
            } else {
                cdatan(0, rc) = u8"orc warrior"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"orc"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 25) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"オークの隊長『ゴダ』"s;
                    return 0;
                } else {
                    refstr = u8"<Goda> the captain of orc"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"orc"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 25;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 2;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"オークの隊長『ゴダ』"s;
            } else {
                cdatan(0, rc) = u8"<Goda> the captain of orc"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"orc"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 3000;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 21) {
        if (dbmode == 12) {
            label_1601();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ゾンビ"s;
                    return 0;
                } else {
                    refstr = u8"zombie"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"zombie"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 21;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 9;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ゾンビ"s;
            } else {
                cdatan(0, rc) = u8"zombie"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"zombie"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 42) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"コウモリ"s;
                    return 0;
                } else {
                    refstr = u8"bat"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"bat"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 42;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"コウモリ"s;
            } else {
                cdatan(0, rc) = u8"bat"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"bat"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 43) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"吸血コウモリ"s;
                    return 0;
                } else {
                    refstr = u8"vampire bat"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"bat"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 43;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 601;
            cdata(212, rc) = 2;
            if (jp) {
                cdatan(0, rc) = u8"吸血コウモリ"s;
            } else {
                cdatan(0, rc) = u8"vampire bat"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"bat"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(56, rc) = 500;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 44) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ドラゴンバット"s;
                    return 0;
                } else {
                    refstr = u8"dragon bat"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/fire/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"bat"s;
            dbmode = 2;
            label_2297();
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 44;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ドラゴンバット"s;
            } else {
                cdatan(0, rc) = u8"dragon bat"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"bat"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 45) {
        if (dbmode == 12) {
            if (rnd(3) == 0) {
                resistmod(cc, 50, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"火炎樹"s;
                    return 0;
                } else {
                    refstr = u8"fire ent"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ent"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 45;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"火炎樹"s;
            } else {
                cdatan(0, rc) = u8"fire ent"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ent"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(230, rc) = 5000200;
            sdata(51, rc) = 50;
            sdata(50, rc) = 500;
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 46) {
        if (dbmode == 12) {
            if (rnd(3) == 0) {
                resistmod(cc, 51, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"氷結樹"s;
                    return 0;
                } else {
                    refstr = u8"ice ent"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ent"s;
            dbmode = 2;
            label_2297();
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 46;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"氷結樹"s;
            } else {
                cdatan(0, rc) = u8"ice ent"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ent"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(230, rc) = 5100200;
            sdata(50, rc) = 50;
            sdata(51, rc) = 500;
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 47) {
        if (dbmode == 12) {
            label_1601();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"リッチ"s;
                    return 0;
                } else {
                    refstr = u8"lich"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"lich"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 47;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(217, rc) = 419;
            cdata(218, rc) = 422;
            cdata(220, rc) = 410;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"リッチ"s;
            } else {
                cdatan(0, rc) = u8"lich"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"lich"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 48) {
        if (dbmode == 12) {
            label_1601();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"マスターリッチ"s;
                    return 0;
                } else {
                    refstr = u8"master lich"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"lich"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 48;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(217, rc) = 419;
            cdata(218, rc) = 422;
            cdata(219, rc) = 450;
            cdata(220, rc) = 410;
            cdata(212, rc) = 15;
            if (jp) {
                cdatan(0, rc) = u8"マスターリッチ"s;
            } else {
                cdatan(0, rc) = u8"master lich"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"lich"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 49) {
        if (dbmode == 12) {
            label_1601();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"デミリッチ"s;
                    return 0;
                } else {
                    refstr = u8"demi lich"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"lich"s;
            dbmode = 2;
            label_2297();
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 49;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 45;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(217, rc) = 419;
            cdata(218, rc) = 422;
            cdata(220, rc) = 410;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"デミリッチ"s;
            } else {
                cdatan(0, rc) = u8"demi lich"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"lich"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 307) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"死刑執行人"s;
                    return 0;
                } else {
                    refstr = u8"executioner"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"lich"s;
            dbmode = 2;
            label_2297();
            cpicref = 404;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 307;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = -1;
            cdata(217, rc) = 421;
            cdata(218, rc) = 410;
            cdata(220, rc) = 646;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"死刑執行人"s;
            } else {
                cdatan(0, rc) = u8"executioner"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"lich"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 404;
            cdata(7, rc) += 0;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 735;
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 308) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"死神の使い"s;
                    return 0;
                } else {
                    refstr = u8"messenger of death"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"lich"s;
            dbmode = 2;
            label_2297();
            cpicref = 404;
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 308;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 35;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 421;
            cdata(217, rc) = 410;
            cdata(220, rc) = 646;
            cdata(212, rc) = 13;
            if (jp) {
                cdatan(0, rc) = u8"死神の使い"s;
            } else {
                cdatan(0, rc) = u8"messenger of death"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"lich"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 404;
            cdata(7, rc) += 4000;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 735;
            return 0;
        }
        return 0;
    }
    if (dbid == 50) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 6;
            }
            if (dbspec == 6) {
                return 80;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"猟犬"s;
                    return 0;
                } else {
                    refstr = u8"hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 6000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 50;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"猟犬"s;
            } else {
                cdatan(0, rc) = u8"hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 6000;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 51) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ファイアハウンド"s;
                    return 0;
                } else {
                    refstr = u8"fire hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 51;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 14;
            cdata(215, rc) = -1;
            cdata(220, rc) = 602;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ファイアハウンド"s;
            } else {
                cdatan(0, rc) = u8"fire hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(51, rc) = 50;
            sdata(50, rc) = 500;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 52) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 12;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"アイスハウンド"s;
                    return 0;
                } else {
                    refstr = u8"ice hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 12000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 52;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 15;
            cdata(215, rc) = -1;
            cdata(220, rc) = 603;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"アイスハウンド"s;
            } else {
                cdatan(0, rc) = u8"ice hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(50, rc) = 50;
            sdata(51, rc) = 500;
            cdata(7, rc) += 12000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 53) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ライトニングハウンド"s;
                    return 0;
                } else {
                    refstr = u8"lightning hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 53;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 16;
            cdata(215, rc) = -1;
            cdata(220, rc) = 604;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ライトニングハウンド"s;
            } else {
                cdatan(0, rc) = u8"lightning hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(52, rc) = 500;
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 54) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ダークハウンド"s;
                    return 0;
                } else {
                    refstr = u8"dark hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 54;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 17;
            cdata(215, rc) = -1;
            cdata(220, rc) = 605;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ダークハウンド"s;
            } else {
                cdatan(0, rc) = u8"dark hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(53, rc) = 500;
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 55) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 10;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"幻惑ハウンド"s;
                    return 0;
                } else {
                    refstr = u8"illusion hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 10000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 55;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 18;
            cdata(215, rc) = -1;
            cdata(220, rc) = 611;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"幻惑ハウンド"s;
            } else {
                cdatan(0, rc) = u8"illusion hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(54, rc) = 500;
            cdata(7, rc) += 10000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 56) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 9;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"神経ハウンド"s;
                    return 0;
                } else {
                    refstr = u8"nerve hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 9000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 56;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 19;
            cdata(215, rc) = -1;
            cdata(220, rc) = 609;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"神経ハウンド"s;
            } else {
                cdatan(0, rc) = u8"nerve hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(58, rc) = 500;
            cdata(7, rc) += 9000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 57) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 2;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ポイズンハウンド"s;
                    return 0;
                } else {
                    refstr = u8"poison hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 2000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 57;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 20;
            cdata(215, rc) = -1;
            cdata(220, rc) = 610;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ポイズンハウンド"s;
            } else {
                cdatan(0, rc) = u8"poison hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(55, rc) = 500;
            cdata(7, rc) += 2000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 58) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 11;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"轟音ハウンド"s;
                    return 0;
                } else {
                    refstr = u8"sound hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 11000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 58;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 21;
            cdata(215, rc) = -1;
            cdata(220, rc) = 607;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"轟音ハウンド"s;
            } else {
                cdatan(0, rc) = u8"sound hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(57, rc) = 500;
            cdata(7, rc) += 11000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 59) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 15;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"地獄ハウンド"s;
                    return 0;
                } else {
                    refstr = u8"nether hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 15000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 59;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 22;
            cdata(215, rc) = -1;
            cdata(220, rc) = 608;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"地獄ハウンド"s;
            } else {
                cdatan(0, rc) = u8"nether hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(56, rc) = 500;
            cdata(7, rc) += 15000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 60) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 18;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"カオスハウンド"s;
                    return 0;
                } else {
                    refstr = u8"chaos hound"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref += 18000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 60;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 12;
            creaturepack = 23;
            cdata(215, rc) = -1;
            cdata(220, rc) = 606;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"カオスハウンド"s;
            } else {
                cdatan(0, rc) = u8"chaos hound"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(59, rc) = 500;
            cdata(7, rc) += 18000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 61) {
        if (dbmode == 12) {
            label_1605();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 6;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"巨大リス"s;
                    return 0;
                } else {
                    refstr = u8"giant squirrel"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"rabbit"s;
            dbmode = 2;
            label_2297();
            cpicref = 204;
            cpicref += 6000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 61;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"巨大リス"s;
            } else {
                cdatan(0, rc) = u8"giant squirrel"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"rabbit"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 204;
            cdata(7, rc) += 6000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 62) {
        if (dbmode == 12) {
            label_1605();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"殺人リス"s;
                    return 0;
                } else {
                    refstr = u8"killer squirrel"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"rabbit"s;
            dbmode = 2;
            label_2297();
            cpicref = 204;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 62;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"殺人リス"s;
            } else {
                cdatan(0, rc) = u8"killer squirrel"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"rabbit"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 204;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 63) {
        if (dbmode == 12) {
            label_1604();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"怨念"s;
                    return 0;
                } else {
                    refstr = u8"grudge"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ghost"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 63;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 7;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 613;
            cdata(220, rc) = 447;
            cdata(221, rc) = 449;
            cdata(212, rc) = 22;
            if (jp) {
                cdatan(0, rc) = u8"怨念"s;
            } else {
                cdatan(0, rc) = u8"grudge"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ghost"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 64) {
        if (dbmode == 12) {
            label_1604();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 2;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"餓鬼"s;
                    return 0;
                } else {
                    refstr = u8"hungry demon"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ghost"s;
            dbmode = 2;
            label_2297();
            cpicref += 2000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 64;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 3;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 614;
            cdata(212, rc) = 2;
            if (jp) {
                cdatan(0, rc) = u8"餓鬼"s;
            } else {
                cdatan(0, rc) = u8"hungry demon"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ghost"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 2000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 312) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"大食いトド"s;
                    return 0;
                } else {
                    refstr = u8"hungry sea lion"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ent"s;
            dbmode = 2;
            label_2297();
            cpicref = 406;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 312;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 651;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"大食いトド"s;
            } else {
                cdatan(0, rc) = u8"hungry sea lion"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ent"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 406;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 313) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"超大食いトド"s;
                    return 0;
                } else {
                    refstr = u8"super hungry sea lion"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ent"s;
            dbmode = 2;
            label_2297();
            cpicref = 406;
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 313;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 19;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 651;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"超大食いトド"s;
            } else {
                cdatan(0, rc) = u8"super hungry sea lion"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ent"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 406;
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 65) {
        if (dbmode == 12) {
            if (rnd(4) == 0) {
                resistmod(cc, 52, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"放電雲"s;
                    return 0;
                } else {
                    refstr = u8"electric cloud"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"spirit"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 65;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 421;
            cdata(217, rc) = 604;
            cdata(212, rc) = 3;
            if (jp) {
                cdatan(0, rc) = u8"放電雲"s;
            } else {
                cdatan(0, rc) = u8"electric cloud"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"spirit"s;
            dbmode = 3;
            label_2297();
            sdata(52, rc) = 500;
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 66) {
        if (dbmode == 12) {
            label_1607();
            if (rnd(5) == 0) {
                resistmod(cc, 59, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 18;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"混沌の塊"s;
                    return 0;
                } else {
                    refstr = u8"chaos cloud"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"spirit"s;
            dbmode = 2;
            label_2297();
            cpicref += 18000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 66;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 433;
            cdata(212, rc) = 2;
            if (jp) {
                cdatan(0, rc) = u8"混沌の塊"s;
            } else {
                cdatan(0, rc) = u8"chaos cloud"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"spirit"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5900300;
            sdata(59, rc) = 500;
            cdata(7, rc) += 18000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 67) {
        if (dbmode == 12) {
            label_1608();
            if (rnd(3) == 0) {
                resistmod(cc, 58, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 80;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"フローティングアイ"s;
                    return 0;
                } else {
                    refstr = u8"floating eye"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"eye"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 67;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 2;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 15;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"フローティングアイ"s;
            } else {
                cdatan(0, rc) = u8"floating eye"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"eye"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5800250;
            sdata(54, rc) = 500;
            if (nerve != 0) {
                sdata(58, rc) = 500;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 315) {
        if (dbmode == 12) {
            label_1608();
            if (rnd(3) == 0) {
                resistmod(cc, 59, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 8;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"カオスアイ"s;
                    return 0;
                } else {
                    refstr = u8"chaos eye"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"eye"s;
            dbmode = 2;
            label_2297();
            cpicref += 8000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 315;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 14;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 15;
            cdata(208, rc) = 1;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = 632;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"カオスアイ"s;
            } else {
                cdatan(0, rc) = u8"chaos eye"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"eye"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(230, rc) = 5900400;
            sdata(54, rc) = 500;
            if (nerve != 0) {
                sdata(58, rc) = 500;
            }
            cdata(7, rc) += 8000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 316) {
        if (dbmode == 12) {
            label_1608();
            if (rnd(3) == 0) {
                resistmod(cc, 54, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"マッドゲイズ"s;
                    return 0;
                } else {
                    refstr = u8"mad gaze"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"eye"s;
            dbmode = 2;
            label_2297();
            cpicref = 407;
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 316;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 7;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 15;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = 636;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"マッドゲイズ"s;
            } else {
                cdatan(0, rc) = u8"mad gaze"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"eye"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5400300;
            sdata(54, rc) = 500;
            if (nerve != 0) {
                sdata(58, rc) = 500;
            }
            cdata(7, rc) = 407;
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 314) {
        if (dbmode == 12) {
            label_1608();
            if (rnd(3) == 0) {
                resistmod(cc, 58, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"デスゲイズ"s;
                    return 0;
                } else {
                    refstr = u8"death gaze"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"eye"s;
            dbmode = 2;
            label_2297();
            cpicref = 407;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 314;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 29;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 15;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = 652;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"デスゲイズ"s;
            } else {
                cdatan(0, rc) = u8"death gaze"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"eye"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(230, rc) = 5800450;
            sdata(54, rc) = 500;
            if (nerve != 0) {
                sdata(58, rc) = 500;
            }
            cdata(7, rc) = 407;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 68) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 4;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ワイバーン"s;
                    return 0;
                } else {
                    refstr = u8"wyvern"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"wyvern"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 68;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 602;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ワイバーン"s;
            } else {
                cdatan(0, rc) = u8"wyvern"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"wyvern"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(50, rc) = 500;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 78) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パペット"s;
                    return 0;
                } else {
                    refstr = u8"puppet"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"eulderna"s;
            dbmode = 2;
            label_2297();
            cpicref = 209;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 78;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 40;
            cdata(208, rc) = 3;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 449;
            cdata(221, rc) = 447;
            cdata(222, rc) = 450;
            cdata(212, rc) = 31;
            if (jp) {
                cdatan(0, rc) = u8"パペット"s;
            } else {
                cdatan(0, rc) = u8"puppet"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"eulderna"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 209;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 81) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ワスプ"s;
                    return 0;
                } else {
                    refstr = u8"wasp"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"wasp"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 81;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 615;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ワスプ"s;
            } else {
                cdatan(0, rc) = u8"wasp"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"wasp"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 82) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"レッドワスプ"s;
                    return 0;
                } else {
                    refstr = u8"red wasp"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"wasp"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 82;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 616;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"レッドワスプ"s;
            } else {
                cdatan(0, rc) = u8"red wasp"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"wasp"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 83) {
        if (dbmode == 12) {
            label_1611();
            skillexp(11, cc, 500);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"サイクロプス"s;
                    return 0;
                } else {
                    refstr = u8"cyclops"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"giant"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 83;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 85;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"サイクロプス"s;
            } else {
                cdatan(0, rc) = u8"cyclops"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"giant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 84) {
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ドスン* "s);
                return 1;
            } else {
                txt(u8"*THUMP*"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1611();
            skillexp(11, cc, 800);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"タイタン"s;
                    return 0;
                } else {
                    refstr = u8"titan"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"giant"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 84;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 40;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 85;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"タイタン"s;
            } else {
                cdatan(0, rc) = u8"titan"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"giant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 85) {
        if (dbmode == 12) {
            label_1612();
            skillexp(16, cc, 500);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"インプ"s;
                    return 0;
                } else {
                    refstr = u8"imp"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"imp"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 85;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 7;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = -1;
            cdata(217, rc) = 414;
            cdata(220, rc) = 410;
            cdata(221, rc) = 450;
            cdata(212, rc) = 23;
            if (jp) {
                cdatan(0, rc) = u8"インプ"s;
            } else {
                cdatan(0, rc) = u8"imp"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"imp"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 86) {
        if (dbmode == 12) {
            label_1612();
            skillexp(16, cc, 500);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"冥界の使い"s;
                    return 0;
                } else {
                    refstr = u8"nether imp"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"imp"s;
            dbmode = 2;
            label_2297();
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 86;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 16;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 415;
            cdata(217, rc) = 414;
            cdata(220, rc) = 410;
            cdata(212, rc) = 13;
            if (jp) {
                cdatan(0, rc) = u8"冥界の使い"s;
            } else {
                cdatan(0, rc) = u8"nether imp"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"imp"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 87) {
        if (dbmode == 12) {
            label_1612();
            skillexp(16, cc, 500);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 18;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"カオスインプ"s;
                    return 0;
                } else {
                    refstr = u8"chaos imp"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"imp"s;
            dbmode = 2;
            label_2297();
            cpicref += 18000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 87;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 27;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 417;
            cdata(217, rc) = 414;
            cdata(220, rc) = 410;
            cdata(212, rc) = 13;
            if (jp) {
                cdatan(0, rc) = u8"カオスインプ"s;
            } else {
                cdatan(0, rc) = u8"chaos imp"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"imp"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 18000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 88) {
        if (dbmode == 12) {
            label_1613();
            skillexp(10, cc, 400);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"亡者の手"s;
                    return 0;
                } else {
                    refstr = u8"hand of the dead"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hand"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 88;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 25;
            cdata(208, rc) = 3;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = 620;
            cdata(221, rc) = 613;
            cdata(212, rc) = 21;
            if (jp) {
                cdatan(0, rc) = u8"亡者の手"s;
            } else {
                cdatan(0, rc) = u8"hand of the dead"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hand"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5300080;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 89) {
        if (dbmode == 12) {
            label_1613();
            skillexp(10, cc, 400);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 18;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"混沌の手"s;
                    return 0;
                } else {
                    refstr = u8"hand of the chaos"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hand"s;
            dbmode = 2;
            label_2297();
            cpicref += 18000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 89;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 11;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 25;
            cdata(208, rc) = 3;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = 620;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"混沌の手"s;
            } else {
                cdatan(0, rc) = u8"hand of the chaos"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hand"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5900180;
            cdata(7, rc) += 18000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 90) {
        if (dbmode == 12) {
            label_1613();
            skillexp(10, cc, 400);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"殺人鬼の手"s;
                    return 0;
                } else {
                    refstr = u8"hand of the murderer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hand"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 90;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 25;
            cdata(208, rc) = 3;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = 620;
            cdata(221, rc) = 449;
            cdata(212, rc) = 21;
            if (jp) {
                cdatan(0, rc) = u8"殺人鬼の手"s;
            } else {
                cdatan(0, rc) = u8"hand of the murderer"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"hand"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 16000;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 91) {
        if (dbmode == 12) {
            label_1614();
            skillexp(15, cc, 250);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"亡霊"s;
                    return 0;
                } else {
                    refstr = u8"ghost"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ghost"s;
            dbmode = 2;
            label_2297();
            cpicref = 214;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 91;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 617;
            cdata(217, rc) = 613;
            cdata(212, rc) = 3;
            if (jp) {
                cdatan(0, rc) = u8"亡霊"s;
            } else {
                cdatan(0, rc) = u8"ghost"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ghost"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5600080;
            cdata(7, rc) = 214;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 92) {
        if (dbmode == 12) {
            label_1614();
            skillexp(15, cc, 400);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ニンフ"s;
                    return 0;
                } else {
                    refstr = u8"nymph"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ghost"s;
            dbmode = 2;
            label_2297();
            cpicref = 214;
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 92;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 13;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = 618;
            cdata(216, rc) = 618;
            cdata(217, rc) = 419;
            cdata(218, rc) = 603;
            cdata(212, rc) = 4;
            if (jp) {
                cdatan(0, rc) = u8"ニンフ"s;
            } else {
                cdatan(0, rc) = u8"nymph"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ghost"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5400200;
            sdata(51, rc) = 500;
            cdata(7, rc) = 214;
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 93) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"人食い花"s;
                    return 0;
                } else {
                    refstr = u8"man eater flower"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mandrake"s;
            dbmode = 2;
            label_2297();
            cpicref = 215;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 93;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 20;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"人食い花"s;
            } else {
                cdatan(0, rc) = u8"man eater flower"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mandrake"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5400200;
            cdata(7, rc) = 215;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 94) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 10;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"カオスフラワー"s;
                    return 0;
                } else {
                    refstr = u8"chaos flower"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mandrake"s;
            dbmode = 2;
            label_2297();
            cpicref = 215;
            cpicref += 10000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 94;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 19;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 20;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"カオスフラワー"s;
            } else {
                cdatan(0, rc) = u8"chaos flower"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mandrake"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5900250;
            cdata(7, rc) = 215;
            cdata(7, rc) += 10000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 95) {
        if (dbmode == 12) {
            label_1599();
            if (rnd(6) == 0) {
                resistmod(cc, 55, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"コブラ"s;
                    return 0;
                } else {
                    refstr = u8"cobra"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"snake"s;
            dbmode = 2;
            label_2297();
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 95;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 615;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"コブラ"s;
            } else {
                cdatan(0, rc) = u8"cobra"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"snake"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 96) {
        if (dbmode == 12) {
            label_1599();
            if (rnd(6) == 0) {
                resistmod(cc, 55, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"キングコブラ"s;
                    return 0;
                } else {
                    refstr = u8"king cobra"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"snake"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 96;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 615;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"キングコブラ"s;
            } else {
                cdatan(0, rc) = u8"king cobra"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"snake"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 97) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 4;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ファイアドレイク"s;
                    return 0;
                } else {
                    refstr = u8"fire drake"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"drake"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 97;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 16;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 602;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ファイアドレイク"s;
            } else {
                cdatan(0, rc) = u8"fire drake"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"drake"s;
            dbmode = 3;
            label_2297();
            sdata(50, rc) = 500;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 98) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 4;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"アイスドレイク"s;
                    return 0;
                } else {
                    refstr = u8"ice drake"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"drake"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 98;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 16;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 603;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"アイスドレイク"s;
            } else {
                cdatan(0, rc) = u8"ice drake"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"drake"s;
            dbmode = 3;
            label_2297();
            sdata(51, rc) = 500;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 99) {
        if (dbmode == 12) {
            label_1601();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"レッサーマミー"s;
                    return 0;
                } else {
                    refstr = u8"lesser mummy"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"zombie"s;
            dbmode = 2;
            label_2297();
            cpicref = 219;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 99;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 7;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 13;
            cdata(215, rc) = -1;
            cdata(220, rc) = 617;
            cdata(221, rc) = 613;
            cdata(212, rc) = 21;
            if (jp) {
                cdatan(0, rc) = u8"レッサーマミー"s;
            } else {
                cdatan(0, rc) = u8"lesser mummy"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"zombie"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 219;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 100) {
        if (dbmode == 12) {
            label_1601();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 10;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"マミー"s;
                    return 0;
                } else {
                    refstr = u8"mummy"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"zombie"s;
            dbmode = 2;
            label_2297();
            cpicref = 219;
            cpicref += 10000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 100;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 14;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 13;
            cdata(215, rc) = -1;
            cdata(220, rc) = 617;
            cdata(221, rc) = 613;
            cdata(212, rc) = 21;
            if (jp) {
                cdatan(0, rc) = u8"マミー"s;
            } else {
                cdatan(0, rc) = u8"mummy"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"zombie"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 219;
            cdata(7, rc) += 10000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 101) {
        if (dbmode == 12) {
            label_1601();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"グレイターマミー"s;
                    return 0;
                } else {
                    refstr = u8"greater mummy"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"zombie"s;
            dbmode = 2;
            label_2297();
            cpicref = 219;
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 101;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 13;
            cdata(215, rc) = -1;
            cdata(220, rc) = 617;
            cdata(221, rc) = 613;
            cdata(212, rc) = 21;
            if (jp) {
                cdatan(0, rc) = u8"グレイターマミー"s;
            } else {
                cdatan(0, rc) = u8"greater mummy"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"zombie"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 219;
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 257) {
        if (dbmode == 12) {
            label_1601();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 8;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ピラミッドの主『ツェン』"s;
                    return 0;
                } else {
                    refstr = u8"<Tuwen> the master of the pyramid"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"zombie"s;
            dbmode = 2;
            label_2297();
            cpicref = 219;
            cpicref += 8000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 257;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 28;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 13;
            cdata(215, rc) = -1;
            cdata(220, rc) = 646;
            cdata(221, rc) = 613;
            cdata(212, rc) = 21;
            if (jp) {
                cdatan(0, rc) = u8"ピラミッドの主『ツェン』"s;
            } else {
                cdatan(0, rc) = u8"<Tuwen> the master of the pyramid"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"zombie"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 219;
            cdata(7, rc) += 8000;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 254) {
        if (dbmode == 12) {
            label_1601();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"古代の棺"s;
                    return 0;
                } else {
                    refstr = u8"ancient coffin"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"zombie"s;
            dbmode = 2;
            label_2297();
            cpicref = 395;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 254;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 19;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 13;
            cdata(215, rc) = -1;
            cdata(216, rc) = -1;
            cdata(217, rc) = 638;
            cdata(218, rc) = 449;
            cdata(220, rc) = 645;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"古代の棺"s;
            } else {
                cdatan(0, rc) = u8"ancient coffin"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"zombie"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 395;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 102) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ゴブリン"s;
                    return 0;
                } else {
                    refstr = u8"goblin"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"goblin"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 102;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 2;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 1;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ゴブリン"s;
            } else {
                cdatan(0, rc) = u8"goblin"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"goblin"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 103) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ゴブリンの戦士"s;
                    return 0;
                } else {
                    refstr = u8"goblin warrior"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"goblin"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 103;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 6;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 1;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ゴブリンの戦士"s;
            } else {
                cdatan(0, rc) = u8"goblin warrior"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"goblin"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 104) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 18;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ゴブリンシャーマン"s;
                    return 0;
                } else {
                    refstr = u8"goblin shaman"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"goblin"s;
            dbmode = 2;
            label_2297();
            cpicref += 18000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 104;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 85;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 1;
            cdata(215, rc) = -1;
            cdata(216, rc) = 420;
            cdata(220, rc) = 425;
            cdata(221, rc) = 447;
            cdata(212, rc) = 22;
            cdata(211, rc) = 400;
            if (jp) {
                cdatan(0, rc) = u8"ゴブリンシャーマン"s;
            } else {
                cdatan(0, rc) = u8"goblin shaman"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"goblin"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 18000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 105) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ゴブリンの魔法使い"s;
                    return 0;
                } else {
                    refstr = u8"goblin wizard"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"goblin"s;
            dbmode = 2;
            label_2297();
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 105;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 1;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(212, rc) = 2;
            if (jp) {
                cdatan(0, rc) = u8"ゴブリンの魔法使い"s;
            } else {
                cdatan(0, rc) = u8"goblin wizard"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"goblin"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 106) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"赤の洗礼者"s;
                    return 0;
                } else {
                    refstr = u8"red baptist"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ghost"s;
            dbmode = 2;
            label_2297();
            cpicref = 221;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 106;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 420;
            cdata(220, rc) = 410;
            cdata(212, rc) = 12;
            if (jp) {
                cdatan(0, rc) = u8"赤の洗礼者"s;
            } else {
                cdatan(0, rc) = u8"red baptist"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ghost"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            sdata(50, rc) = 500;
            cdata(7, rc) = 221;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 107) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"青の洗礼者"s;
                    return 0;
                } else {
                    refstr = u8"blue baptist"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ghost"s;
            dbmode = 2;
            label_2297();
            cpicref = 221;
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 107;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 419;
            cdata(220, rc) = 410;
            cdata(212, rc) = 12;
            if (jp) {
                cdatan(0, rc) = u8"青の洗礼者"s;
            } else {
                cdatan(0, rc) = u8"blue baptist"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ghost"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            sdata(51, rc) = 500;
            cdata(7, rc) = 221;
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 108) {
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「うぉーん…」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ぐるる」"s, u8"「ぐるぁ！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ブラウンベア"s;
                    return 0;
                } else {
                    refstr = u8"brown bear"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"bear"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 108;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 11;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ブラウンベア"s;
            } else {
                cdatan(0, rc) = u8"brown bear"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"bear"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 109) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"グリズリー"s;
                    return 0;
                } else {
                    refstr = u8"grizzly"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"bear"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 109;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 11;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"グリズリー"s;
            } else {
                cdatan(0, rc) = u8"grizzly"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"bear"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 344) {
        if (dbmode == 12) {
            label_1613();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"マンモス"s;
                    return 0;
                } else {
                    refstr = u8"Mammoth"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"bear"s;
            dbmode = 2;
            label_2297();
            cpicref = 439;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 344;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 28;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 11;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"マンモス"s;
            } else {
                cdatan(0, rc) = u8"Mammoth"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"bear"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 439;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 110) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"リビングアーマー"s;
                    return 0;
                } else {
                    refstr = u8"living armor"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"armor"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 110;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"リビングアーマー"s;
            } else {
                cdatan(0, rc) = u8"living armor"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"armor"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 111) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"鉄塊"s;
                    return 0;
                } else {
                    refstr = u8"steel mass"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"armor"s;
            dbmode = 2;
            label_2297();
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 111;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"鉄塊"s;
            } else {
                cdatan(0, rc) = u8"steel mass"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"armor"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 112) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ゴールデンアーマー"s;
                    return 0;
                } else {
                    refstr = u8"golden armor"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"armor"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 112;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 35;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ゴールデンアーマー"s;
            } else {
                cdatan(0, rc) = u8"golden armor"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"armor"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 113) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"デスアーマー"s;
                    return 0;
                } else {
                    refstr = u8"death armor"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"armor"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 113;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 45;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 613;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"デスアーマー"s;
            } else {
                cdatan(0, rc) = u8"death armor"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"armor"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 114) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"メデューサ"s;
                    return 0;
                } else {
                    refstr = u8"medusa"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"medusa"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 114;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"メデューサ"s;
            } else {
                cdatan(0, rc) = u8"medusa"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"medusa"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 115) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"エウリュアレ"s;
                    return 0;
                } else {
                    refstr = u8"euryale"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"medusa"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 115;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 33;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"エウリュアレ"s;
            } else {
                cdatan(0, rc) = u8"euryale"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"medusa"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 116) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ステンノ"s;
                    return 0;
                } else {
                    refstr = u8"stheno"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"medusa"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 116;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 44;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ステンノ"s;
            } else {
                cdatan(0, rc) = u8"stheno"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"medusa"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 117) {
        if (dbmode == 12) {
            label_1598();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"恋のキューピット"s;
                    return 0;
                } else {
                    refstr = u8"cupid of love"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"cupid"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 117;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 443;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"恋のキューピット"s;
            } else {
                cdatan(0, rc) = u8"cupid of love"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"cupid"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 118) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"レッサーファントム"s;
                    return 0;
                } else {
                    refstr = u8"lesser phantom"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"phantom"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 118;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 9;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 447;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"レッサーファントム"s;
            } else {
                cdatan(0, rc) = u8"lesser phantom"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"phantom"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 248) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ティラノサウルス"s;
                    return 0;
                } else {
                    refstr = u8"Tyrannosaurus"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dinosaur"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 248;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ティラノサウルス"s;
            } else {
                cdatan(0, rc) = u8"Tyrannosaurus"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dinosaur"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 119) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ハーピー"s;
                    return 0;
                } else {
                    refstr = u8"harpy"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"harpy"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 119;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 13;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ハーピー"s;
            } else {
                cdatan(0, rc) = u8"harpy"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"harpy"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 120) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 5;
            }
            if (dbspec == 5) {
                return 19;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"グリーンドラゴン"s;
                    return 0;
                } else {
                    refstr = u8"green dragon"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dragon"s;
            dbmode = 2;
            label_2297();
            cpicref += 19000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 120;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 32;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 612;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"グリーンドラゴン"s;
            } else {
                cdatan(0, rc) = u8"green dragon"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dragon"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 19000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 121) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 5;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 20;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"レッドドラゴン"s;
                    return 0;
                } else {
                    refstr = u8"red dragon"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dragon"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 121;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 40;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 602;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"レッドドラゴン"s;
            } else {
                cdatan(0, rc) = u8"red dragon"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dragon"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(50, rc) = 500;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 122) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 5;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 20;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ホワイトドラゴン"s;
                    return 0;
                } else {
                    refstr = u8"white dragon"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dragon"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 122;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 40;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 603;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ホワイトドラゴン"s;
            } else {
                cdatan(0, rc) = u8"white dragon"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dragon"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(51, rc) = 500;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 123) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 5;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 20;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"エレキドラゴン"s;
                    return 0;
                } else {
                    refstr = u8"elec dragon"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dragon"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 123;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 40;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 604;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"エレキドラゴン"s;
            } else {
                cdatan(0, rc) = u8"elec dragon"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dragon"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(52, rc) = 500;
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 124) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 5;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"冥界ドラゴン"s;
                    return 0;
                } else {
                    refstr = u8"nether dragon"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dragon"s;
            dbmode = 2;
            label_2297();
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 124;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 45;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 608;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"冥界ドラゴン"s;
            } else {
                cdatan(0, rc) = u8"nether dragon"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dragon"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(56, rc) = 500;
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 125) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 5;
            }
            if (dbspec == 5) {
                return 18;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"カオスドラゴン"s;
                    return 0;
                } else {
                    refstr = u8"chaos dragon"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dragon"s;
            dbmode = 2;
            label_2297();
            cpicref += 18000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 125;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 50;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 606;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"カオスドラゴン"s;
            } else {
                cdatan(0, rc) = u8"chaos dragon"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dragon"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(59, rc) = 500;
            cdata(7, rc) += 18000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 126) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 4;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ケルベロス"s;
                    return 0;
                } else {
                    refstr = u8"cerberus"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"cerberus"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 126;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 23;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 602;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ケルベロス"s;
            } else {
                cdatan(0, rc) = u8"cerberus"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"cerberus"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(50, rc) = 500;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 255) {
        if (dbmode == 12) {
            label_1599();
            if (rnd(6) == 0) {
                resistmod(cc, 55, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"サソリ"s;
                    return 0;
                } else {
                    refstr = u8"scorpion"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"centipede"s;
            dbmode = 2;
            label_2297();
            cpicref = 396;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 255;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"サソリ"s;
            } else {
                cdatan(0, rc) = u8"scorpion"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"centipede"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5500150;
            sdata(55, rc) = 500;
            cdata(7, rc) = 396;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 256) {
        if (dbmode == 12) {
            label_1599();
            if (rnd(6) == 0) {
                resistmod(cc, 55, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ダイオウサソリ"s;
                    return 0;
                } else {
                    refstr = u8"king scorpion"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"centipede"s;
            dbmode = 2;
            label_2297();
            cpicref = 396;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 256;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 24;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ダイオウサソリ"s;
            } else {
                cdatan(0, rc) = u8"king scorpion"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"centipede"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5500350;
            sdata(55, rc) = 500;
            cdata(7, rc) = 396;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 127) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *カサカサ* "s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"まだら蜘蛛"s;
                    return 0;
                } else {
                    refstr = u8"spider"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"spider"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 127;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 3;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 6;
            cdata(215, rc) = -1;
            cdata(220, rc) = 436;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"まだら蜘蛛"s;
            } else {
                cdatan(0, rc) = u8"spider"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"spider"s;
            dbmode = 3;
            label_2297();
            sdata(55, rc) = 500;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 128) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *カサカサ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1599();
            if (rnd(6) == 0) {
                resistmod(cc, 55, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 19;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ブラックウィドウ"s;
                    return 0;
                } else {
                    refstr = u8"black widow"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"spider"s;
            dbmode = 2;
            label_2297();
            cpicref += 19000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 128;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 11;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 6;
            cdata(215, rc) = -1;
            cdata(220, rc) = 436;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ブラックウィドウ"s;
            } else {
                cdatan(0, rc) = u8"black widow"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"spider"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5500150;
            sdata(55, rc) = 500;
            cdata(7, rc) += 19000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 129) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *カサカサ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1599();
            if (rnd(6) == 0) {
                resistmod(cc, 55, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パラライザー"s;
                    return 0;
                } else {
                    refstr = u8"paralyzer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"spider"s;
            dbmode = 2;
            label_2297();
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 129;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 21;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 6;
            cdata(215, rc) = -1;
            cdata(220, rc) = 436;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"パラライザー"s;
            } else {
                cdatan(0, rc) = u8"paralyzer"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"spider"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5800150;
            sdata(55, rc) = 500;
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 130) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *カサカサ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1599();
            if (rnd(6) == 0) {
                resistmod(cc, 55, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"タランチュラ"s;
                    return 0;
                } else {
                    refstr = u8"tarantula"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"spider"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 130;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 6;
            cdata(215, rc) = -1;
            cdata(220, rc) = 436;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"タランチュラ"s;
            } else {
                cdatan(0, rc) = u8"tarantula"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"spider"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5500200;
            sdata(55, rc) = 500;
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 131) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *カサカサ* "s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"吸血蜘蛛"s;
                    return 0;
                } else {
                    refstr = u8"blood spider"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"spider"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 131;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 28;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 15;
            creaturepack = 6;
            cdata(215, rc) = -1;
            cdata(220, rc) = 436;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"吸血蜘蛛"s;
            } else {
                cdatan(0, rc) = u8"blood spider"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"spider"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5600100;
            sdata(55, rc) = 500;
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 132) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *ガチャ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 6;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ウッドゴーレム"s;
                    return 0;
                } else {
                    refstr = u8"wooden golem"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"golem"s;
            dbmode = 2;
            label_2297();
            cpicref += 6000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 132;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 13;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ウッドゴーレム"s;
            } else {
                cdatan(0, rc) = u8"wooden golem"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"golem"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 6000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 133) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *ガチャ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ストーンゴーレム"s;
                    return 0;
                } else {
                    refstr = u8"stone golem"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"golem"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 133;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 19;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ストーンゴーレム"s;
            } else {
                cdatan(0, rc) = u8"stone golem"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"golem"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 134) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *ガチャ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 15;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"スティールゴーレム"s;
                    return 0;
                } else {
                    refstr = u8"steel golem"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"golem"s;
            dbmode = 2;
            label_2297();
            cpicref += 15000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 134;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"スティールゴーレム"s;
            } else {
                cdatan(0, rc) = u8"steel golem"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"golem"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 15000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 135) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *ガチャ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ゴールドゴーレム"s;
                    return 0;
                } else {
                    refstr = u8"golden golem"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"golem"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 135;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ゴールドゴーレム"s;
            } else {
                cdatan(0, rc) = u8"golden golem"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"golem"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 136) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *ガチャ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 20;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ミスリルゴーレム"s;
                    return 0;
                } else {
                    refstr = u8"mithril golem"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"golem"s;
            dbmode = 2;
            label_2297();
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 136;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 35;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ミスリルゴーレム"s;
            } else {
                cdatan(0, rc) = u8"mithril golem"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"golem"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 137) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *ガチャ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 9;
            }
            if (dbspec == 6) {
                return 15;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"スカイゴーレム"s;
                    return 0;
                } else {
                    refstr = u8"sky golem"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"golem"s;
            dbmode = 2;
            label_2297();
            cpicref += 9000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 137;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 40;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"スカイゴーレム"s;
            } else {
                cdatan(0, rc) = u8"sky golem"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"golem"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 9000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 138) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8" *ガチャ* "s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 2;
            }
            if (dbspec == 6) {
                return 15;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"アダマンタイトゴーレム"s;
                    return 0;
                } else {
                    refstr = u8"adamantium golem"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"golem"s;
            dbmode = 2;
            label_2297();
            cpicref += 2000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 138;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 50;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"アダマンタイトゴーレム"s;
            } else {
                cdatan(0, rc) = u8"adamantium golem"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"golem"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 2000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 147) {
        if (dbmode == 12) {
            label_1605();
            if (rnd(5) == 0) {
                resistmod(cc, 50, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"火蟹"s;
                    return 0;
                } else {
                    refstr = u8"fire crab"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"crab"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 147;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 16;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"火蟹"s;
            } else {
                cdatan(0, rc) = u8"fire crab"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"crab"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5000150;
            sdata(50, rc) = 500;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 148) {
        if (dbmode == 12) {
            if (rnd(5) == 0) {
                resistmod(cc, 50, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"火炎ムカデ"s;
                    return 0;
                } else {
                    refstr = u8"fire centipede"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"centipede"s;
            dbmode = 2;
            label_2297();
            cpicref = 239;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 148;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"火炎ムカデ"s;
            } else {
                cdatan(0, rc) = u8"fire centipede"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"centipede"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5000200;
            sdata(50, rc) = 500;
            cdata(7, rc) = 239;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 149) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"炎の信仰者"s;
                    return 0;
                } else {
                    refstr = u8"cultist of fire"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/fire/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"goblin"s;
            dbmode = 2;
            label_2297();
            cpicref = 240;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 149;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 85;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 642;
            cdata(221, rc) = 450;
            cdata(212, rc) = 21;
            cdata(211, rc) = 400;
            if (jp) {
                cdatan(0, rc) = u8"炎の信仰者"s;
            } else {
                cdatan(0, rc) = u8"cultist of fire"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"goblin"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            sdata(50, rc) = 500;
            cdata(7, rc) = 240;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 150) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"骸骨戦士"s;
                    return 0;
                } else {
                    refstr = u8"skeleton warrior"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"skeleton"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 150;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 9;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"骸骨戦士"s;
            } else {
                cdatan(0, rc) = u8"skeleton warrior"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"skeleton"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 151) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"骸骨狂戦士"s;
                    return 0;
                } else {
                    refstr = u8"skeleton berserker"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"skeleton"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 151;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 9;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"骸骨狂戦士"s;
            } else {
                cdatan(0, rc) = u8"skeleton berserker"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"skeleton"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 3000;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 152) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「改宗せよ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「神はいないのですか！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"闇の宣教師"s;
                    return 0;
                } else {
                    refstr = u8"missionary of darkness"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"eulderna"s;
            dbmode = 2;
            label_2297();
            cpicref = 243;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 152;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 9;
            cdata(215, rc) = -1;
            cdata(216, rc) = 613;
            cdata(212, rc) = 2;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"闇の宣教師"s;
            } else {
                cdatan(0, rc) = u8"missionary of darkness"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"eulderna"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5400150;
            cdata(7, rc) = 243;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 153) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"＜ポーン＞"s;
                    return 0;
                } else {
                    refstr = u8"<Pawn>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/pawn/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"piece"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 153;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"＜ポーン＞"s;
            } else {
                cdatan(0, rc) = u8"<Pawn>"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"piece"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 154) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"＜ルーク＞"s;
                    return 0;
                } else {
                    refstr = u8"<Rook>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/pawn/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"piece"s;
            dbmode = 2;
            label_2297();
            cpicref = 245;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 154;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 16;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"＜ルーク＞"s;
            } else {
                cdatan(0, rc) = u8"<Rook>"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"piece"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 245;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 155) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"＜ビショップ＞"s;
                    return 0;
                } else {
                    refstr = u8"<Bishop>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/pawn/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"piece"s;
            dbmode = 2;
            label_2297();
            cpicref = 246;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 155;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 40;
            cdata(208, rc) = 2;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(220, rc) = 410;
            cdata(221, rc) = 447;
            cdata(212, rc) = 22;
            if (jp) {
                cdatan(0, rc) = u8"＜ビショップ＞"s;
            } else {
                cdatan(0, rc) = u8"<Bishop>"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"piece"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 246;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 156) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"＜ナイト＞"s;
                    return 0;
                } else {
                    refstr = u8"<Knight>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/pawn/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"piece"s;
            dbmode = 2;
            label_2297();
            cpicref = 247;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 156;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"＜ナイト＞"s;
            } else {
                cdatan(0, rc) = u8"<Knight>"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"piece"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 247;
            cdata(7, rc) += 0;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 157) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"＜クィーン＞"s;
                    return 0;
                } else {
                    refstr = u8"<Queen>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"piece"s;
            dbmode = 2;
            label_2297();
            cpicref = 248;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 157;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 415;
            cdata(217, rc) = 414;
            cdata(220, rc) = 410;
            cdata(212, rc) = 13;
            if (jp) {
                cdatan(0, rc) = u8"＜クィーン＞"s;
            } else {
                cdatan(0, rc) = u8"<Queen>"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"piece"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 248;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 158) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"＜キング＞"s;
                    return 0;
                } else {
                    refstr = u8"<King>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"piece"s;
            dbmode = 2;
            label_2297();
            cpicref = 249;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 158;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 40;
            cdata(208, rc) = 3;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 641;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"＜キング＞"s;
            } else {
                cdatan(0, rc) = u8"<King>"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"piece"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 249;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 159) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「お尋ね者だ！」"s, u8"「犯罪者め、おとなしくしろ」"s, u8"「のこのこ現れるとはな！」"s, u8"「罪をつぐなってもらおう」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ぐふっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"傭兵戦士"s;
                    return 0;
                } else {
                    refstr = u8"mercenary warrior"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/shopguard/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 159;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 159;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 8;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"傭兵戦士"s;
            } else {
                cdatan(0, rc) = u8"mercenary warrior"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 159;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 159;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 160) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「お尋ね者だ！」"s, u8"「犯罪者め、おとなしくしろ」"s, u8"「のこのこ現れるとはな！」"s, u8"「罪をつぐなってもらおう」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ぐふっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"傭兵射手"s;
                    return 0;
                } else {
                    refstr = u8"mercenary archer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/shopguard/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 57;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 160;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 8;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"傭兵射手"s;
            } else {
                cdatan(0, rc) = u8"mercenary archer"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 57;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 57;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 161) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「お尋ね者だ！」"s, u8"「犯罪者め、おとなしくしろ」"s, u8"「のこのこ現れるとはな！」"s, u8"「罪をつぐなってもらおう」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ぐふっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"傭兵魔術士"s;
                    return 0;
                } else {
                    refstr = u8"mercenary wizard"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/shopguard/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 100;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 161;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 8;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(212, rc) = 2;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"傭兵魔術士"s;
            } else {
                cdatan(0, rc) = u8"mercenary wizard"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 100;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 100;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 302) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「イヒヒヒヒ」"s, u8"「もうすぐ殺してあげるよ」"s, u8"「かわいそうに、ウヒャ」"s, u8"「おまえさん、ついてないな」"s, u8"「馬鹿な選択をしたね」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「たちけて」"s, u8"「ひぃぃ、こいつ強い」"s, u8"「命だけは！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ついてなかったな」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"盗賊団の頭領"s;
                    return 0;
                } else {
                    refstr = u8"rogue boss"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/rogue/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 150;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 302;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 4;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 647;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"盗賊団の頭領"s;
            } else {
                cdatan(0, rc) = u8"rogue boss"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 150;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 150;
            }
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 303) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「イヒヒヒヒ」"s, u8"「もうすぐ殺してあげるよ」"s, u8"「かわいそうに、ウヒャ」"s, u8"「おまえさん、ついてないな」"s, u8"「馬鹿な選択をしたね」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「たちけて」"s, u8"「ひぃぃ、こいつ強い」"s, u8"「命だけは！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ついてなかったな」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"盗賊団の用心棒"s;
                    return 0;
                } else {
                    refstr = u8"rogue warrior"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/rogue/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 31;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 303;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"盗賊団の用心棒"s;
            } else {
                cdatan(0, rc) = u8"rogue warrior"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 31;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 31;
            }
            cdata(7, rc) += 0;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 304) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「イヒヒヒヒ」"s, u8"「もうすぐ殺してあげるよ」"s, u8"「かわいそうに、ウヒャ」"s, u8"「おまえさん、ついてないな」"s, u8"「馬鹿な選択をしたね」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「たちけて」"s, u8"「ひぃぃ、こいつ強い」"s, u8"「命だけは！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ついてなかったな」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"盗賊団の殺し屋"s;
                    return 0;
                } else {
                    refstr = u8"rogue archer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/rogue/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 158;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 304;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -2;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"盗賊団の殺し屋"s;
            } else {
                cdatan(0, rc) = u8"rogue archer"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 158;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 158;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 305) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「イヒヒヒヒ」"s, u8"「もうすぐ殺してあげるよ」"s, u8"「かわいそうに、ウヒャ」"s, u8"「おまえさん、ついてないな」"s, u8"「馬鹿な選択をしたね」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「たちけて」"s, u8"「ひぃぃ、こいつ強い」"s, u8"「命だけは！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ついてなかったな」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"盗賊団の術士"s;
                    return 0;
                } else {
                    refstr = u8"rogue wizard"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/rogue/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 157;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 305;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 420;
            cdata(221, rc) = 414;
            cdata(222, rc) = 447;
            cdata(212, rc) = 31;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"盗賊団の術士"s;
            } else {
                cdatan(0, rc) = u8"rogue wizard"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"priest"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 157;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 157;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 162) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「撃てぇ！」"s, u8"「弾が尽きるまで撃て！」"s, u8"「虫けらめェ！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「隊長！もうだめです」"s, u8"「メディーック！！」"s, u8"「マンダウン！マンダウン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ターゲット・ダウン！」"s, u8"「グッドジョブ！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"イェルス機械兵"s;
                    return 0;
                } else {
                    refstr = u8"Yerles machine infantry"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 250;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 162;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 40;
            cdata(208, rc) = 3;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"イェルス機械兵"s;
            } else {
                cdatan(0, rc) = u8"Yerles machine infantry"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 250;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 234) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「撃てぇ！」"s, u8"「弾が尽きるまで撃て！」"s, u8"「虫けらめェ！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「隊長！もうだめです」"s, u8"「メディーック！！」"s, u8"「マンダウン！マンダウン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ターゲット・ダウン！」"s, u8"「グッドジョブ！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"イェルスエリート機械兵"s;
                    return 0;
                } else {
                    refstr = u8"Yerles elite machine infantry"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 250;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 234;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 40;
            cdata(208, rc) = 3;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"イェルスエリート機械兵"s;
            } else {
                cdatan(0, rc) = u8"Yerles elite machine infantry"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 250;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 231) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「困ったことになったぞ」"s, u8"「敬礼！」"s, u8"「新王国め…」"s, u8"「フハハハハッ」"s);
                return 1;
            } else {
                txt(u8"\"Help the helpless! Crush the vileness\""s, u8"\"Atten-TION! Salute!\""s, u8"\"For the Kingdom, we shall never fall!\""s, u8"\"Who's house? Mah House!\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「撃てぇ！」"s, u8"「フハー！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「フハー…」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「フハハハハ！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"辺境の勇士『ギルバート大佐』"s;
                    return 0;
                } else {
                    refstr = u8"<Gilbert> the carnel"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 370;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 231;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 45;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 33;
            cdata(202, rc) = 2;
            cdata(207, rc) = 40;
            cdata(208, rc) = 3;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"辺境の勇士『ギルバート大佐』"s;
            } else {
                cdatan(0, rc) = u8"<Gilbert> the carnel"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 370;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 232) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"イェルス自走砲"s;
                    return 0;
                } else {
                    refstr = u8"yerles self-propelled gun"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 373;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 232;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 17;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 0;
            cdata(208, rc) = 4;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -2;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"イェルス自走砲"s;
            } else {
                cdatan(0, rc) = u8"yerles self-propelled gun"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 373;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 233) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「イェルス兵を殺せ！」"s, u8"「突っ込め！」"s, u8"「突撃！突撃！」"s, u8"「ひるむな！」"s, u8"「ウォォォ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ギャァァァァ」"s, u8"「衛生兵！！」"s, u8"「大佐、また一人死にました！」"s, u8"「仲間が戦闘不能です、大佐！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「敵兵の首とったり！」"s, u8"「敵兵撃破！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ジューア歩兵"s;
                    return 0;
                } else {
                    refstr = u8"juere infantry"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 377;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 233;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 7;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 95;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ジューア歩兵"s;
            } else {
                cdatan(0, rc) = u8"juere infantry"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 377;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 235) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「イェルス兵を殺せ！」"s, u8"「突っ込め！」"s, u8"「突撃！突撃！」"s, u8"「ひるむな！」"s, u8"「ウォォォ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ギャァァァァ」"s, u8"「衛生兵！！」"s, u8"「大佐、また一人死にました！」"s, u8"「仲間が戦闘不能です、大佐！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「敵兵の首とったり！」"s, u8"「敵兵撃破！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ジューア剣闘士"s;
                    return 0;
                } else {
                    refstr = u8"juere swordman"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 377;
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 235;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ジューア剣闘士"s;
            } else {
                cdatan(0, rc) = u8"juere swordman"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 377;
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 163) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ロックスロアー"s;
                    return 0;
                } else {
                    refstr = u8"rock thrower"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 251;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 163;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 9;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 25;
            cdata(208, rc) = 3;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ロックスロアー"s;
            } else {
                cdatan(0, rc) = u8"rock thrower"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 251;
            cdata(7, rc) += 0;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqrange = 210;
            return 0;
        }
        return 0;
    }
    if (dbid == 164) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ミャア」"s, u8"「にゃ」"s, u8"「ミャ」"s, u8"「にゅぅ」"s, u8"「ニャア」"s);
                return 1;
            } else {
                txt(u8"\"Meow.\""s, u8"\"Mew.\""s, u8"\"Mew mew.\""s, u8"\"Rowr!\""s, u8"\"Mewl.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ニャー！」"s, u8"「ニャウ！」"s, u8"「ニャン！」"s, u8"「ゥニャ！」"s);
                return 1;
            } else {
                txt(u8"\"Meow!\""s, u8"\"Mew mew!\""s, u8"\"Mew!\""s, u8"\"Meow\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ニャァー…ァ」"s);
                return 1;
            } else {
                txt(u8"\"Me...meow....\""s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりニャン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"* ふしゅぅ * "s, u8"「ニャァー！」"s, u8"「にゃー」」"s, u8"「ゥニャ！」"s, u8"爪を研ぐ音が聞こえる。"s);
                return 1;
            } else {
                txt(u8"*hiss*"s, u8"\"Meoow!\""s, u8"\"Meew!\""s, u8"\"Mew!\""s, u8"\"Meow meow.\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1609();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"猫"s;
                    return 0;
                } else {
                    refstr = u8"cat"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/cat/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"cat"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 164;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"猫"s;
            } else {
                cdatan(0, rc) = u8"cat"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"cat"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 246) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ミャア」"s, u8"「にゃ」"s, u8"「ミャ」"s, u8"「にゅぅ」"s, u8"「ニャア」"s);
                return 1;
            } else {
                txt(u8"\"Meow.\""s, u8"\"Mew.\""s, u8"\"Mew mew.\""s, u8"\"Mew!\""s, u8"\"Mewl.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ニャー！」"s, u8"「ニャウ！」"s, u8"「ニャン！」"s, u8"「ゥニャ！」"s);
                return 1;
            } else {
                txt(u8"\"Meow!\""s, u8"\"Mew mew!\""s, u8"\"Mew!\""s, u8"\"Meow\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ニャァー…ァ」"s);
                return 1;
            } else {
                txt(u8"\"Me...meow....\""s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりニャン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"* ふしゅぅ * "s, u8"「ニャァー！」"s, u8"「にゃー」」"s, u8"「ゥニャ！」"s, u8"爪を研ぐ音が聞こえる。"s);
                return 1;
            } else {
                txt(u8"*hiss*"s, u8"\"Meoow!\""s, u8"\"Meew!\""s, u8"\"Mew!\""s, u8"\"Meow meow.\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1609();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 1;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"シルバーキャット"s;
                    return 0;
                } else {
                    refstr = u8"silver cat"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/cat/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"cat"s;
            dbmode = 2;
            label_2297();
            cpicref = 387;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 246;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 3;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"シルバーキャット"s;
            } else {
                cdatan(0, rc) = u8"silver cat"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"cat"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 387;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 332) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「おうちしってう？」"s, u8"「おうちかえう」"s, u8"「おうちかえう！」"s, u8"「ママどっち？おうちどっち？」"s, u8"「ニャア」"s);
                return 1;
            } else {
                txt(u8"\"Do you know where my home is?\""s, u8"\"I'm going home.\""s, u8"\"I'm going home!\""s, u8"\"Momma? Where are you?\""s, u8"\"Home! Nyaow!\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ころさえう」"s, u8"「しぬぅ！」"s);
                return 1;
            } else {
                txt(u8"\"I'm gonna be killed.\""s, u8"\"I'm gonna die!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「おうち…かえ…ぅ…」"s);
                return 1;
            } else {
                txt(u8"\"I'm...going...hom....e...\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「あぁ〜ビックリしたぁ」"s);
                return 1;
            } else {
                txt(u8"\"That scared me!\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1609();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 6;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"迷子の子猫"s;
                    return 0;
                } else {
                    refstr = u8"stray cat"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/cat/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"cat"s;
            dbmode = 2;
            label_2297();
            cpicref = 387;
            cpicref += 6000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 332;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 9;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"迷子の子猫"s;
            } else {
                cdatan(0, rc) = u8"stray cat"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"cat"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 387;
            cdata(7, rc) += 6000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 229) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ガルルル…」"s);
                return 1;
            } else {
                txt(u8"You hear the near silent footfalls of a cat. A Big cat."s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ガウッ」"s, u8"「ガルル！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ニャァー…ァ」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりニャン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ガオー」"s, u8"「ガル♪」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ライオン"s;
                    return 0;
                } else {
                    refstr = u8"lion"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/cat/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"cat"s;
            dbmode = 2;
            label_2297();
            cpicref = 368;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 229;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 10;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ライオン"s;
            } else {
                cdatan(0, rc) = u8"lion"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"cat"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 368;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 230) {
        if (dbmode == 100) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ガルルル…」"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ガウッ」"s, u8"「ガルル！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ニャァー…ァ」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりニャン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ガオー」"s, u8"「ガル♪」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"猫使い『ケシー』"s;
                    return 0;
                } else {
                    refstr = u8"<Cacy> the cat tamer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/cat/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"catgod"s;
            dbmode = 2;
            label_2297();
            cpicref = 369;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 230;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 639;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"猫使い『ケシー』"s;
            } else {
                cdatan(0, rc) = u8"<Cacy> the cat tamer"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"catgod"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 369;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 228) {
        if (dbmode == 100) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ミャア」"s, u8"「にゃ」"s, u8"「ミャ」"s, u8"「にゅぅ」"s, u8"「ニャア」"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"ニャー"s, u8"ニャウ"s, u8"ニャン"s, u8"ゥニャ"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ニャァー…ァ」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりニャン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"* ふしゅぅ *"s, u8"「ニャァー！」"s, u8"「にゃー」」"s, u8"「ゥニャ！」"s, u8"爪を研ぐ音が聞こえる。"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"カーバンクル"s;
                    return 0;
                } else {
                    refstr = u8"carbuncle"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/cat/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"cat"s;
            dbmode = 2;
            label_2297();
            cpicref = 367;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 228;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 436;
            cdata(221, rc) = 638;
            cdata(212, rc) = 21;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"カーバンクル"s;
            } else {
                cdatan(0, rc) = u8"carbuncle"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"cat"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 367;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 165) {
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「クゥン…」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりワン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「わん！」"s, u8"「ゥワン！」」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"犬"s;
                    return 0;
                } else {
                    refstr = u8"dog"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dog"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 165;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 10;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"犬"s;
            } else {
                cdatan(0, rc) = u8"dog"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dog"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 225) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「くぅ〜」"s, u8"「ぁぅぁぅ」"s, u8"「ぅ〜」"s);
                return 1;
            } else {
                txt(u8"You hear the high pitched yips of a young dog"s, u8"A plaintive howl is heard in the distance"s, u8"Rowf!"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「クゥン…」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりワン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「わん！」"s, u8"「ぁぅぁぅ！」」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"子犬の『ポピー』"s;
                    return 0;
                } else {
                    refstr = u8"<Poppy> the little dog"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dog"s;
            dbmode = 2;
            label_2297();
            cpicref = 364;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 225;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"子犬の『ポピー』"s;
            } else {
                cdatan(0, rc) = u8"<Poppy> the little dog"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"dog"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 364;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 226) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ポピー！」"s, u8"「わん〜わん〜」"s);
                return 1;
            } else {
                txt(u8"\"Poppy!\""s, u8"\"Wuff wuff.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「なにするの！」"s);
                return 1;
            } else {
                txt(u8"\"What! Stop!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「来世は犬になりたい…」"s);
                return 1;
            } else {
                txt(u8"\"Poppy, where are you poppy....\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「めっ！」"s);
                return 1;
            } else {
                txt(u8"\"Idiot!\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"犬好きの少女『リリアン』"s;
                    return 0;
                } else {
                    refstr = u8"<Rilian> the dog lover"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 365;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 226;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 16;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"犬好きの少女『リリアン』"s;
            } else {
                cdatan(0, rc) = u8"<Rilian> the dog lover"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 365;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 227) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ひっ！」"s, u8"「猫はどうしてあんなに恐ろしいのだろう」"s, u8"「細い目が苦手です」"s);
                return 1;
            } else {
                txt(u8"\" hate those bloody cats!\""s, u8"\"Come closer kitty, I gotta present for ya!\""s, u8"\"I've got your number, mate. It's down to two for you. Ahh! There's a oner. Ha ha, yes. Not long for you now!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「うわー猫ー」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ふんっ！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"猫嫌いの『タム』"s;
                    return 0;
                } else {
                    refstr = u8"<Tam> the cat hater"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 366;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 227;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 16;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"猫嫌いの『タム』"s;
            } else {
                cdatan(0, rc) = u8"<Tam> the cat hater"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            cdata(8, rc) = 0;
            cdata(7, rc) = 366;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 166) {
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「きゃぁー」"s, u8"「ダメぇ！」"s);
                return 1;
            } else {
                txt(u8"\"No....no...!\""s, u8"\"I'm sorry I failed you.\""s);
                return 1;
            }
        }
        if (dbmode == 104) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「おかえりなさい♪」"s);
                return 1;
            } else {
                txt(u8"\"Welcome home!\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"少女は服のほこりをはらった。"s, u8"少女はあなたを見てにっこり笑った。"s, u8"あなたは少女に見とれた。"s, u8"「うふふ♪」"s);
                return 1;
            } else {
                txt(u8"The little girl brushes dust off her clothes."s, u8"The little girl smiles at you."s, u8"You look admiringly at the little girl."s, u8"\"Another death. *grin* \""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"少女"s;
                    return 0;
                } else {
                    refstr = u8"little girl"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 4;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 166;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"少女"s;
            } else {
                cdatan(0, rc) = u8"little girl"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 4;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 4;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 167) {
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「チュー！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 6;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ネズミ"s;
                    return 0;
                } else {
                    refstr = u8"rat"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"rat"s;
            dbmode = 2;
            label_2297();
            cpicref += 6000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 167;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ネズミ"s;
            } else {
                cdatan(0, rc) = u8"rat"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"rat"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 6000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 168) {
        if (dbmode == 12) {
            label_1605();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"やどかり"s;
                    return 0;
                } else {
                    refstr = u8"hermit crab"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"shell"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 168;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"やどかり"s;
            } else {
                cdatan(0, rc) = u8"hermit crab"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"shell"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 170) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"愉快な音楽が聞こえる。"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「出直してくる」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おか」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"大道芸人"s;
                    return 0;
                } else {
                    refstr = u8"public performer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 258;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 170;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"大道芸人"s;
            } else {
                cdatan(0, rc) = u8"public performer"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 258;
            cdata(7, rc) += 0;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqrange = 210;
            return 0;
        }
        return 0;
    }
    if (dbid == 175) {
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「負けたニャー」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"フリージアは死体を玩具にして遊び始めた。"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"猫の女王『フリージア』"s;
                    return 0;
                } else {
                    refstr = u8"<Frisia> the cat queen"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"catgod"s;
            dbmode = 2;
            label_2297();
            cpicref = 348;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 175;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 80;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"猫の女王『フリージア』"s;
            } else {
                cdatan(0, rc) = u8"<Frisia> the cat queen"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"catgod"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 348;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 176) {
        if (dbmode == 100) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「"s + _onii(cdata(8, 0)) + u8"ちゃんー」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃん！」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃ〜ん」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃんっ」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃん？」"s, u8"「"s + _onii(cdata(8, 0)) + u8"〜ちゃん」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃん♪」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ダメぇ！」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえり、"s + _onii(cdata(8, 0)) + u8"ちゃん！」"s, u8"「おかえりなさーい、"s + _onii(cdata(8, 0)) + u8"ちゃん♪」"s, u8"「待ってたよ、"s + _onii(cdata(8, 0)) + u8"ちゃん」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"あなたは妹の頭をなでた。"s, u8"あなたは妹の姿に目を細めた。"s, u8"妹は上目づかいにあなたの顔を覗いた。"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"妹"s;
                    return 0;
                } else {
                    refstr = u8"younger sister"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 105;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 176;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"妹"s;
            } else {
                cdatan(0, rc) = u8"younger sister"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 105;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 249) {
        if (dbmode == 100) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「"s + _onii(cdata(8, 0)) + u8"ちゃんー」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃん！」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃ〜ん」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃんっ」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃん？」"s, u8"「"s + _onii(cdata(8, 0)) + u8"〜ちゃん」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃん♪」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ダメぇ！」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえり、"s + _onii(cdata(8, 0)) + u8"ちゃん！」"s, u8"「おかえりなさーい、"s + _onii(cdata(8, 0)) + u8"ちゃん♪」"s, u8"「待ってたよ、"s + _onii(cdata(8, 0)) + u8"ちゃん」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"あなたは妹の頭をなでた。"s, u8"あなたは妹の姿に目を細めた。"s, u8"妹は上目づかいにあなたの顔を覗いた。"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"妹"s;
                    return 0;
                } else {
                    refstr = u8"younger sister"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 105;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 249;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 50;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 100;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 643;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"妹"s;
            } else {
                cdatan(0, rc) = u8"younger sister"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 105;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 210) {
        if (dbmode == 100) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「"s + _onii(cdata(8, 0)) + u8"ちゃんー」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃん！」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃ〜ん」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃんっ」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃん？」"s, u8"「"s + _onii(cdata(8, 0)) + u8"〜ちゃん」"s, u8"「"s + _onii(cdata(8, 0)) + u8"ちゃん♪」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ダメぇにゃ！」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりにゃ、"s + _onii(cdata(8, 0)) + u8"ちゃん！」"s, u8"「おかえりなさいにゃー、"s + _onii(cdata(8, 0)) + u8"ちゃん♪」"s, u8"「待ってたにゃ、"s + _onii(cdata(8, 0)) + u8"ちゃん」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"あなたは妹の頭をなでた。"s, u8"あなたは妹の姿に目を細めた。"s, u8"妹は上目づかいにあなたの顔を覗いた。"s, u8"「うにゃん」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"妹猫"s;
                    return 0;
                } else {
                    refstr = u8"younger cat sister"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"catsister"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 210;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"妹猫"s;
            } else {
                cdatan(0, rc) = u8"younger cat sister"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"catsister"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 211) {
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「きゃぁー」"s, u8"「ダメぇ！」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりなさい♪」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"嬢は服のほこりをはらった。"s, u8"嬢はあなたを見てにっこり笑った。"s, u8"あなたは嬢に見とれた。"s, u8"「うふふ♪」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"嬢"s;
                    return 0;
                } else {
                    refstr = u8"young lady"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 355;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 211;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = -9998;
            cdata(221, rc) = 449;
            cdata(222, rc) = 447;
            cdata(212, rc) = 31;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(211, rc) = 404;
            if (jp) {
                cdatan(0, rc) = u8"嬢"s;
            } else {
                cdatan(0, rc) = u8"young lady"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 355;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 177) {
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ピー…ザザザザ…」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ターゲット破壊確認！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ゼイレン究極破壊兵器『ウティマ』"s;
                    return 0;
                } else {
                    refstr = u8"<Utima> the destroyer of Xeren"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"machinegod"s;
            dbmode = 2;
            label_2297();
            cpicref = 349;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 177;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 80;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 4;
            creaturepack = 0;
            cdata(215, rc) = -2;
            cdata(216, rc) = -1;
            cdata(217, rc) = -1;
            cdata(220, rc) = 647;
            cdata(212, rc) = 13;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ゼイレン究極破壊兵器『ウティマ』"s;
            } else {
                cdatan(0, rc) = u8"<Utima> the destroyer of Xeren"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"machinegod"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 349;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 1;
            eqrange = 514;
            eqammo(0) = 25030;
            eqammo(1) = 3;
            return 0;
        }
        return 0;
    }
    if (dbid == 178) {
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ひぃ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"不浄なる者はあなたの死体をむさぼった。"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1596();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 6;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"不浄なる者『アズラシズル』"s;
                    return 0;
                } else {
                    refstr = u8"<Azzrssil> the impure"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"undeadgod"s;
            dbmode = 2;
            label_2297();
            cpicref = 339;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 178;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 80;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 414;
            cdata(217, rc) = 419;
            cdata(218, rc) = 422;
            cdata(220, rc) = 410;
            cdata(221, rc) = 443;
            cdata(212, rc) = 24;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"不浄なる者『アズラシズル』"s;
            } else {
                cdatan(0, rc) = u8"<Azzrssil> the impure"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"undeadgod"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 339;
            cdata(7, rc) += 3000;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 179) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ペットアリーナの主催者『ニノ』"s;
                    return 0;
                } else {
                    refstr = u8"master of pet arena"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 350;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 179;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 35;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ペットアリーナの主催者『ニノ』"s;
            } else {
                cdatan(0, rc) = u8"master of pet arena"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 350;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 208) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *トンカン*  "s, u8" *カーン*  "s, u8" *キン*  "s, u8"鉄を打つ音が響いている。"s, u8"「つまらんのう」"s, u8"「ミラルの奴め、何の役にも立たないものばかり作りおって」"s, u8"「宝の持ち腐れじゃ」"s);
                return 1;
            } else {
                txt(u8"You hear the rhymthic clang of a hammer on steel"s, u8"You hear the whoosh of a bellows being pumped"s, u8"You hear the perfect ring of steel-on-steel. It makes your blood race"s, u8"\"And just what shall you be, oh noble ingot? A dagger perhaps, an axe blade by chance? Let us find out...\""s, u8"\"Ah! A good shipment of steel today. Oh, what to make, decisions, decisions...\""s, u8"\"With this, I have created half a legend. Your wielder will make the other half with you.\""s, u8"\"Let's just sit you on the shelf oh noble blade, for soon your brothers shall join you.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"伝説の職人『ガロク』"s;
                    return 0;
                } else {
                    refstr = u8"<Garokk> the legendary smith"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dwarf"s;
            dbmode = 2;
            label_2297();
            cpicref = 352;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 208;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 45;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"伝説の職人『ガロク』"s;
            } else {
                cdatan(0, rc) = u8"<Garokk> the legendary smith"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"dwarf"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 352;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 209) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「今日のご飯はなんにしよう」"s, u8"「ガロクの作品には遊びがないね」"s, u8"「暇だぬ」"s, u8"「おお、客人かな？」"s, u8"「猫 イズ フリ〜ダ〜ム♪ 猫 イズ フリ〜ダ〜ム♪」"s);
                return 1;
            } else {
                txt(u8"\"Oh, what to make for dinner.\""s, u8"\"All work and no play makes Miral a dull boy.\""s, u8"\"There's never enough time in the world to get everything done.\""s, u8"\"Guests? Goodness it has been a while indeed.\""s, u8"\"I've got a cat I wanna frame! And now nothing shall ever be the same.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"伝説の職人『ミラル』"s;
                    return 0;
                } else {
                    refstr = u8"<Miral> the legendary smith"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dwarf"s;
            dbmode = 2;
            label_2297();
            cpicref = 353;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 209;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 45;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"伝説の職人『ミラル』"s;
            } else {
                cdatan(0, rc) = u8"<Miral> the legendary smith"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"dwarf"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 353;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 180) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"辺りは神聖な雰囲気に包まれている。"s, u8"あなたは何者かの穏やかな視線を感じた。"s, u8"とても静かで、平和な場所だ。"s, u8"心の中で、奇妙な祈りの声がこだました。"s);
                return 1;
            } else {
                txt(u8"All around you is the sensation of being in a sacred place"s, u8"You have seldom felt such an air of peace"s, u8"All around is very quiet, yet you aren't the least bit lonely"s, u8"In your mind you hear the strange echoes of a voice in prayer"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ニャァー…ァ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"* ふしゅぅ *"s, u8"「ニャァー！」"s, u8"「にゃー」」"s, u8"「ゥニャ！」"s, u8"爪を研ぐ音が聞こえる。"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ツインテール"s;
                    return 0;
                } else {
                    refstr = u8"twintail"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"cat"s;
            dbmode = 2;
            label_2297();
            cpicref = 259;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 180;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ツインテール"s;
            } else {
                cdatan(0, rc) = u8"twintail"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"cat"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 259;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 181) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"辺りは神聖な雰囲気に包まれている。"s, u8"あなたは何者かの穏やかな視線を感じた。"s, u8"とても静かで、平和な場所だ。"s, u8"心の中で、奇妙な祈りの声がこだました。"s);
                return 1;
            } else {
                txt(u8"All around you is the sensation of being in a sacred place"s, u8"You have seldom felt such an air of peace"s, u8"All around is very quiet, yet you aren't the least bit lonely"s, u8"In your mind you hear the strange echoes of a voice in prayer"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"銀狼"s;
                    return 0;
                } else {
                    refstr = u8"silver wolf"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"hound"s;
            dbmode = 2;
            label_2297();
            cpicref = 260;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 181;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"銀狼"s;
            } else {
                cdatan(0, rc) = u8"silver wolf"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"hound"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 260;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 182) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"ナースの匂いがする…"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「キャァー」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりなさい。怪我はしていませんか♪」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"白衣のナース"s;
                    return 0;
                } else {
                    refstr = u8"nurse"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 208;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 182;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = 405;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"白衣のナース"s;
            } else {
                cdatan(0, rc) = u8"nurse"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 208;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 183) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「金か？金が欲しいのか？」"s, u8"「汚い手で触らないでくれるか」"s, u8"「周りの衆、見てないで助けぬか」"s, u8"「金の亡者め！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「貴様には一銭もやらん…」"s, u8"「なんとまあ」"s, u8"「下衆め」"s, u8"「まだ死にたくないー…ぐぉ」"s, u8"「遺言書いといてよかったわ」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「帰ってきおったか」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「フン」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 20;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"大富豪"s;
                    return 0;
                } else {
                    refstr = u8"rich person"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 71;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 183;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"大富豪"s;
            } else {
                cdatan(0, rc) = u8"rich person"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 71;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 70;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 184) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「無礼者！」"s, u8"「お父上に言いつけてやる」"s, u8"「下郎め」"s, u8"「汚い！触るな！」"s, u8"「誰か！」"s, u8"「下がれ！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「うわぁ」"s, u8"「こ、殺さないで」"s, u8"「助、助けて…うぐ」"s, u8"「お父上ぇー」"s, u8"「む、無念」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「チェッ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「この人よわーい」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"貴族の子供"s;
                    return 0;
                } else {
                    refstr = u8"noble child"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 73;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 184;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 9;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"貴族の子供"s;
            } else {
                cdatan(0, rc) = u8"noble child"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 73;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 72;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 185) {
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「観光客だからって馬鹿にするな」"s, u8"「なんて治安の悪い国だ」"s, u8"「野蛮な土地だな」"s, u8"「金などもってないぞ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「こんな国二度とくるか」"s, u8"「無差別テロだー」"s, u8"「いやーん」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえり。いやぁ、いい家に住ませてもらっています」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「弱い弱い」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"観光客"s;
                    return 0;
                } else {
                    refstr = u8"tourist"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 122;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 185;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"観光客"s;
            } else {
                cdatan(0, rc) = u8"tourist"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 122;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 129;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 350) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「屋台でおいしいもの売ってるかな？」"s, u8"「今日ははじけるぜ」"s, u8"「なんとも騒々しいな」"s, u8"「これが噂の聖夜祭か…」"s, u8"「見て見て、子供が雪だるまをつくっているよ」"s, u8"「なんだあの巨人は！」"s, u8"「すげえ！」"s, u8"「もう今年も終わりなんだな」"s, u8"「見ろ人がゴミのようだ」"s);
                return 1;
            } else {
                txt(u8"\"Let's check the food stall.\""s, u8"\"No! I want to play a little longer!\""s, u8"\"What a noisy street.\""s, u8"\"So it's the holy night festival people were talking about...\""s, u8"\"Hey look, those children are making cute snowmen.\""s, u8"\"Where does the giant come from?\""s, u8"\"Holy cow!\""s, u8"\"It's that time of year again.\""s, u8"\"Aha, some human garbage.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「観光客だからって馬鹿にするな」"s, u8"「なんて治安の悪い国だ」"s, u8"「野蛮な土地だな」"s, u8"「金などもってないぞ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「こんな国二度とくるか」"s, u8"「無差別テロだー」"s, u8"「いやーん」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえり。いやぁ、いい家に住ませてもらっています」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「弱い弱い」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 1;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"祭りの観光客"s;
                    return 0;
                } else {
                    refstr = u8"festival tourist"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 477;
            cpicref += 1000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 350;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"祭りの観光客"s;
            } else {
                cdatan(0, rc) = u8"festival tourist"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 477;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 476;
            }
            cdata(7, rc) += 1000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 186) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ブレイド"s;
                    return 0;
                } else {
                    refstr = u8"blade"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"machine"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 186;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ブレイド"s;
            } else {
                cdatan(0, rc) = u8"blade"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"machine"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 6100100;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 187) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ブレイドβ"s;
                    return 0;
                } else {
                    refstr = u8"blade alpha"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"machine"s;
            dbmode = 2;
            label_2297();
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 187;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 13;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ブレイドβ"s;
            } else {
                cdatan(0, rc) = u8"blade alpha"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"machine"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(230, rc) = 6100120;
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 188) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ブレイドΩ"s;
                    return 0;
                } else {
                    refstr = u8"blade omega"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"machine"s;
            dbmode = 2;
            label_2297();
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 188;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ブレイドΩ"s;
            } else {
                cdatan(0, rc) = u8"blade omega"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"machine"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(230, rc) = 6100150;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 345) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"*ブルン ブルン* "s, u8"*バババババ* "s);
                return 1;
            } else {
                txt(u8"*Varoom!*"s, u8"*Va-Va-Va*"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「てつぅぅぅうううおおおおおおお！！」"s, u8"「よう、どうした。揉め事か？」"s, u8"「やっとモーターのコイルが温まって来た所だぜ」"s);
                return 1;
            } else {
                txt(u8"\"Teeee tsuuu oooooo!!.\""s, u8"\"Yo, what's up? A fight?\""s, u8"\"Relax, it's gonna take some time to warm my engine up.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"*ぷすん* "s);
                return 1;
            } else {
                txt(u8"*Pan*"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ピーキーすぎてお前には無理だよ」"s, u8"「テツオ、まってろよ。俺が苦痛を終わらせてやる」"s);
                return 1;
            } else {
                txt(u8"\"My body is too peaky for ya.\""s, u8"\"Just hold on Tetsuo. I'm gonna find you to end your pain.\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"『カネダのバイク』"s;
                    return 0;
                } else {
                    refstr = u8"<Kaneda Bike>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"bike"s;
            dbmode = 2;
            label_2297();
            cpicref = 470;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 345;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 22;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 0;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"『カネダのバイク』"s;
            } else {
                cdatan(0, rc) = u8"<Kaneda Bike>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"bike"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 470;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 346) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"* ボ ボ ボ * "s, u8"* プスン * "s);
                return 1;
            } else {
                txt(u8"*Bo-Bo-Bo*"s, u8"*Pusss*"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「われぇ、いい度胸じゃぁ！」"s, u8"「おんどりゃぁ！」"s);
                return 1;
            } else {
                txt(u8"\"Craaaap! You are so dead!.\""s, u8"\"You dorf, get away get away!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"*ぷすん* "s);
                return 1;
            } else {
                txt(u8"*Pan*"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「てつぅぅぅうううおおおおおおお！！」"s, u8"「よう、どうした。揉め事か？」"s, u8"「やっとモーターのコイルが温まって来た所だぜ」"s);
                return 1;
            } else {
                txt(u8"\"Teeee tsuuu oooooo!!.\""s, u8"\"Yo, what's up? A fight?\""s, u8"\"Relax, it's gonna take some time to warm my engine up.\""s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 5;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"カブ"s;
                    return 0;
                } else {
                    refstr = u8"cub"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"bike"s;
            dbmode = 2;
            label_2297();
            cpicref = 471;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 346;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 0;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"カブ"s;
            } else {
                cdatan(0, rc) = u8"cub"s;
            }
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"bike"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 471;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 341) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 25;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"地雷犬"s;
                    return 0;
                } else {
                    refstr = u8"mine dog"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"machine"s;
            dbmode = 2;
            label_2297();
            cpicref = 434;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 341;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 40;
            cdata(208, rc) = 3;
            cdata(209, rc) = 15;
            creaturepack = 0;
            cbitmod(988, rc, 1);
            cdata(215, rc) = 659;
            cdata(216, rc) = -4;
            cdata(220, rc) = 466;
            cdata(212, rc) = 12;
            if (jp) {
                cdatan(0, rc) = u8"地雷犬"s;
            } else {
                cdatan(0, rc) = u8"mine dog"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"machine"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 434;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 258) {
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"鉄の処女"s;
                    return 0;
                } else {
                    refstr = u8"iron maiden"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"machine"s;
            dbmode = 2;
            label_2297();
            cpicref = 198;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 258;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"鉄の処女"s;
            } else {
                cdatan(0, rc) = u8"iron maiden"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"machine"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 6100150;
            cdata(7, rc) = 198;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            cdata(78, rc) = 250061;
            return 0;
        }
        return 0;
    }
    if (dbid == 189) {
        if (dbmode == 12) {
            label_1590();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"異形の目"s;
                    return 0;
                } else {
                    refstr = u8"deformed eye"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"eye"s;
            dbmode = 2;
            label_2297();
            cpicref = 271;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 189;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 2;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 632;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"異形の目"s;
            } else {
                cdatan(0, rc) = u8"deformed eye"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"eye"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 271;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 190) {
        if (dbmode == 12) {
            label_1590();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"不浄なる瞳"s;
                    return 0;
                } else {
                    refstr = u8"impure eye"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"eye"s;
            dbmode = 2;
            label_2297();
            cpicref = 271;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 190;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 19;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 2;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 632;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"不浄なる瞳"s;
            } else {
                cdatan(0, rc) = u8"impure eye"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"eye"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 271;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 191) {
        if (dbmode == 12) {
            label_1610();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ウィスプ"s;
                    return 0;
                } else {
                    refstr = u8"wisp"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/ether/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"wisp"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 191;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 14;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 2;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 421;
            cdata(217, rc) = 604;
            cdata(220, rc) = 633;
            cdata(212, rc) = 13;
            if (jp) {
                cdatan(0, rc) = u8"ウィスプ"s;
            } else {
                cdatan(0, rc) = u8"wisp"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"wisp"s;
            dbmode = 3;
            label_2297();
            sdata(52, rc) = 500;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 192) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ハリねずみ"s;
                    return 0;
                } else {
                    refstr = u8"hedgehog"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"crab"s;
            dbmode = 2;
            label_2297();
            cpicref = 273;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 192;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ハリねずみ"s;
            } else {
                cdatan(0, rc) = u8"hedgehog"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"crab"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 273;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            cdata(78, rc) = 200061;
            return 0;
        }
        return 0;
    }
    if (dbid == 193) {
        if (dbmode == 12) {
            label_1610();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"輝くハリねずみ"s;
                    return 0;
                } else {
                    refstr = u8"shining hedgehog"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/ether/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"crab"s;
            dbmode = 2;
            label_2297();
            cpicref = 273;
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 193;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"輝くハリねずみ"s;
            } else {
                cdatan(0, rc) = u8"shining hedgehog"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"crab"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 273;
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            cdata(78, rc) = 500062;
            return 0;
        }
        return 0;
    }
    if (dbid == 195) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *クックッ* "s, u8"「コケー」"s, u8"「コッ」"s);
                return 1;
            } else {
                txt(u8"You hear something scratching for worms"s, u8"\"*Bwwwuuuuu-buk-buk-buk-buKAWK*\""s, u8"You hear poultry in the distance"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「コケー」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"鶏"s;
                    return 0;
                } else {
                    refstr = u8"chicken"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"chicken"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 195;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"鶏"s;
            } else {
                cdatan(0, rc) = u8"chicken"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"chicken"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 196) {
        if (dbmode == 12) {
            if (rnd(10) == 0) {
                resistmod(cc, 54, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パンプキン"s;
                    return 0;
                } else {
                    refstr = u8"pumpkin"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mandrake"s;
            dbmode = 2;
            label_2297();
            cpicref = 275;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 196;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 7;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = -9999;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"パンプキン"s;
            } else {
                cdatan(0, rc) = u8"pumpkin"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mandrake"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5400100;
            cdata(7, rc) = 275;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 201) {
        if (dbmode == 12) {
            if (rnd(10) == 0) {
                resistmod(cc, 54, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 20;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パピー"s;
                    return 0;
                } else {
                    refstr = u8"puppy"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mandrake"s;
            dbmode = 2;
            label_2297();
            cpicref = 275;
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 201;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 80;
            cdata(208, rc) = 3;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = -9999;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"パピー"s;
            } else {
                cdatan(0, rc) = u8"puppy"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mandrake"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5400150;
            cdata(7, rc) = 275;
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 197) {
        if (dbmode == 12) {
            if (rnd(8) == 0) {
                resistmod(cc, 54, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"南瓜の怪物"s;
                    return 0;
                } else {
                    refstr = u8"greater pumpkin"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mandrake"s;
            dbmode = 2;
            label_2297();
            cpicref = 275;
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 197;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 18;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = -9998;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"南瓜の怪物"s;
            } else {
                cdatan(0, rc) = u8"greater pumpkin"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mandrake"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5400200;
            cdata(7, rc) = 275;
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 198) {
        if (dbmode == 12) {
            if (rnd(6) == 0) {
                resistmod(cc, 54, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 2;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 60;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ハロウィンナイトメア"s;
                    return 0;
                } else {
                    refstr = u8"halloween nightmare"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mandrake"s;
            dbmode = 2;
            label_2297();
            cpicref = 275;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 198;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(220, rc) = -9997;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ハロウィンナイトメア"s;
            } else {
                cdatan(0, rc) = u8"halloween nightmare"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mandrake"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5400250;
            cdata(7, rc) = 275;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 199) {
        if (dbmode == 12) {
            if (rnd(4) == 0) {
                resistmod(cc, 53, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"闇子"s;
                    return 0;
                } else {
                    refstr = u8"stalker"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"stalker"s;
            dbmode = 2;
            label_2297();
            cpicref = 276;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 199;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"闇子"s;
            } else {
                cdatan(0, rc) = u8"stalker"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"stalker"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 276;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 200) {
        if (dbmode == 12) {
            if (rnd(4) == 0) {
                resistmod(cc, 53, 50);
            }
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"闇の老師"s;
                    return 0;
                } else {
                    refstr = u8"shadow stalker"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"stalker"s;
            dbmode = 2;
            label_2297();
            cpicref = 276;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 200;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 26;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"闇の老師"s;
            } else {
                cdatan(0, rc) = u8"shadow stalker"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"stalker"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 276;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 202) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ぐぉぉぉん」"s);
                return 1;
            } else {
                txt(u8"You hear a bonfire in the distance, only it sounds like it's breathing"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ウフハァ」"s, u8"「グゴガー」"s, u8"「ギャオース！」"s, u8" *どすん* "s, u8" *ドスッ* "s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"火の巨人『エボン』"s;
                    return 0;
                } else {
                    refstr = u8"<Ebon> the fire giant"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"giant"s;
            dbmode = 2;
            label_2297();
            cpicref = 351;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 202;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 80;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 65;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 602;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"火の巨人『エボン』"s;
            } else {
                cdatan(0, rc) = u8"<Ebon> the fire giant"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"giant"s;
            dbmode = 3;
            label_2297();
            sdata(50, rc) = 500;
            cdata(8, rc) = 0;
            cdata(7, rc) = 351;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 203) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"モイアー「さあ、寄った寄った！」"s, u8"モイアー「これなるは伝説の火の巨人、見なきゃ損だよ！」"s, u8"モイアー「他の店じゃ手に入らない珍品を見ていってくれ」"s);
                return 1;
            } else {
                txt(u8"\"Hey now, I stopped, I stopped!\""s, u8"\"Behold! a Legendary Giant of Fire! Be careful you aren't burned now.\""s, u8"\"And if you think that's special, wait till you see what I got over here!\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「観光客だからって馬鹿にするな」"s, u8"「なんて治安の悪い国だ」"s, u8"「野蛮な土地だな」"s, u8"「金などもってないぞ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"見世物屋の『モイアー』"s;
                    return 0;
                } else {
                    refstr = u8"<Moyer> the crooked"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 23;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 203;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 0;
            cdata(202, rc) = 3;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"見世物屋の『モイアー』"s;
            } else {
                cdatan(0, rc) = u8"<Moyer> the crooked"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 23;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 205) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「"s + _syujin(cdata(8, 0)) + u8"〜」"s, _syujin(cdata(8, 0)) + u8"〜"s, u8"「用事はありませんか♪」"s, u8"メイドの熱い視線を感じる…"s);
                return 1;
            } else {
                txt(u8""s, u8"\"Oh Master, I don't do THOSE sorts of things♪...\""s, u8"The maid looks good enough to touch"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おいたが過ぎますよ！」"s, u8"「お仕置きです！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ダメぇ！」"s, u8"「"s + _syujin(cdata(8, 0)) + u8"ー！」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりなさいませ、"s + _syujin(cdata(8, 0)) + u8"〜」"s, u8"「おかえりなさいまし〜」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"メイド"s;
                    return 0;
                } else {
                    refstr = u8"maid"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 104;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 205;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"メイド"s;
            } else {
                cdatan(0, rc) = u8"maid"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 104;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 105;
            }
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 207) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ぐぉぉぉん」"s);
                return 1;
            } else {
                txt(u8"You hear a bonfire in the distance, only it sounds like it's breathing, AND moving..."s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ウフハァ」"s, u8"「グゴガー」"s, u8"「ギャオース！」"s, u8" *どすん* "s, u8" *ドスッ* "s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"火の巨人『エボン』"s;
                    return 0;
                } else {
                    refstr = u8"<Ebon> the fire giant"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"giant"s;
            dbmode = 2;
            label_2297();
            cpicref = 351;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 207;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 65;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 602;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"火の巨人『エボン』"s;
            } else {
                cdatan(0, rc) = u8"<Ebon> the fire giant"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"giant"s;
            dbmode = 3;
            label_2297();
            sdata(50, rc) = 500;
            cdata(8, rc) = 0;
            cdata(7, rc) = 351;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 212) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"実験台"s;
                    return 0;
                } else {
                    refstr = u8"<Stersha> the queen of Palmia"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 117;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 212;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 54;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"実験台"s;
            } else {
                cdatan(0, rc) = u8"<Stersha> the queen of Palmia"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 117;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 56;
            return 0;
        }
        return 0;
    }
    if (dbid == 213) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「あー…かわいいお花！」"s, u8"「ついていっていい？」"s, u8"「サンドラさんの赤いケープほしい…」"s, u8"「ざっつあぷりちーふらわー」"s, u8"「赤って好きな色なの〜」"s, u8"「この花の冠はお母さんに編んでもらったの」"s, u8"「るるる♪」"s);
                return 1;
            } else {
                txt(u8"\"Oh my! Such pretty flowers♪\""s, u8"\"Can I tag along? I won't be a bother♪\""s, u8"\"I hope Sandra's red cape...♪\""s, u8"\"Eat flowers evil-doer!♪\""s, u8"\"Red is the color of love, of blood, and of roses♪\""s, u8"\"A crown of flowers did his mother weave with all her heart...♪\""s, u8"\"♪La, laaaah, la, la-la. Lah, la-la,, la la....♪\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「どうして、そんなことするの？」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「あ…もどってきた！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「怖いのはいや…」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"無邪気な少女『グウェン』"s;
                    return 0;
                } else {
                    refstr = u8"<Gwen> the innocent"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 356;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 213;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 4;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"無邪気な少女『グウェン』"s;
            } else {
                cdatan(0, rc) = u8"<Gwen> the innocent"s;
            }
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 356;
            if (cdata(8, rc) == 1) {
                cdata(7, rc) = 356;
            }
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 221) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「おかあさん…」"s, u8"「ひとりにしないでよ」"s, u8"「みゅ…」"s);
                return 1;
            } else {
                txt(u8"\"Mother…\""s, u8"\"Do not go alone.\""s, u8"\"Oh, look at you…\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ごめんね…ごめんね…おかあさん」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ひとりぼっちの『パエル』"s;
                    return 0;
                } else {
                    refstr = u8"Lonely <Pael>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 358;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 221;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 15;
            cdata(202, rc) = 3;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ひとりぼっちの『パエル』"s;
            } else {
                cdatan(0, rc) = u8"Lonely <Pael>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 358;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 222) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「うふっ。パエルはいつまでも甘えん坊さんね」"s, u8"「あらあら。心配しないでも、私は平気よ」"s, u8"「けほっ。けほっ」"s, u8"「いい子ね」"s);
                return 1;
            } else {
                txt(u8"\"Pael, such a spoiled child…dear oh dear.\""s, u8"\"Hush now, I've got you.\""s, u8"\"I hope Pael is not in trouble with the guards again…\""s, u8"\"Now you be good dear, understand?\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ああ…パエル…パエル…」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パエルの母『リリィ』"s;
                    return 0;
                } else {
                    refstr = u8"Pael's mom <Lily>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 359;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 222;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 13;
            cdata(202, rc) = 3;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"パエルの母『リリィ』"s;
            } else {
                cdatan(0, rc) = u8"Pael's mom <Lily>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 359;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 223) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「あんな極上の女はそうはいねえ」"s, u8"「俺の手に掛かれば、どんな女もイチコロよ」"s, u8" *レロレロレロ* "s, u8"「まったく罪な男に生まれちまったもんだ」"s);
                return 1;
            } else {
                txt(u8"\"Ladies! The line starts here!\""s, u8"\"No woman can resist my charms, be they my dashing good looks, my wit and charm, or even my coinpurse.\""s, u8"\"ero-ero-ero-ero, mushroom, mushroom!\""s, u8"\"I am the Gods gift to women. Come and get a memory you shall never forget!\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「真の男ってものを見せてやるよ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ママー！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ペッ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"女たらしの『ラファエロ』"s;
                    return 0;
                } else {
                    refstr = u8"<Raphael> the womanizer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 361;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 223;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 14;
            cdata(202, rc) = 2;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"女たらしの『ラファエロ』"s;
            } else {
                cdatan(0, rc) = u8"<Raphael> the womanizer"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 361;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 224) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「イーック」"s, u8"「か、かみかぜ…」"s, u8"「ィィーック」"s, u8"「なんという生物だ」"s);
                return 1;
            } else {
                txt(u8"\"Let's roll!\""s, u8"\"I may be new to this whole knight gig, but I won't be for long!\""s, u8"\"Are my spurs polished enough you think? I'd just die if a senior thought they were sub-par.\""s, u8"You hear someone adjusting their armor for the umpteenth time"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「けが人相手に卑怯な！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ああ…立派な騎士になりたかった…」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ガードに突き出してやる」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"見習い騎士『アインク』"s;
                    return 0;
                } else {
                    refstr = u8"<Ainc> the novice knight"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 362;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 224;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 7;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 18;
            cdata(202, rc) = 3;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"見習い騎士『アインク』"s;
            } else {
                cdatan(0, rc) = u8"<Ainc> the novice knight"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 362;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 243) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「ヤ、ヤツらがくる！」"s, u8"「撃つのを止めるな…ヤツらを近づけるな！」"s, u8"「オーマイガッ！」"s, u8"「神よぉ…」"s);
                return 1;
            } else {
                txt(u8"\"Pah, a minor flesh wound…\""s, u8"\"Come closer… I got rounds for this thing still…\""s, u8"\"It's not a tumor!\""s, u8"\"I'll be back.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「うわぁぁぁ！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「爆死よりはマシか」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「アポ！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"負傷兵『アーノルド』"s;
                    return 0;
                } else {
                    refstr = u8"<Arnord> the injured soldier"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 383;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 243;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 36;
            cdata(202, rc) = 3;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"負傷兵『アーノルド』"s;
            } else {
                cdatan(0, rc) = u8"<Arnord> the injured soldier"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 383;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 247) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「るんるんるん♪」"s, u8"「うみみゃ？」"s, u8"「にしし！」"s, u8"「ふ〜んふ〜んふ〜ん♪1」"s, u8"「きのこのこのこげんきのこぉ〜♪ 」"s, u8"「おー。えりんぎまいたけぶなしめじぃ〜」"s, u8"「フーン　フンフン　フーン　フンフン　ネコのフ〜ン♪　フーン　フンフン　フーン　フンフン　かたい♪」"s);
                return 1;
            } else {
                txt(u8"\"I nyo talk funny, nyou talk funny♪\""s, u8"\"Nyah! Water! I hates it so.\""s, u8"\"Pug!\""s, u8"\"Nyo touching! No Bump-Bump for nyou.\""s, u8"\"♪Nyobody knyows the touble Mia's seen, nyobody knyows Mia's Tru-bull♪\""s, u8"You hear the oddest voice in the crowd, it is lilting and...cat-like?"s, u8"\"Meow♪1\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「はわわ、きっと来世は猫に生まれるんだモン」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「アーン、バカ♪」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"猫かぶり『ミーア』"s;
                    return 0;
                } else {
                    refstr = u8"<Mia> the cat freak"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 388;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 247;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 34;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"猫かぶり『ミーア』"s;
            } else {
                cdatan(0, rc) = u8"<Mia> the cat freak"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            cdata(8, rc) = 1;
            cdata(7, rc) = 388;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 252) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「意味なんてものはないさ」"s, u8"「身体はまだ動くよ、油の切れた機械のように。だが心は…」"s, u8"「もし生まれ変われるのなら…」"s, u8"「もう死んでもいいかな？」"s);
                return 1;
            } else {
                txt(u8"\"I mean there's nothing in my soul but pain and misery. Oh and agony too, can't leave that out.\""s, u8"\"My body will keep moving, like a machine, but without the oils of love, my heart will not stop squeaking\""s, u8"You hear the shuffling step of a man who's world is nothing but pain and misery. With just an aftertase of agony, for good measure"s, u8"\"Will the kiss of Death bring an end to the cloying, double-plus-ungood that is my life?\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ああ、わかりやすくていいね」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「死か。別に何も感じない」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「心配するな。生きている価値なんて、もともとこの世界にはないよ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"悩める魔術士『レントン』"s;
                    return 0;
                } else {
                    refstr = u8"<Renton> the suffering wizard"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 392;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 252;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 45;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 5;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = 417;
            cdata(216, rc) = 434;
            cdata(217, rc) = 415;
            cdata(218, rc) = 454;
            cdata(212, rc) = 4;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"悩める魔術士『レントン』"s;
            } else {
                cdatan(0, rc) = u8"<Renton> the suffering wizard"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 392;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 253) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「私に不可能はないのです」"s, u8"「捕まえられるものなら、どうぞいつでも」"s, u8"「そこらのコソ泥と、一緒にしないでください」"s);
                return 1;
            } else {
                txt(u8"\"Impossible? Bah, to you maybe.\""s, u8"\"You catch me? Ha! You'd have a better chance shackling your shadow!\""s, u8"You hear the swagger of a man of supreme confidence, only it's oh so quiet…"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ホッホッホッ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「これは何かの間違いです」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ホホーっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"稀代の泥棒『マークス』"s;
                    return 0;
                } else {
                    refstr = u8"<Marks> the great thief"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 394;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 253;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 25;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 635;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"稀代の泥棒『マークス』"s;
            } else {
                cdatan(0, rc) = u8"<Marks> the great thief"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 394;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 259) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「もえちゃえ」"s, u8"「クズね。この世界は」"s, u8"「あたし、綺麗かしら？」"s);
                return 1;
            } else {
                txt(u8"You hear a someone making ticking sounds, followed by a pantomimed 'Ka-BOOOOM', followed by manical laughter"s, u8"\"He says to me, he says to me, 'Baby I'm TIRED of workin' for the MAN!' I says, I says, WHY DON'T YOU BLOW HIM TO BITS?\""s, u8"\"You got STYLE, baby. But if you're going to be a real villain, you gotta get a gimmick.' And so I go I says YEAH, baby. A gimmick, that's it. High explosives.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ヘンタイ！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「全部、全部、真っ赤にもえちゃ…」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「綺麗な血。ぺろっ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"爆弾魔『ノエル』"s;
                    return 0;
                } else {
                    refstr = u8"<Noel> the bomber"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 199;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 259;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 15;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 635;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"爆弾魔『ノエル』"s;
            } else {
                cdatan(0, rc) = u8"<Noel> the bomber"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 199;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 301) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「うむうむ、精進せよ」"s, u8"「困ったことになったぞ」"s, u8"「軍人たるもの、常に身だしなみに気をつけねばならぬ」"s);
                return 1;
            } else {
                txt(u8"\"Kill a man, they put you in the gallows. Kill ten-thousand, they make you a General.\""s, u8"\"We're going to need all the help we can get, yes indeed.\""s, u8"\"You know what separates a soldier from a thug? The polish on his buttons, that's what.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「貴様、軍事裁判にかけてやるわ」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ちょこざいなー！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「こわっぱが」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"パルミア少将『コネリー』"s;
                    return 0;
                } else {
                    refstr = u8"<Conery> Palmian major general"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 403;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 301;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 38;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 39;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"パルミア少将『コネリー』"s;
            } else {
                cdatan(0, rc) = u8"<Conery> Palmian major general"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 403;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 214) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「やばいヤマだったぜ」"s, u8"「お、カモだ…」"s, u8"「ククク…」"s);
                return 1;
            } else {
                txt(u8"\"Heh, easy money…\""s, u8"\"Think I can get some good coin for those fancy bits you got on stranger?\""s, u8"\"Another one with a coinpurse just dangling there, like a bit of ripe fruit. Time to pluck it.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「覚えていろよ」"s, u8"「やめてください！」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「よう、生きてたか」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ふん！青二才め」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"見習い盗賊"s;
                    return 0;
                } else {
                    refstr = u8"thief"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 166;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 214;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 2;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 635;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"見習い盗賊"s;
            } else {
                cdatan(0, rc) = u8"thief"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) = 166;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 215) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「やばいヤマだったぜ」"s, u8"「お、カモだ…」"s, u8"「ククク…」"s);
                return 1;
            } else {
                txt(u8"\"Man, this one'll feed me for a week. Two even!\""s, u8"\"I was just sayin' we needed some coin, and look, it just came walkin' towards us.\""s, u8"\"Your GP or your HP good chum!\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「覚えていろよ」"s, u8"「やめてください！」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「よう、生きてたか」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ふん！青二才め」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 3;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"強盗"s;
                    return 0;
                } else {
                    refstr = u8"robber"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 166;
            cpicref += 3000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 215;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 5;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 635;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"強盗"s;
            } else {
                cdatan(0, rc) = u8"robber"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 166;
            cdata(7, rc) += 3000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 217) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「やばいヤマだったぜ」"s, u8"「お、カモだ…」"s, u8"「ククク…」"s);
                return 1;
            } else {
                txt(u8"\"Like taking candy from a baby in armor.\""s, u8"You hear someone humming the *Money* tune while cracking their knuckles"s, u8"\"Another satisifying finance adjustment.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「覚えていろよ」"s, u8"「やめてください！」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「よう、生きてたか」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ふん！青二才め」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 4;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"マスターシーフ"s;
                    return 0;
                } else {
                    refstr = u8"master thief"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 166;
            cpicref += 4000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 217;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 35;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 25;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 635;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"マスターシーフ"s;
            } else {
                cdatan(0, rc) = u8"master thief"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 166;
            cdata(7, rc) += 4000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 216) {
        if (dbmode == 12) {
            label_1606();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 20;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"イスの偉大なる種族"s;
                    return 0;
                } else {
                    refstr = u8"great race of Yith"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yith"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 216;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 50;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 601;
            cdata(217, rc) = 636;
            cdata(212, rc) = 3;
            if (jp) {
                cdatan(0, rc) = u8"イスの偉大なる種族"s;
            } else {
                cdatan(0, rc) = u8"great race of Yith"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yith"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(54, rc) = 500;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 218) {
        if (dbmode == 12) {
            label_1606();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"シュブ＝ニグラス"s;
                    return 0;
                } else {
                    refstr = u8"Shub-Niggurath"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yith"s;
            dbmode = 2;
            label_2297();
            cpicref = 277;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 218;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 45;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 3;
            cdata(207, rc) = 0;
            cdata(208, rc) = 3;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = -3;
            cdata(216, rc) = -3;
            cdata(217, rc) = 410;
            cdata(218, rc) = 636;
            cdata(220, rc) = 424;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"シュブ＝ニグラス"s;
            } else {
                cdatan(0, rc) = u8"Shub-Niggurath"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yith"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            sdata(54, rc) = 500;
            cdata(7, rc) = 277;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 219) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 80;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ガグ"s;
                    return 0;
                } else {
                    refstr = u8"gagu"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"orc"s;
            dbmode = 2;
            label_2297();
            cpicref = 278;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 219;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 38;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 613;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"ガグ"s;
            } else {
                cdatan(0, rc) = u8"gagu"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"orc"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 278;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 220) {
        if (dbmode == 12) {
            label_1606();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 30;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"螺旋の王"s;
                    return 0;
                } else {
                    refstr = u8"spiral king"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yith"s;
            dbmode = 2;
            label_2297();
            cpicref = 430;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 220;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 65;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = 417;
            cdata(216, rc) = 434;
            cdata(217, rc) = 415;
            cdata(218, rc) = 454;
            cdata(220, rc) = 636;
            cdata(212, rc) = 14;
            if (jp) {
                cdatan(0, rc) = u8"螺旋の王"s;
            } else {
                cdatan(0, rc) = u8"spiral king"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"yith"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            sdata(54, rc) = 500;
            cdata(7, rc) = 430;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 250) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"妖精"s;
                    return 0;
                } else {
                    refstr = u8"fairy"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"fairy"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 250;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 13;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 60;
            cdata(208, rc) = 1;
            cdata(209, rc) = 40;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 423;
            cdata(220, rc) = 410;
            cdata(221, rc) = 635;
            cdata(212, rc) = 22;
            if (jp) {
                cdatan(0, rc) = u8"妖精"s;
            } else {
                cdatan(0, rc) = u8"fairy"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"fairy"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 260) {
        if (dbmode == 100) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「うみみゃ」"s, u8"「みゅー」"s, u8"「みゃ」"s, u8" *ごろごろ* "s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「フシューッ」"s, u8"「うみみゃ！」"s, u8"「みゃ！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「うみ…みゃ…」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりみゃー」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"黒猫は尻尾をふった。"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"黒猫"s;
                    return 0;
                } else {
                    refstr = u8"black cat"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"servant"s;
            dbmode = 2;
            label_2297();
            cpicref = 211;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 260;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 75;
            cdata(208, rc) = 1;
            cdata(209, rc) = 30;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 414;
            cdata(221, rc) = 601;
            cdata(222, rc) = 636;
            cdata(212, rc) = 31;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"黒猫"s;
            } else {
                cdatan(0, rc) = u8"black cat"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"servant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 211;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 261) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *パタパタ*  "s, u8"「にひひ」"s, u8" *ハタハタ* "s);
                return 1;
            } else {
                txt(u8"You hear the fluttering of gossamer wings"s, u8"You hear tittering laughter like tiny crystal bells"s, u8"You smell what reminds you of sugerplums…"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"妖精さん"s;
                    return 0;
                } else {
                    refstr = u8"cute fairy"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"servant"s;
            dbmode = 2;
            label_2297();
            cpicref = 217;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 261;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 40;
            cdata(208, rc) = 2;
            cdata(209, rc) = 20;
            creaturepack = 0;
            cdata(215, rc) = -2;
            cdata(220, rc) = 443;
            cdata(221, rc) = 447;
            cdata(222, rc) = 415;
            cdata(212, rc) = 31;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"妖精さん"s;
            } else {
                cdatan(0, rc) = u8"cute fairy"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"servant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 217;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 262) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"アンドロイド"s;
                    return 0;
                } else {
                    refstr = u8"android"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"servant"s;
            dbmode = 2;
            label_2297();
            cpicref = 218;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 262;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 40;
            cdata(208, rc) = 2;
            cdata(209, rc) = 3;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 647;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"アンドロイド"s;
            } else {
                cdatan(0, rc) = u8"android"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"servant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 218;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 263) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *パタパタ*  "s, u8" * ばさっばさっ*"s, u8" *ハタハタ* "s);
                return 1;
            } else {
                txt(u8"You hear what sounds like wings of feather, but with grace and dignity somehow..."s, u8"You hear a quiet voice in prayer, but with a note of sadness..."s, u8"You smell Myrrh in the air, but with the faintest hints of charcoal…"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「きゃあ！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「地獄に落ちなさい」"s, u8"「いいざまね」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"黒天使"s;
                    return 0;
                } else {
                    refstr = u8"black angel"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"servant"s;
            dbmode = 2;
            label_2297();
            cpicref = 236;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 263;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 8;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = -1;
            cdata(217, rc) = 648;
            cdata(218, rc) = -2;
            cdata(220, rc) = 446;
            cdata(221, rc) = 647;
            cdata(222, rc) = 447;
            cdata(212, rc) = 34;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"黒天使"s;
            } else {
                cdatan(0, rc) = u8"black angel"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"servant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 236;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 264) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"追放者"s;
                    return 0;
                } else {
                    refstr = u8"exile"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"servant"s;
            dbmode = 2;
            label_2297();
            cpicref = 269;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 264;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 65;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = 414;
            cdata(216, rc) = 415;
            cdata(217, rc) = 418;
            cdata(212, rc) = 3;
            if (jp) {
                cdatan(0, rc) = u8"追放者"s;
            } else {
                cdatan(0, rc) = u8"exile"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"servant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 269;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 265) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"黄金の騎士"s;
                    return 0;
                } else {
                    refstr = u8"golden knight"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"servant"s;
            dbmode = 2;
            label_2297();
            cpicref = 267;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 265;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 8;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 648;
            cdata(221, rc) = 444;
            cdata(212, rc) = 21;
            cdata(211, rc) = 401;
            if (jp) {
                cdatan(0, rc) = u8"黄金の騎士"s;
            } else {
                cdatan(0, rc) = u8"golden knight"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"servant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 267;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 266) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"防衛者"s;
                    return 0;
                } else {
                    refstr = u8"defender"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/god/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"servant"s;
            dbmode = 2;
            label_2297();
            cpicref = 242;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 266;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 8;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 8;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 442;
            cdata(221, rc) = 444;
            cdata(212, rc) = 21;
            cdata(211, rc) = 404;
            if (jp) {
                cdatan(0, rc) = u8"防衛者"s;
            } else {
                cdatan(0, rc) = u8"defender"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"servant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warmage"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 242;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 267) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぱかぱか* "s, u8" *ぱからっぱからっ*"s, u8" *パコパコ*"s);
                return 1;
            } else {
                txt(u8"You hear faltering hoofbeats in the distance"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ひ…ひん…」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1591();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"駄馬"s;
                    return 0;
                } else {
                    refstr = u8"lame horse"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/horse/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"horse"s;
            dbmode = 2;
            label_2297();
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 267;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"駄馬"s;
            } else {
                cdatan(0, rc) = u8"lame horse"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"horse"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 276) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぱかぱか* "s, u8" *ぱからっぱからっ*"s, u8" *パコパコ*"s);
                return 1;
            } else {
                txt(u8"You hear hoofbeats, but they are wild and free"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ひ…ひん…」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1591();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 6;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"野生馬"s;
                    return 0;
                } else {
                    refstr = u8"wild horse"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/horse/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"horse"s;
            dbmode = 2;
            label_2297();
            cpicref += 6000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 276;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 4;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"野生馬"s;
            } else {
                cdatan(0, rc) = u8"wild horse"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"horse"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 6000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 275) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぱかぱか* "s, u8" *ぱからっぱからっ*"s, u8" *パコパコ*"s);
                return 1;
            } else {
                txt(u8"You hear hoofbeats, a trot that almost belongs on a parade"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ひ…ひん…」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1591();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 15;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ノイエル馬"s;
                    return 0;
                } else {
                    refstr = u8"Noyel horse"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/horse/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"horse"s;
            dbmode = 2;
            label_2297();
            cpicref += 15000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 275;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ノイエル馬"s;
            } else {
                cdatan(0, rc) = u8"Noyel horse"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"horse"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 15000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 268) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぱかぱか* "s, u8" *ぱからっぱからっ*"s, u8" *パコパコ*"s);
                return 1;
            } else {
                txt(u8"You hear the crisp hoofbeats of a horse trained for war"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ひ…ひん…」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1591();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 16;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ヨウィン馬"s;
                    return 0;
                } else {
                    refstr = u8"Yowyn horse"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/horse/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"horse"s;
            dbmode = 2;
            label_2297();
            cpicref += 16000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 268;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ヨウィン馬"s;
            } else {
                cdatan(0, rc) = u8"Yowyn horse"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"horse"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 16000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 277) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ぱかぱか* "s, u8" *ぱからっぱからっ*"s, u8" *パコパコ*"s);
                return 1;
            } else {
                txt(u8"You hear hoofbeats. You hope it's not zebras"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ひ…ひん…」"s);
                return 1;
            }
        }
        if (dbmode == 104) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「おかえりヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ヒヒーン！」"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1591();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 10;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"サラブレッド"s;
                    return 0;
                } else {
                    refstr = u8"wild horse"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/wild/horse/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"horse"s;
            dbmode = 2;
            label_2297();
            cpicref += 10000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 277;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 20;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"サラブレッド"s;
            } else {
                cdatan(0, rc) = u8"wild horse"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -1;
            cdata(69, rc) = -1;
            cdata(40, rc) = -10000;
            dbidn = u8"horse"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 10000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 278) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 70;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ミュータント"s;
                    return 0;
                } else {
                    refstr = u8"mutant"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mutant"s;
            dbmode = 2;
            label_2297();
            cpicref = 191;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 278;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 6;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"ミュータント"s;
            } else {
                cdatan(0, rc) = u8"mutant"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"mutant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) = 191;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 279) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「これからの世界はカガクなのじゃ」"s, u8"「実験体が足りぬ」"s, u8"「ふむふむ…この遺伝子を猫に組み込めば…」"s);
                return 1;
            } else {
                txt(u8"\"Science is it's own reward!\""s, u8"\"With a little bit of this, and a little bit of that, why, who knows what you are going to get?\""s, u8"\"I wonder if a black cat's genes are more or less lucky than a regular cat?\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「カガク万歳！」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"生化学者『イコール』"s;
                    return 0;
                } else {
                    refstr = u8"<Icolle> the biologist"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"yerles"s;
            dbmode = 2;
            label_2297();
            cpicref = 263;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 279;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 17;
            cdata(202, rc) = 1;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"生化学者『イコール』"s;
            } else {
                cdatan(0, rc) = u8"<Icolle> the biologist"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"yerles"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 263;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 280) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「街の衛生は俺が守る！」"s, u8"「街道にゴミを捨てる奴はゆるさねえ」"s, u8"「俺はゴミの天敵だ」"s);
                return 1;
            } else {
                txt(u8"\"This citie's health is my charge!\""s, u8"\"Those who DARE litter before me shall face my broom!\""s, u8"\"I am garbage's worst nightmare.\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「俺はゴミじゃない！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「掃除完了」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"掃除屋『バルザック』"s;
                    return 0;
                } else {
                    refstr = u8"<Balzak> the janiator"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 192;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 280;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 30;
            cdata(202, rc) = 5;
            cdata(207, rc) = 70;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"掃除屋『バルザック』"s;
            } else {
                cdatan(0, rc) = u8"<Balzak> the janiator"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            cdata(8, rc) = 0;
            cdata(7, rc) = 192;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 288) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"魔法を詠唱する声が聞こえる。"s, u8"辺りはピリピリとした緊張で包まれている。"s, u8"部屋全体に魔力の波がただよっている。"s);
                return 1;
            } else {
                txt(u8"\"Magic is not for the faint of heart, nor dull of mind.\""s, u8"You hear chants for spells you can't even begin to imagine the purpose of"s, u8"A pulse of arcane and raw eldritch energies nearly knocks you off your feet"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「口で言っても無駄のようですね」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「そ、そんなはずはないのです！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「みなさん、新たな献体が手に入りましたよ」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"魔術士ギルドマスター『レヴラス』"s;
                    return 0;
                } else {
                    refstr = u8"<Revlus> the mage guildmaster"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 193;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 288;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 55;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 13;
            cdata(202, rc) = 1;
            cdata(207, rc) = 65;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = 414;
            cdata(216, rc) = 415;
            cdata(217, rc) = 418;
            cdata(212, rc) = 3;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"魔術士ギルドマスター『レヴラス』"s;
            } else {
                cdatan(0, rc) = u8"<Revlus> the mage guildmaster"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 193;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 290) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「この先は魔術士ギルドの管轄だ」"s, u8"「止まれ…身分を照会させてもらう」"s);
                return 1;
            } else {
                txt(u8"\"I am an officer of the Mage Guild's jurisdiction. Beware the un-learn-ed.\""s, u8"\"Stop... Let me make sure you are on my lists.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"魔術士ギルドの番人『レクサス』"s;
                    return 0;
                } else {
                    refstr = u8"<Lexus> the guild watchman"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 196;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 290;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 38;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 5;
            cdata(202, rc) = 3;
            cdata(207, rc) = 65;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = 414;
            cdata(216, rc) = 415;
            cdata(217, rc) = 418;
            cdata(212, rc) = 3;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"魔術士ギルドの番人『レクサス』"s;
            } else {
                cdatan(0, rc) = u8"<Lexus> the guild watchman"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"wizard"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 196;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 292) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"盗賊ギルドマスター『シン』"s;
                    return 0;
                } else {
                    refstr = u8"<Sin> the thief guildmaster"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 197;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 292;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 55;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 6;
            cdata(202, rc) = 1;
            cdata(207, rc) = 65;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"盗賊ギルドマスター『シン』"s;
            } else {
                cdatan(0, rc) = u8"<Sin> the thief guildmaster"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 197;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 294) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「この先は盗賊ギルドの管轄だ」"s, u8"「止まれ…身分を照会させてもらう」"s);
                return 1;
            } else {
                txt(u8"\"I am an officer of the Thief Guild's jurisdiction. Beware the clumsy-fingered.\""s, u8"\"Stop… Let me make sure you are on my lists.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"盗賊ギルドの番人『アビス』"s;
                    return 0;
                } else {
                    refstr = u8"<Abyss> the thief watchman"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 196;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 294;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 38;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 5;
            cdata(202, rc) = 3;
            cdata(207, rc) = 65;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"盗賊ギルドの番人『アビス』"s;
            } else {
                cdatan(0, rc) = u8"<Abyss> the thief watchman"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"thief"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 196;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 291) {
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"戦士ギルドマスター『フレイ』"s;
                    return 0;
                } else {
                    refstr = u8"<Fray> the fighter guildmaster"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 80;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 291;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 55;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 17;
            cdata(202, rc) = 1;
            cdata(207, rc) = 90;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"戦士ギルドマスター『フレイ』"s;
            } else {
                cdatan(0, rc) = u8"<Fray> the fighter guildmaster"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 80;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 297) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「この先は戦士ギルドの管轄だ」"s, u8"「止まれ…身分を照会させてもらう」"s);
                return 1;
            } else {
                txt(u8"\"I am an officer of the Fighter Guild's jurisdiction. Beware the weak-thewed.\""s, u8"\"Stop… Let me make sure you are on my lists.\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 100;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"戦士ギルドの番人『ドリア』"s;
                    return 0;
                } else {
                    refstr = u8"<Doria> the fighter watchman"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"norland"s;
            dbmode = 2;
            label_2297();
            cpicref = 196;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 297;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 38;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = 5;
            cdata(202, rc) = 3;
            cdata(207, rc) = 90;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"戦士ギルドの番人『ドリア』"s;
            } else {
                cdatan(0, rc) = u8"<Doria> the fighter watchman"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"norland"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"warrior"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 196;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 317) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「何故私に興味を持つ？怖くは無いのか？」 "s, u8"「やれやれ。ペットを持った気分だ」"s);
                return 1;
            } else {
                txt(u8"\"What do I have to fear? You aren't an Abyssal One.\""s, u8"\"Good grief, is someone trying to cop a feel?\" "s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「オマエ…私と同じ目をしているな」"s, u8"「ついてこれるか？」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「ふっ。人のまま死ねて嬉しいよ」"s, u8"「どうせすぐ忘れられる名だ」 "s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「オマエ弱いな。ナンバーはいくつだ？」"s, u8"「優秀だが長く生きすぎたな」"s, u8"「金は要らん。後から取りに来る者がいるから金はその時に渡せばいい」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"銀眼の斬殺者"s;
                    return 0;
                } else {
                    refstr = u8"silver eyed witch"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 279;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 317;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 28;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 80;
            cdata(208, rc) = 1;
            cdata(209, rc) = 10;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 648;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"銀眼の斬殺者"s;
            } else {
                cdatan(0, rc) = u8"silver eyed witch"s;
            }
            cdatan(0, rc) = lang(cdatan(0, rc) + u8"の"s + randomname(), randomname() + u8" the "s + cdatan(0, rc));
            cbitmod(977, rc, 1);
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"claymore"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 279;
            cdata(7, rc) += 0;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqweapon1 = 232;
            eqtwohand = 1;
            return 0;
        }
        return 0;
    }
    if (dbid == 318) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *ドスン*  "s, u8"リトルシスター「見てMr Bubbles、天使がいるわ」"s, u8"リトルシスター「急いでMr Bubbles、空で天使が踊っているの！」"s, u8" *ドン*  "s);
                return 1;
            } else {
                txt(u8"You feel the ground tremble with the steps of a large, angry, Protector"s, u8"Little Sister: \"Look Mr. Bubbles, the angels.\""s, u8"Little Sister: \"Look Mr. Bubbles, the angels are dancing in the sky!\""s, u8"You hear the tread of something you do NOT want to anger. Ever."s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"リトルシスター「殺せ！殺せ！」"s, u8"リトルシスター「粉々に砕いちゃいなさい！」"s, u8"リトルシスター「いけMr Bubbles、いけ！！」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「グウォォォォ！」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"リトルシスター「天使の血でお腹を満たすの」"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"『ビッグダディ』"s;
                    return 0;
                } else {
                    refstr = u8"<Big daddy>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"machinegod"s;
            dbmode = 2;
            label_2297();
            cpicref = 408;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 318;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 30;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 25;
            cdata(208, rc) = 3;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"『ビッグダディ』"s;
            } else {
                cdatan(0, rc) = u8"<Big daddy>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"machinegod"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 408;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 1;
            return 0;
        }
        if (dbmode == 4) {
            eqrange(0) = 496;
            eqrange(1) = 4;
            eqammo(0) = 25020;
            eqammo(1) = 3;
            return 0;
        }
        return 0;
    }
    if (dbid == 319) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「Mr Bubbles、動いて…おねがい！」"s, u8"「来ないで！触わらないで！」"s, u8"「天使…天使に出会うまで、まだ死にたくないの…」"s);
                return 1;
            } else {
                txt(u8"\"Mr. Bubbles, please stand up… Please!\""s, u8"You hear the sound of a frightened little girl somewhere"s, u8"\"Angel, angel, until we find the right one we don't dare die…\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「い、いや…！こないで！やだ…助けて…お願い…」"s);
                return 1;
            }
        }
        if (dbmode == 102) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「死…死にたくない…いやあぁ…ぁ」"s);
                return 1;
            }
        }
        if (dbmode == 103) {
            if (jp) {
                txtmore();
                txtef(9);
                txt(u8"「天使の血でお腹を満たすの」"s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"『リトルシスター』"s;
                    return 0;
                } else {
                    refstr = u8"<Little sister>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"mutant"s;
            dbmode = 2;
            label_2297();
            cpicref = 409;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 319;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 5;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"『リトルシスター』"s;
            } else {
                cdatan(0, rc) = u8"<Little sister>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"mutant"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 409;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 322) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「正しいことを行うのが時には難しいこともあるわ」"s, u8"「私の子供達を傷つけたらひどいわよ」"s);
                return 1;
            } else {
                txt(u8"\"The path of the righteous is not always easy, yes?\""s, u8"\"I'll not have him hurt my Little ones… I've worked far too long on them to see them fail now.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「どうしてそんなことができるの？」"s);
                return 1;
            } else {
                txt(u8"\"How can you do this things?\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「あなたには心がないの？」"s);
                return 1;
            } else {
                txt(u8"\"Have you no heart?\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「あなたには心がないの？」"s);
                return 1;
            } else {
                txt(u8"\"Have you no heart?\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"『謎の科学者』"s;
                    return 0;
                } else {
                    refstr = u8"<Strange scientist>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"roran"s;
            dbmode = 2;
            label_2297();
            cpicref = 412;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 322;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 15;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 3;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"『謎の科学者』"s;
            } else {
                cdatan(0, rc) = u8"<Strange scientist>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"roran"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"gunner"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 1;
            cdata(7, rc) = 412;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 334) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「正しいことを行うのが時には難しいこともあるわ」"s, u8"「私の子供達を傷つけたらひどいわよ」"s);
                return 1;
            } else {
                txt(u8"\"The problem is about choice. It is always about the choices we make.\""s, u8"\"While choices make the man, a pity most see only the shallowest ones to choose from.\""s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「どうしてそんなことができるの？」"s);
                return 1;
            } else {
                txt(u8"\"How can you do this things?\""s);
                return 1;
            }
        }
        if (dbmode == 102) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「あなたには心がないの？」"s);
                return 1;
            } else {
                txt(u8"\"Have you no heart?\""s);
                return 1;
            }
        }
        if (dbmode == 103) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8"「あなたには心がないの？」"s);
                return 1;
            } else {
                txt(u8"\"Have you no heart?\""s);
                return 1;
            }
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 50;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"『謎のプロデューサー』"s;
                    return 0;
                } else {
                    refstr = u8"<Mysterious Producer>"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/man/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"juere"s;
            dbmode = 2;
            label_2297();
            cpicref = 416;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 334;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 7;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 3;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"『謎のプロデューサー』"s;
            } else {
                cdatan(0, rc) = u8"<Mysterious Producer>"s;
            }
            cdata(9, rc) = 0;
            cdata(69, rc) = 0;
            cdata(40, rc) = -10000;
            dbidn = u8"juere"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"tourist"s;
            dbmode = 3;
            label_2298();
            cdata(8, rc) = 0;
            cdata(7, rc) = 416;
            cdata(7, rc) += 0;
            fixlv = 6;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 323) {
        if (dbmode == 12) {
            label_1614();
            skillexp(15, cc, 250);
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 10;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"シェイド"s;
                    return 0;
                } else {
                    refstr = u8"shade"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/undead/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"ghost"s;
            dbmode = 2;
            label_2297();
            cpicref = 280;
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 323;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 12;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = 617;
            cdata(217, rc) = 613;
            cdata(212, rc) = 3;
            if (jp) {
                cdatan(0, rc) = u8"シェイド"s;
            } else {
                cdatan(0, rc) = u8"shade"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"ghost"s;
            dbmode = 3;
            label_2297();
            cdata(230, rc) = 5600400;
            cdata(7, rc) = 280;
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 324) {
        if (dbmode == 12) {
            label_1615();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 19;
            }
            if (dbspec == 6) {
                return 15;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"クイックリング"s;
                    return 0;
                } else {
                    refstr = u8"quickling"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"quickling"s;
            dbmode = 2;
            label_2297();
            cpicref += 19000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 324;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 10;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 2;
            cdata(209, rc) = 0;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(212, rc) = 1;
            if (jp) {
                cdatan(0, rc) = u8"クイックリング"s;
            } else {
                cdatan(0, rc) = u8"quickling"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"quickling"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 19000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 325) {
        if (dbmode == 12) {
            label_1615();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 3;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 15;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"クイックリングの弓使い"s;
                    return 0;
                } else {
                    refstr = u8"quickling archer"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"quickling"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 325;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 17;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 50;
            cdata(208, rc) = 3;
            cdata(209, rc) = 2;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(216, rc) = -3;
            cdata(217, rc) = -3;
            cdata(220, rc) = 648;
            cdata(212, rc) = 13;
            if (jp) {
                cdatan(0, rc) = u8"クイックリングの弓使い"s;
            } else {
                cdatan(0, rc) = u8"quickling archer"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"quickling"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"archer"s;
            dbmode = 3;
            label_2298();
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 328) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *リン* "s);
                return 1;
            } else {
                txt(u8"*ring*"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *リン* "s);
                return 1;
            } else {
                txt(u8"*ring*"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 0;
            }
            if (dbspec == 6) {
                return 2;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"シルバーベル"s;
                    return 0;
                } else {
                    refstr = u8"silver bell"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"metal"s;
            dbmode = 2;
            label_2297();
            cpicref += 0;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 328;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 3;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 4;
            cdata(209, rc) = 1;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 653;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"シルバーベル"s;
            } else {
                cdatan(0, rc) = u8"silver bell"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"metal"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 0;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 329) {
        if (dbmode == 100) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *リン* "s);
                return 1;
            } else {
                txt(u8"*ring*"s);
                return 1;
            }
        }
        if (dbmode == 101) {
            txtmore();
            txtef(9);
            if (jp) {
                txt(u8" *リン* "s);
                return 1;
            } else {
                txt(u8"*ring*"s);
                return 1;
            }
        }
        if (dbmode == 12) {
            label_1589();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 5;
            }
            if (dbspec == 6) {
                return 5;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"ゴールドベル"s;
                    return 0;
                } else {
                    refstr = u8"gold bell"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8""s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"metal"s;
            dbmode = 2;
            label_2297();
            cpicref += 5000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 329;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 1;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 30;
            cdata(208, rc) = 3;
            cdata(209, rc) = 1;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 653;
            cdata(212, rc) = 11;
            cdata(23, rc) += 1;
            cdata(23, rc) += 1;
            if (jp) {
                cdatan(0, rc) = u8"ゴールドベル"s;
            } else {
                cdatan(0, rc) = u8"gold bell"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"metal"s;
            dbmode = 3;
            label_2297();
            cdata(7, rc) += 5000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    if (dbid == 330) {
        if (dbmode == 12) {
            label_1616();
            return -1;
        }
        if (dbmode == 16) {
            if (dbspec == 3) {
                return 1;
            }
            if (dbspec == 5) {
                return 17;
            }
            if (dbspec == 6) {
                return 40;
            }
            if (dbspec == 2) {
                if (jp) {
                    refstr = u8"エイリアン"s;
                    return 0;
                } else {
                    refstr = u8"alien"s;
                    return 0;
                }
            }
            if (dbspec == 8) {
                refstr = u8"/dragon/"s;
                return 0;
            }
            return 0;
        }
        if (dbmode == 2) {
            dbidn = u8"dinosaur"s;
            dbmode = 2;
            label_2297();
            cpicref = 283;
            cpicref += 17000;
            return 0;
        }
        if (dbmode == 3) {
            cdata(27, rc) = 330;
            if (initlv != 0) {
                cdata(38, rc) = initlv;
            } else {
                cdata(38, rc) = 19;
            }
            if (voidlv != 0) {
                cdata(38, rc) = voidlv * (100 + cdata(38, rc) * 2) / 100;
            }
            cdata(13, rc) = -1;
            cdata(202, rc) = 1;
            cdata(207, rc) = 100;
            cdata(208, rc) = 1;
            cdata(209, rc) = 7;
            creaturepack = 0;
            cdata(215, rc) = -1;
            cdata(220, rc) = 654;
            cdata(212, rc) = 11;
            if (jp) {
                cdatan(0, rc) = u8"エイリアン"s;
            } else {
                cdatan(0, rc) = u8"alien"s;
            }
            cdata(9, rc) = -3;
            cdata(69, rc) = -3;
            cdata(40, rc) = -10000;
            dbidn = u8"dinosaur"s;
            dbmode = 3;
            label_2297();
            dbidn = u8"predator"s;
            dbmode = 3;
            label_2298();
            cdata(230, rc) = 6300250;
            cdata(7, rc) = 283;
            cdata(7, rc) += 17000;
            cspecialeq = 0;
            return 0;
        }
        return 0;
    }
    return 0;
}


}
