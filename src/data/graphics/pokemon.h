// Normally, INCBIN_COMP acts like INCBIN_U32, but appends `.lz` to the file, compressing it;
// If not compressing overworld gfx, make this an alias to INCBIN_32, so gfx will *not* be compressed
#if !(OW_GFX_COMPRESS)
#define INCBIN_COMP INCBIN_U32
#endif

const u32 gMonFrontPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/anim_front.4bpp.lz");
const u32 gMonBackPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/back.4bpp.lz");
const u32 gMonPalette_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/normal.gbapal.lz");
const u32 gMonShinyPalette_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/shiny.gbapal.lz");
const u8 gMonIcon_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/icon.4bpp");
const u8 gMonFootprint_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/footprint.1bpp");

const u32 gObjectEventPic_Substitute[] = INCBIN_COMP("graphics/pokemon/question_mark/overworld.4bpp");

const u32 gMonFrontPic_Egg[] = INCBIN_U32("graphics/pokemon/egg/anim_front.4bpp.lz");
const u32 gMonPalette_Egg[] = INCBIN_U32("graphics/pokemon/egg/normal.gbapal.lz");
const u8 gMonIcon_Egg[] = INCBIN_U8("graphics/pokemon/egg/icon.4bpp");

// Boneka 

const u32 gMonFrontPic_CReimu98[]     = INCBIN_U32("graphics/boneka/reimu/chibi98/front.4bpp.lz");
const u32 gMonBackPic_CReimu98[]      = INCBIN_U32("graphics/boneka/reimu/chibi98/back.4bpp.lz");
const u32 gMonPalette_CReimu98[]      = INCBIN_U32("graphics/boneka/reimu/chibi98/normal.gbapal.lz");
const u32 gMonShinyPalette_CReimu98[] = INCBIN_U32("graphics/boneka/reimu/chibi98/shiny.gbapal.lz");
const u8 gMonIcon_CReimu98[]          = INCBIN_U8 ("graphics/boneka/reimu/chibi98/icon.4bpp");
const u8 gMonFootprint_CReimu98[]     = INCBIN_U8 ("graphics/boneka/reimu/footprint.1bpp");

const u32 gMonFrontPic_Reimu98[]     = INCBIN_U32("graphics/boneka/reimu/evolved98/front.4bpp.lz");
const u32 gMonBackPic_Reimu98[]      = INCBIN_U32("graphics/boneka/reimu/evolved98/back.4bpp.lz");
const u32 gMonPalette_Reimu98[]      = INCBIN_U32("graphics/boneka/reimu/evolved98/normal.gbapal.lz");
const u32 gMonShinyPalette_Reimu98[] = INCBIN_U32("graphics/boneka/reimu/evolved98/shiny.gbapal.lz");
const u8 gMonIcon_Reimu98[]          = INCBIN_U8 ("graphics/boneka/reimu/evolved98/icon.4bpp");
const u8 gMonFootprint_Reimu98[]     = INCBIN_U8 ("graphics/boneka/reimu/footprint.1bpp");

const u32 gMonFrontPic_CShingyoku[]     = INCBIN_U32("graphics/boneka/shingyoku/chibi/front.4bpp.lz");
const u32 gMonBackPic_CShingyoku[]      = INCBIN_U32("graphics/boneka/shingyoku/chibi/back.4bpp.lz");
const u32 gMonPalette_CShingyoku[]      = INCBIN_U32("graphics/boneka/shingyoku/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CShingyoku[] = INCBIN_U32("graphics/boneka/shingyoku/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CShingyoku[]          = INCBIN_U8 ("graphics/boneka/shingyoku/chibi/icon.4bpp");
const u8 gMonFootprint_CShingyoku[]     = INCBIN_U8 ("graphics/boneka/shingyoku/footprint.1bpp");

const u32 gMonFrontPic_ShingyokuO[]     = INCBIN_U32("graphics/boneka/shingyoku/orb/front.4bpp.lz");
const u32 gMonBackPic_ShingyokuO[]      = INCBIN_U32("graphics/boneka/shingyoku/orb/back.4bpp.lz");
const u32 gMonPalette_ShingyokuO[]      = INCBIN_U32("graphics/boneka/shingyoku/orb/normal.gbapal.lz");
const u32 gMonShinyPalette_ShingyokuO[] = INCBIN_U32("graphics/boneka/shingyoku/orb/shiny.gbapal.lz");
const u8 gMonIcon_ShingyokuO[]          = INCBIN_U8 ("graphics/boneka/shingyoku/orb/icon.4bpp");
const u8 gMonFootprint_ShingyokuO[]     = INCBIN_U8 ("graphics/boneka/shingyoku/footprint.1bpp");

const u32 gMonFrontPic_ShingyokuM[]     = INCBIN_U32("graphics/boneka/shingyoku/male/front.4bpp.lz");
const u32 gMonBackPic_ShingyokuM[]      = INCBIN_U32("graphics/boneka/shingyoku/male/back.4bpp.lz");
const u32 gMonPalette_ShingyokuM[]      = INCBIN_U32("graphics/boneka/shingyoku/male/normal.gbapal.lz");
const u32 gMonShinyPalette_ShingyokuM[] = INCBIN_U32("graphics/boneka/shingyoku/male/shiny.gbapal.lz");
const u8 gMonIcon_ShingyokuM[]          = INCBIN_U8 ("graphics/boneka/shingyoku/male/icon.4bpp");
const u8 gMonFootprint_ShingyokuM[]     = INCBIN_U8 ("graphics/boneka/shingyoku/footprint.1bpp");

const u32 gMonFrontPic_ShingyokuF[]     = INCBIN_U32("graphics/boneka/shingyoku/female/front.4bpp.lz");
const u32 gMonBackPic_ShingyokuF[]      = INCBIN_U32("graphics/boneka/shingyoku/female/back.4bpp.lz");
const u32 gMonPalette_ShingyokuF[]      = INCBIN_U32("graphics/boneka/shingyoku/female/normal.gbapal.lz");
const u32 gMonShinyPalette_ShingyokuF[] = INCBIN_U32("graphics/boneka/shingyoku/female/shiny.gbapal.lz");
const u8 gMonIcon_ShingyokuF[]          = INCBIN_U8 ("graphics/boneka/shingyoku/female/icon.4bpp");
const u8 gMonFootprint_ShingyokuF[]     = INCBIN_U8 ("graphics/boneka/shingyoku/footprint.1bpp");

const u32 gMonFrontPic_CYuugenMagan[]     = INCBIN_U32("graphics/boneka/yuugenmagan/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYuugenMagan[]      = INCBIN_U32("graphics/boneka/yuugenmagan/chibi/back.4bpp.lz");
const u32 gMonPalette_CYuugenMagan[]      = INCBIN_U32("graphics/boneka/yuugenmagan/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CYuugenMagan[] = INCBIN_U32("graphics/boneka/yuugenmagan/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CYuugenMagan[]          = INCBIN_U8 ("graphics/boneka/yuugenmagan/chibi/icon.4bpp");
const u8 gMonFootprint_CYuugenMagan[]     = INCBIN_U8 ("graphics/boneka/yuugenmagan/footprint.1bpp");

const u32 gMonFrontPic_YuugenMagan[]     = INCBIN_U32("graphics/boneka/yuugenmagan/evolved/front.4bpp.lz");
const u32 gMonBackPic_YuugenMagan[]      = INCBIN_U32("graphics/boneka/yuugenmagan/evolved/back.4bpp.lz");
const u32 gMonPalette_YuugenMagan[]      = INCBIN_U32("graphics/boneka/yuugenmagan/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_YuugenMagan[] = INCBIN_U32("graphics/boneka/yuugenmagan/evolved/shiny.gbapal.lz");
const u8 gMonIcon_YuugenMagan[]          = INCBIN_U8 ("graphics/boneka/yuugenmagan/evolved/icon.4bpp");
const u8 gMonFootprint_YuugenMagan[]     = INCBIN_U8 ("graphics/boneka/yuugenmagan/footprint.1bpp");

const u32 gMonFrontPic_CMima[]     = INCBIN_U32("graphics/boneka/mima/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMima[]      = INCBIN_U32("graphics/boneka/mima/chibi/back.4bpp.lz");
const u32 gMonPalette_CMima[]      = INCBIN_U32("graphics/boneka/mima/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CMima[] = INCBIN_U32("graphics/boneka/mima/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CMima[]          = INCBIN_U8 ("graphics/boneka/mima/chibi/icon.4bpp");
const u8 gMonFootprint_CMima[]     = INCBIN_U8 ("graphics/boneka/mima/footprint.1bpp");

const u32 gMonFrontPic_Mima[]     = INCBIN_U32("graphics/boneka/mima/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mima[]      = INCBIN_U32("graphics/boneka/mima/evolved/back.4bpp.lz");
const u32 gMonPalette_Mima[]      = INCBIN_U32("graphics/boneka/mima/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Mima[] = INCBIN_U32("graphics/boneka/mima/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Mima[]          = INCBIN_U8 ("graphics/boneka/mima/evolved/icon.4bpp");
const u8 gMonFootprint_Mima[]     = INCBIN_U8 ("graphics/boneka/mima/footprint.1bpp");

const u32 gMonFrontPic_CElis[]     = INCBIN_U32("graphics/boneka/elis/chibi/front.4bpp.lz");
const u32 gMonBackPic_CElis[]      = INCBIN_U32("graphics/boneka/elis/chibi/back.4bpp.lz");
const u32 gMonPalette_CElis[]      = INCBIN_U32("graphics/boneka/elis/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CElis[] = INCBIN_U32("graphics/boneka/elis/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CElis[]          = INCBIN_U8 ("graphics/boneka/elis/chibi/icon.4bpp");
const u8 gMonFootprint_CElis[]     = INCBIN_U8 ("graphics/boneka/elis/footprint.1bpp");

const u32 gMonFrontPic_Elis[]     = INCBIN_U32("graphics/boneka/elis/evolved/front.4bpp.lz");
const u32 gMonBackPic_Elis[]      = INCBIN_U32("graphics/boneka/elis/evolved/back.4bpp.lz");
const u32 gMonPalette_Elis[]      = INCBIN_U32("graphics/boneka/elis/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Elis[] = INCBIN_U32("graphics/boneka/elis/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Elis[]          = INCBIN_U8 ("graphics/boneka/elis/evolved/icon.4bpp");
const u8 gMonFootprint_Elis[]     = INCBIN_U8 ("graphics/boneka/elis/footprint.1bpp");

const u32 gMonFrontPic_CKikuri[]     = INCBIN_U32("graphics/boneka/kikuri/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKikuri[]      = INCBIN_U32("graphics/boneka/kikuri/chibi/back.4bpp.lz");
const u32 gMonPalette_CKikuri[]      = INCBIN_U32("graphics/boneka/kikuri/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CKikuri[] = INCBIN_U32("graphics/boneka/kikuri/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CKikuri[]          = INCBIN_U8 ("graphics/boneka/kikuri/chibi/icon.4bpp");
const u8 gMonFootprint_CKikuri[]     = INCBIN_U8 ("graphics/boneka/kikuri/footprint.1bpp");

const u32 gMonFrontPic_Kikuri[]     = INCBIN_U32("graphics/boneka/kikuri/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kikuri[]      = INCBIN_U32("graphics/boneka/kikuri/evolved/back.4bpp.lz");
const u32 gMonPalette_Kikuri[]      = INCBIN_U32("graphics/boneka/kikuri/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Kikuri[] = INCBIN_U32("graphics/boneka/kikuri/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Kikuri[]          = INCBIN_U8 ("graphics/boneka/kikuri/evolved/icon.4bpp");
const u8 gMonFootprint_Kikuri[]     = INCBIN_U8 ("graphics/boneka/kikuri/footprint.1bpp");

const u32 gMonFrontPic_CSariel[]     = INCBIN_U32("graphics/boneka/sariel/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSariel[]      = INCBIN_U32("graphics/boneka/sariel/chibi/back.4bpp.lz");
const u32 gMonPalette_CSariel[]      = INCBIN_U32("graphics/boneka/sariel/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CSariel[] = INCBIN_U32("graphics/boneka/sariel/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CSariel[]          = INCBIN_U8 ("graphics/boneka/sariel/chibi/icon.4bpp");
const u8 gMonFootprint_CSariel[]     = INCBIN_U8 ("graphics/boneka/sariel/footprint.1bpp");

const u32 gMonFrontPic_Sariel[]     = INCBIN_U32("graphics/boneka/sariel/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sariel[]      = INCBIN_U32("graphics/boneka/sariel/evolved/back.4bpp.lz");
const u32 gMonPalette_Sariel[]      = INCBIN_U32("graphics/boneka/sariel/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Sariel[] = INCBIN_U32("graphics/boneka/sariel/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Sariel[]          = INCBIN_U8 ("graphics/boneka/sariel/evolved/icon.4bpp");
const u8 gMonFootprint_Sariel[]     = INCBIN_U8 ("graphics/boneka/sariel/footprint.1bpp");

const u32 gMonFrontPic_SSariel[]     = INCBIN_U32("graphics/boneka/sariel/speed/front.4bpp.lz");
const u32 gMonBackPic_SSariel[]      = INCBIN_U32("graphics/boneka/sariel/speed/back.4bpp.lz");
const u32 gMonPalette_SSariel[]      = INCBIN_U32("graphics/boneka/sariel/speed/normal.gbapal.lz");
const u32 gMonShinyPalette_SSariel[] = INCBIN_U32("graphics/boneka/sariel/speed/shiny.gbapal.lz");
const u8 gMonIcon_SSariel[]          = INCBIN_U8 ("graphics/boneka/sariel/speed/icon.4bpp");
const u8 gMonFootprint_SSariel[]     = INCBIN_U8 ("graphics/boneka/sariel/footprint.1bpp");

const u32 gMonFrontPic_CKonngara[]     = INCBIN_U32("graphics/boneka/konngara/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKonngara[]      = INCBIN_U32("graphics/boneka/konngara/chibi/back.4bpp.lz");
const u32 gMonPalette_CKonngara[]      = INCBIN_U32("graphics/boneka/konngara/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CKonngara[] = INCBIN_U32("graphics/boneka/konngara/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CKonngara[]          = INCBIN_U8 ("graphics/boneka/konngara/chibi/icon.4bpp");
const u8 gMonFootprint_CKonngara[]     = INCBIN_U8 ("graphics/boneka/konngara/footprint.1bpp");

const u32 gMonFrontPic_Konngara[]     = INCBIN_U32("graphics/boneka/konngara/evolved/front.4bpp.lz");
const u32 gMonBackPic_Konngara[]      = INCBIN_U32("graphics/boneka/konngara/evolved/back.4bpp.lz");
const u32 gMonPalette_Konngara[]      = INCBIN_U32("graphics/boneka/konngara/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Konngara[] = INCBIN_U32("graphics/boneka/konngara/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Konngara[]          = INCBIN_U8 ("graphics/boneka/konngara/evolved/icon.4bpp");
const u8 gMonFootprint_Konngara[]     = INCBIN_U8 ("graphics/boneka/konngara/footprint.1bpp");

const u32 gMonFrontPic_CMarisa98[]     = INCBIN_U32("graphics/boneka/marisa/chibi98/front.4bpp.lz");
const u32 gMonBackPic_CMarisa98[]      = INCBIN_U32("graphics/boneka/marisa/chibi98/back.4bpp.lz");
const u32 gMonPalette_CMarisa98[]      = INCBIN_U32("graphics/boneka/marisa/chibi98/normal.gbapal.lz");
const u32 gMonShinyPalette_CMarisa98[] = INCBIN_U32("graphics/boneka/marisa/chibi98/shiny.gbapal.lz");
const u8 gMonIcon_CMarisa98[]          = INCBIN_U8 ("graphics/boneka/marisa/chibi98/icon.4bpp");
const u8 gMonFootprint_CMarisa98[]     = INCBIN_U8 ("graphics/boneka/marisa/footprint.1bpp");

const u32 gMonFrontPic_Marisa98[]     = INCBIN_U32("graphics/boneka/marisa/evolved98/front.4bpp.lz");
const u32 gMonBackPic_Marisa98[]      = INCBIN_U32("graphics/boneka/marisa/evolved98/back.4bpp.lz");
const u32 gMonPalette_Marisa98[]      = INCBIN_U32("graphics/boneka/marisa/evolved98/normal.gbapal.lz");
const u32 gMonShinyPalette_Marisa98[] = INCBIN_U32("graphics/boneka/marisa/evolved98/shiny.gbapal.lz");
const u8 gMonIcon_Marisa98[]          = INCBIN_U8 ("graphics/boneka/marisa/evolved98/icon.4bpp");
const u8 gMonFootprint_Marisa98[]     = INCBIN_U8 ("graphics/boneka/marisa/footprint.1bpp");

const u32 gMonFrontPic_Genjii[]     = INCBIN_U32("graphics/boneka/genjii/evolved/front.4bpp.lz");
const u32 gMonBackPic_Genjii[]      = INCBIN_U32("graphics/boneka/genjii/evolved/back.4bpp.lz");
const u32 gMonPalette_Genjii[]      = INCBIN_U32("graphics/boneka/genjii/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Genjii[] = INCBIN_U32("graphics/boneka/genjii/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Genjii[]          = INCBIN_U8 ("graphics/boneka/genjii/evolved/icon.4bpp");
const u8 gMonFootprint_Genjii[]     = INCBIN_U8 ("graphics/boneka/genjii/footprint.1bpp");

const u32 gMonFrontPic_CRika[]     = INCBIN_U32("graphics/boneka/rika/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRika[]      = INCBIN_U32("graphics/boneka/rika/chibi/back.4bpp.lz");
const u32 gMonPalette_CRika[]      = INCBIN_U32("graphics/boneka/rika/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CRika[] = INCBIN_U32("graphics/boneka/rika/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CRika[]          = INCBIN_U8 ("graphics/boneka/rika/chibi/icon.4bpp");
const u8 gMonFootprint_CRika[]     = INCBIN_U8 ("graphics/boneka/rika/footprint.1bpp");

const u32 gMonFrontPic_Rika[]     = INCBIN_U32("graphics/boneka/rika/evolved/front.4bpp.lz");
const u32 gMonBackPic_Rika[]      = INCBIN_U32("graphics/boneka/rika/evolved/back.4bpp.lz");
const u32 gMonPalette_Rika[]      = INCBIN_U32("graphics/boneka/rika/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Rika[] = INCBIN_U32("graphics/boneka/rika/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Rika[]          = INCBIN_U8 ("graphics/boneka/rika/evolved/icon.4bpp");
const u8 gMonFootprint_Rika[]     = INCBIN_U8 ("graphics/boneka/rika/footprint.1bpp");

const u32 gMonFrontPic_CMeira[]     = INCBIN_U32("graphics/boneka/meira/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMeira[]      = INCBIN_U32("graphics/boneka/meira/chibi/back.4bpp.lz");
const u32 gMonPalette_CMeira[]      = INCBIN_U32("graphics/boneka/meira/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CMeira[] = INCBIN_U32("graphics/boneka/meira/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CMeira[]          = INCBIN_U8 ("graphics/boneka/meira/chibi/icon.4bpp");
const u8 gMonFootprint_CMeira[]     = INCBIN_U8 ("graphics/boneka/meira/footprint.1bpp");

const u32 gMonFrontPic_Meira[]     = INCBIN_U32("graphics/boneka/meira/evolved/front.4bpp.lz");
const u32 gMonBackPic_Meira[]      = INCBIN_U32("graphics/boneka/meira/evolved/back.4bpp.lz");
const u32 gMonPalette_Meira[]      = INCBIN_U32("graphics/boneka/meira/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Meira[] = INCBIN_U32("graphics/boneka/meira/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Meira[]          = INCBIN_U8 ("graphics/boneka/meira/evolved/icon.4bpp");
const u8 gMonFootprint_Meira[]     = INCBIN_U8 ("graphics/boneka/meira/footprint.1bpp");

const u32 gMonFrontPic_MagicStones[]     = INCBIN_U32("graphics/boneka/magicstones/evolved/front.4bpp.lz");
const u32 gMonBackPic_MagicStones[]      = INCBIN_U32("graphics/boneka/magicstones/evolved/back.4bpp.lz");
const u32 gMonPalette_MagicStones[]      = INCBIN_U32("graphics/boneka/magicstones/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_MagicStones[] = INCBIN_U32("graphics/boneka/magicstones/evolved/shiny.gbapal.lz");
const u8 gMonIcon_MagicStones[]          = INCBIN_U8 ("graphics/boneka/magicstones/evolved/icon.4bpp");
const u8 gMonFootprint_MagicStones[]     = INCBIN_U8 ("graphics/boneka/magicstones/footprint.1bpp");

const u32 gMonFrontPic_CEllen[]     = INCBIN_U32("graphics/boneka/ellen/chibi/front.4bpp.lz");
const u32 gMonBackPic_CEllen[]      = INCBIN_U32("graphics/boneka/ellen/chibi/back.4bpp.lz");
const u32 gMonPalette_CEllen[]      = INCBIN_U32("graphics/boneka/ellen/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CEllen[] = INCBIN_U32("graphics/boneka/ellen/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CEllen[]          = INCBIN_U8 ("graphics/boneka/ellen/chibi/icon.4bpp");
const u8 gMonFootprint_CEllen[]     = INCBIN_U8 ("graphics/boneka/ellen/footprint.1bpp");

const u32 gMonFrontPic_Ellen[]     = INCBIN_U32("graphics/boneka/ellen/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ellen[]      = INCBIN_U32("graphics/boneka/ellen/evolved/back.4bpp.lz");
const u32 gMonPalette_Ellen[]      = INCBIN_U32("graphics/boneka/ellen/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Ellen[] = INCBIN_U32("graphics/boneka/ellen/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Ellen[]          = INCBIN_U8 ("graphics/boneka/ellen/evolved/icon.4bpp");
const u8 gMonFootprint_Ellen[]     = INCBIN_U8 ("graphics/boneka/ellen/footprint.1bpp");

const u32 gMonFrontPic_CKotohime[]     = INCBIN_U32("graphics/boneka/kotohime/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKotohime[]      = INCBIN_U32("graphics/boneka/kotohime/chibi/back.4bpp.lz");
const u32 gMonPalette_CKotohime[]      = INCBIN_U32("graphics/boneka/kotohime/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CKotohime[] = INCBIN_U32("graphics/boneka/kotohime/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CKotohime[]          = INCBIN_U8 ("graphics/boneka/kotohime/chibi/icon.4bpp");
const u8 gMonFootprint_CKotohime[]     = INCBIN_U8 ("graphics/boneka/kotohime/footprint.1bpp");

const u32 gMonFrontPic_Kotohime[]     = INCBIN_U32("graphics/boneka/kotohime/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kotohime[]      = INCBIN_U32("graphics/boneka/kotohime/evolved/back.4bpp.lz");
const u32 gMonPalette_Kotohime[]      = INCBIN_U32("graphics/boneka/kotohime/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Kotohime[] = INCBIN_U32("graphics/boneka/kotohime/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Kotohime[]          = INCBIN_U8 ("graphics/boneka/kotohime/evolved/icon.4bpp");
const u8 gMonFootprint_Kotohime[]     = INCBIN_U8 ("graphics/boneka/kotohime/footprint.1bpp");

const u32 gMonFrontPic_CKana[]     = INCBIN_U32("graphics/boneka/kana/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKana[]      = INCBIN_U32("graphics/boneka/kana/chibi/back.4bpp.lz");
const u32 gMonPalette_CKana[]      = INCBIN_U32("graphics/boneka/kana/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CKana[] = INCBIN_U32("graphics/boneka/kana/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CKana[]          = INCBIN_U8 ("graphics/boneka/kana/chibi/icon.4bpp");
const u8 gMonFootprint_CKana[]     = INCBIN_U8 ("graphics/boneka/kana/footprint.1bpp");

const u32 gMonFrontPic_Kana[]     = INCBIN_U32("graphics/boneka/kana/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kana[]      = INCBIN_U32("graphics/boneka/kana/evolved/back.4bpp.lz");
const u32 gMonPalette_Kana[]      = INCBIN_U32("graphics/boneka/kana/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Kana[] = INCBIN_U32("graphics/boneka/kana/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Kana[]          = INCBIN_U8 ("graphics/boneka/kana/evolved/icon.4bpp");
const u8 gMonFootprint_Kana[]     = INCBIN_U8 ("graphics/boneka/kana/footprint.1bpp");

const u32 gMonFrontPic_CRikako[]     = INCBIN_U32("graphics/boneka/rikako/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRikako[]      = INCBIN_U32("graphics/boneka/rikako/chibi/back.4bpp.lz");
const u32 gMonPalette_CRikako[]      = INCBIN_U32("graphics/boneka/rikako/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CRikako[] = INCBIN_U32("graphics/boneka/rikako/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CRikako[]          = INCBIN_U8 ("graphics/boneka/rikako/chibi/icon.4bpp");
const u8 gMonFootprint_CRikako[]     = INCBIN_U8 ("graphics/boneka/rikako/footprint.1bpp");

const u32 gMonFrontPic_Rikako[]     = INCBIN_U32("graphics/boneka/rikako/evolved/front.4bpp.lz");
const u32 gMonBackPic_Rikako[]      = INCBIN_U32("graphics/boneka/rikako/evolved/back.4bpp.lz");
const u32 gMonPalette_Rikako[]      = INCBIN_U32("graphics/boneka/rikako/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Rikako[] = INCBIN_U32("graphics/boneka/rikako/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Rikako[]          = INCBIN_U8 ("graphics/boneka/rikako/evolved/icon.4bpp");
const u8 gMonFootprint_Rikako[]     = INCBIN_U8 ("graphics/boneka/rikako/footprint.1bpp");

const u32 gMonFrontPic_CChiyuri[]     = INCBIN_U32("graphics/boneka/chiyuri/chibi/front.4bpp.lz");
const u32 gMonBackPic_CChiyuri[]      = INCBIN_U32("graphics/boneka/chiyuri/chibi/back.4bpp.lz");
const u32 gMonPalette_CChiyuri[]      = INCBIN_U32("graphics/boneka/chiyuri/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CChiyuri[] = INCBIN_U32("graphics/boneka/chiyuri/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CChiyuri[]          = INCBIN_U8 ("graphics/boneka/chiyuri/chibi/icon.4bpp");
const u8 gMonFootprint_CChiyuri[]     = INCBIN_U8 ("graphics/boneka/chiyuri/footprint.1bpp");

const u32 gMonFrontPic_Chiyuri[]     = INCBIN_U32("graphics/boneka/chiyuri/evolved/front.4bpp.lz");
const u32 gMonBackPic_Chiyuri[]      = INCBIN_U32("graphics/boneka/chiyuri/evolved/back.4bpp.lz");
const u32 gMonPalette_Chiyuri[]      = INCBIN_U32("graphics/boneka/chiyuri/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Chiyuri[] = INCBIN_U32("graphics/boneka/chiyuri/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Chiyuri[]          = INCBIN_U8 ("graphics/boneka/chiyuri/evolved/icon.4bpp");
const u8 gMonFootprint_Chiyuri[]     = INCBIN_U8 ("graphics/boneka/chiyuri/footprint.1bpp");

const u32 gMonFrontPic_CYumemi[]     = INCBIN_U32("graphics/boneka/yumemi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYumemi[]      = INCBIN_U32("graphics/boneka/yumemi/chibi/back.4bpp.lz");
const u32 gMonPalette_CYumemi[]      = INCBIN_U32("graphics/boneka/yumemi/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CYumemi[] = INCBIN_U32("graphics/boneka/yumemi/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CYumemi[]          = INCBIN_U8 ("graphics/boneka/yumemi/chibi/icon.4bpp");
const u8 gMonFootprint_CYumemi[]     = INCBIN_U8 ("graphics/boneka/yumemi/footprint.1bpp");

const u32 gMonFrontPic_Yumemi[]     = INCBIN_U32("graphics/boneka/yumemi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yumemi[]      = INCBIN_U32("graphics/boneka/yumemi/evolved/back.4bpp.lz");
const u32 gMonPalette_Yumemi[]      = INCBIN_U32("graphics/boneka/yumemi/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Yumemi[] = INCBIN_U32("graphics/boneka/yumemi/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Yumemi[]          = INCBIN_U8 ("graphics/boneka/yumemi/evolved/icon.4bpp");
const u8 gMonFootprint_Yumemi[]     = INCBIN_U8 ("graphics/boneka/yumemi/footprint.1bpp");

const u32 gMonFrontPic_Ruukoto[]     = INCBIN_U32("graphics/boneka/ruukoto/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ruukoto[]      = INCBIN_U32("graphics/boneka/ruukoto/evolved/back.4bpp.lz");
const u32 gMonPalette_Ruukoto[]      = INCBIN_U32("graphics/boneka/ruukoto/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Ruukoto[] = INCBIN_U32("graphics/boneka/ruukoto/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Ruukoto[]          = INCBIN_U8 ("graphics/boneka/ruukoto/evolved/icon.4bpp");
const u8 gMonFootprint_Ruukoto[]     = INCBIN_U8 ("graphics/boneka/ruukoto/footprint.1bpp");

const u32 gMonFrontPic_Mimichan[]     = INCBIN_U32("graphics/boneka/mimichan/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mimichan[]      = INCBIN_U32("graphics/boneka/mimichan/evolved/back.4bpp.lz");
const u32 gMonPalette_Mimichan[]      = INCBIN_U32("graphics/boneka/mimichan/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Mimichan[] = INCBIN_U32("graphics/boneka/mimichan/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Mimichan[]          = INCBIN_U8 ("graphics/boneka/mimichan/evolved/icon.4bpp");
const u8 gMonFootprint_Mimichan[]     = INCBIN_U8 ("graphics/boneka/mimichan/footprint.1bpp");

const u32 gMonFrontPic_Fairy[]     = INCBIN_U32("graphics/boneka/fairy/chibi/front.4bpp.lz");
const u32 gMonBackPic_Fairy[]      = INCBIN_U32("graphics/boneka/fairy/chibi/back.4bpp.lz");
const u32 gMonPalette_Fairy[]      = INCBIN_U32("graphics/boneka/fairy/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_Fairy[] = INCBIN_U32("graphics/boneka/fairy/chibi/shiny.gbapal.lz");
const u8 gMonIcon_Fairy[]          = INCBIN_U8 ("graphics/boneka/fairy/chibi/icon.4bpp");
const u8 gMonFootprint_Fairy[]     = INCBIN_U8 ("graphics/boneka/fairy/footprint.1bpp");

const u32 gMonFrontPic_COrange[]     = INCBIN_U32("graphics/boneka/orange/chibi/front.4bpp.lz");
const u32 gMonBackPic_COrange[]      = INCBIN_U32("graphics/boneka/orange/chibi/back.4bpp.lz");
const u32 gMonPalette_COrange[]      = INCBIN_U32("graphics/boneka/orange/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_COrange[] = INCBIN_U32("graphics/boneka/orange/chibi/shiny.gbapal.lz");
const u8 gMonIcon_COrange[]          = INCBIN_U8 ("graphics/boneka/orange/chibi/icon.4bpp");
const u8 gMonFootprint_COrange[]     = INCBIN_U8 ("graphics/boneka/orange/footprint.1bpp");

const u32 gMonFrontPic_Orange[]     = INCBIN_U32("graphics/boneka/orange/evolved/front.4bpp.lz");
const u32 gMonBackPic_Orange[]      = INCBIN_U32("graphics/boneka/orange/evolved/back.4bpp.lz");
const u32 gMonPalette_Orange[]      = INCBIN_U32("graphics/boneka/orange/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Orange[] = INCBIN_U32("graphics/boneka/orange/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Orange[]          = INCBIN_U8 ("graphics/boneka/orange/evolved/icon.4bpp");
const u8 gMonFootprint_Orange[]     = INCBIN_U8 ("graphics/boneka/orange/footprint.1bpp");

const u32 gMonFrontPic_CKurumi[]     = INCBIN_U32("graphics/boneka/kurumi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKurumi[]      = INCBIN_U32("graphics/boneka/kurumi/chibi/back.4bpp.lz");
const u32 gMonPalette_CKurumi[]      = INCBIN_U32("graphics/boneka/kurumi/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CKurumi[] = INCBIN_U32("graphics/boneka/kurumi/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CKurumi[]          = INCBIN_U8 ("graphics/boneka/kurumi/chibi/icon.4bpp");
const u8 gMonFootprint_CKurumi[]     = INCBIN_U8 ("graphics/boneka/kurumi/footprint.1bpp");

const u32 gMonFrontPic_Kurumi[]     = INCBIN_U32("graphics/boneka/kurumi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kurumi[]      = INCBIN_U32("graphics/boneka/kurumi/evolved/back.4bpp.lz");
const u32 gMonPalette_Kurumi[]      = INCBIN_U32("graphics/boneka/kurumi/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Kurumi[] = INCBIN_U32("graphics/boneka/kurumi/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Kurumi[]          = INCBIN_U8 ("graphics/boneka/kurumi/evolved/icon.4bpp");
const u8 gMonFootprint_Kurumi[]     = INCBIN_U8 ("graphics/boneka/kurumi/footprint.1bpp");

const u32 gMonFrontPic_CElly[]     = INCBIN_U32("graphics/boneka/elly/chibi/front.4bpp.lz");
const u32 gMonBackPic_CElly[]      = INCBIN_U32("graphics/boneka/elly/chibi/back.4bpp.lz");
const u32 gMonPalette_CElly[]      = INCBIN_U32("graphics/boneka/elly/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CElly[] = INCBIN_U32("graphics/boneka/elly/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CElly[]          = INCBIN_U8 ("graphics/boneka/elly/chibi/icon.4bpp");
const u8 gMonFootprint_CElly[]     = INCBIN_U8 ("graphics/boneka/elly/footprint.1bpp");

const u32 gMonFrontPic_Elly[]     = INCBIN_U32("graphics/boneka/elly/evolved/front.4bpp.lz");
const u32 gMonBackPic_Elly[]      = INCBIN_U32("graphics/boneka/elly/evolved/back.4bpp.lz");
const u32 gMonPalette_Elly[]      = INCBIN_U32("graphics/boneka/elly/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Elly[] = INCBIN_U32("graphics/boneka/elly/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Elly[]          = INCBIN_U8 ("graphics/boneka/elly/evolved/icon.4bpp");
const u8 gMonFootprint_Elly[]     = INCBIN_U8 ("graphics/boneka/elly/footprint.1bpp");

const u32 gMonFrontPic_CYuuka98[]     = INCBIN_U32("graphics/boneka/yuuka/chibi98/front.4bpp.lz");
const u32 gMonBackPic_CYuuka98[]      = INCBIN_U32("graphics/boneka/yuuka/chibi98/back.4bpp.lz");
const u32 gMonPalette_CYuuka98[]      = INCBIN_U32("graphics/boneka/yuuka/chibi98/normal.gbapal.lz");
const u32 gMonShinyPalette_CYuuka98[] = INCBIN_U32("graphics/boneka/yuuka/chibi98/shiny.gbapal.lz");
const u8 gMonIcon_CYuuka98[]          = INCBIN_U8 ("graphics/boneka/yuuka/chibi98/icon.4bpp");
const u8 gMonFootprint_CYuuka98[]     = INCBIN_U8 ("graphics/boneka/yuuka/footprint.1bpp");

const u32 gMonFrontPic_Yuuka98[]     = INCBIN_U32("graphics/boneka/yuuka/evolved98/front.4bpp.lz");
const u32 gMonBackPic_Yuuka98[]      = INCBIN_U32("graphics/boneka/yuuka/evolved98/back.4bpp.lz");
const u32 gMonPalette_Yuuka98[]      = INCBIN_U32("graphics/boneka/yuuka/evolved98/normal.gbapal.lz");
const u32 gMonShinyPalette_Yuuka98[] = INCBIN_U32("graphics/boneka/yuuka/evolved98/shiny.gbapal.lz");
const u8 gMonIcon_Yuuka98[]          = INCBIN_U8 ("graphics/boneka/yuuka/evolved98/icon.4bpp");
const u8 gMonFootprint_Yuuka98[]     = INCBIN_U8 ("graphics/boneka/yuuka/footprint.1bpp");

const u32 gMonFrontPic_AYuuka98[]     = INCBIN_U32("graphics/boneka/yuuka/attack98/front.4bpp.lz");
const u32 gMonBackPic_AYuuka98[]      = INCBIN_U32("graphics/boneka/yuuka/attack98/back.4bpp.lz");
const u32 gMonPalette_AYuuka98[]      = INCBIN_U32("graphics/boneka/yuuka/attack98/normal.gbapal.lz");
const u32 gMonShinyPalette_AYuuka98[] = INCBIN_U32("graphics/boneka/yuuka/attack98/shiny.gbapal.lz");
const u8 gMonIcon_AYuuka98[]          = INCBIN_U8 ("graphics/boneka/yuuka/attack98/icon.4bpp");
const u8 gMonFootprint_AYuuka98[]     = INCBIN_U8 ("graphics/boneka/yuuka/footprint.1bpp");

const u32 gMonFrontPic_CMugetsu[]     = INCBIN_U32("graphics/boneka/mugetsu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMugetsu[]      = INCBIN_U32("graphics/boneka/mugetsu/chibi/back.4bpp.lz");
const u32 gMonPalette_CMugetsu[]      = INCBIN_U32("graphics/boneka/mugetsu/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CMugetsu[] = INCBIN_U32("graphics/boneka/mugetsu/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CMugetsu[]          = INCBIN_U8 ("graphics/boneka/mugetsu/chibi/icon.4bpp");
const u8 gMonFootprint_CMugetsu[]     = INCBIN_U8 ("graphics/boneka/mugetsu/footprint.1bpp");

const u32 gMonFrontPic_Mugetsu[]     = INCBIN_U32("graphics/boneka/mugetsu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mugetsu[]      = INCBIN_U32("graphics/boneka/mugetsu/evolved/back.4bpp.lz");
const u32 gMonPalette_Mugetsu[]      = INCBIN_U32("graphics/boneka/mugetsu/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Mugetsu[] = INCBIN_U32("graphics/boneka/mugetsu/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Mugetsu[]          = INCBIN_U8 ("graphics/boneka/mugetsu/evolved/icon.4bpp");
const u8 gMonFootprint_Mugetsu[]     = INCBIN_U8 ("graphics/boneka/mugetsu/footprint.1bpp");

const u32 gMonFrontPic_CGengetsu[]     = INCBIN_U32("graphics/boneka/gengetsu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CGengetsu[]      = INCBIN_U32("graphics/boneka/gengetsu/chibi/back.4bpp.lz");
const u32 gMonPalette_CGengetsu[]      = INCBIN_U32("graphics/boneka/gengetsu/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CGengetsu[] = INCBIN_U32("graphics/boneka/gengetsu/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CGengetsu[]          = INCBIN_U8 ("graphics/boneka/gengetsu/chibi/icon.4bpp");
const u8 gMonFootprint_CGengetsu[]     = INCBIN_U8 ("graphics/boneka/gengetsu/footprint.1bpp");

const u32 gMonFrontPic_Gengetsu[]     = INCBIN_U32("graphics/boneka/gengetsu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Gengetsu[]      = INCBIN_U32("graphics/boneka/gengetsu/evolved/back.4bpp.lz");
const u32 gMonPalette_Gengetsu[]      = INCBIN_U32("graphics/boneka/gengetsu/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Gengetsu[] = INCBIN_U32("graphics/boneka/gengetsu/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Gengetsu[]          = INCBIN_U8 ("graphics/boneka/gengetsu/evolved/icon.4bpp");
const u8 gMonFootprint_Gengetsu[]     = INCBIN_U8 ("graphics/boneka/gengetsu/footprint.1bpp");

const u32 gMonFrontPic_CAlice98[]     = INCBIN_U32("graphics/boneka/alice/chibi98/front.4bpp.lz");
const u32 gMonBackPic_CAlice98[]      = INCBIN_U32("graphics/boneka/alice/chibi98/back.4bpp.lz");
const u32 gMonPalette_CAlice98[]      = INCBIN_U32("graphics/boneka/alice/chibi98/normal.gbapal.lz");
const u32 gMonShinyPalette_CAlice98[] = INCBIN_U32("graphics/boneka/alice/chibi98/shiny.gbapal.lz");
const u8 gMonIcon_CAlice98[]          = INCBIN_U8 ("graphics/boneka/alice/chibi98/icon.4bpp");
const u8 gMonFootprint_CAlice98[]     = INCBIN_U8 ("graphics/boneka/alice/footprint.1bpp");

const u32 gMonFrontPic_Alice98[]     = INCBIN_U32("graphics/boneka/alice/evolved98/front.4bpp.lz");
const u32 gMonBackPic_Alice98[]      = INCBIN_U32("graphics/boneka/alice/evolved98/back.4bpp.lz");
const u32 gMonPalette_Alice98[]      = INCBIN_U32("graphics/boneka/alice/evolved98/normal.gbapal.lz");
const u32 gMonShinyPalette_Alice98[] = INCBIN_U32("graphics/boneka/alice/evolved98/shiny.gbapal.lz");
const u8 gMonIcon_Alice98[]          = INCBIN_U8 ("graphics/boneka/alice/evolved98/icon.4bpp");
const u8 gMonFootprint_Alice98[]     = INCBIN_U8 ("graphics/boneka/alice/footprint.1bpp");

const u32 gMonFrontPic_CSara[]     = INCBIN_U32("graphics/boneka/sara/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSara[]      = INCBIN_U32("graphics/boneka/sara/chibi/back.4bpp.lz");
const u32 gMonPalette_CSara[]      = INCBIN_U32("graphics/boneka/sara/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CSara[] = INCBIN_U32("graphics/boneka/sara/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CSara[]          = INCBIN_U8 ("graphics/boneka/sara/chibi/icon.4bpp");
const u8 gMonFootprint_CSara[]     = INCBIN_U8 ("graphics/boneka/sara/footprint.1bpp");

const u32 gMonFrontPic_Sara[]     = INCBIN_U32("graphics/boneka/sara/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sara[]      = INCBIN_U32("graphics/boneka/sara/evolved/back.4bpp.lz");
const u32 gMonPalette_Sara[]      = INCBIN_U32("graphics/boneka/sara/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Sara[] = INCBIN_U32("graphics/boneka/sara/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Sara[]          = INCBIN_U8 ("graphics/boneka/sara/evolved/icon.4bpp");
const u8 gMonFootprint_Sara[]     = INCBIN_U8 ("graphics/boneka/sara/footprint.1bpp");

const u32 gMonFrontPic_CLuize[]     = INCBIN_U32("graphics/boneka/luize/chibi/front.4bpp.lz");
const u32 gMonBackPic_CLuize[]      = INCBIN_U32("graphics/boneka/luize/chibi/back.4bpp.lz");
const u32 gMonPalette_CLuize[]      = INCBIN_U32("graphics/boneka/luize/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CLuize[] = INCBIN_U32("graphics/boneka/luize/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CLuize[]          = INCBIN_U8 ("graphics/boneka/luize/chibi/icon.4bpp");
const u8 gMonFootprint_CLuize[]     = INCBIN_U8 ("graphics/boneka/luize/footprint.1bpp");

const u32 gMonFrontPic_Luize[]     = INCBIN_U32("graphics/boneka/luize/evolved/front.4bpp.lz");
const u32 gMonBackPic_Luize[]      = INCBIN_U32("graphics/boneka/luize/evolved/back.4bpp.lz");
const u32 gMonPalette_Luize[]      = INCBIN_U32("graphics/boneka/luize/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Luize[] = INCBIN_U32("graphics/boneka/luize/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Luize[]          = INCBIN_U8 ("graphics/boneka/luize/evolved/icon.4bpp");
const u8 gMonFootprint_Luize[]     = INCBIN_U8 ("graphics/boneka/luize/footprint.1bpp");

const u32 gMonFrontPic_CYuki[]     = INCBIN_U32("graphics/boneka/yuki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYuki[]      = INCBIN_U32("graphics/boneka/yuki/chibi/back.4bpp.lz");
const u32 gMonPalette_CYuki[]      = INCBIN_U32("graphics/boneka/yuki/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CYuki[] = INCBIN_U32("graphics/boneka/yuki/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CYuki[]          = INCBIN_U8 ("graphics/boneka/yuki/chibi/icon.4bpp");
const u8 gMonFootprint_CYuki[]     = INCBIN_U8 ("graphics/boneka/yuki/footprint.1bpp");

const u32 gMonFrontPic_Yuki[]     = INCBIN_U32("graphics/boneka/yuki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yuki[]      = INCBIN_U32("graphics/boneka/yuki/evolved/back.4bpp.lz");
const u32 gMonPalette_Yuki[]      = INCBIN_U32("graphics/boneka/yuki/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Yuki[] = INCBIN_U32("graphics/boneka/yuki/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Yuki[]          = INCBIN_U8 ("graphics/boneka/yuki/evolved/icon.4bpp");
const u8 gMonFootprint_Yuki[]     = INCBIN_U8 ("graphics/boneka/yuki/footprint.1bpp");

const u32 gMonFrontPic_CMai[]     = INCBIN_U32("graphics/boneka/mai/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMai[]      = INCBIN_U32("graphics/boneka/mai/chibi/back.4bpp.lz");
const u32 gMonPalette_CMai[]      = INCBIN_U32("graphics/boneka/mai/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CMai[] = INCBIN_U32("graphics/boneka/mai/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CMai[]          = INCBIN_U8 ("graphics/boneka/mai/chibi/icon.4bpp");
const u8 gMonFootprint_CMai[]     = INCBIN_U8 ("graphics/boneka/mai/footprint.1bpp");

const u32 gMonFrontPic_Mai[]     = INCBIN_U32("graphics/boneka/mai/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mai[]      = INCBIN_U32("graphics/boneka/mai/evolved/back.4bpp.lz");
const u32 gMonPalette_Mai[]      = INCBIN_U32("graphics/boneka/mai/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Mai[] = INCBIN_U32("graphics/boneka/mai/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Mai[]          = INCBIN_U8 ("graphics/boneka/mai/evolved/icon.4bpp");
const u8 gMonFootprint_Mai[]     = INCBIN_U8 ("graphics/boneka/mai/footprint.1bpp");

const u32 gMonFrontPic_CYumeko[]     = INCBIN_U32("graphics/boneka/yumeko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYumeko[]      = INCBIN_U32("graphics/boneka/yumeko/chibi/back.4bpp.lz");
const u32 gMonPalette_CYumeko[]      = INCBIN_U32("graphics/boneka/yumeko/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CYumeko[] = INCBIN_U32("graphics/boneka/yumeko/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CYumeko[]          = INCBIN_U8 ("graphics/boneka/yumeko/chibi/icon.4bpp");
const u8 gMonFootprint_CYumeko[]     = INCBIN_U8 ("graphics/boneka/yumeko/footprint.1bpp");

const u32 gMonFrontPic_Yumeko[]     = INCBIN_U32("graphics/boneka/yumeko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yumeko[]      = INCBIN_U32("graphics/boneka/yumeko/evolved/back.4bpp.lz");
const u32 gMonPalette_Yumeko[]      = INCBIN_U32("graphics/boneka/yumeko/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Yumeko[] = INCBIN_U32("graphics/boneka/yumeko/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Yumeko[]          = INCBIN_U8 ("graphics/boneka/yumeko/evolved/icon.4bpp");
const u8 gMonFootprint_Yumeko[]     = INCBIN_U8 ("graphics/boneka/yumeko/footprint.1bpp");

const u32 gMonFrontPic_CShinki[]     = INCBIN_U32("graphics/boneka/shinki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CShinki[]      = INCBIN_U32("graphics/boneka/shinki/chibi/back.4bpp.lz");
const u32 gMonPalette_CShinki[]      = INCBIN_U32("graphics/boneka/shinki/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CShinki[] = INCBIN_U32("graphics/boneka/shinki/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CShinki[]          = INCBIN_U8 ("graphics/boneka/shinki/chibi/icon.4bpp");
const u8 gMonFootprint_CShinki[]     = INCBIN_U8 ("graphics/boneka/shinki/footprint.1bpp");

const u32 gMonFrontPic_Shinki[]     = INCBIN_U32("graphics/boneka/shinki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Shinki[]      = INCBIN_U32("graphics/boneka/shinki/evolved/back.4bpp.lz");
const u32 gMonPalette_Shinki[]      = INCBIN_U32("graphics/boneka/shinki/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Shinki[] = INCBIN_U32("graphics/boneka/shinki/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Shinki[]          = INCBIN_U8 ("graphics/boneka/shinki/evolved/icon.4bpp");
const u8 gMonFootprint_Shinki[]     = INCBIN_U8 ("graphics/boneka/shinki/footprint.1bpp");

const u32 gMonFrontPic_CDaiyousei[]     = INCBIN_U32("graphics/boneka/daiyousei/chibi/front.4bpp.lz");
const u32 gMonBackPic_CDaiyousei[]      = INCBIN_U32("graphics/boneka/daiyousei/chibi/back.4bpp.lz");
const u32 gMonPalette_CDaiyousei[]      = INCBIN_U32("graphics/boneka/daiyousei/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CDaiyousei[] = INCBIN_U32("graphics/boneka/daiyousei/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CDaiyousei[]          = INCBIN_U8 ("graphics/boneka/daiyousei/chibi/icon.4bpp");
const u8 gMonFootprint_CDaiyousei[]     = INCBIN_U8 ("graphics/boneka/daiyousei/footprint.1bpp");

const u32 gMonFrontPic_Daiyousei[]     = INCBIN_U32("graphics/boneka/daiyousei/evolved/front.4bpp.lz");
const u32 gMonBackPic_Daiyousei[]      = INCBIN_U32("graphics/boneka/daiyousei/evolved/back.4bpp.lz");
const u32 gMonPalette_Daiyousei[]      = INCBIN_U32("graphics/boneka/daiyousei/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Daiyousei[] = INCBIN_U32("graphics/boneka/daiyousei/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Daiyousei[]          = INCBIN_U8 ("graphics/boneka/daiyousei/evolved/icon.4bpp");
const u8 gMonFootprint_Daiyousei[]     = INCBIN_U8 ("graphics/boneka/daiyousei/footprint.1bpp");

const u32 gMonFrontPic_CReimu[]     = INCBIN_U32("graphics/boneka/reimu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CReimu[]      = INCBIN_U32("graphics/boneka/reimu/chibi/back.4bpp.lz");
const u32 gMonPalette_CReimu[]      = INCBIN_U32("graphics/boneka/reimu/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CReimu[] = INCBIN_U32("graphics/boneka/reimu/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CReimu[]          = INCBIN_U8 ("graphics/boneka/reimu/chibi/icon.4bpp");
const u8 gMonFootprint_CReimu[]     = INCBIN_U8 ("graphics/boneka/reimu/footprint.1bpp");

const u32 gMonFrontPic_Reimu[]     = INCBIN_U32("graphics/boneka/reimu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Reimu[]      = INCBIN_U32("graphics/boneka/reimu/evolved/back.4bpp.lz");
const u32 gMonPalette_Reimu[]      = INCBIN_U32("graphics/boneka/reimu/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Reimu[] = INCBIN_U32("graphics/boneka/reimu/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Reimu[]          = INCBIN_U8 ("graphics/boneka/reimu/evolved/icon.4bpp");
const u8 gMonFootprint_Reimu[]     = INCBIN_U8 ("graphics/boneka/reimu/footprint.1bpp");

const u32 gMonFrontPic_AReimu[]     = INCBIN_U32("graphics/boneka/reimu/attack/front.4bpp.lz");
const u32 gMonBackPic_AReimu[]      = INCBIN_U32("graphics/boneka/reimu/attack/back.4bpp.lz");
const u32 gMonPalette_AReimu[]      = INCBIN_U32("graphics/boneka/reimu/attack/normal.gbapal.lz");
const u32 gMonShinyPalette_AReimu[] = INCBIN_U32("graphics/boneka/reimu/attack/shiny.gbapal.lz");
const u8 gMonIcon_AReimu[]          = INCBIN_U8 ("graphics/boneka/reimu/attack/icon.4bpp");
const u8 gMonFootprint_AReimu[]     = INCBIN_U8 ("graphics/boneka/reimu/footprint.1bpp");

const u32 gMonFrontPic_DReimu[]     = INCBIN_U32("graphics/boneka/reimu/defense/front.4bpp.lz");
const u32 gMonBackPic_DReimu[]      = INCBIN_U32("graphics/boneka/reimu/defense/back.4bpp.lz");
const u32 gMonPalette_DReimu[]      = INCBIN_U32("graphics/boneka/reimu/defense/normal.gbapal.lz");
const u32 gMonShinyPalette_DReimu[] = INCBIN_U32("graphics/boneka/reimu/defense/shiny.gbapal.lz");
const u8 gMonIcon_DReimu[]          = INCBIN_U8 ("graphics/boneka/reimu/defense/icon.4bpp");
const u8 gMonFootprint_DReimu[]     = INCBIN_U8 ("graphics/boneka/reimu/footprint.1bpp");

const u32 gMonFrontPic_CMarisa[]     = INCBIN_U32("graphics/boneka/marisa/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMarisa[]      = INCBIN_U32("graphics/boneka/marisa/chibi/back.4bpp.lz");
const u32 gMonPalette_CMarisa[]      = INCBIN_U32("graphics/boneka/marisa/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CMarisa[] = INCBIN_U32("graphics/boneka/marisa/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CMarisa[]          = INCBIN_U8 ("graphics/boneka/marisa/chibi/icon.4bpp");
const u8 gMonFootprint_CMarisa[]     = INCBIN_U8 ("graphics/boneka/marisa/footprint.1bpp");

const u32 gMonFrontPic_Marisa[]     = INCBIN_U32("graphics/boneka/marisa/evolved/front.4bpp.lz");
const u32 gMonBackPic_Marisa[]      = INCBIN_U32("graphics/boneka/marisa/evolved/back.4bpp.lz");
const u32 gMonPalette_Marisa[]      = INCBIN_U32("graphics/boneka/marisa/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Marisa[] = INCBIN_U32("graphics/boneka/marisa/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Marisa[]          = INCBIN_U8 ("graphics/boneka/marisa/evolved/icon.4bpp");
const u8 gMonFootprint_Marisa[]     = INCBIN_U8 ("graphics/boneka/marisa/footprint.1bpp");

const u32 gMonFrontPic_AMarisa[]     = INCBIN_U32("graphics/boneka/marisa/attack/front.4bpp.lz");
const u32 gMonBackPic_AMarisa[]      = INCBIN_U32("graphics/boneka/marisa/attack/back.4bpp.lz");
const u32 gMonPalette_AMarisa[]      = INCBIN_U32("graphics/boneka/marisa/attack/normal.gbapal.lz");
const u32 gMonShinyPalette_AMarisa[] = INCBIN_U32("graphics/boneka/marisa/attack/shiny.gbapal.lz");
const u8 gMonIcon_AMarisa[]          = INCBIN_U8 ("graphics/boneka/marisa/attack/icon.4bpp");
const u8 gMonFootprint_AMarisa[]     = INCBIN_U8 ("graphics/boneka/marisa/footprint.1bpp");

const u32 gMonFrontPic_SMarisa[]     = INCBIN_U32("graphics/boneka/marisa/speed/front.4bpp.lz");
const u32 gMonBackPic_SMarisa[]      = INCBIN_U32("graphics/boneka/marisa/speed/back.4bpp.lz");
const u32 gMonPalette_SMarisa[]      = INCBIN_U32("graphics/boneka/marisa/speed/normal.gbapal.lz");
const u32 gMonShinyPalette_SMarisa[] = INCBIN_U32("graphics/boneka/marisa/speed/shiny.gbapal.lz");
const u8 gMonIcon_SMarisa[]          = INCBIN_U8 ("graphics/boneka/marisa/speed/icon.4bpp");
const u8 gMonFootprint_SMarisa[]     = INCBIN_U8 ("graphics/boneka/marisa/footprint.1bpp");

const u32 gMonFrontPic_AdMarisa[]     = INCBIN_U32("graphics/boneka/marisa/advent/front.4bpp.lz");
const u32 gMonBackPic_AdMarisa[]      = INCBIN_U32("graphics/boneka/marisa/advent/back.4bpp.lz");
const u32 gMonPalette_AdMarisa[]      = INCBIN_U32("graphics/boneka/marisa/advent/normal.gbapal.lz");
const u32 gMonShinyPalette_AdMarisa[] = INCBIN_U32("graphics/boneka/marisa/advent/shiny.gbapal.lz");
const u8 gMonIcon_AdMarisa[]          = INCBIN_U8 ("graphics/boneka/marisa/advent/icon.4bpp");
const u8 gMonFootprint_AdMarisa[]     = INCBIN_U8 ("graphics/boneka/marisa/footprint.1bpp");

const u32 gMonFrontPic_ExMarisa[]     = INCBIN_U32("graphics/boneka/marisa/extra/front.4bpp.lz");
const u32 gMonBackPic_ExMarisa[]      = INCBIN_U32("graphics/boneka/marisa/extra/back.4bpp.lz");
const u32 gMonPalette_ExMarisa[]      = INCBIN_U32("graphics/boneka/marisa/extra/normal.gbapal.lz");
const u32 gMonShinyPalette_ExMarisa[] = INCBIN_U32("graphics/boneka/marisa/extra/shiny.gbapal.lz");
const u8 gMonIcon_ExMarisa[]          = INCBIN_U8 ("graphics/boneka/marisa/extra/icon.4bpp");
const u8 gMonFootprint_ExMarisa[]     = INCBIN_U8 ("graphics/boneka/marisa/footprint.1bpp");

const u32 gMonFrontPic_CRumia[]     = INCBIN_U32("graphics/boneka/rumia/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRumia[]      = INCBIN_U32("graphics/boneka/rumia/chibi/back.4bpp.lz");
const u32 gMonPalette_CRumia[]      = INCBIN_U32("graphics/boneka/rumia/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CRumia[] = INCBIN_U32("graphics/boneka/rumia/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CRumia[]          = INCBIN_U8 ("graphics/boneka/rumia/chibi/icon.4bpp");
const u8 gMonFootprint_CRumia[]     = INCBIN_U8 ("graphics/boneka/rumia/footprint.1bpp");

const u32 gMonFrontPic_Rumia[]     = INCBIN_U32("graphics/boneka/rumia/evolved/front.4bpp.lz");
const u32 gMonBackPic_Rumia[]      = INCBIN_U32("graphics/boneka/rumia/evolved/back.4bpp.lz");
const u32 gMonPalette_Rumia[]      = INCBIN_U32("graphics/boneka/rumia/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Rumia[] = INCBIN_U32("graphics/boneka/rumia/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Rumia[]          = INCBIN_U8 ("graphics/boneka/rumia/evolved/icon.4bpp");
const u8 gMonFootprint_Rumia[]     = INCBIN_U8 ("graphics/boneka/rumia/footprint.1bpp");

const u32 gMonFrontPic_ARumia[]     = INCBIN_U32("graphics/boneka/rumia/attack/front.4bpp.lz");
const u32 gMonBackPic_ARumia[]      = INCBIN_U32("graphics/boneka/rumia/attack/back.4bpp.lz");
const u32 gMonPalette_ARumia[]      = INCBIN_U32("graphics/boneka/rumia/attack/normal.gbapal.lz");
const u32 gMonShinyPalette_ARumia[] = INCBIN_U32("graphics/boneka/rumia/attack/shiny.gbapal.lz");
const u8 gMonIcon_ARumia[]          = INCBIN_U8 ("graphics/boneka/rumia/attack/icon.4bpp");
const u8 gMonFootprint_ARumia[]     = INCBIN_U8 ("graphics/boneka/rumia/footprint.1bpp");

const u32 gMonFrontPic_SRumia[]     = INCBIN_U32("graphics/boneka/rumia/speed/front.4bpp.lz");
const u32 gMonBackPic_SRumia[]      = INCBIN_U32("graphics/boneka/rumia/speed/back.4bpp.lz");
const u32 gMonPalette_SRumia[]      = INCBIN_U32("graphics/boneka/rumia/speed/normal.gbapal.lz");
const u32 gMonShinyPalette_SRumia[] = INCBIN_U32("graphics/boneka/rumia/speed/shiny.gbapal.lz");
const u8 gMonIcon_SRumia[]          = INCBIN_U8 ("graphics/boneka/rumia/speed/icon.4bpp");
const u8 gMonFootprint_SRumia[]     = INCBIN_U8 ("graphics/boneka/rumia/footprint.1bpp");

const u32 gMonFrontPic_ADaiyousei[]     = INCBIN_U32("graphics/boneka/daiyousei/attack/front.4bpp.lz");
const u32 gMonBackPic_ADaiyousei[]      = INCBIN_U32("graphics/boneka/daiyousei/attack/back.4bpp.lz");
const u32 gMonPalette_ADaiyousei[]      = INCBIN_U32("graphics/boneka/daiyousei/attack/normal.gbapal.lz");
const u32 gMonShinyPalette_ADaiyousei[] = INCBIN_U32("graphics/boneka/daiyousei/attack/shiny.gbapal.lz");
const u8 gMonIcon_ADaiyousei[]          = INCBIN_U8 ("graphics/boneka/daiyousei/attack/icon.4bpp");
const u8 gMonFootprint_ADaiyousei[]     = INCBIN_U8 ("graphics/boneka/daiyousei/footprint.1bpp");

const u32 gMonFrontPic_DDaiyousei[]     = INCBIN_U32("graphics/boneka/daiyousei/defense/front.4bpp.lz");
const u32 gMonBackPic_DDaiyousei[]      = INCBIN_U32("graphics/boneka/daiyousei/defense/back.4bpp.lz");
const u32 gMonPalette_DDaiyousei[]      = INCBIN_U32("graphics/boneka/daiyousei/defense/normal.gbapal.lz");
const u32 gMonShinyPalette_DDaiyousei[] = INCBIN_U32("graphics/boneka/daiyousei/defense/shiny.gbapal.lz");
const u8 gMonIcon_DDaiyousei[]          = INCBIN_U8 ("graphics/boneka/daiyousei/defense/icon.4bpp");
const u8 gMonFootprint_DDaiyousei[]     = INCBIN_U8 ("graphics/boneka/daiyousei/footprint.1bpp");

const u32 gMonFrontPic_CCirno[]     = INCBIN_U32("graphics/boneka/cirno/chibi/front.4bpp.lz");
const u32 gMonBackPic_CCirno[]      = INCBIN_U32("graphics/boneka/cirno/chibi/back.4bpp.lz");
const u32 gMonPalette_CCirno[]      = INCBIN_U32("graphics/boneka/cirno/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CCirno[] = INCBIN_U32("graphics/boneka/cirno/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CCirno[]          = INCBIN_U8 ("graphics/boneka/cirno/chibi/icon.4bpp");
const u8 gMonFootprint_CCirno[]     = INCBIN_U8 ("graphics/boneka/cirno/footprint.1bpp");

const u32 gMonFrontPic_Cirno[]     = INCBIN_U32("graphics/boneka/cirno/evolved/front.4bpp.lz");
const u32 gMonBackPic_Cirno[]      = INCBIN_U32("graphics/boneka/cirno/evolved/back.4bpp.lz");
const u32 gMonPalette_Cirno[]      = INCBIN_U32("graphics/boneka/cirno/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Cirno[] = INCBIN_U32("graphics/boneka/cirno/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Cirno[]          = INCBIN_U8 ("graphics/boneka/cirno/evolved/icon.4bpp");
const u8 gMonFootprint_Cirno[]     = INCBIN_U8 ("graphics/boneka/cirno/footprint.1bpp");

const u32 gMonFrontPic_SCirno[]     = INCBIN_U32("graphics/boneka/cirno/speed/front.4bpp.lz");
const u32 gMonBackPic_SCirno[]      = INCBIN_U32("graphics/boneka/cirno/speed/back.4bpp.lz");
const u32 gMonPalette_SCirno[]      = INCBIN_U32("graphics/boneka/cirno/speed/normal.gbapal.lz");
const u32 gMonShinyPalette_SCirno[] = INCBIN_U32("graphics/boneka/cirno/speed/shiny.gbapal.lz");
const u8 gMonIcon_SCirno[]          = INCBIN_U8 ("graphics/boneka/cirno/speed/icon.4bpp");
const u8 gMonFootprint_SCirno[]     = INCBIN_U8 ("graphics/boneka/cirno/footprint.1bpp");

const u32 gMonFrontPic_TCirno[]     = INCBIN_U32("graphics/boneka/cirno/technic/front.4bpp.lz");
const u32 gMonBackPic_TCirno[]      = INCBIN_U32("graphics/boneka/cirno/technic/back.4bpp.lz");
const u32 gMonPalette_TCirno[]      = INCBIN_U32("graphics/boneka/cirno/technic/normal.gbapal.lz");
const u32 gMonShinyPalette_TCirno[] = INCBIN_U32("graphics/boneka/cirno/technic/shiny.gbapal.lz");
const u8 gMonIcon_TCirno[]          = INCBIN_U8 ("graphics/boneka/cirno/technic/icon.4bpp");
const u8 gMonFootprint_TCirno[]     = INCBIN_U8 ("graphics/boneka/cirno/footprint.1bpp");

const u32 gMonFrontPic_AdCirno[]     = INCBIN_U32("graphics/boneka/cirno/advent/front.4bpp.lz");
const u32 gMonBackPic_AdCirno[]      = INCBIN_U32("graphics/boneka/cirno/advent/back.4bpp.lz");
const u32 gMonPalette_AdCirno[]      = INCBIN_U32("graphics/boneka/cirno/advent/normal.gbapal.lz");
const u32 gMonShinyPalette_AdCirno[] = INCBIN_U32("graphics/boneka/cirno/advent/shiny.gbapal.lz");
const u8 gMonIcon_AdCirno[]          = INCBIN_U8 ("graphics/boneka/cirno/advent/icon.4bpp");
const u8 gMonFootprint_AdCirno[]     = INCBIN_U8 ("graphics/boneka/cirno/footprint.1bpp");

const u32 gMonFrontPic_CMeiling[]     = INCBIN_U32("graphics/boneka/meiling/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMeiling[]      = INCBIN_U32("graphics/boneka/meiling/chibi/back.4bpp.lz");
const u32 gMonPalette_CMeiling[]      = INCBIN_U32("graphics/boneka/meiling/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CMeiling[] = INCBIN_U32("graphics/boneka/meiling/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CMeiling[]          = INCBIN_U8 ("graphics/boneka/meiling/chibi/icon.4bpp");
const u8 gMonFootprint_CMeiling[]     = INCBIN_U8 ("graphics/boneka/meiling/footprint.1bpp");

const u32 gMonFrontPic_Meiling[]     = INCBIN_U32("graphics/boneka/meiling/evolved/front.4bpp.lz");
const u32 gMonBackPic_Meiling[]      = INCBIN_U32("graphics/boneka/meiling/evolved/back.4bpp.lz");
const u32 gMonPalette_Meiling[]      = INCBIN_U32("graphics/boneka/meiling/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Meiling[] = INCBIN_U32("graphics/boneka/meiling/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Meiling[]          = INCBIN_U8 ("graphics/boneka/meiling/evolved/icon.4bpp");
const u8 gMonFootprint_Meiling[]     = INCBIN_U8 ("graphics/boneka/meiling/footprint.1bpp");

const u32 gMonFrontPic_DMeiling[]     = INCBIN_U32("graphics/boneka/meiling/defense/front.4bpp.lz");
const u32 gMonBackPic_DMeiling[]      = INCBIN_U32("graphics/boneka/meiling/defense/back.4bpp.lz");
const u32 gMonPalette_DMeiling[]      = INCBIN_U32("graphics/boneka/meiling/defense/normal.gbapal.lz");
const u32 gMonShinyPalette_DMeiling[] = INCBIN_U32("graphics/boneka/meiling/defense/shiny.gbapal.lz");
const u8 gMonIcon_DMeiling[]          = INCBIN_U8 ("graphics/boneka/meiling/defense/icon.4bpp");
const u8 gMonFootprint_DMeiling[]     = INCBIN_U8 ("graphics/boneka/meiling/footprint.1bpp");

const u32 gMonFrontPic_SMeiling[]     = INCBIN_U32("graphics/boneka/meiling/speed/front.4bpp.lz");
const u32 gMonBackPic_SMeiling[]      = INCBIN_U32("graphics/boneka/meiling/speed/back.4bpp.lz");
const u32 gMonPalette_SMeiling[]      = INCBIN_U32("graphics/boneka/meiling/speed/normal.gbapal.lz");
const u32 gMonShinyPalette_SMeiling[] = INCBIN_U32("graphics/boneka/meiling/speed/shiny.gbapal.lz");
const u8 gMonIcon_SMeiling[]          = INCBIN_U8 ("graphics/boneka/meiling/speed/icon.4bpp");
const u8 gMonFootprint_SMeiling[]     = INCBIN_U8 ("graphics/boneka/meiling/footprint.1bpp");

const u32 gMonFrontPic_AdMeiling[]     = INCBIN_U32("graphics/boneka/meiling/advent/front.4bpp.lz");
const u32 gMonBackPic_AdMeiling[]      = INCBIN_U32("graphics/boneka/meiling/advent/back.4bpp.lz");
const u32 gMonPalette_AdMeiling[]      = INCBIN_U32("graphics/boneka/meiling/advent/normal.gbapal.lz");
const u32 gMonShinyPalette_AdMeiling[] = INCBIN_U32("graphics/boneka/meiling/advent/shiny.gbapal.lz");
const u8 gMonIcon_AdMeiling[]          = INCBIN_U8 ("graphics/boneka/meiling/advent/icon.4bpp");
const u8 gMonFootprint_AdMeiling[]     = INCBIN_U8 ("graphics/boneka/meiling/footprint.1bpp");

const u32 gMonFrontPic_CKoakuma[]     = INCBIN_U32("graphics/boneka/koakuma/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKoakuma[]      = INCBIN_U32("graphics/boneka/koakuma/chibi/back.4bpp.lz");
const u32 gMonPalette_CKoakuma[]      = INCBIN_U32("graphics/boneka/koakuma/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CKoakuma[] = INCBIN_U32("graphics/boneka/koakuma/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CKoakuma[]          = INCBIN_U8 ("graphics/boneka/koakuma/chibi/icon.4bpp");
const u8 gMonFootprint_CKoakuma[]     = INCBIN_U8 ("graphics/boneka/koakuma/footprint.1bpp");

const u32 gMonFrontPic_Koakuma[]     = INCBIN_U32("graphics/boneka/koakuma/evolved/front.4bpp.lz");
const u32 gMonBackPic_Koakuma[]      = INCBIN_U32("graphics/boneka/koakuma/evolved/back.4bpp.lz");
const u32 gMonPalette_Koakuma[]      = INCBIN_U32("graphics/boneka/koakuma/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Koakuma[] = INCBIN_U32("graphics/boneka/koakuma/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Koakuma[]          = INCBIN_U8 ("graphics/boneka/koakuma/evolved/icon.4bpp");
const u8 gMonFootprint_Koakuma[]     = INCBIN_U8 ("graphics/boneka/koakuma/footprint.1bpp");

const u32 gMonFrontPic_HKoakuma[]     = INCBIN_U32("graphics/boneka/koakuma/helper/front.4bpp.lz");
const u32 gMonBackPic_HKoakuma[]      = INCBIN_U32("graphics/boneka/koakuma/helper/back.4bpp.lz");
const u32 gMonPalette_HKoakuma[]      = INCBIN_U32("graphics/boneka/koakuma/helper/normal.gbapal.lz");
const u32 gMonShinyPalette_HKoakuma[] = INCBIN_U32("graphics/boneka/koakuma/helper/shiny.gbapal.lz");
const u8 gMonIcon_HKoakuma[]          = INCBIN_U8 ("graphics/boneka/koakuma/helper/icon.4bpp");
const u8 gMonFootprint_HKoakuma[]     = INCBIN_U8 ("graphics/boneka/koakuma/footprint.1bpp");

const u32 gMonFrontPic_CPatchouli[]     = INCBIN_U32("graphics/boneka/patchouli/chibi/front.4bpp.lz");
const u32 gMonBackPic_CPatchouli[]      = INCBIN_U32("graphics/boneka/patchouli/chibi/back.4bpp.lz");
const u32 gMonPalette_CPatchouli[]      = INCBIN_U32("graphics/boneka/patchouli/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CPatchouli[] = INCBIN_U32("graphics/boneka/patchouli/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CPatchouli[]          = INCBIN_U8 ("graphics/boneka/patchouli/chibi/icon.4bpp");
const u8 gMonFootprint_CPatchouli[]     = INCBIN_U8 ("graphics/boneka/patchouli/footprint.1bpp");

const u32 gMonFrontPic_Patchouli[]     = INCBIN_U32("graphics/boneka/patchouli/evolved/front.4bpp.lz");
const u32 gMonBackPic_Patchouli[]      = INCBIN_U32("graphics/boneka/patchouli/evolved/back.4bpp.lz");
const u32 gMonPalette_Patchouli[]      = INCBIN_U32("graphics/boneka/patchouli/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Patchouli[] = INCBIN_U32("graphics/boneka/patchouli/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Patchouli[]          = INCBIN_U8 ("graphics/boneka/patchouli/evolved/icon.4bpp");
const u8 gMonFootprint_Patchouli[]     = INCBIN_U8 ("graphics/boneka/patchouli/footprint.1bpp");

const u32 gMonFrontPic_APatchouli[]     = INCBIN_U32("graphics/boneka/patchouli/attack/front.4bpp.lz");
const u32 gMonBackPic_APatchouli[]      = INCBIN_U32("graphics/boneka/patchouli/attack/back.4bpp.lz");
const u32 gMonPalette_APatchouli[]      = INCBIN_U32("graphics/boneka/patchouli/attack/normal.gbapal.lz");
const u32 gMonShinyPalette_APatchouli[] = INCBIN_U32("graphics/boneka/patchouli/attack/shiny.gbapal.lz");
const u8 gMonIcon_APatchouli[]          = INCBIN_U8 ("graphics/boneka/patchouli/attack/icon.4bpp");
const u8 gMonFootprint_APatchouli[]     = INCBIN_U8 ("graphics/boneka/patchouli/footprint.1bpp");

const u32 gMonFrontPic_DPatchouli[]     = INCBIN_U32("graphics/boneka/patchouli/defense/front.4bpp.lz");
const u32 gMonBackPic_DPatchouli[]      = INCBIN_U32("graphics/boneka/patchouli/defense/back.4bpp.lz");
const u32 gMonPalette_DPatchouli[]      = INCBIN_U32("graphics/boneka/patchouli/defense/normal.gbapal.lz");
const u32 gMonShinyPalette_DPatchouli[] = INCBIN_U32("graphics/boneka/patchouli/defense/shiny.gbapal.lz");
const u8 gMonIcon_DPatchouli[]          = INCBIN_U8 ("graphics/boneka/patchouli/defense/icon.4bpp");
const u8 gMonFootprint_DPatchouli[]     = INCBIN_U8 ("graphics/boneka/patchouli/footprint.1bpp");

const u32 gMonFrontPic_CSakuya[]     = INCBIN_U32("graphics/boneka/sakuya/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSakuya[]      = INCBIN_U32("graphics/boneka/sakuya/chibi/back.4bpp.lz");
const u32 gMonPalette_CSakuya[]      = INCBIN_U32("graphics/boneka/sakuya/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CSakuya[] = INCBIN_U32("graphics/boneka/sakuya/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CSakuya[]          = INCBIN_U8 ("graphics/boneka/sakuya/chibi/icon.4bpp");
const u8 gMonFootprint_CSakuya[]     = INCBIN_U8 ("graphics/boneka/sakuya/footprint.1bpp");

const u32 gMonFrontPic_Sakuya[]     = INCBIN_U32("graphics/boneka/sakuya/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sakuya[]      = INCBIN_U32("graphics/boneka/sakuya/evolved/back.4bpp.lz");
const u32 gMonPalette_Sakuya[]      = INCBIN_U32("graphics/boneka/sakuya/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Sakuya[] = INCBIN_U32("graphics/boneka/sakuya/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Sakuya[]          = INCBIN_U8 ("graphics/boneka/sakuya/evolved/icon.4bpp");
const u8 gMonFootprint_Sakuya[]     = INCBIN_U8 ("graphics/boneka/sakuya/footprint.1bpp");

const u32 gMonFrontPic_TSakuya[]     = INCBIN_U32("graphics/boneka/sakuya/technic/front.4bpp.lz");
const u32 gMonBackPic_TSakuya[]      = INCBIN_U32("graphics/boneka/sakuya/technic/back.4bpp.lz");
const u32 gMonPalette_TSakuya[]      = INCBIN_U32("graphics/boneka/sakuya/technic/normal.gbapal.lz");
const u32 gMonShinyPalette_TSakuya[] = INCBIN_U32("graphics/boneka/sakuya/technic/shiny.gbapal.lz");
const u8 gMonIcon_TSakuya[]          = INCBIN_U8 ("graphics/boneka/sakuya/technic/icon.4bpp");
const u8 gMonFootprint_TSakuya[]     = INCBIN_U8 ("graphics/boneka/sakuya/footprint.1bpp");

const u32 gMonFrontPic_HSakuya[]     = INCBIN_U32("graphics/boneka/sakuya/helper/front.4bpp.lz");
const u32 gMonBackPic_HSakuya[]      = INCBIN_U32("graphics/boneka/sakuya/helper/back.4bpp.lz");
const u32 gMonPalette_HSakuya[]      = INCBIN_U32("graphics/boneka/sakuya/helper/normal.gbapal.lz");
const u32 gMonShinyPalette_HSakuya[] = INCBIN_U32("graphics/boneka/sakuya/helper/shiny.gbapal.lz");
const u8 gMonIcon_HSakuya[]          = INCBIN_U8 ("graphics/boneka/sakuya/helper/icon.4bpp");
const u8 gMonFootprint_HSakuya[]     = INCBIN_U8 ("graphics/boneka/sakuya/footprint.1bpp");

const u32 gMonFrontPic_CRemilia[]     = INCBIN_U32("graphics/boneka/remilia/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRemilia[]      = INCBIN_U32("graphics/boneka/remilia/chibi/back.4bpp.lz");
const u32 gMonPalette_CRemilia[]      = INCBIN_U32("graphics/boneka/remilia/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CRemilia[] = INCBIN_U32("graphics/boneka/remilia/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CRemilia[]          = INCBIN_U8 ("graphics/boneka/remilia/chibi/icon.4bpp");
const u8 gMonFootprint_CRemilia[]     = INCBIN_U8 ("graphics/boneka/remilia/footprint.1bpp");

const u32 gMonFrontPic_Remilia[]     = INCBIN_U32("graphics/boneka/remilia/evolved/front.4bpp.lz");
const u32 gMonBackPic_Remilia[]      = INCBIN_U32("graphics/boneka/remilia/evolved/back.4bpp.lz");
const u32 gMonPalette_Remilia[]      = INCBIN_U32("graphics/boneka/remilia/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Remilia[] = INCBIN_U32("graphics/boneka/remilia/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Remilia[]          = INCBIN_U8 ("graphics/boneka/remilia/evolved/icon.4bpp");
const u8 gMonFootprint_Remilia[]     = INCBIN_U8 ("graphics/boneka/remilia/footprint.1bpp");

const u32 gMonFrontPic_ARemilia[]     = INCBIN_U32("graphics/boneka/remilia/attack/front.4bpp.lz");
const u32 gMonBackPic_ARemilia[]      = INCBIN_U32("graphics/boneka/remilia/attack/back.4bpp.lz");
const u32 gMonPalette_ARemilia[]      = INCBIN_U32("graphics/boneka/remilia/attack/normal.gbapal.lz");
const u32 gMonShinyPalette_ARemilia[] = INCBIN_U32("graphics/boneka/remilia/attack/shiny.gbapal.lz");
const u8 gMonIcon_ARemilia[]          = INCBIN_U8 ("graphics/boneka/remilia/attack/icon.4bpp");
const u8 gMonFootprint_ARemilia[]     = INCBIN_U8 ("graphics/boneka/remilia/footprint.1bpp");

const u32 gMonFrontPic_DRemilia[]     = INCBIN_U32("graphics/boneka/remilia/defense/front.4bpp.lz");
const u32 gMonBackPic_DRemilia[]      = INCBIN_U32("graphics/boneka/remilia/defense/back.4bpp.lz");
const u32 gMonPalette_DRemilia[]      = INCBIN_U32("graphics/boneka/remilia/defense/normal.gbapal.lz");
const u32 gMonShinyPalette_DRemilia[] = INCBIN_U32("graphics/boneka/remilia/defense/shiny.gbapal.lz");
const u8 gMonIcon_DRemilia[]          = INCBIN_U8 ("graphics/boneka/remilia/defense/icon.4bpp");
const u8 gMonFootprint_DRemilia[]     = INCBIN_U8 ("graphics/boneka/remilia/footprint.1bpp");

const u32 gMonFrontPic_CFlandre[]     = INCBIN_U32("graphics/boneka/flandre/chibi/front.4bpp.lz");
const u32 gMonBackPic_CFlandre[]      = INCBIN_U32("graphics/boneka/flandre/chibi/back.4bpp.lz");
const u32 gMonPalette_CFlandre[]      = INCBIN_U32("graphics/boneka/flandre/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CFlandre[] = INCBIN_U32("graphics/boneka/flandre/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CFlandre[]          = INCBIN_U8 ("graphics/boneka/flandre/chibi/icon.4bpp");
const u8 gMonFootprint_CFlandre[]     = INCBIN_U8 ("graphics/boneka/flandre/footprint.1bpp");

const u32 gMonFrontPic_Flandre[]     = INCBIN_U32("graphics/boneka/flandre/evolved/front.4bpp.lz");
const u32 gMonBackPic_Flandre[]      = INCBIN_U32("graphics/boneka/flandre/evolved/back.4bpp.lz");
const u32 gMonPalette_Flandre[]      = INCBIN_U32("graphics/boneka/flandre/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Flandre[] = INCBIN_U32("graphics/boneka/flandre/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Flandre[]          = INCBIN_U8 ("graphics/boneka/flandre/evolved/icon.4bpp");
const u8 gMonFootprint_Flandre[]     = INCBIN_U8 ("graphics/boneka/flandre/footprint.1bpp");

const u32 gMonFrontPic_AFlandre[]     = INCBIN_U32("graphics/boneka/flandre/attack/front.4bpp.lz");
const u32 gMonBackPic_AFlandre[]      = INCBIN_U32("graphics/boneka/flandre/attack/back.4bpp.lz");
const u32 gMonPalette_AFlandre[]      = INCBIN_U32("graphics/boneka/flandre/attack/normal.gbapal.lz");
const u32 gMonShinyPalette_AFlandre[] = INCBIN_U32("graphics/boneka/flandre/attack/shiny.gbapal.lz");
const u8 gMonIcon_AFlandre[]          = INCBIN_U8 ("graphics/boneka/flandre/attack/icon.4bpp");
const u8 gMonFootprint_AFlandre[]     = INCBIN_U8 ("graphics/boneka/flandre/footprint.1bpp");

const u32 gMonFrontPic_SFlandre[]     = INCBIN_U32("graphics/boneka/flandre/speed/front.4bpp.lz");
const u32 gMonBackPic_SFlandre[]      = INCBIN_U32("graphics/boneka/flandre/speed/back.4bpp.lz");
const u32 gMonPalette_SFlandre[]      = INCBIN_U32("graphics/boneka/flandre/speed/normal.gbapal.lz");
const u32 gMonShinyPalette_SFlandre[] = INCBIN_U32("graphics/boneka/flandre/speed/shiny.gbapal.lz");
const u8 gMonIcon_SFlandre[]          = INCBIN_U8 ("graphics/boneka/flandre/speed/icon.4bpp");
const u8 gMonFootprint_SFlandre[]     = INCBIN_U8 ("graphics/boneka/flandre/footprint.1bpp");

const u32 gMonFrontPic_CSatsuki[]     = INCBIN_U32("graphics/boneka/satsuki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSatsuki[]      = INCBIN_U32("graphics/boneka/satsuki/chibi/back.4bpp.lz");
const u32 gMonPalette_CSatsuki[]      = INCBIN_U32("graphics/boneka/satsuki/chibi/normal.gbapal.lz");
const u32 gMonShinyPalette_CSatsuki[] = INCBIN_U32("graphics/boneka/satsuki/chibi/shiny.gbapal.lz");
const u8 gMonIcon_CSatsuki[]          = INCBIN_U8 ("graphics/boneka/satsuki/chibi/icon.4bpp");
const u8 gMonFootprint_CSatsuki[]     = INCBIN_U8 ("graphics/boneka/satsuki/footprint.1bpp");

const u32 gMonFrontPic_Satsuki[]     = INCBIN_U32("graphics/boneka/satsuki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Satsuki[]      = INCBIN_U32("graphics/boneka/satsuki/evolved/back.4bpp.lz");
const u32 gMonPalette_Satsuki[]      = INCBIN_U32("graphics/boneka/satsuki/evolved/normal.gbapal.lz");
const u32 gMonShinyPalette_Satsuki[] = INCBIN_U32("graphics/boneka/satsuki/evolved/shiny.gbapal.lz");
const u8 gMonIcon_Satsuki[]          = INCBIN_U8 ("graphics/boneka/satsuki/evolved/icon.4bpp");
const u8 gMonFootprint_Satsuki[]     = INCBIN_U8 ("graphics/boneka/satsuki/footprint.1bpp");