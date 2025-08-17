// Normally, INCBIN_COMP acts like INCBIN_U32, but appends `.lz` to the file, compressing it;
// If not compressing overworld gfx, make this an alias to INCBIN_32, so gfx will *not* be compressed
#if !(OW_GFX_COMPRESS)
#define INCBIN_COMP INCBIN_U32
#endif

const u32 gMonFrontPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/anim_front.4bpp.lz");
const u32 gMonBackPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/back.4bpp.lz");
const u16 gMonPalette_CircledQuestionMark[] = INCBIN_U16("graphics/pokemon/question_mark/circled/normal.gbapal");
const u16 gMonShinyPalette_CircledQuestionMark[] = INCBIN_U16("graphics/pokemon/question_mark/circled/shiny.gbapal");
const u8 gMonIcon_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/icon.4bpp");
#if P_FOOTPRINTS
#if !P_GBA_STYLE_SPECIES_FOOTPRINTS
    const u8 gMonFootprint_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/footprint.1bpp");
#else
    const u8 gMonFootprint_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/footprint_gba.1bpp");
#endif //P_GBA_STYLE_SPECIES_FOOTPRINTS
#endif //P_FOOTPRINTS
const u32 gObjectEventPic_Substitute[] = INCBIN_COMP("graphics/pokemon/question_mark/overworld.4bpp");

const u32 gMonFrontPic_Egg[] = INCBIN_U32("graphics/pokemon/egg/anim_front.4bpp.lz");
const u16 gMonPalette_Egg[] = INCBIN_U16("graphics/pokemon/egg/normal.gbapal");
const u8 gMonIcon_Egg[] = INCBIN_U8("graphics/pokemon/egg/icon.4bpp");

const u32 gMonFrontPic_2hu[] = INCBIN_U32("graphics/puppets/2hu/unknown/front.4bpp.lz");
const u32 gMonBackPic_2hu[] = INCBIN_U32("graphics/puppets/2hu/unknown/back.4bpp.lz");
const u16 gMonPalette_2hu[] = INCBIN_U16("graphics/puppets/2hu/unknown/normal.gbapal");
const u16 gMonShinyPalette_2hu[] = INCBIN_U16("graphics/puppets/2hu/unknown/shiny.gbapal");
const u8 gMonIcon_2hu[] = INCBIN_U8("graphics/puppets/2hu/icon.4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_2hu[] = INCBIN_U8("graphics/puppets/2hu/footprint.1bpp");
#endif //P_FOOTPRINTS


const u32 gMonFrontPic_CReimu98[]     = INCBIN_U32("graphics/puppets/reimu/chibi98/front.4bpp.lz");
const u32 gMonBackPic_CReimu98[]      = INCBIN_U32("graphics/puppets/reimu/chibi98/back.4bpp.lz");
const u16 gMonPalette_CReimu98[]      = INCBIN_U16("graphics/puppets/reimu/chibi98/normal.gbapal");
const u16 gMonShinyPalette_CReimu98[] = INCBIN_U16("graphics/puppets/reimu/chibi98/shiny.gbapal");
const u8 gMonIcon_CReimu98[]          = INCBIN_U8 ("graphics/puppets/reimu/chibi98/icon.4bpp");
const u8 gMonFootprint_CReimu98[]     = INCBIN_U8 ("graphics/puppets/reimu/footprint.1bpp");

const u32 gMonFrontPic_Reimu98[]     = INCBIN_U32("graphics/puppets/reimu/evolved98/front.4bpp.lz");
const u32 gMonBackPic_Reimu98[]      = INCBIN_U32("graphics/puppets/reimu/evolved98/back.4bpp.lz");
const u16 gMonPalette_Reimu98[]      = INCBIN_U16("graphics/puppets/reimu/evolved98/normal.gbapal");
const u16 gMonShinyPalette_Reimu98[] = INCBIN_U16("graphics/puppets/reimu/evolved98/shiny.gbapal");
const u8 gMonIcon_Reimu98[]          = INCBIN_U8 ("graphics/puppets/reimu/evolved98/icon.4bpp");
const u8 gMonFootprint_Reimu98[]     = INCBIN_U8 ("graphics/puppets/reimu/footprint.1bpp");

const u32 gMonFrontPic_CShingyoku[]     = INCBIN_U32("graphics/puppets/shingyoku/chibi/front.4bpp.lz");
const u32 gMonBackPic_CShingyoku[]      = INCBIN_U32("graphics/puppets/shingyoku/chibi/back.4bpp.lz");
const u16 gMonPalette_CShingyoku[]      = INCBIN_U16("graphics/puppets/shingyoku/chibi/normal.gbapal");
const u16 gMonShinyPalette_CShingyoku[] = INCBIN_U16("graphics/puppets/shingyoku/chibi/shiny.gbapal");
const u8 gMonIcon_CShingyoku[]          = INCBIN_U8 ("graphics/puppets/shingyoku/chibi/icon.4bpp");
const u8 gMonFootprint_CShingyoku[]     = INCBIN_U8 ("graphics/puppets/shingyoku/footprint.1bpp");

const u32 gMonFrontPic_ShingyokuO[]     = INCBIN_U32("graphics/puppets/shingyoku/orb/front.4bpp.lz");
const u32 gMonBackPic_ShingyokuO[]      = INCBIN_U32("graphics/puppets/shingyoku/orb/back.4bpp.lz");
const u16 gMonPalette_ShingyokuO[]      = INCBIN_U16("graphics/puppets/shingyoku/orb/normal.gbapal");
const u16 gMonShinyPalette_ShingyokuO[] = INCBIN_U16("graphics/puppets/shingyoku/orb/shiny.gbapal");
const u8 gMonIcon_ShingyokuO[]          = INCBIN_U8 ("graphics/puppets/shingyoku/orb/icon.4bpp");
const u8 gMonFootprint_ShingyokuO[]     = INCBIN_U8 ("graphics/puppets/shingyoku/footprint.1bpp");

const u32 gMonFrontPic_ShingyokuM[]     = INCBIN_U32("graphics/puppets/shingyoku/male/front.4bpp.lz");
const u32 gMonBackPic_ShingyokuM[]      = INCBIN_U32("graphics/puppets/shingyoku/male/back.4bpp.lz");
const u16 gMonPalette_ShingyokuM[]      = INCBIN_U16("graphics/puppets/shingyoku/male/normal.gbapal");
const u16 gMonShinyPalette_ShingyokuM[] = INCBIN_U16("graphics/puppets/shingyoku/male/shiny.gbapal");
const u8 gMonIcon_ShingyokuM[]          = INCBIN_U8 ("graphics/puppets/shingyoku/male/icon.4bpp");
const u8 gMonFootprint_ShingyokuM[]     = INCBIN_U8 ("graphics/puppets/shingyoku/footprint.1bpp");

const u32 gMonFrontPic_ShingyokuF[]     = INCBIN_U32("graphics/puppets/shingyoku/female/front.4bpp.lz");
const u32 gMonBackPic_ShingyokuF[]      = INCBIN_U32("graphics/puppets/shingyoku/female/back.4bpp.lz");
const u16 gMonPalette_ShingyokuF[]      = INCBIN_U16("graphics/puppets/shingyoku/female/normal.gbapal");
const u16 gMonShinyPalette_ShingyokuF[] = INCBIN_U16("graphics/puppets/shingyoku/female/shiny.gbapal");
const u8 gMonIcon_ShingyokuF[]          = INCBIN_U8 ("graphics/puppets/shingyoku/female/icon.4bpp");
const u8 gMonFootprint_ShingyokuF[]     = INCBIN_U8 ("graphics/puppets/shingyoku/footprint.1bpp");

const u32 gMonFrontPic_CYuugenMagan[]     = INCBIN_U32("graphics/puppets/yuugenmagan/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYuugenMagan[]      = INCBIN_U32("graphics/puppets/yuugenmagan/chibi/back.4bpp.lz");
const u16 gMonPalette_CYuugenMagan[]      = INCBIN_U16("graphics/puppets/yuugenmagan/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYuugenMagan[] = INCBIN_U16("graphics/puppets/yuugenmagan/chibi/shiny.gbapal");
const u8 gMonIcon_CYuugenMagan[]          = INCBIN_U8 ("graphics/puppets/yuugenmagan/chibi/icon.4bpp");
const u8 gMonFootprint_CYuugenMagan[]     = INCBIN_U8 ("graphics/puppets/yuugenmagan/footprint.1bpp");

const u32 gMonFrontPic_YuugenMagan[]     = INCBIN_U32("graphics/puppets/yuugenmagan/evolved/front.4bpp.lz");
const u32 gMonBackPic_YuugenMagan[]      = INCBIN_U32("graphics/puppets/yuugenmagan/evolved/back.4bpp.lz");
const u16 gMonPalette_YuugenMagan[]      = INCBIN_U16("graphics/puppets/yuugenmagan/evolved/normal.gbapal");
const u16 gMonShinyPalette_YuugenMagan[] = INCBIN_U16("graphics/puppets/yuugenmagan/evolved/shiny.gbapal");
const u8 gMonIcon_YuugenMagan[]          = INCBIN_U8 ("graphics/puppets/yuugenmagan/evolved/icon.4bpp");
const u8 gMonFootprint_YuugenMagan[]     = INCBIN_U8 ("graphics/puppets/yuugenmagan/footprint.1bpp");

const u32 gMonFrontPic_CMima[]     = INCBIN_U32("graphics/puppets/mima/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMima[]      = INCBIN_U32("graphics/puppets/mima/chibi/back.4bpp.lz");
const u16 gMonPalette_CMima[]      = INCBIN_U16("graphics/puppets/mima/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMima[] = INCBIN_U16("graphics/puppets/mima/chibi/shiny.gbapal");
const u8 gMonIcon_CMima[]          = INCBIN_U8 ("graphics/puppets/mima/chibi/icon.4bpp");
const u8 gMonFootprint_CMima[]     = INCBIN_U8 ("graphics/puppets/mima/footprint.1bpp");

const u32 gMonFrontPic_Mima[]     = INCBIN_U32("graphics/puppets/mima/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mima[]      = INCBIN_U32("graphics/puppets/mima/evolved/back.4bpp.lz");
const u16 gMonPalette_Mima[]      = INCBIN_U16("graphics/puppets/mima/evolved/normal.gbapal");
const u16 gMonShinyPalette_Mima[] = INCBIN_U16("graphics/puppets/mima/evolved/shiny.gbapal");
const u8 gMonIcon_Mima[]          = INCBIN_U8 ("graphics/puppets/mima/evolved/icon.4bpp");
const u8 gMonFootprint_Mima[]     = INCBIN_U8 ("graphics/puppets/mima/footprint.1bpp");

const u32 gMonFrontPic_CElis[]     = INCBIN_U32("graphics/puppets/elis/chibi/front.4bpp.lz");
const u32 gMonBackPic_CElis[]      = INCBIN_U32("graphics/puppets/elis/chibi/back.4bpp.lz");
const u16 gMonPalette_CElis[]      = INCBIN_U16("graphics/puppets/elis/chibi/normal.gbapal");
const u16 gMonShinyPalette_CElis[] = INCBIN_U16("graphics/puppets/elis/chibi/shiny.gbapal");
const u8 gMonIcon_CElis[]          = INCBIN_U8 ("graphics/puppets/elis/chibi/icon.4bpp");
const u8 gMonFootprint_CElis[]     = INCBIN_U8 ("graphics/puppets/elis/footprint.1bpp");

const u32 gMonFrontPic_Elis[]     = INCBIN_U32("graphics/puppets/elis/evolved/front.4bpp.lz");
const u32 gMonBackPic_Elis[]      = INCBIN_U32("graphics/puppets/elis/evolved/back.4bpp.lz");
const u16 gMonPalette_Elis[]      = INCBIN_U16("graphics/puppets/elis/evolved/normal.gbapal");
const u16 gMonShinyPalette_Elis[] = INCBIN_U16("graphics/puppets/elis/evolved/shiny.gbapal");
const u8 gMonIcon_Elis[]          = INCBIN_U8 ("graphics/puppets/elis/evolved/icon.4bpp");
const u8 gMonFootprint_Elis[]     = INCBIN_U8 ("graphics/puppets/elis/footprint.1bpp");

const u32 gMonFrontPic_CKikuri[]     = INCBIN_U32("graphics/puppets/kikuri/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKikuri[]      = INCBIN_U32("graphics/puppets/kikuri/chibi/back.4bpp.lz");
const u16 gMonPalette_CKikuri[]      = INCBIN_U16("graphics/puppets/kikuri/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKikuri[] = INCBIN_U16("graphics/puppets/kikuri/chibi/shiny.gbapal");
const u8 gMonIcon_CKikuri[]          = INCBIN_U8 ("graphics/puppets/kikuri/chibi/icon.4bpp");
const u8 gMonFootprint_CKikuri[]     = INCBIN_U8 ("graphics/puppets/kikuri/footprint.1bpp");

const u32 gMonFrontPic_Kikuri[]     = INCBIN_U32("graphics/puppets/kikuri/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kikuri[]      = INCBIN_U32("graphics/puppets/kikuri/evolved/back.4bpp.lz");
const u16 gMonPalette_Kikuri[]      = INCBIN_U16("graphics/puppets/kikuri/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kikuri[] = INCBIN_U16("graphics/puppets/kikuri/evolved/shiny.gbapal");
const u8 gMonIcon_Kikuri[]          = INCBIN_U8 ("graphics/puppets/kikuri/evolved/icon.4bpp");
const u8 gMonFootprint_Kikuri[]     = INCBIN_U8 ("graphics/puppets/kikuri/footprint.1bpp");

const u32 gMonFrontPic_CSariel[]     = INCBIN_U32("graphics/puppets/sariel/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSariel[]      = INCBIN_U32("graphics/puppets/sariel/chibi/back.4bpp.lz");
const u16 gMonPalette_CSariel[]      = INCBIN_U16("graphics/puppets/sariel/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSariel[] = INCBIN_U16("graphics/puppets/sariel/chibi/shiny.gbapal");
const u8 gMonIcon_CSariel[]          = INCBIN_U8 ("graphics/puppets/sariel/chibi/icon.4bpp");
const u8 gMonFootprint_CSariel[]     = INCBIN_U8 ("graphics/puppets/sariel/footprint.1bpp");

const u32 gMonFrontPic_Sariel[]     = INCBIN_U32("graphics/puppets/sariel/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sariel[]      = INCBIN_U32("graphics/puppets/sariel/evolved/back.4bpp.lz");
const u16 gMonPalette_Sariel[]      = INCBIN_U16("graphics/puppets/sariel/evolved/normal.gbapal");
const u16 gMonShinyPalette_Sariel[] = INCBIN_U16("graphics/puppets/sariel/evolved/shiny.gbapal");
const u8 gMonIcon_Sariel[]          = INCBIN_U8 ("graphics/puppets/sariel/evolved/icon.4bpp");
const u8 gMonFootprint_Sariel[]     = INCBIN_U8 ("graphics/puppets/sariel/footprint.1bpp");

const u32 gMonFrontPic_SSariel[]     = INCBIN_U32("graphics/puppets/sariel/speed/front.4bpp.lz");
const u32 gMonBackPic_SSariel[]      = INCBIN_U32("graphics/puppets/sariel/speed/back.4bpp.lz");
const u16 gMonPalette_SSariel[]      = INCBIN_U16("graphics/puppets/sariel/speed/normal.gbapal");
const u16 gMonShinyPalette_SSariel[] = INCBIN_U16("graphics/puppets/sariel/speed/shiny.gbapal");
const u8 gMonIcon_SSariel[]          = INCBIN_U8 ("graphics/puppets/sariel/speed/icon.4bpp");
const u8 gMonFootprint_SSariel[]     = INCBIN_U8 ("graphics/puppets/sariel/footprint.1bpp");

const u32 gMonFrontPic_CKonngara[]     = INCBIN_U32("graphics/puppets/konngara/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKonngara[]      = INCBIN_U32("graphics/puppets/konngara/chibi/back.4bpp.lz");
const u16 gMonPalette_CKonngara[]      = INCBIN_U16("graphics/puppets/konngara/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKonngara[] = INCBIN_U16("graphics/puppets/konngara/chibi/shiny.gbapal");
const u8 gMonIcon_CKonngara[]          = INCBIN_U8 ("graphics/puppets/konngara/chibi/icon.4bpp");
const u8 gMonFootprint_CKonngara[]     = INCBIN_U8 ("graphics/puppets/konngara/footprint.1bpp");

const u32 gMonFrontPic_Konngara[]     = INCBIN_U32("graphics/puppets/konngara/evolved/front.4bpp.lz");
const u32 gMonBackPic_Konngara[]      = INCBIN_U32("graphics/puppets/konngara/evolved/back.4bpp.lz");
const u16 gMonPalette_Konngara[]      = INCBIN_U16("graphics/puppets/konngara/evolved/normal.gbapal");
const u16 gMonShinyPalette_Konngara[] = INCBIN_U16("graphics/puppets/konngara/evolved/shiny.gbapal");
const u8 gMonIcon_Konngara[]          = INCBIN_U8 ("graphics/puppets/konngara/evolved/icon.4bpp");
const u8 gMonFootprint_Konngara[]     = INCBIN_U8 ("graphics/puppets/konngara/footprint.1bpp");

const u32 gMonFrontPic_CMarisa98[]     = INCBIN_U32("graphics/puppets/marisa/chibi98/front.4bpp.lz");
const u32 gMonBackPic_CMarisa98[]      = INCBIN_U32("graphics/puppets/marisa/chibi98/back.4bpp.lz");
const u16 gMonPalette_CMarisa98[]      = INCBIN_U16("graphics/puppets/marisa/chibi98/normal.gbapal");
const u16 gMonShinyPalette_CMarisa98[] = INCBIN_U16("graphics/puppets/marisa/chibi98/shiny.gbapal");
const u8 gMonIcon_CMarisa98[]          = INCBIN_U8 ("graphics/puppets/marisa/chibi98/icon.4bpp");
const u8 gMonFootprint_CMarisa98[]     = INCBIN_U8 ("graphics/puppets/marisa/footprint.1bpp");

const u32 gMonFrontPic_Marisa98[]     = INCBIN_U32("graphics/puppets/marisa/evolved98/front.4bpp.lz");
const u32 gMonBackPic_Marisa98[]      = INCBIN_U32("graphics/puppets/marisa/evolved98/back.4bpp.lz");
const u16 gMonPalette_Marisa98[]      = INCBIN_U16("graphics/puppets/marisa/evolved98/normal.gbapal");
const u16 gMonShinyPalette_Marisa98[] = INCBIN_U16("graphics/puppets/marisa/evolved98/shiny.gbapal");
const u8 gMonIcon_Marisa98[]          = INCBIN_U8 ("graphics/puppets/marisa/evolved98/icon.4bpp");
const u8 gMonFootprint_Marisa98[]     = INCBIN_U8 ("graphics/puppets/marisa/footprint.1bpp");

const u32 gMonFrontPic_Genjii[]     = INCBIN_U32("graphics/puppets/genjii/evolved/front.4bpp.lz");
const u32 gMonBackPic_Genjii[]      = INCBIN_U32("graphics/puppets/genjii/evolved/back.4bpp.lz");
const u16 gMonPalette_Genjii[]      = INCBIN_U16("graphics/puppets/genjii/evolved/normal.gbapal");
const u16 gMonShinyPalette_Genjii[] = INCBIN_U16("graphics/puppets/genjii/evolved/shiny.gbapal");
const u8 gMonIcon_Genjii[]          = INCBIN_U8 ("graphics/puppets/genjii/evolved/icon.4bpp");
const u8 gMonFootprint_Genjii[]     = INCBIN_U8 ("graphics/puppets/genjii/footprint.1bpp");

const u32 gMonFrontPic_CRika[]     = INCBIN_U32("graphics/puppets/rika/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRika[]      = INCBIN_U32("graphics/puppets/rika/chibi/back.4bpp.lz");
const u16 gMonPalette_CRika[]      = INCBIN_U16("graphics/puppets/rika/chibi/normal.gbapal");
const u16 gMonShinyPalette_CRika[] = INCBIN_U16("graphics/puppets/rika/chibi/shiny.gbapal");
const u8 gMonIcon_CRika[]          = INCBIN_U8 ("graphics/puppets/rika/chibi/icon.4bpp");
const u8 gMonFootprint_CRika[]     = INCBIN_U8 ("graphics/puppets/rika/footprint.1bpp");

const u32 gMonFrontPic_Rika[]     = INCBIN_U32("graphics/puppets/rika/evolved/front.4bpp.lz");
const u32 gMonBackPic_Rika[]      = INCBIN_U32("graphics/puppets/rika/evolved/back.4bpp.lz");
const u16 gMonPalette_Rika[]      = INCBIN_U16("graphics/puppets/rika/evolved/normal.gbapal");
const u16 gMonShinyPalette_Rika[] = INCBIN_U16("graphics/puppets/rika/evolved/shiny.gbapal");
const u8 gMonIcon_Rika[]          = INCBIN_U8 ("graphics/puppets/rika/evolved/icon.4bpp");
const u8 gMonFootprint_Rika[]     = INCBIN_U8 ("graphics/puppets/rika/footprint.1bpp");

const u32 gMonFrontPic_CMeira[]     = INCBIN_U32("graphics/puppets/meira/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMeira[]      = INCBIN_U32("graphics/puppets/meira/chibi/back.4bpp.lz");
const u16 gMonPalette_CMeira[]      = INCBIN_U16("graphics/puppets/meira/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMeira[] = INCBIN_U16("graphics/puppets/meira/chibi/shiny.gbapal");
const u8 gMonIcon_CMeira[]          = INCBIN_U8 ("graphics/puppets/meira/chibi/icon.4bpp");
const u8 gMonFootprint_CMeira[]     = INCBIN_U8 ("graphics/puppets/meira/footprint.1bpp");

const u32 gMonFrontPic_Meira[]     = INCBIN_U32("graphics/puppets/meira/evolved/front.4bpp.lz");
const u32 gMonBackPic_Meira[]      = INCBIN_U32("graphics/puppets/meira/evolved/back.4bpp.lz");
const u16 gMonPalette_Meira[]      = INCBIN_U16("graphics/puppets/meira/evolved/normal.gbapal");
const u16 gMonShinyPalette_Meira[] = INCBIN_U16("graphics/puppets/meira/evolved/shiny.gbapal");
const u8 gMonIcon_Meira[]          = INCBIN_U8 ("graphics/puppets/meira/evolved/icon.4bpp");
const u8 gMonFootprint_Meira[]     = INCBIN_U8 ("graphics/puppets/meira/footprint.1bpp");

const u32 gMonFrontPic_MagicStones[]     = INCBIN_U32("graphics/puppets/magicstones/evolved/front.4bpp.lz");
const u32 gMonBackPic_MagicStones[]      = INCBIN_U32("graphics/puppets/magicstones/evolved/back.4bpp.lz");
const u16 gMonPalette_MagicStones[]      = INCBIN_U16("graphics/puppets/magicstones/evolved/normal.gbapal");
const u16 gMonShinyPalette_MagicStones[] = INCBIN_U16("graphics/puppets/magicstones/evolved/shiny.gbapal");
const u8 gMonIcon_MagicStones[]          = INCBIN_U8 ("graphics/puppets/magicstones/evolved/icon.4bpp");
const u8 gMonFootprint_MagicStones[]     = INCBIN_U8 ("graphics/puppets/magicstones/footprint.1bpp");

const u32 gMonFrontPic_CEllen[]     = INCBIN_U32("graphics/puppets/ellen/chibi/front.4bpp.lz");
const u32 gMonBackPic_CEllen[]      = INCBIN_U32("graphics/puppets/ellen/chibi/back.4bpp.lz");
const u16 gMonPalette_CEllen[]      = INCBIN_U16("graphics/puppets/ellen/chibi/normal.gbapal");
const u16 gMonShinyPalette_CEllen[] = INCBIN_U16("graphics/puppets/ellen/chibi/shiny.gbapal");
const u8 gMonIcon_CEllen[]          = INCBIN_U8 ("graphics/puppets/ellen/chibi/icon.4bpp");
const u8 gMonFootprint_CEllen[]     = INCBIN_U8 ("graphics/puppets/ellen/footprint.1bpp");

const u32 gMonFrontPic_Ellen[]     = INCBIN_U32("graphics/puppets/ellen/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ellen[]      = INCBIN_U32("graphics/puppets/ellen/evolved/back.4bpp.lz");
const u16 gMonPalette_Ellen[]      = INCBIN_U16("graphics/puppets/ellen/evolved/normal.gbapal");
const u16 gMonShinyPalette_Ellen[] = INCBIN_U16("graphics/puppets/ellen/evolved/shiny.gbapal");
const u8 gMonIcon_Ellen[]          = INCBIN_U8 ("graphics/puppets/ellen/evolved/icon.4bpp");
const u8 gMonFootprint_Ellen[]     = INCBIN_U8 ("graphics/puppets/ellen/footprint.1bpp");

const u32 gMonFrontPic_CKotohime[]     = INCBIN_U32("graphics/puppets/kotohime/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKotohime[]      = INCBIN_U32("graphics/puppets/kotohime/chibi/back.4bpp.lz");
const u16 gMonPalette_CKotohime[]      = INCBIN_U16("graphics/puppets/kotohime/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKotohime[] = INCBIN_U16("graphics/puppets/kotohime/chibi/shiny.gbapal");
const u8 gMonIcon_CKotohime[]          = INCBIN_U8 ("graphics/puppets/kotohime/chibi/icon.4bpp");
const u8 gMonFootprint_CKotohime[]     = INCBIN_U8 ("graphics/puppets/kotohime/footprint.1bpp");

const u32 gMonFrontPic_Kotohime[]     = INCBIN_U32("graphics/puppets/kotohime/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kotohime[]      = INCBIN_U32("graphics/puppets/kotohime/evolved/back.4bpp.lz");
const u16 gMonPalette_Kotohime[]      = INCBIN_U16("graphics/puppets/kotohime/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kotohime[] = INCBIN_U16("graphics/puppets/kotohime/evolved/shiny.gbapal");
const u8 gMonIcon_Kotohime[]          = INCBIN_U8 ("graphics/puppets/kotohime/evolved/icon.4bpp");
const u8 gMonFootprint_Kotohime[]     = INCBIN_U8 ("graphics/puppets/kotohime/footprint.1bpp");

const u32 gMonFrontPic_CKana[]     = INCBIN_U32("graphics/puppets/kana/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKana[]      = INCBIN_U32("graphics/puppets/kana/chibi/back.4bpp.lz");
const u16 gMonPalette_CKana[]      = INCBIN_U16("graphics/puppets/kana/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKana[] = INCBIN_U16("graphics/puppets/kana/chibi/shiny.gbapal");
const u8 gMonIcon_CKana[]          = INCBIN_U8 ("graphics/puppets/kana/chibi/icon.4bpp");
const u8 gMonFootprint_CKana[]     = INCBIN_U8 ("graphics/puppets/kana/footprint.1bpp");

const u32 gMonFrontPic_Kana[]     = INCBIN_U32("graphics/puppets/kana/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kana[]      = INCBIN_U32("graphics/puppets/kana/evolved/back.4bpp.lz");
const u16 gMonPalette_Kana[]      = INCBIN_U16("graphics/puppets/kana/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kana[] = INCBIN_U16("graphics/puppets/kana/evolved/shiny.gbapal");
const u8 gMonIcon_Kana[]          = INCBIN_U8 ("graphics/puppets/kana/evolved/icon.4bpp");
const u8 gMonFootprint_Kana[]     = INCBIN_U8 ("graphics/puppets/kana/footprint.1bpp");

const u32 gMonFrontPic_CRikako[]     = INCBIN_U32("graphics/puppets/rikako/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRikako[]      = INCBIN_U32("graphics/puppets/rikako/chibi/back.4bpp.lz");
const u16 gMonPalette_CRikako[]      = INCBIN_U16("graphics/puppets/rikako/chibi/normal.gbapal");
const u16 gMonShinyPalette_CRikako[] = INCBIN_U16("graphics/puppets/rikako/chibi/shiny.gbapal");
const u8 gMonIcon_CRikako[]          = INCBIN_U8 ("graphics/puppets/rikako/chibi/icon.4bpp");
const u8 gMonFootprint_CRikako[]     = INCBIN_U8 ("graphics/puppets/rikako/footprint.1bpp");

const u32 gMonFrontPic_Rikako[]     = INCBIN_U32("graphics/puppets/rikako/evolved/front.4bpp.lz");
const u32 gMonBackPic_Rikako[]      = INCBIN_U32("graphics/puppets/rikako/evolved/back.4bpp.lz");
const u16 gMonPalette_Rikako[]      = INCBIN_U16("graphics/puppets/rikako/evolved/normal.gbapal");
const u16 gMonShinyPalette_Rikako[] = INCBIN_U16("graphics/puppets/rikako/evolved/shiny.gbapal");
const u8 gMonIcon_Rikako[]          = INCBIN_U8 ("graphics/puppets/rikako/evolved/icon.4bpp");
const u8 gMonFootprint_Rikako[]     = INCBIN_U8 ("graphics/puppets/rikako/footprint.1bpp");

const u32 gMonFrontPic_CChiyuri[]     = INCBIN_U32("graphics/puppets/chiyuri/chibi/front.4bpp.lz");
const u32 gMonBackPic_CChiyuri[]      = INCBIN_U32("graphics/puppets/chiyuri/chibi/back.4bpp.lz");
const u16 gMonPalette_CChiyuri[]      = INCBIN_U16("graphics/puppets/chiyuri/chibi/normal.gbapal");
const u16 gMonShinyPalette_CChiyuri[] = INCBIN_U16("graphics/puppets/chiyuri/chibi/shiny.gbapal");
const u8 gMonIcon_CChiyuri[]          = INCBIN_U8 ("graphics/puppets/chiyuri/chibi/icon.4bpp");
const u8 gMonFootprint_CChiyuri[]     = INCBIN_U8 ("graphics/puppets/chiyuri/footprint.1bpp");

const u32 gMonFrontPic_Chiyuri[]     = INCBIN_U32("graphics/puppets/chiyuri/evolved/front.4bpp.lz");
const u32 gMonBackPic_Chiyuri[]      = INCBIN_U32("graphics/puppets/chiyuri/evolved/back.4bpp.lz");
const u16 gMonPalette_Chiyuri[]      = INCBIN_U16("graphics/puppets/chiyuri/evolved/normal.gbapal");
const u16 gMonShinyPalette_Chiyuri[] = INCBIN_U16("graphics/puppets/chiyuri/evolved/shiny.gbapal");
const u8 gMonIcon_Chiyuri[]          = INCBIN_U8 ("graphics/puppets/chiyuri/evolved/icon.4bpp");
const u8 gMonFootprint_Chiyuri[]     = INCBIN_U8 ("graphics/puppets/chiyuri/footprint.1bpp");

const u32 gMonFrontPic_CYumemi[]     = INCBIN_U32("graphics/puppets/yumemi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYumemi[]      = INCBIN_U32("graphics/puppets/yumemi/chibi/back.4bpp.lz");
const u16 gMonPalette_CYumemi[]      = INCBIN_U16("graphics/puppets/yumemi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYumemi[] = INCBIN_U16("graphics/puppets/yumemi/chibi/shiny.gbapal");
const u8 gMonIcon_CYumemi[]          = INCBIN_U8 ("graphics/puppets/yumemi/chibi/icon.4bpp");
const u8 gMonFootprint_CYumemi[]     = INCBIN_U8 ("graphics/puppets/yumemi/footprint.1bpp");

const u32 gMonFrontPic_Yumemi[]     = INCBIN_U32("graphics/puppets/yumemi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yumemi[]      = INCBIN_U32("graphics/puppets/yumemi/evolved/back.4bpp.lz");
const u16 gMonPalette_Yumemi[]      = INCBIN_U16("graphics/puppets/yumemi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yumemi[] = INCBIN_U16("graphics/puppets/yumemi/evolved/shiny.gbapal");
const u8 gMonIcon_Yumemi[]          = INCBIN_U8 ("graphics/puppets/yumemi/evolved/icon.4bpp");
const u8 gMonFootprint_Yumemi[]     = INCBIN_U8 ("graphics/puppets/yumemi/footprint.1bpp");

const u32 gMonFrontPic_Ruukoto[]     = INCBIN_U32("graphics/puppets/ruukoto/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ruukoto[]      = INCBIN_U32("graphics/puppets/ruukoto/evolved/back.4bpp.lz");
const u16 gMonPalette_Ruukoto[]      = INCBIN_U16("graphics/puppets/ruukoto/evolved/normal.gbapal");
const u16 gMonShinyPalette_Ruukoto[] = INCBIN_U16("graphics/puppets/ruukoto/evolved/shiny.gbapal");
const u8 gMonIcon_Ruukoto[]          = INCBIN_U8 ("graphics/puppets/ruukoto/evolved/icon.4bpp");
const u8 gMonFootprint_Ruukoto[]     = INCBIN_U8 ("graphics/puppets/ruukoto/footprint.1bpp");

const u32 gMonFrontPic_Mimichan[]     = INCBIN_U32("graphics/puppets/mimichan/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mimichan[]      = INCBIN_U32("graphics/puppets/mimichan/evolved/back.4bpp.lz");
const u16 gMonPalette_Mimichan[]      = INCBIN_U16("graphics/puppets/mimichan/evolved/normal.gbapal");
const u16 gMonShinyPalette_Mimichan[] = INCBIN_U16("graphics/puppets/mimichan/evolved/shiny.gbapal");
const u8 gMonIcon_Mimichan[]          = INCBIN_U8 ("graphics/puppets/mimichan/evolved/icon.4bpp");
const u8 gMonFootprint_Mimichan[]     = INCBIN_U8 ("graphics/puppets/mimichan/footprint.1bpp");

const u32 gMonFrontPic_Fairy[]     = INCBIN_U32("graphics/puppets/fairy/chibi/front.4bpp.lz");
const u32 gMonBackPic_Fairy[]      = INCBIN_U32("graphics/puppets/fairy/chibi/back.4bpp.lz");
const u16 gMonPalette_Fairy[]      = INCBIN_U16("graphics/puppets/fairy/chibi/normal.gbapal");
const u16 gMonShinyPalette_Fairy[] = INCBIN_U16("graphics/puppets/fairy/chibi/shiny.gbapal");
const u8 gMonIcon_Fairy[]          = INCBIN_U8 ("graphics/puppets/fairy/chibi/icon.4bpp");
const u8 gMonFootprint_Fairy[]     = INCBIN_U8 ("graphics/puppets/fairy/footprint.1bpp");

const u32 gMonFrontPic_COrange[]     = INCBIN_U32("graphics/puppets/orange/chibi/front.4bpp.lz");
const u32 gMonBackPic_COrange[]      = INCBIN_U32("graphics/puppets/orange/chibi/back.4bpp.lz");
const u16 gMonPalette_COrange[]      = INCBIN_U16("graphics/puppets/orange/chibi/normal.gbapal");
const u16 gMonShinyPalette_COrange[] = INCBIN_U16("graphics/puppets/orange/chibi/shiny.gbapal");
const u8 gMonIcon_COrange[]          = INCBIN_U8 ("graphics/puppets/orange/chibi/icon.4bpp");
const u8 gMonFootprint_COrange[]     = INCBIN_U8 ("graphics/puppets/orange/footprint.1bpp");

const u32 gMonFrontPic_Orange[]     = INCBIN_U32("graphics/puppets/orange/evolved/front.4bpp.lz");
const u32 gMonBackPic_Orange[]      = INCBIN_U32("graphics/puppets/orange/evolved/back.4bpp.lz");
const u16 gMonPalette_Orange[]      = INCBIN_U16("graphics/puppets/orange/evolved/normal.gbapal");
const u16 gMonShinyPalette_Orange[] = INCBIN_U16("graphics/puppets/orange/evolved/shiny.gbapal");
const u8 gMonIcon_Orange[]          = INCBIN_U8 ("graphics/puppets/orange/evolved/icon.4bpp");
const u8 gMonFootprint_Orange[]     = INCBIN_U8 ("graphics/puppets/orange/footprint.1bpp");

const u32 gMonFrontPic_CKurumi[]     = INCBIN_U32("graphics/puppets/kurumi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKurumi[]      = INCBIN_U32("graphics/puppets/kurumi/chibi/back.4bpp.lz");
const u16 gMonPalette_CKurumi[]      = INCBIN_U16("graphics/puppets/kurumi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKurumi[] = INCBIN_U16("graphics/puppets/kurumi/chibi/shiny.gbapal");
const u8 gMonIcon_CKurumi[]          = INCBIN_U8 ("graphics/puppets/kurumi/chibi/icon.4bpp");
const u8 gMonFootprint_CKurumi[]     = INCBIN_U8 ("graphics/puppets/kurumi/footprint.1bpp");

const u32 gMonFrontPic_Kurumi[]     = INCBIN_U32("graphics/puppets/kurumi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kurumi[]      = INCBIN_U32("graphics/puppets/kurumi/evolved/back.4bpp.lz");
const u16 gMonPalette_Kurumi[]      = INCBIN_U16("graphics/puppets/kurumi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kurumi[] = INCBIN_U16("graphics/puppets/kurumi/evolved/shiny.gbapal");
const u8 gMonIcon_Kurumi[]          = INCBIN_U8 ("graphics/puppets/kurumi/evolved/icon.4bpp");
const u8 gMonFootprint_Kurumi[]     = INCBIN_U8 ("graphics/puppets/kurumi/footprint.1bpp");

const u32 gMonFrontPic_CElly[]     = INCBIN_U32("graphics/puppets/elly/chibi/front.4bpp.lz");
const u32 gMonBackPic_CElly[]      = INCBIN_U32("graphics/puppets/elly/chibi/back.4bpp.lz");
const u16 gMonPalette_CElly[]      = INCBIN_U16("graphics/puppets/elly/chibi/normal.gbapal");
const u16 gMonShinyPalette_CElly[] = INCBIN_U16("graphics/puppets/elly/chibi/shiny.gbapal");
const u8 gMonIcon_CElly[]          = INCBIN_U8 ("graphics/puppets/elly/chibi/icon.4bpp");
const u8 gMonFootprint_CElly[]     = INCBIN_U8 ("graphics/puppets/elly/footprint.1bpp");

const u32 gMonFrontPic_Elly[]     = INCBIN_U32("graphics/puppets/elly/evolved/front.4bpp.lz");
const u32 gMonBackPic_Elly[]      = INCBIN_U32("graphics/puppets/elly/evolved/back.4bpp.lz");
const u16 gMonPalette_Elly[]      = INCBIN_U16("graphics/puppets/elly/evolved/normal.gbapal");
const u16 gMonShinyPalette_Elly[] = INCBIN_U16("graphics/puppets/elly/evolved/shiny.gbapal");
const u8 gMonIcon_Elly[]          = INCBIN_U8 ("graphics/puppets/elly/evolved/icon.4bpp");
const u8 gMonFootprint_Elly[]     = INCBIN_U8 ("graphics/puppets/elly/footprint.1bpp");

const u32 gMonFrontPic_CYuuka98[]     = INCBIN_U32("graphics/puppets/yuuka/chibi98/front.4bpp.lz");
const u32 gMonBackPic_CYuuka98[]      = INCBIN_U32("graphics/puppets/yuuka/chibi98/back.4bpp.lz");
const u16 gMonPalette_CYuuka98[]      = INCBIN_U16("graphics/puppets/yuuka/chibi98/normal.gbapal");
const u16 gMonShinyPalette_CYuuka98[] = INCBIN_U16("graphics/puppets/yuuka/chibi98/shiny.gbapal");
const u8 gMonIcon_CYuuka98[]          = INCBIN_U8 ("graphics/puppets/yuuka/chibi98/icon.4bpp");
const u8 gMonFootprint_CYuuka98[]     = INCBIN_U8 ("graphics/puppets/yuuka/footprint.1bpp");

const u32 gMonFrontPic_Yuuka98[]     = INCBIN_U32("graphics/puppets/yuuka/evolved98/front.4bpp.lz");
const u32 gMonBackPic_Yuuka98[]      = INCBIN_U32("graphics/puppets/yuuka/evolved98/back.4bpp.lz");
const u16 gMonPalette_Yuuka98[]      = INCBIN_U16("graphics/puppets/yuuka/evolved98/normal.gbapal");
const u16 gMonShinyPalette_Yuuka98[] = INCBIN_U16("graphics/puppets/yuuka/evolved98/shiny.gbapal");
const u8 gMonIcon_Yuuka98[]          = INCBIN_U8 ("graphics/puppets/yuuka/evolved98/icon.4bpp");
const u8 gMonFootprint_Yuuka98[]     = INCBIN_U8 ("graphics/puppets/yuuka/footprint.1bpp");

const u32 gMonFrontPic_AYuuka98[]     = INCBIN_U32("graphics/puppets/yuuka/attack98/front.4bpp.lz");
const u32 gMonBackPic_AYuuka98[]      = INCBIN_U32("graphics/puppets/yuuka/attack98/back.4bpp.lz");
const u16 gMonPalette_AYuuka98[]      = INCBIN_U16("graphics/puppets/yuuka/attack98/normal.gbapal");
const u16 gMonShinyPalette_AYuuka98[] = INCBIN_U16("graphics/puppets/yuuka/attack98/shiny.gbapal");
const u8 gMonIcon_AYuuka98[]          = INCBIN_U8 ("graphics/puppets/yuuka/attack98/icon.4bpp");
const u8 gMonFootprint_AYuuka98[]     = INCBIN_U8 ("graphics/puppets/yuuka/footprint.1bpp");

const u32 gMonFrontPic_CMugetsu[]     = INCBIN_U32("graphics/puppets/mugetsu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMugetsu[]      = INCBIN_U32("graphics/puppets/mugetsu/chibi/back.4bpp.lz");
const u16 gMonPalette_CMugetsu[]      = INCBIN_U16("graphics/puppets/mugetsu/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMugetsu[] = INCBIN_U16("graphics/puppets/mugetsu/chibi/shiny.gbapal");
const u8 gMonIcon_CMugetsu[]          = INCBIN_U8 ("graphics/puppets/mugetsu/chibi/icon.4bpp");
const u8 gMonFootprint_CMugetsu[]     = INCBIN_U8 ("graphics/puppets/mugetsu/footprint.1bpp");

const u32 gMonFrontPic_Mugetsu[]     = INCBIN_U32("graphics/puppets/mugetsu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mugetsu[]      = INCBIN_U32("graphics/puppets/mugetsu/evolved/back.4bpp.lz");
const u16 gMonPalette_Mugetsu[]      = INCBIN_U16("graphics/puppets/mugetsu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Mugetsu[] = INCBIN_U16("graphics/puppets/mugetsu/evolved/shiny.gbapal");
const u8 gMonIcon_Mugetsu[]          = INCBIN_U8 ("graphics/puppets/mugetsu/evolved/icon.4bpp");
const u8 gMonFootprint_Mugetsu[]     = INCBIN_U8 ("graphics/puppets/mugetsu/footprint.1bpp");

const u32 gMonFrontPic_CGengetsu[]     = INCBIN_U32("graphics/puppets/gengetsu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CGengetsu[]      = INCBIN_U32("graphics/puppets/gengetsu/chibi/back.4bpp.lz");
const u16 gMonPalette_CGengetsu[]      = INCBIN_U16("graphics/puppets/gengetsu/chibi/normal.gbapal");
const u16 gMonShinyPalette_CGengetsu[] = INCBIN_U16("graphics/puppets/gengetsu/chibi/shiny.gbapal");
const u8 gMonIcon_CGengetsu[]          = INCBIN_U8 ("graphics/puppets/gengetsu/chibi/icon.4bpp");
const u8 gMonFootprint_CGengetsu[]     = INCBIN_U8 ("graphics/puppets/gengetsu/footprint.1bpp");

const u32 gMonFrontPic_Gengetsu[]     = INCBIN_U32("graphics/puppets/gengetsu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Gengetsu[]      = INCBIN_U32("graphics/puppets/gengetsu/evolved/back.4bpp.lz");
const u16 gMonPalette_Gengetsu[]      = INCBIN_U16("graphics/puppets/gengetsu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Gengetsu[] = INCBIN_U16("graphics/puppets/gengetsu/evolved/shiny.gbapal");
const u8 gMonIcon_Gengetsu[]          = INCBIN_U8 ("graphics/puppets/gengetsu/evolved/icon.4bpp");
const u8 gMonFootprint_Gengetsu[]     = INCBIN_U8 ("graphics/puppets/gengetsu/footprint.1bpp");

const u32 gMonFrontPic_CAlice98[]     = INCBIN_U32("graphics/puppets/alice/chibi98/front.4bpp.lz");
const u32 gMonBackPic_CAlice98[]      = INCBIN_U32("graphics/puppets/alice/chibi98/back.4bpp.lz");
const u16 gMonPalette_CAlice98[]      = INCBIN_U16("graphics/puppets/alice/chibi98/normal.gbapal");
const u16 gMonShinyPalette_CAlice98[] = INCBIN_U16("graphics/puppets/alice/chibi98/shiny.gbapal");
const u8 gMonIcon_CAlice98[]          = INCBIN_U8 ("graphics/puppets/alice/chibi98/icon.4bpp");
const u8 gMonFootprint_CAlice98[]     = INCBIN_U8 ("graphics/puppets/alice/footprint.1bpp");

const u32 gMonFrontPic_Alice98[]     = INCBIN_U32("graphics/puppets/alice/evolved98/front.4bpp.lz");
const u32 gMonBackPic_Alice98[]      = INCBIN_U32("graphics/puppets/alice/evolved98/back.4bpp.lz");
const u16 gMonPalette_Alice98[]      = INCBIN_U16("graphics/puppets/alice/evolved98/normal.gbapal");
const u16 gMonShinyPalette_Alice98[] = INCBIN_U16("graphics/puppets/alice/evolved98/shiny.gbapal");
const u8 gMonIcon_Alice98[]          = INCBIN_U8 ("graphics/puppets/alice/evolved98/icon.4bpp");
const u8 gMonFootprint_Alice98[]     = INCBIN_U8 ("graphics/puppets/alice/footprint.1bpp");

const u32 gMonFrontPic_CSara[]     = INCBIN_U32("graphics/puppets/sara/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSara[]      = INCBIN_U32("graphics/puppets/sara/chibi/back.4bpp.lz");
const u16 gMonPalette_CSara[]      = INCBIN_U16("graphics/puppets/sara/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSara[] = INCBIN_U16("graphics/puppets/sara/chibi/shiny.gbapal");
const u8 gMonIcon_CSara[]          = INCBIN_U8 ("graphics/puppets/sara/chibi/icon.4bpp");
const u8 gMonFootprint_CSara[]     = INCBIN_U8 ("graphics/puppets/sara/footprint.1bpp");

const u32 gMonFrontPic_Sara[]     = INCBIN_U32("graphics/puppets/sara/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sara[]      = INCBIN_U32("graphics/puppets/sara/evolved/back.4bpp.lz");
const u16 gMonPalette_Sara[]      = INCBIN_U16("graphics/puppets/sara/evolved/normal.gbapal");
const u16 gMonShinyPalette_Sara[] = INCBIN_U16("graphics/puppets/sara/evolved/shiny.gbapal");
const u8 gMonIcon_Sara[]          = INCBIN_U8 ("graphics/puppets/sara/evolved/icon.4bpp");
const u8 gMonFootprint_Sara[]     = INCBIN_U8 ("graphics/puppets/sara/footprint.1bpp");

const u32 gMonFrontPic_CLuize[]     = INCBIN_U32("graphics/puppets/luize/chibi/front.4bpp.lz");
const u32 gMonBackPic_CLuize[]      = INCBIN_U32("graphics/puppets/luize/chibi/back.4bpp.lz");
const u16 gMonPalette_CLuize[]      = INCBIN_U16("graphics/puppets/luize/chibi/normal.gbapal");
const u16 gMonShinyPalette_CLuize[] = INCBIN_U16("graphics/puppets/luize/chibi/shiny.gbapal");
const u8 gMonIcon_CLuize[]          = INCBIN_U8 ("graphics/puppets/luize/chibi/icon.4bpp");
const u8 gMonFootprint_CLuize[]     = INCBIN_U8 ("graphics/puppets/luize/footprint.1bpp");

const u32 gMonFrontPic_Luize[]     = INCBIN_U32("graphics/puppets/luize/evolved/front.4bpp.lz");
const u32 gMonBackPic_Luize[]      = INCBIN_U32("graphics/puppets/luize/evolved/back.4bpp.lz");
const u16 gMonPalette_Luize[]      = INCBIN_U16("graphics/puppets/luize/evolved/normal.gbapal");
const u16 gMonShinyPalette_Luize[] = INCBIN_U16("graphics/puppets/luize/evolved/shiny.gbapal");
const u8 gMonIcon_Luize[]          = INCBIN_U8 ("graphics/puppets/luize/evolved/icon.4bpp");
const u8 gMonFootprint_Luize[]     = INCBIN_U8 ("graphics/puppets/luize/footprint.1bpp");

const u32 gMonFrontPic_CYuki[]     = INCBIN_U32("graphics/puppets/yuki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYuki[]      = INCBIN_U32("graphics/puppets/yuki/chibi/back.4bpp.lz");
const u16 gMonPalette_CYuki[]      = INCBIN_U16("graphics/puppets/yuki/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYuki[] = INCBIN_U16("graphics/puppets/yuki/chibi/shiny.gbapal");
const u8 gMonIcon_CYuki[]          = INCBIN_U8 ("graphics/puppets/yuki/chibi/icon.4bpp");
const u8 gMonFootprint_CYuki[]     = INCBIN_U8 ("graphics/puppets/yuki/footprint.1bpp");

const u32 gMonFrontPic_Yuki[]     = INCBIN_U32("graphics/puppets/yuki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yuki[]      = INCBIN_U32("graphics/puppets/yuki/evolved/back.4bpp.lz");
const u16 gMonPalette_Yuki[]      = INCBIN_U16("graphics/puppets/yuki/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yuki[] = INCBIN_U16("graphics/puppets/yuki/evolved/shiny.gbapal");
const u8 gMonIcon_Yuki[]          = INCBIN_U8 ("graphics/puppets/yuki/evolved/icon.4bpp");
const u8 gMonFootprint_Yuki[]     = INCBIN_U8 ("graphics/puppets/yuki/footprint.1bpp");

const u32 gMonFrontPic_CMai[]     = INCBIN_U32("graphics/puppets/mai/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMai[]      = INCBIN_U32("graphics/puppets/mai/chibi/back.4bpp.lz");
const u16 gMonPalette_CMai[]      = INCBIN_U16("graphics/puppets/mai/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMai[] = INCBIN_U16("graphics/puppets/mai/chibi/shiny.gbapal");
const u8 gMonIcon_CMai[]          = INCBIN_U8 ("graphics/puppets/mai/chibi/icon.4bpp");
const u8 gMonFootprint_CMai[]     = INCBIN_U8 ("graphics/puppets/mai/footprint.1bpp");

const u32 gMonFrontPic_Mai[]     = INCBIN_U32("graphics/puppets/mai/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mai[]      = INCBIN_U32("graphics/puppets/mai/evolved/back.4bpp.lz");
const u16 gMonPalette_Mai[]      = INCBIN_U16("graphics/puppets/mai/evolved/normal.gbapal");
const u16 gMonShinyPalette_Mai[] = INCBIN_U16("graphics/puppets/mai/evolved/shiny.gbapal");
const u8 gMonIcon_Mai[]          = INCBIN_U8 ("graphics/puppets/mai/evolved/icon.4bpp");
const u8 gMonFootprint_Mai[]     = INCBIN_U8 ("graphics/puppets/mai/footprint.1bpp");

const u32 gMonFrontPic_CYumeko[]     = INCBIN_U32("graphics/puppets/yumeko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYumeko[]      = INCBIN_U32("graphics/puppets/yumeko/chibi/back.4bpp.lz");
const u16 gMonPalette_CYumeko[]      = INCBIN_U16("graphics/puppets/yumeko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYumeko[] = INCBIN_U16("graphics/puppets/yumeko/chibi/shiny.gbapal");
const u8 gMonIcon_CYumeko[]          = INCBIN_U8 ("graphics/puppets/yumeko/chibi/icon.4bpp");
const u8 gMonFootprint_CYumeko[]     = INCBIN_U8 ("graphics/puppets/yumeko/footprint.1bpp");

const u32 gMonFrontPic_Yumeko[]     = INCBIN_U32("graphics/puppets/yumeko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yumeko[]      = INCBIN_U32("graphics/puppets/yumeko/evolved/back.4bpp.lz");
const u16 gMonPalette_Yumeko[]      = INCBIN_U16("graphics/puppets/yumeko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yumeko[] = INCBIN_U16("graphics/puppets/yumeko/evolved/shiny.gbapal");
const u8 gMonIcon_Yumeko[]          = INCBIN_U8 ("graphics/puppets/yumeko/evolved/icon.4bpp");
const u8 gMonFootprint_Yumeko[]     = INCBIN_U8 ("graphics/puppets/yumeko/footprint.1bpp");

const u32 gMonFrontPic_CShinki[]     = INCBIN_U32("graphics/puppets/shinki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CShinki[]      = INCBIN_U32("graphics/puppets/shinki/chibi/back.4bpp.lz");
const u16 gMonPalette_CShinki[]      = INCBIN_U16("graphics/puppets/shinki/chibi/normal.gbapal");
const u16 gMonShinyPalette_CShinki[] = INCBIN_U16("graphics/puppets/shinki/chibi/shiny.gbapal");
const u8 gMonIcon_CShinki[]          = INCBIN_U8 ("graphics/puppets/shinki/chibi/icon.4bpp");
const u8 gMonFootprint_CShinki[]     = INCBIN_U8 ("graphics/puppets/shinki/footprint.1bpp");

const u32 gMonFrontPic_Shinki[]     = INCBIN_U32("graphics/puppets/shinki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Shinki[]      = INCBIN_U32("graphics/puppets/shinki/evolved/back.4bpp.lz");
const u16 gMonPalette_Shinki[]      = INCBIN_U16("graphics/puppets/shinki/evolved/normal.gbapal");
const u16 gMonShinyPalette_Shinki[] = INCBIN_U16("graphics/puppets/shinki/evolved/shiny.gbapal");
const u8 gMonIcon_Shinki[]          = INCBIN_U8 ("graphics/puppets/shinki/evolved/icon.4bpp");
const u8 gMonFootprint_Shinki[]     = INCBIN_U8 ("graphics/puppets/shinki/footprint.1bpp");

const u32 gMonFrontPic_CDaiyousei[]     = INCBIN_U32("graphics/puppets/daiyousei/chibi/front.4bpp.lz");
const u32 gMonBackPic_CDaiyousei[]      = INCBIN_U32("graphics/puppets/daiyousei/chibi/back.4bpp.lz");
const u16 gMonPalette_CDaiyousei[]      = INCBIN_U16("graphics/puppets/daiyousei/chibi/normal.gbapal");
const u16 gMonShinyPalette_CDaiyousei[] = INCBIN_U16("graphics/puppets/daiyousei/chibi/shiny.gbapal");
const u8 gMonIcon_CDaiyousei[]          = INCBIN_U8 ("graphics/puppets/daiyousei/chibi/icon.4bpp");
const u8 gMonFootprint_CDaiyousei[]     = INCBIN_U8 ("graphics/puppets/daiyousei/footprint.1bpp");

const u32 gMonFrontPic_Daiyousei[]     = INCBIN_U32("graphics/puppets/daiyousei/evolved/front.4bpp.lz");
const u32 gMonBackPic_Daiyousei[]      = INCBIN_U32("graphics/puppets/daiyousei/evolved/back.4bpp.lz");
const u16 gMonPalette_Daiyousei[]      = INCBIN_U16("graphics/puppets/daiyousei/evolved/normal.gbapal");
const u16 gMonShinyPalette_Daiyousei[] = INCBIN_U16("graphics/puppets/daiyousei/evolved/shiny.gbapal");
const u8 gMonIcon_Daiyousei[]          = INCBIN_U8 ("graphics/puppets/daiyousei/evolved/icon.4bpp");
const u8 gMonFootprint_Daiyousei[]     = INCBIN_U8 ("graphics/puppets/daiyousei/footprint.1bpp");

const u32 gMonFrontPic_CReimu[]     = INCBIN_U32("graphics/puppets/reimu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CReimu[]      = INCBIN_U32("graphics/puppets/reimu/chibi/back.4bpp.lz");
const u16 gMonPalette_CReimu[]      = INCBIN_U16("graphics/puppets/reimu/chibi/normal.gbapal");
const u16 gMonShinyPalette_CReimu[] = INCBIN_U16("graphics/puppets/reimu/chibi/shiny.gbapal");
const u8 gMonIcon_CReimu[]          = INCBIN_U8 ("graphics/puppets/reimu/chibi/icon.4bpp");
const u8 gMonFootprint_CReimu[]     = INCBIN_U8 ("graphics/puppets/reimu/footprint.1bpp");

const u32 gMonFrontPic_Reimu[]     = INCBIN_U32("graphics/puppets/reimu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Reimu[]      = INCBIN_U32("graphics/puppets/reimu/evolved/back.4bpp.lz");
const u16 gMonPalette_Reimu[]      = INCBIN_U16("graphics/puppets/reimu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Reimu[] = INCBIN_U16("graphics/puppets/reimu/evolved/shiny.gbapal");
const u8 gMonIcon_Reimu[]          = INCBIN_U8 ("graphics/puppets/reimu/evolved/icon.4bpp");
const u8 gMonFootprint_Reimu[]     = INCBIN_U8 ("graphics/puppets/reimu/footprint.1bpp");

const u32 gMonFrontPic_AReimu[]     = INCBIN_U32("graphics/puppets/reimu/attack/front.4bpp.lz");
const u32 gMonBackPic_AReimu[]      = INCBIN_U32("graphics/puppets/reimu/attack/back.4bpp.lz");
const u16 gMonPalette_AReimu[]      = INCBIN_U16("graphics/puppets/reimu/attack/normal.gbapal");
const u16 gMonShinyPalette_AReimu[] = INCBIN_U16("graphics/puppets/reimu/attack/shiny.gbapal");
const u8 gMonIcon_AReimu[]          = INCBIN_U8 ("graphics/puppets/reimu/attack/icon.4bpp");
const u8 gMonFootprint_AReimu[]     = INCBIN_U8 ("graphics/puppets/reimu/footprint.1bpp");

const u32 gMonFrontPic_DReimu[]     = INCBIN_U32("graphics/puppets/reimu/defense/front.4bpp.lz");
const u32 gMonBackPic_DReimu[]      = INCBIN_U32("graphics/puppets/reimu/defense/back.4bpp.lz");
const u16 gMonPalette_DReimu[]      = INCBIN_U16("graphics/puppets/reimu/defense/normal.gbapal");
const u16 gMonShinyPalette_DReimu[] = INCBIN_U16("graphics/puppets/reimu/defense/shiny.gbapal");
const u8 gMonIcon_DReimu[]          = INCBIN_U8 ("graphics/puppets/reimu/defense/icon.4bpp");
const u8 gMonFootprint_DReimu[]     = INCBIN_U8 ("graphics/puppets/reimu/footprint.1bpp");

const u32 gMonFrontPic_CMarisa[]     = INCBIN_U32("graphics/puppets/marisa/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMarisa[]      = INCBIN_U32("graphics/puppets/marisa/chibi/back.4bpp.lz");
const u16 gMonPalette_CMarisa[]      = INCBIN_U16("graphics/puppets/marisa/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMarisa[] = INCBIN_U16("graphics/puppets/marisa/chibi/shiny.gbapal");
const u8 gMonIcon_CMarisa[]          = INCBIN_U8 ("graphics/puppets/marisa/chibi/icon.4bpp");
const u8 gMonFootprint_CMarisa[]     = INCBIN_U8 ("graphics/puppets/marisa/footprint.1bpp");

const u32 gMonFrontPic_Marisa[]     = INCBIN_U32("graphics/puppets/marisa/evolved/front.4bpp.lz");
const u32 gMonBackPic_Marisa[]      = INCBIN_U32("graphics/puppets/marisa/evolved/back.4bpp.lz");
const u16 gMonPalette_Marisa[]      = INCBIN_U16("graphics/puppets/marisa/evolved/normal.gbapal");
const u16 gMonShinyPalette_Marisa[] = INCBIN_U16("graphics/puppets/marisa/evolved/shiny.gbapal");
const u8 gMonIcon_Marisa[]          = INCBIN_U8 ("graphics/puppets/marisa/evolved/icon.4bpp");
const u8 gMonFootprint_Marisa[]     = INCBIN_U8 ("graphics/puppets/marisa/footprint.1bpp");

const u32 gMonFrontPic_AMarisa[]     = INCBIN_U32("graphics/puppets/marisa/attack/front.4bpp.lz");
const u32 gMonBackPic_AMarisa[]      = INCBIN_U32("graphics/puppets/marisa/attack/back.4bpp.lz");
const u16 gMonPalette_AMarisa[]      = INCBIN_U16("graphics/puppets/marisa/attack/normal.gbapal");
const u16 gMonShinyPalette_AMarisa[] = INCBIN_U16("graphics/puppets/marisa/attack/shiny.gbapal");
const u8 gMonIcon_AMarisa[]          = INCBIN_U8 ("graphics/puppets/marisa/attack/icon.4bpp");
const u8 gMonFootprint_AMarisa[]     = INCBIN_U8 ("graphics/puppets/marisa/footprint.1bpp");

const u32 gMonFrontPic_SMarisa[]     = INCBIN_U32("graphics/puppets/marisa/speed/front.4bpp.lz");
const u32 gMonBackPic_SMarisa[]      = INCBIN_U32("graphics/puppets/marisa/speed/back.4bpp.lz");
const u16 gMonPalette_SMarisa[]      = INCBIN_U16("graphics/puppets/marisa/speed/normal.gbapal");
const u16 gMonShinyPalette_SMarisa[] = INCBIN_U16("graphics/puppets/marisa/speed/shiny.gbapal");
const u8 gMonIcon_SMarisa[]          = INCBIN_U8 ("graphics/puppets/marisa/speed/icon.4bpp");
const u8 gMonFootprint_SMarisa[]     = INCBIN_U8 ("graphics/puppets/marisa/footprint.1bpp");

const u32 gMonFrontPic_AdMarisa[]     = INCBIN_U32("graphics/puppets/marisa/advent/front.4bpp.lz");
const u32 gMonBackPic_AdMarisa[]      = INCBIN_U32("graphics/puppets/marisa/advent/back.4bpp.lz");
const u16 gMonPalette_AdMarisa[]      = INCBIN_U16("graphics/puppets/marisa/advent/normal.gbapal");
const u16 gMonShinyPalette_AdMarisa[] = INCBIN_U16("graphics/puppets/marisa/advent/shiny.gbapal");
const u8 gMonIcon_AdMarisa[]          = INCBIN_U8 ("graphics/puppets/marisa/advent/icon.4bpp");
const u8 gMonFootprint_AdMarisa[]     = INCBIN_U8 ("graphics/puppets/marisa/footprint.1bpp");

const u32 gMonFrontPic_ExMarisa[]     = INCBIN_U32("graphics/puppets/marisa/extra/front.4bpp.lz");
const u32 gMonBackPic_ExMarisa[]      = INCBIN_U32("graphics/puppets/marisa/extra/back.4bpp.lz");
const u16 gMonPalette_ExMarisa[]      = INCBIN_U16("graphics/puppets/marisa/extra/normal.gbapal");
const u16 gMonShinyPalette_ExMarisa[] = INCBIN_U16("graphics/puppets/marisa/extra/shiny.gbapal");
const u8 gMonIcon_ExMarisa[]          = INCBIN_U8 ("graphics/puppets/marisa/extra/icon.4bpp");
const u8 gMonFootprint_ExMarisa[]     = INCBIN_U8 ("graphics/puppets/marisa/footprint.1bpp");

const u32 gMonFrontPic_CRumia[]     = INCBIN_U32("graphics/puppets/rumia/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRumia[]      = INCBIN_U32("graphics/puppets/rumia/chibi/back.4bpp.lz");
const u16 gMonPalette_CRumia[]      = INCBIN_U16("graphics/puppets/rumia/chibi/normal.gbapal");
const u16 gMonShinyPalette_CRumia[] = INCBIN_U16("graphics/puppets/rumia/chibi/shiny.gbapal");
const u8 gMonIcon_CRumia[]          = INCBIN_U8 ("graphics/puppets/rumia/chibi/icon.4bpp");
const u8 gMonFootprint_CRumia[]     = INCBIN_U8 ("graphics/puppets/rumia/footprint.1bpp");

const u32 gMonFrontPic_Rumia[]     = INCBIN_U32("graphics/puppets/rumia/evolved/front.4bpp.lz");
const u32 gMonBackPic_Rumia[]      = INCBIN_U32("graphics/puppets/rumia/evolved/back.4bpp.lz");
const u16 gMonPalette_Rumia[]      = INCBIN_U16("graphics/puppets/rumia/evolved/normal.gbapal");
const u16 gMonShinyPalette_Rumia[] = INCBIN_U16("graphics/puppets/rumia/evolved/shiny.gbapal");
const u8 gMonIcon_Rumia[]          = INCBIN_U8 ("graphics/puppets/rumia/evolved/icon.4bpp");
const u8 gMonFootprint_Rumia[]     = INCBIN_U8 ("graphics/puppets/rumia/footprint.1bpp");

const u32 gMonFrontPic_ARumia[]     = INCBIN_U32("graphics/puppets/rumia/attack/front.4bpp.lz");
const u32 gMonBackPic_ARumia[]      = INCBIN_U32("graphics/puppets/rumia/attack/back.4bpp.lz");
const u16 gMonPalette_ARumia[]      = INCBIN_U16("graphics/puppets/rumia/attack/normal.gbapal");
const u16 gMonShinyPalette_ARumia[] = INCBIN_U16("graphics/puppets/rumia/attack/shiny.gbapal");
const u8 gMonIcon_ARumia[]          = INCBIN_U8 ("graphics/puppets/rumia/attack/icon.4bpp");
const u8 gMonFootprint_ARumia[]     = INCBIN_U8 ("graphics/puppets/rumia/footprint.1bpp");

const u32 gMonFrontPic_SRumia[]     = INCBIN_U32("graphics/puppets/rumia/speed/front.4bpp.lz");
const u32 gMonBackPic_SRumia[]      = INCBIN_U32("graphics/puppets/rumia/speed/back.4bpp.lz");
const u16 gMonPalette_SRumia[]      = INCBIN_U16("graphics/puppets/rumia/speed/normal.gbapal");
const u16 gMonShinyPalette_SRumia[] = INCBIN_U16("graphics/puppets/rumia/speed/shiny.gbapal");
const u8 gMonIcon_SRumia[]          = INCBIN_U8 ("graphics/puppets/rumia/speed/icon.4bpp");
const u8 gMonFootprint_SRumia[]     = INCBIN_U8 ("graphics/puppets/rumia/footprint.1bpp");

const u32 gMonFrontPic_ADaiyousei[]     = INCBIN_U32("graphics/puppets/daiyousei/attack/front.4bpp.lz");
const u32 gMonBackPic_ADaiyousei[]      = INCBIN_U32("graphics/puppets/daiyousei/attack/back.4bpp.lz");
const u16 gMonPalette_ADaiyousei[]      = INCBIN_U16("graphics/puppets/daiyousei/attack/normal.gbapal");
const u16 gMonShinyPalette_ADaiyousei[] = INCBIN_U16("graphics/puppets/daiyousei/attack/shiny.gbapal");
const u8 gMonIcon_ADaiyousei[]          = INCBIN_U8 ("graphics/puppets/daiyousei/attack/icon.4bpp");
const u8 gMonFootprint_ADaiyousei[]     = INCBIN_U8 ("graphics/puppets/daiyousei/footprint.1bpp");

const u32 gMonFrontPic_DDaiyousei[]     = INCBIN_U32("graphics/puppets/daiyousei/defense/front.4bpp.lz");
const u32 gMonBackPic_DDaiyousei[]      = INCBIN_U32("graphics/puppets/daiyousei/defense/back.4bpp.lz");
const u16 gMonPalette_DDaiyousei[]      = INCBIN_U16("graphics/puppets/daiyousei/defense/normal.gbapal");
const u16 gMonShinyPalette_DDaiyousei[] = INCBIN_U16("graphics/puppets/daiyousei/defense/shiny.gbapal");
const u8 gMonIcon_DDaiyousei[]          = INCBIN_U8 ("graphics/puppets/daiyousei/defense/icon.4bpp");
const u8 gMonFootprint_DDaiyousei[]     = INCBIN_U8 ("graphics/puppets/daiyousei/footprint.1bpp");

const u32 gMonFrontPic_CCirno[]     = INCBIN_U32("graphics/puppets/cirno/chibi/front.4bpp.lz");
const u32 gMonBackPic_CCirno[]      = INCBIN_U32("graphics/puppets/cirno/chibi/back.4bpp.lz");
const u16 gMonPalette_CCirno[]      = INCBIN_U16("graphics/puppets/cirno/chibi/normal.gbapal");
const u16 gMonShinyPalette_CCirno[] = INCBIN_U16("graphics/puppets/cirno/chibi/shiny.gbapal");
const u8 gMonIcon_CCirno[]          = INCBIN_U8 ("graphics/puppets/cirno/chibi/icon.4bpp");
const u8 gMonFootprint_CCirno[]     = INCBIN_U8 ("graphics/puppets/cirno/footprint.1bpp");

const u32 gMonFrontPic_Cirno[]     = INCBIN_U32("graphics/puppets/cirno/evolved/front.4bpp.lz");
const u32 gMonBackPic_Cirno[]      = INCBIN_U32("graphics/puppets/cirno/evolved/back.4bpp.lz");
const u16 gMonPalette_Cirno[]      = INCBIN_U16("graphics/puppets/cirno/evolved/normal.gbapal");
const u16 gMonShinyPalette_Cirno[] = INCBIN_U16("graphics/puppets/cirno/evolved/shiny.gbapal");
const u8 gMonIcon_Cirno[]          = INCBIN_U8 ("graphics/puppets/cirno/evolved/icon.4bpp");
const u8 gMonFootprint_Cirno[]     = INCBIN_U8 ("graphics/puppets/cirno/footprint.1bpp");

const u32 gMonFrontPic_SCirno[]     = INCBIN_U32("graphics/puppets/cirno/speed/front.4bpp.lz");
const u32 gMonBackPic_SCirno[]      = INCBIN_U32("graphics/puppets/cirno/speed/back.4bpp.lz");
const u16 gMonPalette_SCirno[]      = INCBIN_U16("graphics/puppets/cirno/speed/normal.gbapal");
const u16 gMonShinyPalette_SCirno[] = INCBIN_U16("graphics/puppets/cirno/speed/shiny.gbapal");
const u8 gMonIcon_SCirno[]          = INCBIN_U8 ("graphics/puppets/cirno/speed/icon.4bpp");
const u8 gMonFootprint_SCirno[]     = INCBIN_U8 ("graphics/puppets/cirno/footprint.1bpp");

const u32 gMonFrontPic_TCirno[]     = INCBIN_U32("graphics/puppets/cirno/technic/front.4bpp.lz");
const u32 gMonBackPic_TCirno[]      = INCBIN_U32("graphics/puppets/cirno/technic/back.4bpp.lz");
const u16 gMonPalette_TCirno[]      = INCBIN_U16("graphics/puppets/cirno/technic/normal.gbapal");
const u16 gMonShinyPalette_TCirno[] = INCBIN_U16("graphics/puppets/cirno/technic/shiny.gbapal");
const u8 gMonIcon_TCirno[]          = INCBIN_U8 ("graphics/puppets/cirno/technic/icon.4bpp");
const u8 gMonFootprint_TCirno[]     = INCBIN_U8 ("graphics/puppets/cirno/footprint.1bpp");

const u32 gMonFrontPic_AdCirno[]     = INCBIN_U32("graphics/puppets/cirno/advent/front.4bpp.lz");
const u32 gMonBackPic_AdCirno[]      = INCBIN_U32("graphics/puppets/cirno/advent/back.4bpp.lz");
const u16 gMonPalette_AdCirno[]      = INCBIN_U16("graphics/puppets/cirno/advent/normal.gbapal");
const u16 gMonShinyPalette_AdCirno[] = INCBIN_U16("graphics/puppets/cirno/advent/shiny.gbapal");
const u8 gMonIcon_AdCirno[]          = INCBIN_U8 ("graphics/puppets/cirno/advent/icon.4bpp");
const u8 gMonFootprint_AdCirno[]     = INCBIN_U8 ("graphics/puppets/cirno/footprint.1bpp");

const u32 gMonFrontPic_CMeiling[]     = INCBIN_U32("graphics/puppets/meiling/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMeiling[]      = INCBIN_U32("graphics/puppets/meiling/chibi/back.4bpp.lz");
const u16 gMonPalette_CMeiling[]      = INCBIN_U16("graphics/puppets/meiling/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMeiling[] = INCBIN_U16("graphics/puppets/meiling/chibi/shiny.gbapal");
const u8 gMonIcon_CMeiling[]          = INCBIN_U8 ("graphics/puppets/meiling/chibi/icon.4bpp");
const u8 gMonFootprint_CMeiling[]     = INCBIN_U8 ("graphics/puppets/meiling/footprint.1bpp");

const u32 gMonFrontPic_Meiling[]     = INCBIN_U32("graphics/puppets/meiling/evolved/front.4bpp.lz");
const u32 gMonBackPic_Meiling[]      = INCBIN_U32("graphics/puppets/meiling/evolved/back.4bpp.lz");
const u16 gMonPalette_Meiling[]      = INCBIN_U16("graphics/puppets/meiling/evolved/normal.gbapal");
const u16 gMonShinyPalette_Meiling[] = INCBIN_U16("graphics/puppets/meiling/evolved/shiny.gbapal");
const u8 gMonIcon_Meiling[]          = INCBIN_U8 ("graphics/puppets/meiling/evolved/icon.4bpp");
const u8 gMonFootprint_Meiling[]     = INCBIN_U8 ("graphics/puppets/meiling/footprint.1bpp");

const u32 gMonFrontPic_DMeiling[]     = INCBIN_U32("graphics/puppets/meiling/defense/front.4bpp.lz");
const u32 gMonBackPic_DMeiling[]      = INCBIN_U32("graphics/puppets/meiling/defense/back.4bpp.lz");
const u16 gMonPalette_DMeiling[]      = INCBIN_U16("graphics/puppets/meiling/defense/normal.gbapal");
const u16 gMonShinyPalette_DMeiling[] = INCBIN_U16("graphics/puppets/meiling/defense/shiny.gbapal");
const u8 gMonIcon_DMeiling[]          = INCBIN_U8 ("graphics/puppets/meiling/defense/icon.4bpp");
const u8 gMonFootprint_DMeiling[]     = INCBIN_U8 ("graphics/puppets/meiling/footprint.1bpp");

const u32 gMonFrontPic_SMeiling[]     = INCBIN_U32("graphics/puppets/meiling/speed/front.4bpp.lz");
const u32 gMonBackPic_SMeiling[]      = INCBIN_U32("graphics/puppets/meiling/speed/back.4bpp.lz");
const u16 gMonPalette_SMeiling[]      = INCBIN_U16("graphics/puppets/meiling/speed/normal.gbapal");
const u16 gMonShinyPalette_SMeiling[] = INCBIN_U16("graphics/puppets/meiling/speed/shiny.gbapal");
const u8 gMonIcon_SMeiling[]          = INCBIN_U8 ("graphics/puppets/meiling/speed/icon.4bpp");
const u8 gMonFootprint_SMeiling[]     = INCBIN_U8 ("graphics/puppets/meiling/footprint.1bpp");

const u32 gMonFrontPic_AdMeiling[]     = INCBIN_U32("graphics/puppets/meiling/advent/front.4bpp.lz");
const u32 gMonBackPic_AdMeiling[]      = INCBIN_U32("graphics/puppets/meiling/advent/back.4bpp.lz");
const u16 gMonPalette_AdMeiling[]      = INCBIN_U16("graphics/puppets/meiling/advent/normal.gbapal");
const u16 gMonShinyPalette_AdMeiling[] = INCBIN_U16("graphics/puppets/meiling/advent/shiny.gbapal");
const u8 gMonIcon_AdMeiling[]          = INCBIN_U8 ("graphics/puppets/meiling/advent/icon.4bpp");
const u8 gMonFootprint_AdMeiling[]     = INCBIN_U8 ("graphics/puppets/meiling/footprint.1bpp");

const u32 gMonFrontPic_CKoakuma[]     = INCBIN_U32("graphics/puppets/koakuma/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKoakuma[]      = INCBIN_U32("graphics/puppets/koakuma/chibi/back.4bpp.lz");
const u16 gMonPalette_CKoakuma[]      = INCBIN_U16("graphics/puppets/koakuma/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKoakuma[] = INCBIN_U16("graphics/puppets/koakuma/chibi/shiny.gbapal");
const u8 gMonIcon_CKoakuma[]          = INCBIN_U8 ("graphics/puppets/koakuma/chibi/icon.4bpp");
const u8 gMonFootprint_CKoakuma[]     = INCBIN_U8 ("graphics/puppets/koakuma/footprint.1bpp");

const u32 gMonFrontPic_Koakuma[]     = INCBIN_U32("graphics/puppets/koakuma/evolved/front.4bpp.lz");
const u32 gMonBackPic_Koakuma[]      = INCBIN_U32("graphics/puppets/koakuma/evolved/back.4bpp.lz");
const u16 gMonPalette_Koakuma[]      = INCBIN_U16("graphics/puppets/koakuma/evolved/normal.gbapal");
const u16 gMonShinyPalette_Koakuma[] = INCBIN_U16("graphics/puppets/koakuma/evolved/shiny.gbapal");
const u8 gMonIcon_Koakuma[]          = INCBIN_U8 ("graphics/puppets/koakuma/evolved/icon.4bpp");
const u8 gMonFootprint_Koakuma[]     = INCBIN_U8 ("graphics/puppets/koakuma/footprint.1bpp");

const u32 gMonFrontPic_HKoakuma[]     = INCBIN_U32("graphics/puppets/koakuma/helper/front.4bpp.lz");
const u32 gMonBackPic_HKoakuma[]      = INCBIN_U32("graphics/puppets/koakuma/helper/back.4bpp.lz");
const u16 gMonPalette_HKoakuma[]      = INCBIN_U16("graphics/puppets/koakuma/helper/normal.gbapal");
const u16 gMonShinyPalette_HKoakuma[] = INCBIN_U16("graphics/puppets/koakuma/helper/shiny.gbapal");
const u8 gMonIcon_HKoakuma[]          = INCBIN_U8 ("graphics/puppets/koakuma/helper/icon.4bpp");
const u8 gMonFootprint_HKoakuma[]     = INCBIN_U8 ("graphics/puppets/koakuma/footprint.1bpp");

const u32 gMonFrontPic_CPatchouli[]     = INCBIN_U32("graphics/puppets/patchouli/chibi/front.4bpp.lz");
const u32 gMonBackPic_CPatchouli[]      = INCBIN_U32("graphics/puppets/patchouli/chibi/back.4bpp.lz");
const u16 gMonPalette_CPatchouli[]      = INCBIN_U16("graphics/puppets/patchouli/chibi/normal.gbapal");
const u16 gMonShinyPalette_CPatchouli[] = INCBIN_U16("graphics/puppets/patchouli/chibi/shiny.gbapal");
const u8 gMonIcon_CPatchouli[]          = INCBIN_U8 ("graphics/puppets/patchouli/chibi/icon.4bpp");
const u8 gMonFootprint_CPatchouli[]     = INCBIN_U8 ("graphics/puppets/patchouli/footprint.1bpp");

const u32 gMonFrontPic_Patchouli[]     = INCBIN_U32("graphics/puppets/patchouli/evolved/front.4bpp.lz");
const u32 gMonBackPic_Patchouli[]      = INCBIN_U32("graphics/puppets/patchouli/evolved/back.4bpp.lz");
const u16 gMonPalette_Patchouli[]      = INCBIN_U16("graphics/puppets/patchouli/evolved/normal.gbapal");
const u16 gMonShinyPalette_Patchouli[] = INCBIN_U16("graphics/puppets/patchouli/evolved/shiny.gbapal");
const u8 gMonIcon_Patchouli[]          = INCBIN_U8 ("graphics/puppets/patchouli/evolved/icon.4bpp");
const u8 gMonFootprint_Patchouli[]     = INCBIN_U8 ("graphics/puppets/patchouli/footprint.1bpp");

const u32 gMonFrontPic_APatchouli[]     = INCBIN_U32("graphics/puppets/patchouli/attack/front.4bpp.lz");
const u32 gMonBackPic_APatchouli[]      = INCBIN_U32("graphics/puppets/patchouli/attack/back.4bpp.lz");
const u16 gMonPalette_APatchouli[]      = INCBIN_U16("graphics/puppets/patchouli/attack/normal.gbapal");
const u16 gMonShinyPalette_APatchouli[] = INCBIN_U16("graphics/puppets/patchouli/attack/shiny.gbapal");
const u8 gMonIcon_APatchouli[]          = INCBIN_U8 ("graphics/puppets/patchouli/attack/icon.4bpp");
const u8 gMonFootprint_APatchouli[]     = INCBIN_U8 ("graphics/puppets/patchouli/footprint.1bpp");

const u32 gMonFrontPic_DPatchouli[]     = INCBIN_U32("graphics/puppets/patchouli/defense/front.4bpp.lz");
const u32 gMonBackPic_DPatchouli[]      = INCBIN_U32("graphics/puppets/patchouli/defense/back.4bpp.lz");
const u16 gMonPalette_DPatchouli[]      = INCBIN_U16("graphics/puppets/patchouli/defense/normal.gbapal");
const u16 gMonShinyPalette_DPatchouli[] = INCBIN_U16("graphics/puppets/patchouli/defense/shiny.gbapal");
const u8 gMonIcon_DPatchouli[]          = INCBIN_U8 ("graphics/puppets/patchouli/defense/icon.4bpp");
const u8 gMonFootprint_DPatchouli[]     = INCBIN_U8 ("graphics/puppets/patchouli/footprint.1bpp");

const u32 gMonFrontPic_CSakuya[]     = INCBIN_U32("graphics/puppets/sakuya/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSakuya[]      = INCBIN_U32("graphics/puppets/sakuya/chibi/back.4bpp.lz");
const u16 gMonPalette_CSakuya[]      = INCBIN_U16("graphics/puppets/sakuya/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSakuya[] = INCBIN_U16("graphics/puppets/sakuya/chibi/shiny.gbapal");
const u8 gMonIcon_CSakuya[]          = INCBIN_U8 ("graphics/puppets/sakuya/chibi/icon.4bpp");
const u8 gMonFootprint_CSakuya[]     = INCBIN_U8 ("graphics/puppets/sakuya/footprint.1bpp");

const u32 gMonFrontPic_Sakuya[]     = INCBIN_U32("graphics/puppets/sakuya/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sakuya[]      = INCBIN_U32("graphics/puppets/sakuya/evolved/back.4bpp.lz");
const u16 gMonPalette_Sakuya[]      = INCBIN_U16("graphics/puppets/sakuya/evolved/normal.gbapal");
const u16 gMonShinyPalette_Sakuya[] = INCBIN_U16("graphics/puppets/sakuya/evolved/shiny.gbapal");
const u8 gMonIcon_Sakuya[]          = INCBIN_U8 ("graphics/puppets/sakuya/evolved/icon.4bpp");
const u8 gMonFootprint_Sakuya[]     = INCBIN_U8 ("graphics/puppets/sakuya/footprint.1bpp");

const u32 gMonFrontPic_TSakuya[]     = INCBIN_U32("graphics/puppets/sakuya/technic/front.4bpp.lz");
const u32 gMonBackPic_TSakuya[]      = INCBIN_U32("graphics/puppets/sakuya/technic/back.4bpp.lz");
const u16 gMonPalette_TSakuya[]      = INCBIN_U16("graphics/puppets/sakuya/technic/normal.gbapal");
const u16 gMonShinyPalette_TSakuya[] = INCBIN_U16("graphics/puppets/sakuya/technic/shiny.gbapal");
const u8 gMonIcon_TSakuya[]          = INCBIN_U8 ("graphics/puppets/sakuya/technic/icon.4bpp");
const u8 gMonFootprint_TSakuya[]     = INCBIN_U8 ("graphics/puppets/sakuya/footprint.1bpp");

const u32 gMonFrontPic_HSakuya[]     = INCBIN_U32("graphics/puppets/sakuya/helper/front.4bpp.lz");
const u32 gMonBackPic_HSakuya[]      = INCBIN_U32("graphics/puppets/sakuya/helper/back.4bpp.lz");
const u16 gMonPalette_HSakuya[]      = INCBIN_U16("graphics/puppets/sakuya/helper/normal.gbapal");
const u16 gMonShinyPalette_HSakuya[] = INCBIN_U16("graphics/puppets/sakuya/helper/shiny.gbapal");
const u8 gMonIcon_HSakuya[]          = INCBIN_U8 ("graphics/puppets/sakuya/helper/icon.4bpp");
const u8 gMonFootprint_HSakuya[]     = INCBIN_U8 ("graphics/puppets/sakuya/footprint.1bpp");

const u32 gMonFrontPic_CRemilia[]     = INCBIN_U32("graphics/puppets/remilia/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRemilia[]      = INCBIN_U32("graphics/puppets/remilia/chibi/back.4bpp.lz");
const u16 gMonPalette_CRemilia[]      = INCBIN_U16("graphics/puppets/remilia/chibi/normal.gbapal");
const u16 gMonShinyPalette_CRemilia[] = INCBIN_U16("graphics/puppets/remilia/chibi/shiny.gbapal");
const u8 gMonIcon_CRemilia[]          = INCBIN_U8 ("graphics/puppets/remilia/chibi/icon.4bpp");
const u8 gMonFootprint_CRemilia[]     = INCBIN_U8 ("graphics/puppets/remilia/footprint.1bpp");

const u32 gMonFrontPic_Remilia[]     = INCBIN_U32("graphics/puppets/remilia/evolved/front.4bpp.lz");
const u32 gMonBackPic_Remilia[]      = INCBIN_U32("graphics/puppets/remilia/evolved/back.4bpp.lz");
const u16 gMonPalette_Remilia[]      = INCBIN_U16("graphics/puppets/remilia/evolved/normal.gbapal");
const u16 gMonShinyPalette_Remilia[] = INCBIN_U16("graphics/puppets/remilia/evolved/shiny.gbapal");
const u8 gMonIcon_Remilia[]          = INCBIN_U8 ("graphics/puppets/remilia/evolved/icon.4bpp");
const u8 gMonFootprint_Remilia[]     = INCBIN_U8 ("graphics/puppets/remilia/footprint.1bpp");

const u32 gMonFrontPic_ARemilia[]     = INCBIN_U32("graphics/puppets/remilia/attack/front.4bpp.lz");
const u32 gMonBackPic_ARemilia[]      = INCBIN_U32("graphics/puppets/remilia/attack/back.4bpp.lz");
const u16 gMonPalette_ARemilia[]      = INCBIN_U16("graphics/puppets/remilia/attack/normal.gbapal");
const u16 gMonShinyPalette_ARemilia[] = INCBIN_U16("graphics/puppets/remilia/attack/shiny.gbapal");
const u8 gMonIcon_ARemilia[]          = INCBIN_U8 ("graphics/puppets/remilia/attack/icon.4bpp");
const u8 gMonFootprint_ARemilia[]     = INCBIN_U8 ("graphics/puppets/remilia/footprint.1bpp");

const u32 gMonFrontPic_DRemilia[]     = INCBIN_U32("graphics/puppets/remilia/defense/front.4bpp.lz");
const u32 gMonBackPic_DRemilia[]      = INCBIN_U32("graphics/puppets/remilia/defense/back.4bpp.lz");
const u16 gMonPalette_DRemilia[]      = INCBIN_U16("graphics/puppets/remilia/defense/normal.gbapal");
const u16 gMonShinyPalette_DRemilia[] = INCBIN_U16("graphics/puppets/remilia/defense/shiny.gbapal");
const u8 gMonIcon_DRemilia[]          = INCBIN_U8 ("graphics/puppets/remilia/defense/icon.4bpp");
const u8 gMonFootprint_DRemilia[]     = INCBIN_U8 ("graphics/puppets/remilia/footprint.1bpp");

const u32 gMonFrontPic_CFlandre[]     = INCBIN_U32("graphics/puppets/flandre/chibi/front.4bpp.lz");
const u32 gMonBackPic_CFlandre[]      = INCBIN_U32("graphics/puppets/flandre/chibi/back.4bpp.lz");
const u16 gMonPalette_CFlandre[]      = INCBIN_U16("graphics/puppets/flandre/chibi/normal.gbapal");
const u16 gMonShinyPalette_CFlandre[] = INCBIN_U16("graphics/puppets/flandre/chibi/shiny.gbapal");
const u8 gMonIcon_CFlandre[]          = INCBIN_U8 ("graphics/puppets/flandre/chibi/icon.4bpp");
const u8 gMonFootprint_CFlandre[]     = INCBIN_U8 ("graphics/puppets/flandre/footprint.1bpp");

const u32 gMonFrontPic_Flandre[]     = INCBIN_U32("graphics/puppets/flandre/evolved/front.4bpp.lz");
const u32 gMonBackPic_Flandre[]      = INCBIN_U32("graphics/puppets/flandre/evolved/back.4bpp.lz");
const u16 gMonPalette_Flandre[]      = INCBIN_U16("graphics/puppets/flandre/evolved/normal.gbapal");
const u16 gMonShinyPalette_Flandre[] = INCBIN_U16("graphics/puppets/flandre/evolved/shiny.gbapal");
const u8 gMonIcon_Flandre[]          = INCBIN_U8 ("graphics/puppets/flandre/evolved/icon.4bpp");
const u8 gMonFootprint_Flandre[]     = INCBIN_U8 ("graphics/puppets/flandre/footprint.1bpp");

const u32 gMonFrontPic_AFlandre[]     = INCBIN_U32("graphics/puppets/flandre/attack/front.4bpp.lz");
const u32 gMonBackPic_AFlandre[]      = INCBIN_U32("graphics/puppets/flandre/attack/back.4bpp.lz");
const u16 gMonPalette_AFlandre[]      = INCBIN_U16("graphics/puppets/flandre/attack/normal.gbapal");
const u16 gMonShinyPalette_AFlandre[] = INCBIN_U16("graphics/puppets/flandre/attack/shiny.gbapal");
const u8 gMonIcon_AFlandre[]          = INCBIN_U8 ("graphics/puppets/flandre/attack/icon.4bpp");
const u8 gMonFootprint_AFlandre[]     = INCBIN_U8 ("graphics/puppets/flandre/footprint.1bpp");

const u32 gMonFrontPic_SFlandre[]     = INCBIN_U32("graphics/puppets/flandre/speed/front.4bpp.lz");
const u32 gMonBackPic_SFlandre[]      = INCBIN_U32("graphics/puppets/flandre/speed/back.4bpp.lz");
const u16 gMonPalette_SFlandre[]      = INCBIN_U16("graphics/puppets/flandre/speed/normal.gbapal");
const u16 gMonShinyPalette_SFlandre[] = INCBIN_U16("graphics/puppets/flandre/speed/shiny.gbapal");
const u8 gMonIcon_SFlandre[]          = INCBIN_U8 ("graphics/puppets/flandre/speed/icon.4bpp");
const u8 gMonFootprint_SFlandre[]     = INCBIN_U8 ("graphics/puppets/flandre/footprint.1bpp");

const u32 gMonFrontPic_CSatsuki[]     = INCBIN_U32("graphics/puppets/satsuki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSatsuki[]      = INCBIN_U32("graphics/puppets/satsuki/chibi/back.4bpp.lz");
const u16 gMonPalette_CSatsuki[]      = INCBIN_U16("graphics/puppets/satsuki/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSatsuki[] = INCBIN_U16("graphics/puppets/satsuki/chibi/shiny.gbapal");
const u8 gMonIcon_CSatsuki[]          = INCBIN_U8 ("graphics/puppets/satsuki/chibi/icon.4bpp");
const u8 gMonFootprint_CSatsuki[]     = INCBIN_U8 ("graphics/puppets/satsuki/footprint.1bpp");

const u32 gMonFrontPic_Satsuki[]     = INCBIN_U32("graphics/puppets/satsuki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Satsuki[]      = INCBIN_U32("graphics/puppets/satsuki/evolved/back.4bpp.lz");
const u16 gMonPalette_Satsuki[]      = INCBIN_U16("graphics/puppets/satsuki/evolved/normal.gbapal");
const u16 gMonShinyPalette_Satsuki[] = INCBIN_U16("graphics/puppets/satsuki/evolved/shiny.gbapal");
const u8 gMonIcon_Satsuki[]          = INCBIN_U8 ("graphics/puppets/satsuki/evolved/icon.4bpp");
const u8 gMonFootprint_Satsuki[]     = INCBIN_U8 ("graphics/puppets/satsuki/footprint.1bpp");

const u32 gMonFrontPic_CChen[]     = INCBIN_U32("graphics/puppets/chen/chibi/front.4bpp.lz");
const u32 gMonBackPic_CChen[]      = INCBIN_U32("graphics/puppets/chen/chibi/back.4bpp.lz");
const u16 gMonPalette_CChen[]      = INCBIN_U16("graphics/puppets/chen/chibi/normal.gbapal");
const u16 gMonShinyPalette_CChen[] = INCBIN_U16("graphics/puppets/chen/chibi/shiny.gbapal");
const u8 gMonIcon_CChen[]          = INCBIN_U8 ("graphics/puppets/chen/chibi/icon.4bpp");
const u8 gMonFootprint_CChen[]     = INCBIN_U8 ("graphics/puppets/chen/footprint.1bpp");

const u32 gMonFrontPic_Chen[]     = INCBIN_U32("graphics/puppets/chen/evolved/front.4bpp.lz");
const u32 gMonBackPic_Chen[]      = INCBIN_U32("graphics/puppets/chen/evolved/back.4bpp.lz");
const u16 gMonPalette_Chen[]      = INCBIN_U16("graphics/puppets/chen/evolved/normal.gbapal");
const u16 gMonShinyPalette_Chen[] = INCBIN_U16("graphics/puppets/chen/evolved/shiny.gbapal");
const u8 gMonIcon_Chen[]          = INCBIN_U8 ("graphics/puppets/chen/evolved/icon.4bpp");
const u8 gMonFootprint_Chen[]     = INCBIN_U8 ("graphics/puppets/chen/footprint.1bpp");

const u32 gMonFrontPic_CLetty[]     = INCBIN_U32("graphics/puppets/letty/chibi/front.4bpp.lz");
const u32 gMonBackPic_CLetty[]      = INCBIN_U32("graphics/puppets/letty/chibi/back.4bpp.lz");
const u16 gMonPalette_CLetty[]      = INCBIN_U16("graphics/puppets/letty/chibi/normal.gbapal");
const u16 gMonShinyPalette_CLetty[] = INCBIN_U16("graphics/puppets/letty/chibi/shiny.gbapal");
const u8 gMonIcon_CLetty[]          = INCBIN_U8 ("graphics/puppets/letty/chibi/icon.4bpp");
const u8 gMonFootprint_CLetty[]     = INCBIN_U8 ("graphics/puppets/letty/footprint.1bpp");

const u32 gMonFrontPic_Letty[]     = INCBIN_U32("graphics/puppets/letty/evolved/front.4bpp.lz");
const u32 gMonBackPic_Letty[]      = INCBIN_U32("graphics/puppets/letty/evolved/back.4bpp.lz");
const u16 gMonPalette_Letty[]      = INCBIN_U16("graphics/puppets/letty/evolved/normal.gbapal");
const u16 gMonShinyPalette_Letty[] = INCBIN_U16("graphics/puppets/letty/evolved/shiny.gbapal");
const u8 gMonIcon_Letty[]          = INCBIN_U8 ("graphics/puppets/letty/evolved/icon.4bpp");
const u8 gMonFootprint_Letty[]     = INCBIN_U8 ("graphics/puppets/letty/footprint.1bpp");

const u32 gMonFrontPic_DLetty[]     = INCBIN_U32("graphics/puppets/letty/defense/front.4bpp.lz");
const u32 gMonBackPic_DLetty[]      = INCBIN_U32("graphics/puppets/letty/defense/back.4bpp.lz");
const u16 gMonPalette_DLetty[]      = INCBIN_U16("graphics/puppets/letty/defense/normal.gbapal");
const u16 gMonShinyPalette_DLetty[] = INCBIN_U16("graphics/puppets/letty/defense/shiny.gbapal");
const u8 gMonIcon_DLetty[]          = INCBIN_U8 ("graphics/puppets/letty/defense/icon.4bpp");
const u8 gMonFootprint_DLetty[]     = INCBIN_U8 ("graphics/puppets/letty/footprint.1bpp");

const u32 gMonFrontPic_HLetty[]     = INCBIN_U32("graphics/puppets/letty/helper/front.4bpp.lz");
const u32 gMonBackPic_HLetty[]      = INCBIN_U32("graphics/puppets/letty/helper/back.4bpp.lz");
const u16 gMonPalette_HLetty[]      = INCBIN_U16("graphics/puppets/letty/helper/normal.gbapal");
const u16 gMonShinyPalette_HLetty[] = INCBIN_U16("graphics/puppets/letty/helper/shiny.gbapal");
const u8 gMonIcon_HLetty[]          = INCBIN_U8 ("graphics/puppets/letty/helper/icon.4bpp");
const u8 gMonFootprint_HLetty[]     = INCBIN_U8 ("graphics/puppets/letty/footprint.1bpp");

const u32 gMonFrontPic_AdLetty[]     = INCBIN_U32("graphics/puppets/letty/advent/front.4bpp.lz");
const u32 gMonBackPic_AdLetty[]      = INCBIN_U32("graphics/puppets/letty/advent/back.4bpp.lz");
const u16 gMonPalette_AdLetty[]      = INCBIN_U16("graphics/puppets/letty/advent/normal.gbapal");
const u16 gMonShinyPalette_AdLetty[] = INCBIN_U16("graphics/puppets/letty/advent/shiny.gbapal");
const u8 gMonIcon_AdLetty[]          = INCBIN_U8 ("graphics/puppets/letty/advent/icon.4bpp");
const u8 gMonFootprint_AdLetty[]     = INCBIN_U8 ("graphics/puppets/letty/footprint.1bpp");

const u32 gMonFrontPic_AChen[]     = INCBIN_U32("graphics/puppets/chen/attack/front.4bpp.lz");
const u32 gMonBackPic_AChen[]      = INCBIN_U32("graphics/puppets/chen/attack/back.4bpp.lz");
const u16 gMonPalette_AChen[]      = INCBIN_U16("graphics/puppets/chen/attack/normal.gbapal");
const u16 gMonShinyPalette_AChen[] = INCBIN_U16("graphics/puppets/chen/attack/shiny.gbapal");
const u8 gMonIcon_AChen[]          = INCBIN_U8 ("graphics/puppets/chen/attack/icon.4bpp");
const u8 gMonFootprint_AChen[]     = INCBIN_U8 ("graphics/puppets/chen/footprint.1bpp");

const u32 gMonFrontPic_TChen[]     = INCBIN_U32("graphics/puppets/chen/technic/front.4bpp.lz");
const u32 gMonBackPic_TChen[]      = INCBIN_U32("graphics/puppets/chen/technic/back.4bpp.lz");
const u16 gMonPalette_TChen[]      = INCBIN_U16("graphics/puppets/chen/technic/normal.gbapal");
const u16 gMonShinyPalette_TChen[] = INCBIN_U16("graphics/puppets/chen/technic/shiny.gbapal");
const u8 gMonIcon_TChen[]          = INCBIN_U8 ("graphics/puppets/chen/technic/icon.4bpp");
const u8 gMonFootprint_TChen[]     = INCBIN_U8 ("graphics/puppets/chen/footprint.1bpp");

const u32 gMonFrontPic_AdChen[]     = INCBIN_U32("graphics/puppets/chen/advent/front.4bpp.lz");
const u32 gMonBackPic_AdChen[]      = INCBIN_U32("graphics/puppets/chen/advent/back.4bpp.lz");
const u16 gMonPalette_AdChen[]      = INCBIN_U16("graphics/puppets/chen/advent/normal.gbapal");
const u16 gMonShinyPalette_AdChen[] = INCBIN_U16("graphics/puppets/chen/advent/shiny.gbapal");
const u8 gMonIcon_AdChen[]          = INCBIN_U8 ("graphics/puppets/chen/advent/icon.4bpp");
const u8 gMonFootprint_AdChen[]     = INCBIN_U8 ("graphics/puppets/chen/footprint.1bpp");

const u32 gMonFrontPic_CAlice[]     = INCBIN_U32("graphics/puppets/alice/chibi/front.4bpp.lz");
const u32 gMonBackPic_CAlice[]      = INCBIN_U32("graphics/puppets/alice/chibi/back.4bpp.lz");
const u16 gMonPalette_CAlice[]      = INCBIN_U16("graphics/puppets/alice/chibi/normal.gbapal");
const u16 gMonShinyPalette_CAlice[] = INCBIN_U16("graphics/puppets/alice/chibi/shiny.gbapal");
const u8 gMonIcon_CAlice[]          = INCBIN_U8 ("graphics/puppets/alice/chibi/icon.4bpp");
const u8 gMonFootprint_CAlice[]     = INCBIN_U8 ("graphics/puppets/alice/footprint.1bpp");

const u32 gMonFrontPic_Alice[]     = INCBIN_U32("graphics/puppets/alice/evolved/front.4bpp.lz");
const u32 gMonBackPic_Alice[]      = INCBIN_U32("graphics/puppets/alice/evolved/back.4bpp.lz");
const u16 gMonPalette_Alice[]      = INCBIN_U16("graphics/puppets/alice/evolved/normal.gbapal");
const u16 gMonShinyPalette_Alice[] = INCBIN_U16("graphics/puppets/alice/evolved/shiny.gbapal");
const u8 gMonIcon_Alice[]          = INCBIN_U8 ("graphics/puppets/alice/evolved/icon.4bpp");
const u8 gMonFootprint_Alice[]     = INCBIN_U8 ("graphics/puppets/alice/footprint.1bpp");

const u32 gMonFrontPic_AAlice[]     = INCBIN_U32("graphics/puppets/alice/attack/front.4bpp.lz");
const u32 gMonBackPic_AAlice[]      = INCBIN_U32("graphics/puppets/alice/attack/back.4bpp.lz");
const u16 gMonPalette_AAlice[]      = INCBIN_U16("graphics/puppets/alice/attack/normal.gbapal");
const u16 gMonShinyPalette_AAlice[] = INCBIN_U16("graphics/puppets/alice/attack/shiny.gbapal");
const u8 gMonIcon_AAlice[]          = INCBIN_U8 ("graphics/puppets/alice/attack/icon.4bpp");
const u8 gMonFootprint_AAlice[]     = INCBIN_U8 ("graphics/puppets/alice/footprint.1bpp");

const u32 gMonFrontPic_TAlice[]     = INCBIN_U32("graphics/puppets/alice/technic/front.4bpp.lz");
const u32 gMonBackPic_TAlice[]      = INCBIN_U32("graphics/puppets/alice/technic/back.4bpp.lz");
const u16 gMonPalette_TAlice[]      = INCBIN_U16("graphics/puppets/alice/technic/normal.gbapal");
const u16 gMonShinyPalette_TAlice[] = INCBIN_U16("graphics/puppets/alice/technic/shiny.gbapal");
const u8 gMonIcon_TAlice[]          = INCBIN_U8 ("graphics/puppets/alice/technic/icon.4bpp");
const u8 gMonFootprint_TAlice[]     = INCBIN_U8 ("graphics/puppets/alice/footprint.1bpp");

const u32 gMonFrontPic_AdAlice[]     = INCBIN_U32("graphics/puppets/alice/advent/front.4bpp.lz");
const u32 gMonBackPic_AdAlice[]      = INCBIN_U32("graphics/puppets/alice/advent/back.4bpp.lz");
const u16 gMonPalette_AdAlice[]      = INCBIN_U16("graphics/puppets/alice/advent/normal.gbapal");
const u16 gMonShinyPalette_AdAlice[] = INCBIN_U16("graphics/puppets/alice/advent/shiny.gbapal");
const u8 gMonIcon_AdAlice[]          = INCBIN_U8 ("graphics/puppets/alice/advent/icon.4bpp");
const u8 gMonFootprint_AdAlice[]     = INCBIN_U8 ("graphics/puppets/alice/footprint.1bpp");

const u32 gMonFrontPic_DarkAlice[]     = INCBIN_U32("graphics/puppets/alice/dark/front.4bpp.lz");
const u32 gMonBackPic_DarkAlice[]      = INCBIN_U32("graphics/puppets/alice/dark/back.4bpp.lz");
const u16 gMonPalette_DarkAlice[]      = INCBIN_U16("graphics/puppets/alice/dark/normal.gbapal");
const u16 gMonShinyPalette_DarkAlice[] = INCBIN_U16("graphics/puppets/alice/dark/shiny.gbapal");
const u8 gMonIcon_DarkAlice[]          = INCBIN_U8 ("graphics/puppets/alice/dark/icon.4bpp");
const u8 gMonFootprint_DarkAlice[]     = INCBIN_U8 ("graphics/puppets/alice/footprint.1bpp");

const u32 gMonFrontPic_Shanghai[]     = INCBIN_U32("graphics/puppets/alicedolls/shanghai/front.4bpp.lz");
const u32 gMonBackPic_Shanghai[]      = INCBIN_U32("graphics/puppets/alicedolls/shanghai/back.4bpp.lz");
const u16 gMonPalette_Shanghai[]      = INCBIN_U16("graphics/puppets/alicedolls/shanghai/normal.gbapal");
const u16 gMonShinyPalette_Shanghai[] = INCBIN_U16("graphics/puppets/alicedolls/shanghai/shiny.gbapal");
const u8 gMonIcon_Shanghai[]          = INCBIN_U8 ("graphics/puppets/alicedolls/shanghai/icon.4bpp");
const u8 gMonFootprint_Shanghai[]     = INCBIN_U8 ("graphics/puppets/alicedolls/footprint.1bpp");

const u32 gMonFrontPic_Hourai[]     = INCBIN_U32("graphics/puppets/alicedolls/hourai/front.4bpp.lz");
const u32 gMonBackPic_Hourai[]      = INCBIN_U32("graphics/puppets/alicedolls/hourai/back.4bpp.lz");
const u16 gMonPalette_Hourai[]      = INCBIN_U16("graphics/puppets/alicedolls/hourai/normal.gbapal");
const u16 gMonShinyPalette_Hourai[] = INCBIN_U16("graphics/puppets/alicedolls/hourai/shiny.gbapal");
const u8 gMonIcon_Hourai[]          = INCBIN_U8 ("graphics/puppets/alicedolls/hourai/icon.4bpp");
const u8 gMonFootprint_Hourai[]     = INCBIN_U8 ("graphics/puppets/alicedolls/footprint.1bpp");

const u32 gMonFrontPic_CLilyWhite[]     = INCBIN_U32("graphics/puppets/lilywhite/chibi/front.4bpp.lz");
const u32 gMonBackPic_CLilyWhite[]      = INCBIN_U32("graphics/puppets/lilywhite/chibi/back.4bpp.lz");
const u16 gMonPalette_CLilyWhite[]      = INCBIN_U16("graphics/puppets/lilywhite/chibi/normal.gbapal");
const u16 gMonShinyPalette_CLilyWhite[] = INCBIN_U16("graphics/puppets/lilywhite/chibi/shiny.gbapal");
const u8 gMonIcon_CLilyWhite[]          = INCBIN_U8 ("graphics/puppets/lilywhite/chibi/icon.4bpp");
const u8 gMonFootprint_CLilyWhite[]     = INCBIN_U8 ("graphics/puppets/lilywhite/footprint.1bpp");

const u32 gMonFrontPic_LilyWhite[]     = INCBIN_U32("graphics/puppets/lilywhite/evolved/front.4bpp.lz");
const u32 gMonBackPic_LilyWhite[]      = INCBIN_U32("graphics/puppets/lilywhite/evolved/back.4bpp.lz");
const u16 gMonPalette_LilyWhite[]      = INCBIN_U16("graphics/puppets/lilywhite/evolved/normal.gbapal");
const u16 gMonShinyPalette_LilyWhite[] = INCBIN_U16("graphics/puppets/lilywhite/evolved/shiny.gbapal");
const u8 gMonIcon_LilyWhite[]          = INCBIN_U8 ("graphics/puppets/lilywhite/evolved/icon.4bpp");
const u8 gMonFootprint_LilyWhite[]     = INCBIN_U8 ("graphics/puppets/lilywhite/footprint.1bpp");

const u32 gMonFrontPic_ALilyWhite[]     = INCBIN_U32("graphics/puppets/lilywhite/attack/front.4bpp.lz");
const u32 gMonBackPic_ALilyWhite[]      = INCBIN_U32("graphics/puppets/lilywhite/attack/back.4bpp.lz");
const u16 gMonPalette_ALilyWhite[]      = INCBIN_U16("graphics/puppets/lilywhite/attack/normal.gbapal");
const u16 gMonShinyPalette_ALilyWhite[] = INCBIN_U16("graphics/puppets/lilywhite/attack/shiny.gbapal");
const u8 gMonIcon_ALilyWhite[]          = INCBIN_U8 ("graphics/puppets/lilywhite/attack/icon.4bpp");
const u8 gMonFootprint_ALilyWhite[]     = INCBIN_U8 ("graphics/puppets/lilywhite/footprint.1bpp");

const u32 gMonFrontPic_HLilyWhite[]     = INCBIN_U32("graphics/puppets/lilywhite/helper/front.4bpp.lz");
const u32 gMonBackPic_HLilyWhite[]      = INCBIN_U32("graphics/puppets/lilywhite/helper/back.4bpp.lz");
const u16 gMonPalette_HLilyWhite[]      = INCBIN_U16("graphics/puppets/lilywhite/helper/normal.gbapal");
const u16 gMonShinyPalette_HLilyWhite[] = INCBIN_U16("graphics/puppets/lilywhite/helper/shiny.gbapal");
const u8 gMonIcon_HLilyWhite[]          = INCBIN_U8 ("graphics/puppets/lilywhite/helper/icon.4bpp");
const u8 gMonFootprint_HLilyWhite[]     = INCBIN_U8 ("graphics/puppets/lilywhite/footprint.1bpp");

const u32 gMonFrontPic_CLilyBlack[]     = INCBIN_U32("graphics/puppets/lilyblack/chibi/front.4bpp.lz");
const u32 gMonBackPic_CLilyBlack[]      = INCBIN_U32("graphics/puppets/lilyblack/chibi/back.4bpp.lz");
const u16 gMonPalette_CLilyBlack[]      = INCBIN_U16("graphics/puppets/lilyblack/chibi/normal.gbapal");
const u16 gMonShinyPalette_CLilyBlack[] = INCBIN_U16("graphics/puppets/lilyblack/chibi/shiny.gbapal");
const u8 gMonIcon_CLilyBlack[]          = INCBIN_U8 ("graphics/puppets/lilyblack/chibi/icon.4bpp");
const u8 gMonFootprint_CLilyBlack[]     = INCBIN_U8 ("graphics/puppets/lilyblack/footprint.1bpp");

const u32 gMonFrontPic_LilyBlack[]     = INCBIN_U32("graphics/puppets/lilyblack/evolved/front.4bpp.lz");
const u32 gMonBackPic_LilyBlack[]      = INCBIN_U32("graphics/puppets/lilyblack/evolved/back.4bpp.lz");
const u16 gMonPalette_LilyBlack[]      = INCBIN_U16("graphics/puppets/lilyblack/evolved/normal.gbapal");
const u16 gMonShinyPalette_LilyBlack[] = INCBIN_U16("graphics/puppets/lilyblack/evolved/shiny.gbapal");
const u8 gMonIcon_LilyBlack[]          = INCBIN_U8 ("graphics/puppets/lilyblack/evolved/icon.4bpp");
const u8 gMonFootprint_LilyBlack[]     = INCBIN_U8 ("graphics/puppets/lilyblack/footprint.1bpp");

const u32 gMonFrontPic_ALilyBlack[]     = INCBIN_U32("graphics/puppets/lilyblack/attack/front.4bpp.lz");
const u32 gMonBackPic_ALilyBlack[]      = INCBIN_U32("graphics/puppets/lilyblack/attack/back.4bpp.lz");
const u16 gMonPalette_ALilyBlack[]      = INCBIN_U16("graphics/puppets/lilyblack/attack/normal.gbapal");
const u16 gMonShinyPalette_ALilyBlack[] = INCBIN_U16("graphics/puppets/lilyblack/attack/shiny.gbapal");
const u8 gMonIcon_ALilyBlack[]          = INCBIN_U8 ("graphics/puppets/lilyblack/attack/icon.4bpp");
const u8 gMonFootprint_ALilyBlack[]     = INCBIN_U8 ("graphics/puppets/lilyblack/footprint.1bpp");

const u32 gMonFrontPic_SLilyBlack[]     = INCBIN_U32("graphics/puppets/lilyblack/speed/front.4bpp.lz");
const u32 gMonBackPic_SLilyBlack[]      = INCBIN_U32("graphics/puppets/lilyblack/speed/back.4bpp.lz");
const u16 gMonPalette_SLilyBlack[]      = INCBIN_U16("graphics/puppets/lilyblack/speed/normal.gbapal");
const u16 gMonShinyPalette_SLilyBlack[] = INCBIN_U16("graphics/puppets/lilyblack/speed/shiny.gbapal");
const u8 gMonIcon_SLilyBlack[]          = INCBIN_U8 ("graphics/puppets/lilyblack/speed/icon.4bpp");
const u8 gMonFootprint_SLilyBlack[]     = INCBIN_U8 ("graphics/puppets/lilyblack/footprint.1bpp");

const u32 gMonFrontPic_CLunasa[]     = INCBIN_U32("graphics/puppets/lunasa/chibi/front.4bpp.lz");
const u32 gMonBackPic_CLunasa[]      = INCBIN_U32("graphics/puppets/lunasa/chibi/back.4bpp.lz");
const u16 gMonPalette_CLunasa[]      = INCBIN_U16("graphics/puppets/lunasa/chibi/normal.gbapal");
const u16 gMonShinyPalette_CLunasa[] = INCBIN_U16("graphics/puppets/lunasa/chibi/shiny.gbapal");
const u8 gMonIcon_CLunasa[]          = INCBIN_U8 ("graphics/puppets/lunasa/chibi/icon.4bpp");
const u8 gMonFootprint_CLunasa[]     = INCBIN_U8 ("graphics/puppets/lunasa/footprint.1bpp");

const u32 gMonFrontPic_Lunasa[]     = INCBIN_U32("graphics/puppets/lunasa/evolved/front.4bpp.lz");
const u32 gMonBackPic_Lunasa[]      = INCBIN_U32("graphics/puppets/lunasa/evolved/back.4bpp.lz");
const u16 gMonPalette_Lunasa[]      = INCBIN_U16("graphics/puppets/lunasa/evolved/normal.gbapal");
const u16 gMonShinyPalette_Lunasa[] = INCBIN_U16("graphics/puppets/lunasa/evolved/shiny.gbapal");
const u8 gMonIcon_Lunasa[]          = INCBIN_U8 ("graphics/puppets/lunasa/evolved/icon.4bpp");
const u8 gMonFootprint_Lunasa[]     = INCBIN_U8 ("graphics/puppets/lunasa/footprint.1bpp");

const u32 gMonFrontPic_HLunasa[]     = INCBIN_U32("graphics/puppets/lunasa/helper/front.4bpp.lz");
const u32 gMonBackPic_HLunasa[]      = INCBIN_U32("graphics/puppets/lunasa/helper/back.4bpp.lz");
const u16 gMonPalette_HLunasa[]      = INCBIN_U16("graphics/puppets/lunasa/helper/normal.gbapal");
const u16 gMonShinyPalette_HLunasa[] = INCBIN_U16("graphics/puppets/lunasa/helper/shiny.gbapal");
const u8 gMonIcon_HLunasa[]          = INCBIN_U8 ("graphics/puppets/lunasa/helper/icon.4bpp");
const u8 gMonFootprint_HLunasa[]     = INCBIN_U8 ("graphics/puppets/lunasa/footprint.1bpp");

const u32 gMonFrontPic_CMerlin[]     = INCBIN_U32("graphics/puppets/merlin/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMerlin[]      = INCBIN_U32("graphics/puppets/merlin/chibi/back.4bpp.lz");
const u16 gMonPalette_CMerlin[]      = INCBIN_U16("graphics/puppets/merlin/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMerlin[] = INCBIN_U16("graphics/puppets/merlin/chibi/shiny.gbapal");
const u8 gMonIcon_CMerlin[]          = INCBIN_U8 ("graphics/puppets/merlin/chibi/icon.4bpp");
const u8 gMonFootprint_CMerlin[]     = INCBIN_U8 ("graphics/puppets/merlin/footprint.1bpp");

const u32 gMonFrontPic_Merlin[]     = INCBIN_U32("graphics/puppets/merlin/evolved/front.4bpp.lz");
const u32 gMonBackPic_Merlin[]      = INCBIN_U32("graphics/puppets/merlin/evolved/back.4bpp.lz");
const u16 gMonPalette_Merlin[]      = INCBIN_U16("graphics/puppets/merlin/evolved/normal.gbapal");
const u16 gMonShinyPalette_Merlin[] = INCBIN_U16("graphics/puppets/merlin/evolved/shiny.gbapal");
const u8 gMonIcon_Merlin[]          = INCBIN_U8 ("graphics/puppets/merlin/evolved/icon.4bpp");
const u8 gMonFootprint_Merlin[]     = INCBIN_U8 ("graphics/puppets/merlin/footprint.1bpp");

const u32 gMonFrontPic_HMerlin[]     = INCBIN_U32("graphics/puppets/merlin/helper/front.4bpp.lz");
const u32 gMonBackPic_HMerlin[]      = INCBIN_U32("graphics/puppets/merlin/helper/back.4bpp.lz");
const u16 gMonPalette_HMerlin[]      = INCBIN_U16("graphics/puppets/merlin/helper/normal.gbapal");
const u16 gMonShinyPalette_HMerlin[] = INCBIN_U16("graphics/puppets/merlin/helper/shiny.gbapal");
const u8 gMonIcon_HMerlin[]          = INCBIN_U8 ("graphics/puppets/merlin/helper/icon.4bpp");
const u8 gMonFootprint_HMerlin[]     = INCBIN_U8 ("graphics/puppets/merlin/footprint.1bpp");

const u32 gMonFrontPic_CLyrica[]     = INCBIN_U32("graphics/puppets/lyrica/chibi/front.4bpp.lz");
const u32 gMonBackPic_CLyrica[]      = INCBIN_U32("graphics/puppets/lyrica/chibi/back.4bpp.lz");
const u16 gMonPalette_CLyrica[]      = INCBIN_U16("graphics/puppets/lyrica/chibi/normal.gbapal");
const u16 gMonShinyPalette_CLyrica[] = INCBIN_U16("graphics/puppets/lyrica/chibi/shiny.gbapal");
const u8 gMonIcon_CLyrica[]          = INCBIN_U8 ("graphics/puppets/lyrica/chibi/icon.4bpp");
const u8 gMonFootprint_CLyrica[]     = INCBIN_U8 ("graphics/puppets/lyrica/footprint.1bpp");

const u32 gMonFrontPic_Lyrica[]     = INCBIN_U32("graphics/puppets/lyrica/evolved/front.4bpp.lz");
const u32 gMonBackPic_Lyrica[]      = INCBIN_U32("graphics/puppets/lyrica/evolved/back.4bpp.lz");
const u16 gMonPalette_Lyrica[]      = INCBIN_U16("graphics/puppets/lyrica/evolved/normal.gbapal");
const u16 gMonShinyPalette_Lyrica[] = INCBIN_U16("graphics/puppets/lyrica/evolved/shiny.gbapal");
const u8 gMonIcon_Lyrica[]          = INCBIN_U8 ("graphics/puppets/lyrica/evolved/icon.4bpp");
const u8 gMonFootprint_Lyrica[]     = INCBIN_U8 ("graphics/puppets/lyrica/footprint.1bpp");

const u32 gMonFrontPic_HLyrica[]     = INCBIN_U32("graphics/puppets/lyrica/helper/front.4bpp.lz");
const u32 gMonBackPic_HLyrica[]      = INCBIN_U32("graphics/puppets/lyrica/helper/back.4bpp.lz");
const u16 gMonPalette_HLyrica[]      = INCBIN_U16("graphics/puppets/lyrica/helper/normal.gbapal");
const u16 gMonShinyPalette_HLyrica[] = INCBIN_U16("graphics/puppets/lyrica/helper/shiny.gbapal");
const u8 gMonIcon_HLyrica[]          = INCBIN_U8 ("graphics/puppets/lyrica/helper/icon.4bpp");
const u8 gMonFootprint_HLyrica[]     = INCBIN_U8 ("graphics/puppets/lyrica/footprint.1bpp");

const u32 gMonFrontPic_Prismriver[]     = INCBIN_U32("graphics/puppets/prismriver/evolved/front.4bpp.lz");
const u32 gMonBackPic_Prismriver[]      = INCBIN_U32("graphics/puppets/prismriver/evolved/back.4bpp.lz");
const u16 gMonPalette_Prismriver[]      = INCBIN_U16("graphics/puppets/prismriver/evolved/normal.gbapal");
const u16 gMonShinyPalette_Prismriver[] = INCBIN_U16("graphics/puppets/prismriver/evolved/shiny.gbapal");
const u8 gMonIcon_Prismriver[]          = INCBIN_U8 ("graphics/puppets/prismriver/evolved/icon.4bpp");
const u8 gMonFootprint_Prismriver[]     = INCBIN_U8 ("graphics/puppets/prismriver/footprint.1bpp");

const u32 gMonFrontPic_CYoumu[]     = INCBIN_U32("graphics/puppets/youmu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYoumu[]      = INCBIN_U32("graphics/puppets/youmu/chibi/back.4bpp.lz");
const u16 gMonPalette_CYoumu[]      = INCBIN_U16("graphics/puppets/youmu/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYoumu[] = INCBIN_U16("graphics/puppets/youmu/chibi/shiny.gbapal");
const u8 gMonIcon_CYoumu[]          = INCBIN_U8 ("graphics/puppets/youmu/chibi/icon.4bpp");
const u8 gMonFootprint_CYoumu[]     = INCBIN_U8 ("graphics/puppets/youmu/footprint.1bpp");

const u32 gMonFrontPic_Youmu[]     = INCBIN_U32("graphics/puppets/youmu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Youmu[]      = INCBIN_U32("graphics/puppets/youmu/evolved/back.4bpp.lz");
const u16 gMonPalette_Youmu[]      = INCBIN_U16("graphics/puppets/youmu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Youmu[] = INCBIN_U16("graphics/puppets/youmu/evolved/shiny.gbapal");
const u8 gMonIcon_Youmu[]          = INCBIN_U8 ("graphics/puppets/youmu/evolved/icon.4bpp");
const u8 gMonFootprint_Youmu[]     = INCBIN_U8 ("graphics/puppets/youmu/footprint.1bpp");

const u32 gMonFrontPic_DYoumu[]     = INCBIN_U32("graphics/puppets/youmu/defense/front.4bpp.lz");
const u32 gMonBackPic_DYoumu[]      = INCBIN_U32("graphics/puppets/youmu/defense/back.4bpp.lz");
const u16 gMonPalette_DYoumu[]      = INCBIN_U16("graphics/puppets/youmu/defense/normal.gbapal");
const u16 gMonShinyPalette_DYoumu[] = INCBIN_U16("graphics/puppets/youmu/defense/shiny.gbapal");
const u8 gMonIcon_DYoumu[]          = INCBIN_U8 ("graphics/puppets/youmu/defense/icon.4bpp");
const u8 gMonFootprint_DYoumu[]     = INCBIN_U8 ("graphics/puppets/youmu/footprint.1bpp");

const u32 gMonFrontPic_SYoumu[]     = INCBIN_U32("graphics/puppets/youmu/speed/front.4bpp.lz");
const u32 gMonBackPic_SYoumu[]      = INCBIN_U32("graphics/puppets/youmu/speed/back.4bpp.lz");
const u16 gMonPalette_SYoumu[]      = INCBIN_U16("graphics/puppets/youmu/speed/normal.gbapal");
const u16 gMonShinyPalette_SYoumu[] = INCBIN_U16("graphics/puppets/youmu/speed/shiny.gbapal");
const u8 gMonIcon_SYoumu[]          = INCBIN_U8 ("graphics/puppets/youmu/speed/icon.4bpp");
const u8 gMonFootprint_SYoumu[]     = INCBIN_U8 ("graphics/puppets/youmu/footprint.1bpp");

const u32 gMonFrontPic_AdYoumu[]     = INCBIN_U32("graphics/puppets/youmu/advent/front.4bpp.lz");
const u32 gMonBackPic_AdYoumu[]      = INCBIN_U32("graphics/puppets/youmu/advent/back.4bpp.lz");
const u16 gMonPalette_AdYoumu[]      = INCBIN_U16("graphics/puppets/youmu/advent/normal.gbapal");
const u16 gMonShinyPalette_AdYoumu[] = INCBIN_U16("graphics/puppets/youmu/advent/shiny.gbapal");
const u8 gMonIcon_AdYoumu[]          = INCBIN_U8 ("graphics/puppets/youmu/advent/icon.4bpp");
const u8 gMonFootprint_AdYoumu[]     = INCBIN_U8 ("graphics/puppets/youmu/footprint.1bpp");

const u32 gMonFrontPic_CYuyuko[]     = INCBIN_U32("graphics/puppets/yuyuko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYuyuko[]      = INCBIN_U32("graphics/puppets/yuyuko/chibi/back.4bpp.lz");
const u16 gMonPalette_CYuyuko[]      = INCBIN_U16("graphics/puppets/yuyuko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYuyuko[] = INCBIN_U16("graphics/puppets/yuyuko/chibi/shiny.gbapal");
const u8 gMonIcon_CYuyuko[]          = INCBIN_U8 ("graphics/puppets/yuyuko/chibi/icon.4bpp");
const u8 gMonFootprint_CYuyuko[]     = INCBIN_U8 ("graphics/puppets/yuyuko/footprint.1bpp");

const u32 gMonFrontPic_Yuyuko[]     = INCBIN_U32("graphics/puppets/yuyuko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yuyuko[]      = INCBIN_U32("graphics/puppets/yuyuko/evolved/back.4bpp.lz");
const u16 gMonPalette_Yuyuko[]      = INCBIN_U16("graphics/puppets/yuyuko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yuyuko[] = INCBIN_U16("graphics/puppets/yuyuko/evolved/shiny.gbapal");
const u8 gMonIcon_Yuyuko[]          = INCBIN_U8 ("graphics/puppets/yuyuko/evolved/icon.4bpp");
const u8 gMonFootprint_Yuyuko[]     = INCBIN_U8 ("graphics/puppets/yuyuko/footprint.1bpp");

const u32 gMonFrontPic_AYuyuko[]     = INCBIN_U32("graphics/puppets/yuyuko/attack/front.4bpp.lz");
const u32 gMonBackPic_AYuyuko[]      = INCBIN_U32("graphics/puppets/yuyuko/attack/back.4bpp.lz");
const u16 gMonPalette_AYuyuko[]      = INCBIN_U16("graphics/puppets/yuyuko/attack/normal.gbapal");
const u16 gMonShinyPalette_AYuyuko[] = INCBIN_U16("graphics/puppets/yuyuko/attack/shiny.gbapal");
const u8 gMonIcon_AYuyuko[]          = INCBIN_U8 ("graphics/puppets/yuyuko/attack/icon.4bpp");
const u8 gMonFootprint_AYuyuko[]     = INCBIN_U8 ("graphics/puppets/yuyuko/footprint.1bpp");

const u32 gMonFrontPic_DYuyuko[]     = INCBIN_U32("graphics/puppets/yuyuko/defense/front.4bpp.lz");
const u32 gMonBackPic_DYuyuko[]      = INCBIN_U32("graphics/puppets/yuyuko/defense/back.4bpp.lz");
const u16 gMonPalette_DYuyuko[]      = INCBIN_U16("graphics/puppets/yuyuko/defense/normal.gbapal");
const u16 gMonShinyPalette_DYuyuko[] = INCBIN_U16("graphics/puppets/yuyuko/defense/shiny.gbapal");
const u8 gMonIcon_DYuyuko[]          = INCBIN_U8 ("graphics/puppets/yuyuko/defense/icon.4bpp");
const u8 gMonFootprint_DYuyuko[]     = INCBIN_U8 ("graphics/puppets/yuyuko/footprint.1bpp");

const u32 gMonFrontPic_AdYuyuko[]     = INCBIN_U32("graphics/puppets/yuyuko/advent/front.4bpp.lz");
const u32 gMonBackPic_AdYuyuko[]      = INCBIN_U32("graphics/puppets/yuyuko/advent/back.4bpp.lz");
const u16 gMonPalette_AdYuyuko[]      = INCBIN_U16("graphics/puppets/yuyuko/advent/normal.gbapal");
const u16 gMonShinyPalette_AdYuyuko[] = INCBIN_U16("graphics/puppets/yuyuko/advent/shiny.gbapal");
const u8 gMonIcon_AdYuyuko[]          = INCBIN_U8 ("graphics/puppets/yuyuko/advent/icon.4bpp");
const u8 gMonFootprint_AdYuyuko[]     = INCBIN_U8 ("graphics/puppets/yuyuko/footprint.1bpp");

const u32 gMonFrontPic_CRan[]     = INCBIN_U32("graphics/puppets/ran/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRan[]      = INCBIN_U32("graphics/puppets/ran/chibi/back.4bpp.lz");
const u16 gMonPalette_CRan[]      = INCBIN_U16("graphics/puppets/ran/chibi/normal.gbapal");
const u16 gMonShinyPalette_CRan[] = INCBIN_U16("graphics/puppets/ran/chibi/shiny.gbapal");
const u8 gMonIcon_CRan[]          = INCBIN_U8 ("graphics/puppets/ran/chibi/icon.4bpp");
const u8 gMonFootprint_CRan[]     = INCBIN_U8 ("graphics/puppets/ran/footprint.1bpp");

const u32 gMonFrontPic_Ran[]     = INCBIN_U32("graphics/puppets/ran/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ran[]      = INCBIN_U32("graphics/puppets/ran/evolved/back.4bpp.lz");
const u16 gMonPalette_Ran[]      = INCBIN_U16("graphics/puppets/ran/evolved/normal.gbapal");
const u16 gMonShinyPalette_Ran[] = INCBIN_U16("graphics/puppets/ran/evolved/shiny.gbapal");
const u8 gMonIcon_Ran[]          = INCBIN_U8 ("graphics/puppets/ran/evolved/icon.4bpp");
const u8 gMonFootprint_Ran[]     = INCBIN_U8 ("graphics/puppets/ran/footprint.1bpp");

const u32 gMonFrontPic_ARan[]     = INCBIN_U32("graphics/puppets/ran/attack/front.4bpp.lz");
const u32 gMonBackPic_ARan[]      = INCBIN_U32("graphics/puppets/ran/attack/back.4bpp.lz");
const u16 gMonPalette_ARan[]      = INCBIN_U16("graphics/puppets/ran/attack/normal.gbapal");
const u16 gMonShinyPalette_ARan[] = INCBIN_U16("graphics/puppets/ran/attack/shiny.gbapal");
const u8 gMonIcon_ARan[]          = INCBIN_U8 ("graphics/puppets/ran/attack/icon.4bpp");
const u8 gMonFootprint_ARan[]     = INCBIN_U8 ("graphics/puppets/ran/footprint.1bpp");

const u32 gMonFrontPic_HRan[]     = INCBIN_U32("graphics/puppets/ran/helper/front.4bpp.lz");
const u32 gMonBackPic_HRan[]      = INCBIN_U32("graphics/puppets/ran/helper/back.4bpp.lz");
const u16 gMonPalette_HRan[]      = INCBIN_U16("graphics/puppets/ran/helper/normal.gbapal");
const u16 gMonShinyPalette_HRan[] = INCBIN_U16("graphics/puppets/ran/helper/shiny.gbapal");
const u8 gMonIcon_HRan[]          = INCBIN_U8 ("graphics/puppets/ran/helper/icon.4bpp");
const u8 gMonFootprint_HRan[]     = INCBIN_U8 ("graphics/puppets/ran/footprint.1bpp");

const u32 gMonFrontPic_AdRan[]     = INCBIN_U32("graphics/puppets/ran/advent/front.4bpp.lz");
const u32 gMonBackPic_AdRan[]      = INCBIN_U32("graphics/puppets/ran/advent/back.4bpp.lz");
const u16 gMonPalette_AdRan[]      = INCBIN_U16("graphics/puppets/ran/advent/normal.gbapal");
const u16 gMonShinyPalette_AdRan[] = INCBIN_U16("graphics/puppets/ran/advent/shiny.gbapal");
const u8 gMonIcon_AdRan[]          = INCBIN_U8 ("graphics/puppets/ran/advent/icon.4bpp");
const u8 gMonFootprint_AdRan[]     = INCBIN_U8 ("graphics/puppets/ran/footprint.1bpp");

const u32 gMonFrontPic_CYukari[]     = INCBIN_U32("graphics/puppets/yukari/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYukari[]      = INCBIN_U32("graphics/puppets/yukari/chibi/back.4bpp.lz");
const u16 gMonPalette_CYukari[]      = INCBIN_U16("graphics/puppets/yukari/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYukari[] = INCBIN_U16("graphics/puppets/yukari/chibi/shiny.gbapal");
const u8 gMonIcon_CYukari[]          = INCBIN_U8 ("graphics/puppets/yukari/chibi/icon.4bpp");
const u8 gMonFootprint_CYukari[]     = INCBIN_U8 ("graphics/puppets/yukari/footprint.1bpp");

const u32 gMonFrontPic_Yukari[]     = INCBIN_U32("graphics/puppets/yukari/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yukari[]      = INCBIN_U32("graphics/puppets/yukari/evolved/back.4bpp.lz");
const u16 gMonPalette_Yukari[]      = INCBIN_U16("graphics/puppets/yukari/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yukari[] = INCBIN_U16("graphics/puppets/yukari/evolved/shiny.gbapal");
const u8 gMonIcon_Yukari[]          = INCBIN_U8 ("graphics/puppets/yukari/evolved/icon.4bpp");
const u8 gMonFootprint_Yukari[]     = INCBIN_U8 ("graphics/puppets/yukari/footprint.1bpp");

const u32 gMonFrontPic_DYukari[]     = INCBIN_U32("graphics/puppets/yukari/defense/front.4bpp.lz");
const u32 gMonBackPic_DYukari[]      = INCBIN_U32("graphics/puppets/yukari/defense/back.4bpp.lz");
const u16 gMonPalette_DYukari[]      = INCBIN_U16("graphics/puppets/yukari/defense/normal.gbapal");
const u16 gMonShinyPalette_DYukari[] = INCBIN_U16("graphics/puppets/yukari/defense/shiny.gbapal");
const u8 gMonIcon_DYukari[]          = INCBIN_U8 ("graphics/puppets/yukari/defense/icon.4bpp");
const u8 gMonFootprint_DYukari[]     = INCBIN_U8 ("graphics/puppets/yukari/footprint.1bpp");

const u32 gMonFrontPic_TYukari[]     = INCBIN_U32("graphics/puppets/yukari/technic/front.4bpp.lz");
const u32 gMonBackPic_TYukari[]      = INCBIN_U32("graphics/puppets/yukari/technic/back.4bpp.lz");
const u16 gMonPalette_TYukari[]      = INCBIN_U16("graphics/puppets/yukari/technic/normal.gbapal");
const u16 gMonShinyPalette_TYukari[] = INCBIN_U16("graphics/puppets/yukari/technic/shiny.gbapal");
const u8 gMonIcon_TYukari[]          = INCBIN_U8 ("graphics/puppets/yukari/technic/icon.4bpp");
const u8 gMonFootprint_TYukari[]     = INCBIN_U8 ("graphics/puppets/yukari/footprint.1bpp");

const u32 gMonFrontPic_AdYukari[]     = INCBIN_U32("graphics/puppets/yukari/advent/front.4bpp.lz");
const u32 gMonBackPic_AdYukari[]      = INCBIN_U32("graphics/puppets/yukari/advent/back.4bpp.lz");
const u16 gMonPalette_AdYukari[]      = INCBIN_U16("graphics/puppets/yukari/advent/normal.gbapal");
const u16 gMonShinyPalette_AdYukari[] = INCBIN_U16("graphics/puppets/yukari/advent/shiny.gbapal");
const u8 gMonIcon_AdYukari[]          = INCBIN_U8 ("graphics/puppets/yukari/advent/icon.4bpp");
const u8 gMonFootprint_AdYukari[]     = INCBIN_U8 ("graphics/puppets/yukari/footprint.1bpp");

const u32 gMonFrontPic_Kedama[]     = INCBIN_U32("graphics/puppets/kedama/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kedama[]      = INCBIN_U32("graphics/puppets/kedama/evolved/back.4bpp.lz");
const u16 gMonPalette_Kedama[]      = INCBIN_U16("graphics/puppets/kedama/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kedama[] = INCBIN_U16("graphics/puppets/kedama/evolved/shiny.gbapal");
const u8 gMonIcon_Kedama[]          = INCBIN_U8 ("graphics/puppets/kedama/evolved/icon.4bpp");
const u8 gMonFootprint_Kedama[]     = INCBIN_U8 ("graphics/puppets/kedama/footprint.1bpp");

const u32 gMonFrontPic_CLayla[]     = INCBIN_U32("graphics/puppets/layla/chibi/front.4bpp.lz");
const u32 gMonBackPic_CLayla[]      = INCBIN_U32("graphics/puppets/layla/chibi/back.4bpp.lz");
const u16 gMonPalette_CLayla[]      = INCBIN_U16("graphics/puppets/layla/chibi/normal.gbapal");
const u16 gMonShinyPalette_CLayla[] = INCBIN_U16("graphics/puppets/layla/chibi/shiny.gbapal");
const u8 gMonIcon_CLayla[]          = INCBIN_U8 ("graphics/puppets/layla/chibi/icon.4bpp");
const u8 gMonFootprint_CLayla[]     = INCBIN_U8 ("graphics/puppets/layla/footprint.1bpp");

const u32 gMonFrontPic_Layla[]     = INCBIN_U32("graphics/puppets/layla/evolved/front.4bpp.lz");
const u32 gMonBackPic_Layla[]      = INCBIN_U32("graphics/puppets/layla/evolved/back.4bpp.lz");
const u16 gMonPalette_Layla[]      = INCBIN_U16("graphics/puppets/layla/evolved/normal.gbapal");
const u16 gMonShinyPalette_Layla[] = INCBIN_U16("graphics/puppets/layla/evolved/shiny.gbapal");
const u8 gMonIcon_Layla[]          = INCBIN_U8 ("graphics/puppets/layla/evolved/icon.4bpp");
const u8 gMonFootprint_Layla[]     = INCBIN_U8 ("graphics/puppets/layla/footprint.1bpp");

const u32 gMonFrontPic_DLayla[]     = INCBIN_U32("graphics/puppets/layla/defense/front.4bpp.lz");
const u32 gMonBackPic_DLayla[]      = INCBIN_U32("graphics/puppets/layla/defense/back.4bpp.lz");
const u16 gMonPalette_DLayla[]      = INCBIN_U16("graphics/puppets/layla/defense/normal.gbapal");
const u16 gMonShinyPalette_DLayla[] = INCBIN_U16("graphics/puppets/layla/defense/shiny.gbapal");
const u8 gMonIcon_DLayla[]          = INCBIN_U8 ("graphics/puppets/layla/defense/icon.4bpp");
const u8 gMonFootprint_DLayla[]     = INCBIN_U8 ("graphics/puppets/layla/footprint.1bpp");

const u32 gMonFrontPic_Youki[]     = INCBIN_U32("graphics/puppets/youki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Youki[]      = INCBIN_U32("graphics/puppets/youki/evolved/back.4bpp.lz");
const u16 gMonPalette_Youki[]      = INCBIN_U16("graphics/puppets/youki/evolved/normal.gbapal");
const u16 gMonShinyPalette_Youki[] = INCBIN_U16("graphics/puppets/youki/evolved/shiny.gbapal");
const u8 gMonIcon_Youki[]          = INCBIN_U8 ("graphics/puppets/youki/evolved/icon.4bpp");
const u8 gMonFootprint_Youki[]     = INCBIN_U8 ("graphics/puppets/youki/footprint.1bpp");

const u32 gMonFrontPic_Ayakashi[]     = INCBIN_U32("graphics/puppets/ayakashi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ayakashi[]      = INCBIN_U32("graphics/puppets/ayakashi/evolved/back.4bpp.lz");
const u16 gMonPalette_Ayakashi[]      = INCBIN_U16("graphics/puppets/ayakashi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Ayakashi[] = INCBIN_U16("graphics/puppets/ayakashi/evolved/shiny.gbapal");
const u8 gMonIcon_Ayakashi[]          = INCBIN_U8 ("graphics/puppets/ayakashi/evolved/icon.4bpp");
const u8 gMonFootprint_Ayakashi[]     = INCBIN_U8 ("graphics/puppets/ayakashi/footprint.1bpp");

const u32 gMonFrontPic_CWriggle[]     = INCBIN_U32("graphics/puppets/wriggle/chibi/front.4bpp.lz");
const u32 gMonBackPic_CWriggle[]      = INCBIN_U32("graphics/puppets/wriggle/chibi/back.4bpp.lz");
const u16 gMonPalette_CWriggle[]      = INCBIN_U16("graphics/puppets/wriggle/chibi/normal.gbapal");
const u16 gMonShinyPalette_CWriggle[] = INCBIN_U16("graphics/puppets/wriggle/chibi/shiny.gbapal");
const u8 gMonIcon_CWriggle[]          = INCBIN_U8 ("graphics/puppets/wriggle/chibi/icon.4bpp");
const u8 gMonFootprint_CWriggle[]     = INCBIN_U8 ("graphics/puppets/wriggle/footprint.1bpp");

const u32 gMonFrontPic_Wriggle[]     = INCBIN_U32("graphics/puppets/wriggle/evolved/front.4bpp.lz");
const u32 gMonBackPic_Wriggle[]      = INCBIN_U32("graphics/puppets/wriggle/evolved/back.4bpp.lz");
const u16 gMonPalette_Wriggle[]      = INCBIN_U16("graphics/puppets/wriggle/evolved/normal.gbapal");
const u16 gMonShinyPalette_Wriggle[] = INCBIN_U16("graphics/puppets/wriggle/evolved/shiny.gbapal");
const u8 gMonIcon_Wriggle[]          = INCBIN_U8 ("graphics/puppets/wriggle/evolved/icon.4bpp");
const u8 gMonFootprint_Wriggle[]     = INCBIN_U8 ("graphics/puppets/wriggle/footprint.1bpp");

const u32 gMonFrontPic_DWriggle[]     = INCBIN_U32("graphics/puppets/wriggle/defense/front.4bpp.lz");
const u32 gMonBackPic_DWriggle[]      = INCBIN_U32("graphics/puppets/wriggle/defense/back.4bpp.lz");
const u16 gMonPalette_DWriggle[]      = INCBIN_U16("graphics/puppets/wriggle/defense/normal.gbapal");
const u16 gMonShinyPalette_DWriggle[] = INCBIN_U16("graphics/puppets/wriggle/defense/shiny.gbapal");
const u8 gMonIcon_DWriggle[]          = INCBIN_U8 ("graphics/puppets/wriggle/defense/icon.4bpp");
const u8 gMonFootprint_DWriggle[]     = INCBIN_U8 ("graphics/puppets/wriggle/footprint.1bpp");

const u32 gMonFrontPic_SWriggle[]     = INCBIN_U32("graphics/puppets/wriggle/speed/front.4bpp.lz");
const u32 gMonBackPic_SWriggle[]      = INCBIN_U32("graphics/puppets/wriggle/speed/back.4bpp.lz");
const u16 gMonPalette_SWriggle[]      = INCBIN_U16("graphics/puppets/wriggle/speed/normal.gbapal");
const u16 gMonShinyPalette_SWriggle[] = INCBIN_U16("graphics/puppets/wriggle/speed/shiny.gbapal");
const u8 gMonIcon_SWriggle[]          = INCBIN_U8 ("graphics/puppets/wriggle/speed/icon.4bpp");
const u8 gMonFootprint_SWriggle[]     = INCBIN_U8 ("graphics/puppets/wriggle/footprint.1bpp");

const u32 gMonFrontPic_CMystia[]     = INCBIN_U32("graphics/puppets/mystia/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMystia[]      = INCBIN_U32("graphics/puppets/mystia/chibi/back.4bpp.lz");
const u16 gMonPalette_CMystia[]      = INCBIN_U16("graphics/puppets/mystia/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMystia[] = INCBIN_U16("graphics/puppets/mystia/chibi/shiny.gbapal");
const u8 gMonIcon_CMystia[]          = INCBIN_U8 ("graphics/puppets/mystia/chibi/icon.4bpp");
const u8 gMonFootprint_CMystia[]     = INCBIN_U8 ("graphics/puppets/mystia/footprint.1bpp");

const u32 gMonFrontPic_Mystia[]     = INCBIN_U32("graphics/puppets/mystia/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mystia[]      = INCBIN_U32("graphics/puppets/mystia/evolved/back.4bpp.lz");
const u16 gMonPalette_Mystia[]      = INCBIN_U16("graphics/puppets/mystia/evolved/normal.gbapal");
const u16 gMonShinyPalette_Mystia[] = INCBIN_U16("graphics/puppets/mystia/evolved/shiny.gbapal");
const u8 gMonIcon_Mystia[]          = INCBIN_U8 ("graphics/puppets/mystia/evolved/icon.4bpp");
const u8 gMonFootprint_Mystia[]     = INCBIN_U8 ("graphics/puppets/mystia/footprint.1bpp");

const u32 gMonFrontPic_AMystia[]     = INCBIN_U32("graphics/puppets/mystia/attack/front.4bpp.lz");
const u32 gMonBackPic_AMystia[]      = INCBIN_U32("graphics/puppets/mystia/attack/back.4bpp.lz");
const u16 gMonPalette_AMystia[]      = INCBIN_U16("graphics/puppets/mystia/attack/normal.gbapal");
const u16 gMonShinyPalette_AMystia[] = INCBIN_U16("graphics/puppets/mystia/attack/shiny.gbapal");
const u8 gMonIcon_AMystia[]          = INCBIN_U8 ("graphics/puppets/mystia/attack/icon.4bpp");
const u8 gMonFootprint_AMystia[]     = INCBIN_U8 ("graphics/puppets/mystia/footprint.1bpp");

const u32 gMonFrontPic_HMystia[]     = INCBIN_U32("graphics/puppets/mystia/helper/front.4bpp.lz");
const u32 gMonBackPic_HMystia[]      = INCBIN_U32("graphics/puppets/mystia/helper/back.4bpp.lz");
const u16 gMonPalette_HMystia[]      = INCBIN_U16("graphics/puppets/mystia/helper/normal.gbapal");
const u16 gMonShinyPalette_HMystia[] = INCBIN_U16("graphics/puppets/mystia/helper/shiny.gbapal");
const u8 gMonIcon_HMystia[]          = INCBIN_U8 ("graphics/puppets/mystia/helper/icon.4bpp");
const u8 gMonFootprint_HMystia[]     = INCBIN_U8 ("graphics/puppets/mystia/footprint.1bpp");

const u32 gMonFrontPic_AdMystia[]     = INCBIN_U32("graphics/puppets/mystia/advent/front.4bpp.lz");
const u32 gMonBackPic_AdMystia[]      = INCBIN_U32("graphics/puppets/mystia/advent/back.4bpp.lz");
const u16 gMonPalette_AdMystia[]      = INCBIN_U16("graphics/puppets/mystia/advent/normal.gbapal");
const u16 gMonShinyPalette_AdMystia[] = INCBIN_U16("graphics/puppets/mystia/advent/shiny.gbapal");
const u8 gMonIcon_AdMystia[]          = INCBIN_U8 ("graphics/puppets/mystia/advent/icon.4bpp");
const u8 gMonFootprint_AdMystia[]     = INCBIN_U8 ("graphics/puppets/mystia/footprint.1bpp");

const u32 gMonFrontPic_CKeine[]     = INCBIN_U32("graphics/puppets/keine/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKeine[]      = INCBIN_U32("graphics/puppets/keine/chibi/back.4bpp.lz");
const u16 gMonPalette_CKeine[]      = INCBIN_U16("graphics/puppets/keine/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKeine[] = INCBIN_U16("graphics/puppets/keine/chibi/shiny.gbapal");
const u8 gMonIcon_CKeine[]          = INCBIN_U8 ("graphics/puppets/keine/chibi/icon.4bpp");
const u8 gMonFootprint_CKeine[]     = INCBIN_U8 ("graphics/puppets/keine/footprint.1bpp");

const u32 gMonFrontPic_Keine[]     = INCBIN_U32("graphics/puppets/keine/evolved/front.4bpp.lz");
const u32 gMonBackPic_Keine[]      = INCBIN_U32("graphics/puppets/keine/evolved/back.4bpp.lz");
const u16 gMonPalette_Keine[]      = INCBIN_U16("graphics/puppets/keine/evolved/normal.gbapal");
const u16 gMonShinyPalette_Keine[] = INCBIN_U16("graphics/puppets/keine/evolved/shiny.gbapal");
const u8 gMonIcon_Keine[]          = INCBIN_U8 ("graphics/puppets/keine/evolved/icon.4bpp");
const u8 gMonFootprint_Keine[]     = INCBIN_U8 ("graphics/puppets/keine/footprint.1bpp");

const u32 gMonFrontPic_AKeine[]     = INCBIN_U32("graphics/puppets/keine/hakutaku_attack/front.4bpp.lz");
const u32 gMonBackPic_AKeine[]      = INCBIN_U32("graphics/puppets/keine/hakutaku_attack/back.4bpp.lz");
const u16 gMonPalette_AKeine[]      = INCBIN_U16("graphics/puppets/keine/hakutaku_attack/normal.gbapal");
const u16 gMonShinyPalette_AKeine[] = INCBIN_U16("graphics/puppets/keine/hakutaku_attack/shiny.gbapal");
const u8 gMonIcon_AKeine[]          = INCBIN_U8 ("graphics/puppets/keine/hakutaku_attack/icon.4bpp");
const u8 gMonFootprint_AKeine[]     = INCBIN_U8 ("graphics/puppets/keine/footprint_hakutaku.1bpp");

const u32 gMonFrontPic_DKeine[]     = INCBIN_U32("graphics/puppets/keine/hakutaku_defense/front.4bpp.lz");
const u32 gMonBackPic_DKeine[]      = INCBIN_U32("graphics/puppets/keine/hakutaku_defense/back.4bpp.lz");
const u16 gMonPalette_DKeine[]      = INCBIN_U16("graphics/puppets/keine/hakutaku_defense/normal.gbapal");
const u16 gMonShinyPalette_DKeine[] = INCBIN_U16("graphics/puppets/keine/hakutaku_defense/shiny.gbapal");
const u8 gMonIcon_DKeine[]          = INCBIN_U8 ("graphics/puppets/keine/hakutaku_defense/icon.4bpp");
const u8 gMonFootprint_DKeine[]     = INCBIN_U8 ("graphics/puppets/keine/footprint_hakutaku.1bpp");

const u32 gMonFrontPic_HKeine[]     = INCBIN_U32("graphics/puppets/keine/helper/front.4bpp.lz");
const u32 gMonBackPic_HKeine[]      = INCBIN_U32("graphics/puppets/keine/helper/back.4bpp.lz");
const u16 gMonPalette_HKeine[]      = INCBIN_U16("graphics/puppets/keine/helper/normal.gbapal");
const u16 gMonShinyPalette_HKeine[] = INCBIN_U16("graphics/puppets/keine/helper/shiny.gbapal");
const u8 gMonIcon_HKeine[]          = INCBIN_U8 ("graphics/puppets/keine/helper/icon.4bpp");
const u8 gMonFootprint_HKeine[]     = INCBIN_U8 ("graphics/puppets/keine/footprint.1bpp");

const u32 gMonFrontPic_CTewi[]     = INCBIN_U32("graphics/puppets/tewi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CTewi[]      = INCBIN_U32("graphics/puppets/tewi/chibi/back.4bpp.lz");
const u16 gMonPalette_CTewi[]      = INCBIN_U16("graphics/puppets/tewi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CTewi[] = INCBIN_U16("graphics/puppets/tewi/chibi/shiny.gbapal");
const u8 gMonIcon_CTewi[]          = INCBIN_U8 ("graphics/puppets/tewi/chibi/icon.4bpp");
const u8 gMonFootprint_CTewi[]     = INCBIN_U8 ("graphics/puppets/tewi/footprint.1bpp");

const u32 gMonFrontPic_Tewi[]     = INCBIN_U32("graphics/puppets/tewi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Tewi[]      = INCBIN_U32("graphics/puppets/tewi/evolved/back.4bpp.lz");
const u16 gMonPalette_Tewi[]      = INCBIN_U16("graphics/puppets/tewi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Tewi[] = INCBIN_U16("graphics/puppets/tewi/evolved/shiny.gbapal");
const u8 gMonIcon_Tewi[]          = INCBIN_U8 ("graphics/puppets/tewi/evolved/icon.4bpp");
const u8 gMonFootprint_Tewi[]     = INCBIN_U8 ("graphics/puppets/tewi/footprint.1bpp");

const u32 gMonFrontPic_ATewi[]     = INCBIN_U32("graphics/puppets/tewi/attack/front.4bpp.lz");
const u32 gMonBackPic_ATewi[]      = INCBIN_U32("graphics/puppets/tewi/attack/back.4bpp.lz");
const u16 gMonPalette_ATewi[]      = INCBIN_U16("graphics/puppets/tewi/attack/normal.gbapal");
const u16 gMonShinyPalette_ATewi[] = INCBIN_U16("graphics/puppets/tewi/attack/shiny.gbapal");
const u8 gMonIcon_ATewi[]          = INCBIN_U8 ("graphics/puppets/tewi/attack/icon.4bpp");
const u8 gMonFootprint_ATewi[]     = INCBIN_U8 ("graphics/puppets/tewi/footprint.1bpp");

const u32 gMonFrontPic_DTewi[]     = INCBIN_U32("graphics/puppets/tewi/defense/front.4bpp.lz");
const u32 gMonBackPic_DTewi[]      = INCBIN_U32("graphics/puppets/tewi/defense/back.4bpp.lz");
const u16 gMonPalette_DTewi[]      = INCBIN_U16("graphics/puppets/tewi/defense/normal.gbapal");
const u16 gMonShinyPalette_DTewi[] = INCBIN_U16("graphics/puppets/tewi/defense/shiny.gbapal");
const u8 gMonIcon_DTewi[]          = INCBIN_U8 ("graphics/puppets/tewi/defense/icon.4bpp");
const u8 gMonFootprint_DTewi[]     = INCBIN_U8 ("graphics/puppets/tewi/footprint.1bpp");

const u32 gMonFrontPic_AdTewi[]     = INCBIN_U32("graphics/puppets/tewi/advent/front.4bpp.lz");
const u32 gMonBackPic_AdTewi[]      = INCBIN_U32("graphics/puppets/tewi/advent/back.4bpp.lz");
const u16 gMonPalette_AdTewi[]      = INCBIN_U16("graphics/puppets/tewi/advent/normal.gbapal");
const u16 gMonShinyPalette_AdTewi[] = INCBIN_U16("graphics/puppets/tewi/advent/shiny.gbapal");
const u8 gMonIcon_AdTewi[]          = INCBIN_U8 ("graphics/puppets/tewi/advent/icon.4bpp");
const u8 gMonFootprint_AdTewi[]     = INCBIN_U8 ("graphics/puppets/tewi/footprint.1bpp");

const u32 gMonFrontPic_CReisen[]     = INCBIN_U32("graphics/puppets/reisen/chibi/front.4bpp.lz");
const u32 gMonBackPic_CReisen[]      = INCBIN_U32("graphics/puppets/reisen/chibi/back.4bpp.lz");
const u16 gMonPalette_CReisen[]      = INCBIN_U16("graphics/puppets/reisen/chibi/normal.gbapal");
const u16 gMonShinyPalette_CReisen[] = INCBIN_U16("graphics/puppets/reisen/chibi/shiny.gbapal");
const u8 gMonIcon_CReisen[]          = INCBIN_U8 ("graphics/puppets/reisen/chibi/icon.4bpp");
const u8 gMonFootprint_CReisen[]     = INCBIN_U8 ("graphics/puppets/reisen/footprint.1bpp");

const u32 gMonFrontPic_Reisen[]     = INCBIN_U32("graphics/puppets/reisen/evolved/front.4bpp.lz");
const u32 gMonBackPic_Reisen[]      = INCBIN_U32("graphics/puppets/reisen/evolved/back.4bpp.lz");
const u16 gMonPalette_Reisen[]      = INCBIN_U16("graphics/puppets/reisen/evolved/normal.gbapal");
const u16 gMonShinyPalette_Reisen[] = INCBIN_U16("graphics/puppets/reisen/evolved/shiny.gbapal");
const u8 gMonIcon_Reisen[]          = INCBIN_U8 ("graphics/puppets/reisen/evolved/icon.4bpp");
const u8 gMonFootprint_Reisen[]     = INCBIN_U8 ("graphics/puppets/reisen/footprint.1bpp");

const u32 gMonFrontPic_DReisen[]     = INCBIN_U32("graphics/puppets/reisen/defense/front.4bpp.lz");
const u32 gMonBackPic_DReisen[]      = INCBIN_U32("graphics/puppets/reisen/defense/back.4bpp.lz");
const u16 gMonPalette_DReisen[]      = INCBIN_U16("graphics/puppets/reisen/defense/normal.gbapal");
const u16 gMonShinyPalette_DReisen[] = INCBIN_U16("graphics/puppets/reisen/defense/shiny.gbapal");
const u8 gMonIcon_DReisen[]          = INCBIN_U8 ("graphics/puppets/reisen/defense/icon.4bpp");
const u8 gMonFootprint_DReisen[]     = INCBIN_U8 ("graphics/puppets/reisen/footprint.1bpp");

const u32 gMonFrontPic_TReisen[]     = INCBIN_U32("graphics/puppets/reisen/technic/front.4bpp.lz");
const u32 gMonBackPic_TReisen[]      = INCBIN_U32("graphics/puppets/reisen/technic/back.4bpp.lz");
const u16 gMonPalette_TReisen[]      = INCBIN_U16("graphics/puppets/reisen/technic/normal.gbapal");
const u16 gMonShinyPalette_TReisen[] = INCBIN_U16("graphics/puppets/reisen/technic/shiny.gbapal");
const u8 gMonIcon_TReisen[]          = INCBIN_U8 ("graphics/puppets/reisen/technic/icon.4bpp");
const u8 gMonFootprint_TReisen[]     = INCBIN_U8 ("graphics/puppets/reisen/footprint.1bpp");

const u32 gMonFrontPic_AdReisen[]     = INCBIN_U32("graphics/puppets/reisen/advent/front.4bpp.lz");
const u32 gMonBackPic_AdReisen[]      = INCBIN_U32("graphics/puppets/reisen/advent/back.4bpp.lz");
const u16 gMonPalette_AdReisen[]      = INCBIN_U16("graphics/puppets/reisen/advent/normal.gbapal");
const u16 gMonShinyPalette_AdReisen[] = INCBIN_U16("graphics/puppets/reisen/advent/shiny.gbapal");
const u8 gMonIcon_AdReisen[]          = INCBIN_U8 ("graphics/puppets/reisen/advent/icon.4bpp");
const u8 gMonFootprint_AdReisen[]     = INCBIN_U8 ("graphics/puppets/reisen/footprint.1bpp");

const u32 gMonFrontPic_CEirin[]     = INCBIN_U32("graphics/puppets/eirin/chibi/front.4bpp.lz");
const u32 gMonBackPic_CEirin[]      = INCBIN_U32("graphics/puppets/eirin/chibi/back.4bpp.lz");
const u16 gMonPalette_CEirin[]      = INCBIN_U16("graphics/puppets/eirin/chibi/normal.gbapal");
const u16 gMonShinyPalette_CEirin[] = INCBIN_U16("graphics/puppets/eirin/chibi/shiny.gbapal");
const u8 gMonIcon_CEirin[]          = INCBIN_U8 ("graphics/puppets/eirin/chibi/icon.4bpp");
const u8 gMonFootprint_CEirin[]     = INCBIN_U8 ("graphics/puppets/eirin/footprint.1bpp");

const u32 gMonFrontPic_Eirin[]     = INCBIN_U32("graphics/puppets/eirin/evolved/front.4bpp.lz");
const u32 gMonBackPic_Eirin[]      = INCBIN_U32("graphics/puppets/eirin/evolved/back.4bpp.lz");
const u16 gMonPalette_Eirin[]      = INCBIN_U16("graphics/puppets/eirin/evolved/normal.gbapal");
const u16 gMonShinyPalette_Eirin[] = INCBIN_U16("graphics/puppets/eirin/evolved/shiny.gbapal");
const u8 gMonIcon_Eirin[]          = INCBIN_U8 ("graphics/puppets/eirin/evolved/icon.4bpp");
const u8 gMonFootprint_Eirin[]     = INCBIN_U8 ("graphics/puppets/eirin/footprint.1bpp");

const u32 gMonFrontPic_AEirin[]     = INCBIN_U32("graphics/puppets/eirin/attack/front.4bpp.lz");
const u32 gMonBackPic_AEirin[]      = INCBIN_U32("graphics/puppets/eirin/attack/back.4bpp.lz");
const u16 gMonPalette_AEirin[]      = INCBIN_U16("graphics/puppets/eirin/attack/normal.gbapal");
const u16 gMonShinyPalette_AEirin[] = INCBIN_U16("graphics/puppets/eirin/attack/shiny.gbapal");
const u8 gMonIcon_AEirin[]          = INCBIN_U8 ("graphics/puppets/eirin/attack/icon.4bpp");
const u8 gMonFootprint_AEirin[]     = INCBIN_U8 ("graphics/puppets/eirin/footprint.1bpp");

const u32 gMonFrontPic_HEirin[]     = INCBIN_U32("graphics/puppets/eirin/helper/front.4bpp.lz");
const u32 gMonBackPic_HEirin[]      = INCBIN_U32("graphics/puppets/eirin/helper/back.4bpp.lz");
const u16 gMonPalette_HEirin[]      = INCBIN_U16("graphics/puppets/eirin/helper/normal.gbapal");
const u16 gMonShinyPalette_HEirin[] = INCBIN_U16("graphics/puppets/eirin/helper/shiny.gbapal");
const u8 gMonIcon_HEirin[]          = INCBIN_U8 ("graphics/puppets/eirin/helper/icon.4bpp");
const u8 gMonFootprint_HEirin[]     = INCBIN_U8 ("graphics/puppets/eirin/footprint.1bpp");

const u32 gMonFrontPic_AdEirin[]     = INCBIN_U32("graphics/puppets/eirin/advent/front.4bpp.lz");
const u32 gMonBackPic_AdEirin[]      = INCBIN_U32("graphics/puppets/eirin/advent/back.4bpp.lz");
const u16 gMonPalette_AdEirin[]      = INCBIN_U16("graphics/puppets/eirin/advent/normal.gbapal");
const u16 gMonShinyPalette_AdEirin[] = INCBIN_U16("graphics/puppets/eirin/advent/shiny.gbapal");
const u8 gMonIcon_AdEirin[]          = INCBIN_U8 ("graphics/puppets/eirin/advent/icon.4bpp");
const u8 gMonFootprint_AdEirin[]     = INCBIN_U8 ("graphics/puppets/eirin/footprint.1bpp");

const u32 gMonFrontPic_CKaguya[]     = INCBIN_U32("graphics/puppets/kaguya/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKaguya[]      = INCBIN_U32("graphics/puppets/kaguya/chibi/back.4bpp.lz");
const u16 gMonPalette_CKaguya[]      = INCBIN_U16("graphics/puppets/kaguya/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKaguya[] = INCBIN_U16("graphics/puppets/kaguya/chibi/shiny.gbapal");
const u8 gMonIcon_CKaguya[]          = INCBIN_U8 ("graphics/puppets/kaguya/chibi/icon.4bpp");
const u8 gMonFootprint_CKaguya[]     = INCBIN_U8 ("graphics/puppets/kaguya/footprint.1bpp");

const u32 gMonFrontPic_Kaguya[]     = INCBIN_U32("graphics/puppets/kaguya/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kaguya[]      = INCBIN_U32("graphics/puppets/kaguya/evolved/back.4bpp.lz");
const u16 gMonPalette_Kaguya[]      = INCBIN_U16("graphics/puppets/kaguya/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kaguya[] = INCBIN_U16("graphics/puppets/kaguya/evolved/shiny.gbapal");
const u8 gMonIcon_Kaguya[]          = INCBIN_U8 ("graphics/puppets/kaguya/evolved/icon.4bpp");
const u8 gMonFootprint_Kaguya[]     = INCBIN_U8 ("graphics/puppets/kaguya/footprint.1bpp");

const u32 gMonFrontPic_AKaguya[]     = INCBIN_U32("graphics/puppets/kaguya/attack/front.4bpp.lz");
const u32 gMonBackPic_AKaguya[]      = INCBIN_U32("graphics/puppets/kaguya/attack/back.4bpp.lz");
const u16 gMonPalette_AKaguya[]      = INCBIN_U16("graphics/puppets/kaguya/attack/normal.gbapal");
const u16 gMonShinyPalette_AKaguya[] = INCBIN_U16("graphics/puppets/kaguya/attack/shiny.gbapal");
const u8 gMonIcon_AKaguya[]          = INCBIN_U8 ("graphics/puppets/kaguya/attack/icon.4bpp");
const u8 gMonFootprint_AKaguya[]     = INCBIN_U8 ("graphics/puppets/kaguya/footprint.1bpp");

const u32 gMonFrontPic_DKaguya[]     = INCBIN_U32("graphics/puppets/kaguya/defense/front.4bpp.lz");
const u32 gMonBackPic_DKaguya[]      = INCBIN_U32("graphics/puppets/kaguya/defense/back.4bpp.lz");
const u16 gMonPalette_DKaguya[]      = INCBIN_U16("graphics/puppets/kaguya/defense/normal.gbapal");
const u16 gMonShinyPalette_DKaguya[] = INCBIN_U16("graphics/puppets/kaguya/defense/shiny.gbapal");
const u8 gMonIcon_DKaguya[]          = INCBIN_U8 ("graphics/puppets/kaguya/defense/icon.4bpp");
const u8 gMonFootprint_DKaguya[]     = INCBIN_U8 ("graphics/puppets/kaguya/footprint.1bpp");

const u32 gMonFrontPic_CMokou[]     = INCBIN_U32("graphics/puppets/mokou/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMokou[]      = INCBIN_U32("graphics/puppets/mokou/chibi/back.4bpp.lz");
const u16 gMonPalette_CMokou[]      = INCBIN_U16("graphics/puppets/mokou/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMokou[] = INCBIN_U16("graphics/puppets/mokou/chibi/shiny.gbapal");
const u8 gMonIcon_CMokou[]          = INCBIN_U8 ("graphics/puppets/mokou/chibi/icon.4bpp");
const u8 gMonFootprint_CMokou[]     = INCBIN_U8 ("graphics/puppets/mokou/footprint.1bpp");

const u32 gMonFrontPic_Mokou[]     = INCBIN_U32("graphics/puppets/mokou/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mokou[]      = INCBIN_U32("graphics/puppets/mokou/evolved/back.4bpp.lz");
const u16 gMonPalette_Mokou[]      = INCBIN_U16("graphics/puppets/mokou/evolved/normal.gbapal");
const u16 gMonShinyPalette_Mokou[] = INCBIN_U16("graphics/puppets/mokou/evolved/shiny.gbapal");
const u8 gMonIcon_Mokou[]          = INCBIN_U8 ("graphics/puppets/mokou/evolved/icon.4bpp");
const u8 gMonFootprint_Mokou[]     = INCBIN_U8 ("graphics/puppets/mokou/footprint.1bpp");

const u32 gMonFrontPic_AMokou[]     = INCBIN_U32("graphics/puppets/mokou/attack/front.4bpp.lz");
const u32 gMonBackPic_AMokou[]      = INCBIN_U32("graphics/puppets/mokou/attack/back.4bpp.lz");
const u16 gMonPalette_AMokou[]      = INCBIN_U16("graphics/puppets/mokou/attack/normal.gbapal");
const u16 gMonShinyPalette_AMokou[] = INCBIN_U16("graphics/puppets/mokou/attack/shiny.gbapal");
const u8 gMonIcon_AMokou[]          = INCBIN_U8 ("graphics/puppets/mokou/attack/icon.4bpp");
const u8 gMonFootprint_AMokou[]     = INCBIN_U8 ("graphics/puppets/mokou/footprint.1bpp");

const u32 gMonFrontPic_DMokou[]     = INCBIN_U32("graphics/puppets/mokou/defense/front.4bpp.lz");
const u32 gMonBackPic_DMokou[]      = INCBIN_U32("graphics/puppets/mokou/defense/back.4bpp.lz");
const u16 gMonPalette_DMokou[]      = INCBIN_U16("graphics/puppets/mokou/defense/normal.gbapal");
const u16 gMonShinyPalette_DMokou[] = INCBIN_U16("graphics/puppets/mokou/defense/shiny.gbapal");
const u8 gMonIcon_DMokou[]          = INCBIN_U8 ("graphics/puppets/mokou/defense/icon.4bpp");
const u8 gMonFootprint_DMokou[]     = INCBIN_U8 ("graphics/puppets/mokou/footprint.1bpp");

const u32 gMonFrontPic_AdMokou[]     = INCBIN_U32("graphics/puppets/mokou/advent/front.4bpp.lz");
const u32 gMonBackPic_AdMokou[]      = INCBIN_U32("graphics/puppets/mokou/advent/back.4bpp.lz");
const u16 gMonPalette_AdMokou[]      = INCBIN_U16("graphics/puppets/mokou/advent/normal.gbapal");
const u16 gMonShinyPalette_AdMokou[] = INCBIN_U16("graphics/puppets/mokou/advent/shiny.gbapal");
const u8 gMonIcon_AdMokou[]          = INCBIN_U8 ("graphics/puppets/mokou/advent/icon.4bpp");
const u8 gMonFootprint_AdMokou[]     = INCBIN_U8 ("graphics/puppets/mokou/footprint.1bpp");

const u32 gMonFrontPic_CAya[]     = INCBIN_U32("graphics/puppets/aya/chibi/front.4bpp.lz");
const u32 gMonBackPic_CAya[]      = INCBIN_U32("graphics/puppets/aya/chibi/back.4bpp.lz");
const u16 gMonPalette_CAya[]      = INCBIN_U16("graphics/puppets/aya/chibi/normal.gbapal");
const u16 gMonShinyPalette_CAya[] = INCBIN_U16("graphics/puppets/aya/chibi/shiny.gbapal");
const u8 gMonIcon_CAya[]          = INCBIN_U8 ("graphics/puppets/aya/chibi/icon.4bpp");
const u8 gMonFootprint_CAya[]     = INCBIN_U8 ("graphics/puppets/aya/footprint.1bpp");

const u32 gMonFrontPic_Aya[]     = INCBIN_U32("graphics/puppets/aya/evolved/front.4bpp.lz");
const u32 gMonBackPic_Aya[]      = INCBIN_U32("graphics/puppets/aya/evolved/back.4bpp.lz");
const u16 gMonPalette_Aya[]      = INCBIN_U16("graphics/puppets/aya/evolved/normal.gbapal");
const u16 gMonShinyPalette_Aya[] = INCBIN_U16("graphics/puppets/aya/evolved/shiny.gbapal");
const u8 gMonIcon_Aya[]          = INCBIN_U8 ("graphics/puppets/aya/evolved/icon.4bpp");
const u8 gMonFootprint_Aya[]     = INCBIN_U8 ("graphics/puppets/aya/footprint.1bpp");

const u32 gMonFrontPic_SAya[]     = INCBIN_U32("graphics/puppets/aya/speed/front.4bpp.lz");
const u32 gMonBackPic_SAya[]      = INCBIN_U32("graphics/puppets/aya/speed/back.4bpp.lz");
const u16 gMonPalette_SAya[]      = INCBIN_U16("graphics/puppets/aya/speed/normal.gbapal");
const u16 gMonShinyPalette_SAya[] = INCBIN_U16("graphics/puppets/aya/speed/shiny.gbapal");
const u8 gMonIcon_SAya[]          = INCBIN_U8 ("graphics/puppets/aya/speed/icon.4bpp");
const u8 gMonFootprint_SAya[]     = INCBIN_U8 ("graphics/puppets/aya/footprint.1bpp");

const u32 gMonFrontPic_TAya[]     = INCBIN_U32("graphics/puppets/aya/technic/front.4bpp.lz");
const u32 gMonBackPic_TAya[]      = INCBIN_U32("graphics/puppets/aya/technic/back.4bpp.lz");
const u16 gMonPalette_TAya[]      = INCBIN_U16("graphics/puppets/aya/technic/normal.gbapal");
const u16 gMonShinyPalette_TAya[] = INCBIN_U16("graphics/puppets/aya/technic/shiny.gbapal");
const u8 gMonIcon_TAya[]          = INCBIN_U8 ("graphics/puppets/aya/technic/icon.4bpp");
const u8 gMonFootprint_TAya[]     = INCBIN_U8 ("graphics/puppets/aya/footprint.1bpp");

const u32 gMonFrontPic_CMedicine[]     = INCBIN_U32("graphics/puppets/medicine/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMedicine[]      = INCBIN_U32("graphics/puppets/medicine/chibi/back.4bpp.lz");
const u16 gMonPalette_CMedicine[]      = INCBIN_U16("graphics/puppets/medicine/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMedicine[] = INCBIN_U16("graphics/puppets/medicine/chibi/shiny.gbapal");
const u8 gMonIcon_CMedicine[]          = INCBIN_U8 ("graphics/puppets/medicine/chibi/icon.4bpp");
const u8 gMonFootprint_CMedicine[]     = INCBIN_U8 ("graphics/puppets/medicine/footprint.1bpp");

const u32 gMonFrontPic_Medicine[]     = INCBIN_U32("graphics/puppets/medicine/evolved/front.4bpp.lz");
const u32 gMonBackPic_Medicine[]      = INCBIN_U32("graphics/puppets/medicine/evolved/back.4bpp.lz");
const u16 gMonPalette_Medicine[]      = INCBIN_U16("graphics/puppets/medicine/evolved/normal.gbapal");
const u16 gMonShinyPalette_Medicine[] = INCBIN_U16("graphics/puppets/medicine/evolved/shiny.gbapal");
const u8 gMonIcon_Medicine[]          = INCBIN_U8 ("graphics/puppets/medicine/evolved/icon.4bpp");
const u8 gMonFootprint_Medicine[]     = INCBIN_U8 ("graphics/puppets/medicine/footprint.1bpp");

const u32 gMonFrontPic_AMedicine[]     = INCBIN_U32("graphics/puppets/medicine/attack/front.4bpp.lz");
const u32 gMonBackPic_AMedicine[]      = INCBIN_U32("graphics/puppets/medicine/attack/back.4bpp.lz");
const u16 gMonPalette_AMedicine[]      = INCBIN_U16("graphics/puppets/medicine/attack/normal.gbapal");
const u16 gMonShinyPalette_AMedicine[] = INCBIN_U16("graphics/puppets/medicine/attack/shiny.gbapal");
const u8 gMonIcon_AMedicine[]          = INCBIN_U8 ("graphics/puppets/medicine/attack/icon.4bpp");
const u8 gMonFootprint_AMedicine[]     = INCBIN_U8 ("graphics/puppets/medicine/footprint.1bpp");

const u32 gMonFrontPic_SMedicine[]     = INCBIN_U32("graphics/puppets/medicine/speed/front.4bpp.lz");
const u32 gMonBackPic_SMedicine[]      = INCBIN_U32("graphics/puppets/medicine/speed/back.4bpp.lz");
const u16 gMonPalette_SMedicine[]      = INCBIN_U16("graphics/puppets/medicine/speed/normal.gbapal");
const u16 gMonShinyPalette_SMedicine[] = INCBIN_U16("graphics/puppets/medicine/speed/shiny.gbapal");
const u8 gMonIcon_SMedicine[]          = INCBIN_U8 ("graphics/puppets/medicine/speed/icon.4bpp");
const u8 gMonFootprint_SMedicine[]     = INCBIN_U8 ("graphics/puppets/medicine/footprint.1bpp");

const u32 gMonFrontPic_TMedicine[]     = INCBIN_U32("graphics/puppets/medicine/technic/front.4bpp.lz");
const u32 gMonBackPic_TMedicine[]      = INCBIN_U32("graphics/puppets/medicine/technic/back.4bpp.lz");
const u16 gMonPalette_TMedicine[]      = INCBIN_U16("graphics/puppets/medicine/technic/normal.gbapal");
const u16 gMonShinyPalette_TMedicine[] = INCBIN_U16("graphics/puppets/medicine/technic/shiny.gbapal");
const u8 gMonIcon_TMedicine[]          = INCBIN_U8 ("graphics/puppets/medicine/technic/icon.4bpp");
const u8 gMonFootprint_TMedicine[]     = INCBIN_U8 ("graphics/puppets/medicine/footprint.1bpp");

const u32 gMonFrontPic_CYuuka[]     = INCBIN_U32("graphics/puppets/yuuka/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYuuka[]      = INCBIN_U32("graphics/puppets/yuuka/chibi/back.4bpp.lz");
const u16 gMonPalette_CYuuka[]      = INCBIN_U16("graphics/puppets/yuuka/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYuuka[] = INCBIN_U16("graphics/puppets/yuuka/chibi/shiny.gbapal");
const u8 gMonIcon_CYuuka[]          = INCBIN_U8 ("graphics/puppets/yuuka/chibi/icon.4bpp");
const u8 gMonFootprint_CYuuka[]     = INCBIN_U8 ("graphics/puppets/yuuka/footprint.1bpp");

const u32 gMonFrontPic_Yuuka[]     = INCBIN_U32("graphics/puppets/yuuka/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yuuka[]      = INCBIN_U32("graphics/puppets/yuuka/evolved/back.4bpp.lz");
const u16 gMonPalette_Yuuka[]      = INCBIN_U16("graphics/puppets/yuuka/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yuuka[] = INCBIN_U16("graphics/puppets/yuuka/evolved/shiny.gbapal");
const u8 gMonIcon_Yuuka[]          = INCBIN_U8 ("graphics/puppets/yuuka/evolved/icon.4bpp");
const u8 gMonFootprint_Yuuka[]     = INCBIN_U8 ("graphics/puppets/yuuka/footprint.1bpp");

const u32 gMonFrontPic_AYuuka[]     = INCBIN_U32("graphics/puppets/yuuka/attack/front.4bpp.lz");
const u32 gMonBackPic_AYuuka[]      = INCBIN_U32("graphics/puppets/yuuka/attack/back.4bpp.lz");
const u16 gMonPalette_AYuuka[]      = INCBIN_U16("graphics/puppets/yuuka/attack/normal.gbapal");
const u16 gMonShinyPalette_AYuuka[] = INCBIN_U16("graphics/puppets/yuuka/attack/shiny.gbapal");
const u8 gMonIcon_AYuuka[]          = INCBIN_U8 ("graphics/puppets/yuuka/attack/icon.4bpp");
const u8 gMonFootprint_AYuuka[]     = INCBIN_U8 ("graphics/puppets/yuuka/footprint.1bpp");

const u32 gMonFrontPic_TYuuka[]     = INCBIN_U32("graphics/puppets/yuuka/technic/front.4bpp.lz");
const u32 gMonBackPic_TYuuka[]      = INCBIN_U32("graphics/puppets/yuuka/technic/back.4bpp.lz");
const u16 gMonPalette_TYuuka[]      = INCBIN_U16("graphics/puppets/yuuka/technic/normal.gbapal");
const u16 gMonShinyPalette_TYuuka[] = INCBIN_U16("graphics/puppets/yuuka/technic/shiny.gbapal");
const u8 gMonIcon_TYuuka[]          = INCBIN_U8 ("graphics/puppets/yuuka/technic/icon.4bpp");
const u8 gMonFootprint_TYuuka[]     = INCBIN_U8 ("graphics/puppets/yuuka/footprint.1bpp");

const u32 gMonFrontPic_CKomachi[]     = INCBIN_U32("graphics/puppets/komachi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKomachi[]      = INCBIN_U32("graphics/puppets/komachi/chibi/back.4bpp.lz");
const u16 gMonPalette_CKomachi[]      = INCBIN_U16("graphics/puppets/komachi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKomachi[] = INCBIN_U16("graphics/puppets/komachi/chibi/shiny.gbapal");
const u8 gMonIcon_CKomachi[]          = INCBIN_U8 ("graphics/puppets/komachi/chibi/icon.4bpp");
const u8 gMonFootprint_CKomachi[]     = INCBIN_U8 ("graphics/puppets/komachi/footprint.1bpp");

const u32 gMonFrontPic_Komachi[]     = INCBIN_U32("graphics/puppets/komachi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Komachi[]      = INCBIN_U32("graphics/puppets/komachi/evolved/back.4bpp.lz");
const u16 gMonPalette_Komachi[]      = INCBIN_U16("graphics/puppets/komachi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Komachi[] = INCBIN_U16("graphics/puppets/komachi/evolved/shiny.gbapal");
const u8 gMonIcon_Komachi[]          = INCBIN_U8 ("graphics/puppets/komachi/evolved/icon.4bpp");
const u8 gMonFootprint_Komachi[]     = INCBIN_U8 ("graphics/puppets/komachi/footprint.1bpp");

const u32 gMonFrontPic_AKomachi[]     = INCBIN_U32("graphics/puppets/komachi/attack/front.4bpp.lz");
const u32 gMonBackPic_AKomachi[]      = INCBIN_U32("graphics/puppets/komachi/attack/back.4bpp.lz");
const u16 gMonPalette_AKomachi[]      = INCBIN_U16("graphics/puppets/komachi/attack/normal.gbapal");
const u16 gMonShinyPalette_AKomachi[] = INCBIN_U16("graphics/puppets/komachi/attack/shiny.gbapal");
const u8 gMonIcon_AKomachi[]          = INCBIN_U8 ("graphics/puppets/komachi/attack/icon.4bpp");
const u8 gMonFootprint_AKomachi[]     = INCBIN_U8 ("graphics/puppets/komachi/footprint.1bpp");

const u32 gMonFrontPic_SKomachi[]     = INCBIN_U32("graphics/puppets/komachi/speed/front.4bpp.lz");
const u32 gMonBackPic_SKomachi[]      = INCBIN_U32("graphics/puppets/komachi/speed/back.4bpp.lz");
const u16 gMonPalette_SKomachi[]      = INCBIN_U16("graphics/puppets/komachi/speed/normal.gbapal");
const u16 gMonShinyPalette_SKomachi[] = INCBIN_U16("graphics/puppets/komachi/speed/shiny.gbapal");
const u8 gMonIcon_SKomachi[]          = INCBIN_U8 ("graphics/puppets/komachi/speed/icon.4bpp");
const u8 gMonFootprint_SKomachi[]     = INCBIN_U8 ("graphics/puppets/komachi/footprint.1bpp");

const u32 gMonFrontPic_CEiki[]     = INCBIN_U32("graphics/puppets/eiki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CEiki[]      = INCBIN_U32("graphics/puppets/eiki/chibi/back.4bpp.lz");
const u16 gMonPalette_CEiki[]      = INCBIN_U16("graphics/puppets/eiki/chibi/normal.gbapal");
const u16 gMonShinyPalette_CEiki[] = INCBIN_U16("graphics/puppets/eiki/chibi/shiny.gbapal");
const u8 gMonIcon_CEiki[]          = INCBIN_U8 ("graphics/puppets/eiki/chibi/icon.4bpp");
const u8 gMonFootprint_CEiki[]     = INCBIN_U8 ("graphics/puppets/eiki/footprint.1bpp");

const u32 gMonFrontPic_Eiki[]     = INCBIN_U32("graphics/puppets/eiki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Eiki[]      = INCBIN_U32("graphics/puppets/eiki/evolved/back.4bpp.lz");
const u16 gMonPalette_Eiki[]      = INCBIN_U16("graphics/puppets/eiki/evolved/normal.gbapal");
const u16 gMonShinyPalette_Eiki[] = INCBIN_U16("graphics/puppets/eiki/evolved/shiny.gbapal");
const u8 gMonIcon_Eiki[]          = INCBIN_U8 ("graphics/puppets/eiki/evolved/icon.4bpp");
const u8 gMonFootprint_Eiki[]     = INCBIN_U8 ("graphics/puppets/eiki/footprint.1bpp");

const u32 gMonFrontPic_AEiki[]     = INCBIN_U32("graphics/puppets/eiki/attack/front.4bpp.lz");
const u32 gMonBackPic_AEiki[]      = INCBIN_U32("graphics/puppets/eiki/attack/back.4bpp.lz");
const u16 gMonPalette_AEiki[]      = INCBIN_U16("graphics/puppets/eiki/attack/normal.gbapal");
const u16 gMonShinyPalette_AEiki[] = INCBIN_U16("graphics/puppets/eiki/attack/shiny.gbapal");
const u8 gMonIcon_AEiki[]          = INCBIN_U8 ("graphics/puppets/eiki/attack/icon.4bpp");
const u8 gMonFootprint_AEiki[]     = INCBIN_U8 ("graphics/puppets/eiki/footprint.1bpp");

const u32 gMonFrontPic_DEiki[]     = INCBIN_U32("graphics/puppets/eiki/defense/front.4bpp.lz");
const u32 gMonBackPic_DEiki[]      = INCBIN_U32("graphics/puppets/eiki/defense/back.4bpp.lz");
const u16 gMonPalette_DEiki[]      = INCBIN_U16("graphics/puppets/eiki/defense/normal.gbapal");
const u16 gMonShinyPalette_DEiki[] = INCBIN_U16("graphics/puppets/eiki/defense/shiny.gbapal");
const u8 gMonIcon_DEiki[]          = INCBIN_U8 ("graphics/puppets/eiki/defense/icon.4bpp");
const u8 gMonFootprint_DEiki[]     = INCBIN_U8 ("graphics/puppets/eiki/footprint.1bpp");

const u32 gMonFrontPic_CShizuha[]     = INCBIN_U32("graphics/puppets/shizuha/chibi/front.4bpp.lz");
const u32 gMonBackPic_CShizuha[]      = INCBIN_U32("graphics/puppets/shizuha/chibi/back.4bpp.lz");
const u16 gMonPalette_CShizuha[]      = INCBIN_U16("graphics/puppets/shizuha/chibi/normal.gbapal");
const u16 gMonShinyPalette_CShizuha[] = INCBIN_U16("graphics/puppets/shizuha/chibi/shiny.gbapal");
const u8 gMonIcon_CShizuha[]          = INCBIN_U8 ("graphics/puppets/shizuha/chibi/icon.4bpp");
const u8 gMonFootprint_CShizuha[]     = INCBIN_U8 ("graphics/puppets/shizuha/footprint.1bpp");

const u32 gMonFrontPic_Shizuha[]     = INCBIN_U32("graphics/puppets/shizuha/evolved/front.4bpp.lz");
const u32 gMonBackPic_Shizuha[]      = INCBIN_U32("graphics/puppets/shizuha/evolved/back.4bpp.lz");
const u16 gMonPalette_Shizuha[]      = INCBIN_U16("graphics/puppets/shizuha/evolved/normal.gbapal");
const u16 gMonShinyPalette_Shizuha[] = INCBIN_U16("graphics/puppets/shizuha/evolved/shiny.gbapal");
const u8 gMonIcon_Shizuha[]          = INCBIN_U8 ("graphics/puppets/shizuha/evolved/icon.4bpp");
const u8 gMonFootprint_Shizuha[]     = INCBIN_U8 ("graphics/puppets/shizuha/footprint.1bpp");

const u32 gMonFrontPic_SShizuha[]     = INCBIN_U32("graphics/puppets/shizuha/speed/front.4bpp.lz");
const u32 gMonBackPic_SShizuha[]      = INCBIN_U32("graphics/puppets/shizuha/speed/back.4bpp.lz");
const u16 gMonPalette_SShizuha[]      = INCBIN_U16("graphics/puppets/shizuha/speed/normal.gbapal");
const u16 gMonShinyPalette_SShizuha[] = INCBIN_U16("graphics/puppets/shizuha/speed/shiny.gbapal");
const u8 gMonIcon_SShizuha[]          = INCBIN_U8 ("graphics/puppets/shizuha/speed/icon.4bpp");
const u8 gMonFootprint_SShizuha[]     = INCBIN_U8 ("graphics/puppets/shizuha/footprint.1bpp");

const u32 gMonFrontPic_HShizuha[]     = INCBIN_U32("graphics/puppets/shizuha/helper/front.4bpp.lz");
const u32 gMonBackPic_HShizuha[]      = INCBIN_U32("graphics/puppets/shizuha/helper/back.4bpp.lz");
const u16 gMonPalette_HShizuha[]      = INCBIN_U16("graphics/puppets/shizuha/helper/normal.gbapal");
const u16 gMonShinyPalette_HShizuha[] = INCBIN_U16("graphics/puppets/shizuha/helper/shiny.gbapal");
const u8 gMonIcon_HShizuha[]          = INCBIN_U8 ("graphics/puppets/shizuha/helper/icon.4bpp");
const u8 gMonFootprint_HShizuha[]     = INCBIN_U8 ("graphics/puppets/shizuha/footprint.1bpp");

const u32 gMonFrontPic_CMinoriko[]     = INCBIN_U32("graphics/puppets/minoriko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMinoriko[]      = INCBIN_U32("graphics/puppets/minoriko/chibi/back.4bpp.lz");
const u16 gMonPalette_CMinoriko[]      = INCBIN_U16("graphics/puppets/minoriko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMinoriko[] = INCBIN_U16("graphics/puppets/minoriko/chibi/shiny.gbapal");
const u8 gMonIcon_CMinoriko[]          = INCBIN_U8 ("graphics/puppets/minoriko/chibi/icon.4bpp");
const u8 gMonFootprint_CMinoriko[]     = INCBIN_U8 ("graphics/puppets/minoriko/footprint.1bpp");

const u32 gMonFrontPic_Minoriko[]     = INCBIN_U32("graphics/puppets/minoriko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Minoriko[]      = INCBIN_U32("graphics/puppets/minoriko/evolved/back.4bpp.lz");
const u16 gMonPalette_Minoriko[]      = INCBIN_U16("graphics/puppets/minoriko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Minoriko[] = INCBIN_U16("graphics/puppets/minoriko/evolved/shiny.gbapal");
const u8 gMonIcon_Minoriko[]          = INCBIN_U8 ("graphics/puppets/minoriko/evolved/icon.4bpp");
const u8 gMonFootprint_Minoriko[]     = INCBIN_U8 ("graphics/puppets/minoriko/footprint.1bpp");

const u32 gMonFrontPic_AMinoriko[]     = INCBIN_U32("graphics/puppets/minoriko/attack/front.4bpp.lz");
const u32 gMonBackPic_AMinoriko[]      = INCBIN_U32("graphics/puppets/minoriko/attack/back.4bpp.lz");
const u16 gMonPalette_AMinoriko[]      = INCBIN_U16("graphics/puppets/minoriko/attack/normal.gbapal");
const u16 gMonShinyPalette_AMinoriko[] = INCBIN_U16("graphics/puppets/minoriko/attack/shiny.gbapal");
const u8 gMonIcon_AMinoriko[]          = INCBIN_U8 ("graphics/puppets/minoriko/attack/icon.4bpp");
const u8 gMonFootprint_AMinoriko[]     = INCBIN_U8 ("graphics/puppets/minoriko/footprint.1bpp");

const u32 gMonFrontPic_DMinoriko[]     = INCBIN_U32("graphics/puppets/minoriko/defense/front.4bpp.lz");
const u32 gMonBackPic_DMinoriko[]      = INCBIN_U32("graphics/puppets/minoriko/defense/back.4bpp.lz");
const u16 gMonPalette_DMinoriko[]      = INCBIN_U16("graphics/puppets/minoriko/defense/normal.gbapal");
const u16 gMonShinyPalette_DMinoriko[] = INCBIN_U16("graphics/puppets/minoriko/defense/shiny.gbapal");
const u8 gMonIcon_DMinoriko[]          = INCBIN_U8 ("graphics/puppets/minoriko/defense/icon.4bpp");
const u8 gMonFootprint_DMinoriko[]     = INCBIN_U8 ("graphics/puppets/minoriko/footprint.1bpp");

const u32 gMonFrontPic_AkiSisters[]     = INCBIN_U32("graphics/puppets/akisisters/evolved/front.4bpp.lz");
const u32 gMonBackPic_AkiSisters[]      = INCBIN_U32("graphics/puppets/akisisters/evolved/back.4bpp.lz");
const u16 gMonPalette_AkiSisters[]      = INCBIN_U16("graphics/puppets/akisisters/evolved/normal.gbapal");
const u16 gMonShinyPalette_AkiSisters[] = INCBIN_U16("graphics/puppets/akisisters/evolved/shiny.gbapal");
const u8 gMonIcon_AkiSisters[]          = INCBIN_U8 ("graphics/puppets/akisisters/evolved/icon.4bpp");
const u8 gMonFootprint_AkiSisters[]     = INCBIN_U8 ("graphics/puppets/akisisters/footprint.1bpp");

const u32 gMonFrontPic_CHina[]     = INCBIN_U32("graphics/puppets/hina/chibi/front.4bpp.lz");
const u32 gMonBackPic_CHina[]      = INCBIN_U32("graphics/puppets/hina/chibi/back.4bpp.lz");
const u16 gMonPalette_CHina[]      = INCBIN_U16("graphics/puppets/hina/chibi/normal.gbapal");
const u16 gMonShinyPalette_CHina[] = INCBIN_U16("graphics/puppets/hina/chibi/shiny.gbapal");
const u8 gMonIcon_CHina[]          = INCBIN_U8 ("graphics/puppets/hina/chibi/icon.4bpp");
const u8 gMonFootprint_CHina[]     = INCBIN_U8 ("graphics/puppets/hina/footprint.1bpp");

const u32 gMonFrontPic_Hina[]     = INCBIN_U32("graphics/puppets/hina/evolved/front.4bpp.lz");
const u32 gMonBackPic_Hina[]      = INCBIN_U32("graphics/puppets/hina/evolved/back.4bpp.lz");
const u16 gMonPalette_Hina[]      = INCBIN_U16("graphics/puppets/hina/evolved/normal.gbapal");
const u16 gMonShinyPalette_Hina[] = INCBIN_U16("graphics/puppets/hina/evolved/shiny.gbapal");
const u8 gMonIcon_Hina[]          = INCBIN_U8 ("graphics/puppets/hina/evolved/icon.4bpp");
const u8 gMonFootprint_Hina[]     = INCBIN_U8 ("graphics/puppets/hina/footprint.1bpp");

const u32 gMonFrontPic_AHina[]     = INCBIN_U32("graphics/puppets/hina/attack/front.4bpp.lz");
const u32 gMonBackPic_AHina[]      = INCBIN_U32("graphics/puppets/hina/attack/back.4bpp.lz");
const u16 gMonPalette_AHina[]      = INCBIN_U16("graphics/puppets/hina/attack/normal.gbapal");
const u16 gMonShinyPalette_AHina[] = INCBIN_U16("graphics/puppets/hina/attack/shiny.gbapal");
const u8 gMonIcon_AHina[]          = INCBIN_U8 ("graphics/puppets/hina/attack/icon.4bpp");
const u8 gMonFootprint_AHina[]     = INCBIN_U8 ("graphics/puppets/hina/footprint.1bpp");

const u32 gMonFrontPic_DHina[]     = INCBIN_U32("graphics/puppets/hina/defense/front.4bpp.lz");
const u32 gMonBackPic_DHina[]      = INCBIN_U32("graphics/puppets/hina/defense/back.4bpp.lz");
const u16 gMonPalette_DHina[]      = INCBIN_U16("graphics/puppets/hina/defense/normal.gbapal");
const u16 gMonShinyPalette_DHina[] = INCBIN_U16("graphics/puppets/hina/defense/shiny.gbapal");
const u8 gMonIcon_DHina[]          = INCBIN_U8 ("graphics/puppets/hina/defense/icon.4bpp");
const u8 gMonFootprint_DHina[]     = INCBIN_U8 ("graphics/puppets/hina/footprint.1bpp");

const u32 gMonFrontPic_CNitori[]     = INCBIN_U32("graphics/puppets/nitori/chibi/front.4bpp.lz");
const u32 gMonBackPic_CNitori[]      = INCBIN_U32("graphics/puppets/nitori/chibi/back.4bpp.lz");
const u16 gMonPalette_CNitori[]      = INCBIN_U16("graphics/puppets/nitori/chibi/normal.gbapal");
const u16 gMonShinyPalette_CNitori[] = INCBIN_U16("graphics/puppets/nitori/chibi/shiny.gbapal");
const u8 gMonIcon_CNitori[]          = INCBIN_U8 ("graphics/puppets/nitori/chibi/icon.4bpp");
const u8 gMonFootprint_CNitori[]     = INCBIN_U8 ("graphics/puppets/nitori/footprint.1bpp");

const u32 gMonFrontPic_Nitori[]     = INCBIN_U32("graphics/puppets/nitori/evolved/front.4bpp.lz");
const u32 gMonBackPic_Nitori[]      = INCBIN_U32("graphics/puppets/nitori/evolved/back.4bpp.lz");
const u16 gMonPalette_Nitori[]      = INCBIN_U16("graphics/puppets/nitori/evolved/normal.gbapal");
const u16 gMonShinyPalette_Nitori[] = INCBIN_U16("graphics/puppets/nitori/evolved/shiny.gbapal");
const u8 gMonIcon_Nitori[]          = INCBIN_U8 ("graphics/puppets/nitori/evolved/icon.4bpp");
const u8 gMonFootprint_Nitori[]     = INCBIN_U8 ("graphics/puppets/nitori/footprint.1bpp");

const u32 gMonFrontPic_ANitori[]     = INCBIN_U32("graphics/puppets/nitori/attack/front.4bpp.lz");
const u32 gMonBackPic_ANitori[]      = INCBIN_U32("graphics/puppets/nitori/attack/back.4bpp.lz");
const u16 gMonPalette_ANitori[]      = INCBIN_U16("graphics/puppets/nitori/attack/normal.gbapal");
const u16 gMonShinyPalette_ANitori[] = INCBIN_U16("graphics/puppets/nitori/attack/shiny.gbapal");
const u8 gMonIcon_ANitori[]          = INCBIN_U8 ("graphics/puppets/nitori/attack/icon.4bpp");
const u8 gMonFootprint_ANitori[]     = INCBIN_U8 ("graphics/puppets/nitori/footprint.1bpp");

const u32 gMonFrontPic_TNitori[]     = INCBIN_U32("graphics/puppets/nitori/technic/front.4bpp.lz");
const u32 gMonBackPic_TNitori[]      = INCBIN_U32("graphics/puppets/nitori/technic/back.4bpp.lz");
const u16 gMonPalette_TNitori[]      = INCBIN_U16("graphics/puppets/nitori/technic/normal.gbapal");
const u16 gMonShinyPalette_TNitori[] = INCBIN_U16("graphics/puppets/nitori/technic/shiny.gbapal");
const u8 gMonIcon_TNitori[]          = INCBIN_U8 ("graphics/puppets/nitori/technic/icon.4bpp");
const u8 gMonFootprint_TNitori[]     = INCBIN_U8 ("graphics/puppets/nitori/footprint.1bpp");

const u32 gMonFrontPic_CMomiji[]     = INCBIN_U32("graphics/puppets/momiji/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMomiji[]      = INCBIN_U32("graphics/puppets/momiji/chibi/back.4bpp.lz");
const u16 gMonPalette_CMomiji[]      = INCBIN_U16("graphics/puppets/momiji/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMomiji[] = INCBIN_U16("graphics/puppets/momiji/chibi/shiny.gbapal");
const u8 gMonIcon_CMomiji[]          = INCBIN_U8 ("graphics/puppets/momiji/chibi/icon.4bpp");
const u8 gMonFootprint_CMomiji[]     = INCBIN_U8 ("graphics/puppets/momiji/footprint.1bpp");

const u32 gMonFrontPic_Momiji[]     = INCBIN_U32("graphics/puppets/momiji/evolved/front.4bpp.lz");
const u32 gMonBackPic_Momiji[]      = INCBIN_U32("graphics/puppets/momiji/evolved/back.4bpp.lz");
const u16 gMonPalette_Momiji[]      = INCBIN_U16("graphics/puppets/momiji/evolved/normal.gbapal");
const u16 gMonShinyPalette_Momiji[] = INCBIN_U16("graphics/puppets/momiji/evolved/shiny.gbapal");
const u8 gMonIcon_Momiji[]          = INCBIN_U8 ("graphics/puppets/momiji/evolved/icon.4bpp");
const u8 gMonFootprint_Momiji[]     = INCBIN_U8 ("graphics/puppets/momiji/footprint.1bpp");

const u32 gMonFrontPic_DMomiji[]     = INCBIN_U32("graphics/puppets/momiji/defense/front.4bpp.lz");
const u32 gMonBackPic_DMomiji[]      = INCBIN_U32("graphics/puppets/momiji/defense/back.4bpp.lz");
const u16 gMonPalette_DMomiji[]      = INCBIN_U16("graphics/puppets/momiji/defense/normal.gbapal");
const u16 gMonShinyPalette_DMomiji[] = INCBIN_U16("graphics/puppets/momiji/defense/shiny.gbapal");
const u8 gMonIcon_DMomiji[]          = INCBIN_U8 ("graphics/puppets/momiji/defense/icon.4bpp");
const u8 gMonFootprint_DMomiji[]     = INCBIN_U8 ("graphics/puppets/momiji/footprint.1bpp");

const u32 gMonFrontPic_CSanae[]     = INCBIN_U32("graphics/puppets/sanae/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSanae[]      = INCBIN_U32("graphics/puppets/sanae/chibi/back.4bpp.lz");
const u16 gMonPalette_CSanae[]      = INCBIN_U16("graphics/puppets/sanae/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSanae[] = INCBIN_U16("graphics/puppets/sanae/chibi/shiny.gbapal");
const u8 gMonIcon_CSanae[]          = INCBIN_U8 ("graphics/puppets/sanae/chibi/icon.4bpp");
const u8 gMonFootprint_CSanae[]     = INCBIN_U8 ("graphics/puppets/sanae/footprint.1bpp");

const u32 gMonFrontPic_Sanae[]     = INCBIN_U32("graphics/puppets/sanae/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sanae[]      = INCBIN_U32("graphics/puppets/sanae/evolved/back.4bpp.lz");
const u16 gMonPalette_Sanae[]      = INCBIN_U16("graphics/puppets/sanae/evolved/normal.gbapal");
const u16 gMonShinyPalette_Sanae[] = INCBIN_U16("graphics/puppets/sanae/evolved/shiny.gbapal");
const u8 gMonIcon_Sanae[]          = INCBIN_U8 ("graphics/puppets/sanae/evolved/icon.4bpp");
const u8 gMonFootprint_Sanae[]     = INCBIN_U8 ("graphics/puppets/sanae/footprint.1bpp");

const u32 gMonFrontPic_ASanae[]     = INCBIN_U32("graphics/puppets/sanae/attack/front.4bpp.lz");
const u32 gMonBackPic_ASanae[]      = INCBIN_U32("graphics/puppets/sanae/attack/back.4bpp.lz");
const u16 gMonPalette_ASanae[]      = INCBIN_U16("graphics/puppets/sanae/attack/normal.gbapal");
const u16 gMonShinyPalette_ASanae[] = INCBIN_U16("graphics/puppets/sanae/attack/shiny.gbapal");
const u8 gMonIcon_ASanae[]          = INCBIN_U8 ("graphics/puppets/sanae/attack/icon.4bpp");
const u8 gMonFootprint_ASanae[]     = INCBIN_U8 ("graphics/puppets/sanae/footprint.1bpp");

const u32 gMonFrontPic_TSanae[]     = INCBIN_U32("graphics/puppets/sanae/technic/front.4bpp.lz");
const u32 gMonBackPic_TSanae[]      = INCBIN_U32("graphics/puppets/sanae/technic/back.4bpp.lz");
const u16 gMonPalette_TSanae[]      = INCBIN_U16("graphics/puppets/sanae/technic/normal.gbapal");
const u16 gMonShinyPalette_TSanae[] = INCBIN_U16("graphics/puppets/sanae/technic/shiny.gbapal");
const u8 gMonIcon_TSanae[]          = INCBIN_U8 ("graphics/puppets/sanae/technic/icon.4bpp");
const u8 gMonFootprint_TSanae[]     = INCBIN_U8 ("graphics/puppets/sanae/footprint.1bpp");

const u32 gMonFrontPic_SGSanae[]     = INCBIN_U32("graphics/puppets/sanae/schoolgirl/front.4bpp.lz");
const u32 gMonBackPic_SGSanae[]      = INCBIN_U32("graphics/puppets/sanae/schoolgirl/back.4bpp.lz");
const u16 gMonPalette_SGSanae[]      = INCBIN_U16("graphics/puppets/sanae/schoolgirl/normal.gbapal");
const u16 gMonShinyPalette_SGSanae[] = INCBIN_U16("graphics/puppets/sanae/schoolgirl/shiny.gbapal");
const u8 gMonIcon_SGSanae[]          = INCBIN_U8 ("graphics/puppets/sanae/schoolgirl/icon.4bpp");
const u8 gMonFootprint_SGSanae[]     = INCBIN_U8 ("graphics/puppets/sanae/footprint.1bpp");

const u32 gMonFrontPic_CKanako[]     = INCBIN_U32("graphics/puppets/kanako/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKanako[]      = INCBIN_U32("graphics/puppets/kanako/chibi/back.4bpp.lz");
const u16 gMonPalette_CKanako[]      = INCBIN_U16("graphics/puppets/kanako/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKanako[] = INCBIN_U16("graphics/puppets/kanako/chibi/shiny.gbapal");
const u8 gMonIcon_CKanako[]          = INCBIN_U8 ("graphics/puppets/kanako/chibi/icon.4bpp");
const u8 gMonFootprint_CKanako[]     = INCBIN_U8 ("graphics/puppets/kanako/footprint.1bpp");

const u32 gMonFrontPic_Kanako[]     = INCBIN_U32("graphics/puppets/kanako/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kanako[]      = INCBIN_U32("graphics/puppets/kanako/evolved/back.4bpp.lz");
const u16 gMonPalette_Kanako[]      = INCBIN_U16("graphics/puppets/kanako/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kanako[] = INCBIN_U16("graphics/puppets/kanako/evolved/shiny.gbapal");
const u8 gMonIcon_Kanako[]          = INCBIN_U8 ("graphics/puppets/kanako/evolved/icon.4bpp");
const u8 gMonFootprint_Kanako[]     = INCBIN_U8 ("graphics/puppets/kanako/footprint.1bpp");

const u32 gMonFrontPic_AKanako[]     = INCBIN_U32("graphics/puppets/kanako/attack/front.4bpp.lz");
const u32 gMonBackPic_AKanako[]      = INCBIN_U32("graphics/puppets/kanako/attack/back.4bpp.lz");
const u16 gMonPalette_AKanako[]      = INCBIN_U16("graphics/puppets/kanako/attack/normal.gbapal");
const u16 gMonShinyPalette_AKanako[] = INCBIN_U16("graphics/puppets/kanako/attack/shiny.gbapal");
const u8 gMonIcon_AKanako[]          = INCBIN_U8 ("graphics/puppets/kanako/attack/icon.4bpp");
const u8 gMonFootprint_AKanako[]     = INCBIN_U8 ("graphics/puppets/kanako/footprint.1bpp");

const u32 gMonFrontPic_DKanako[]     = INCBIN_U32("graphics/puppets/kanako/defense/front.4bpp.lz");
const u32 gMonBackPic_DKanako[]      = INCBIN_U32("graphics/puppets/kanako/defense/back.4bpp.lz");
const u16 gMonPalette_DKanako[]      = INCBIN_U16("graphics/puppets/kanako/defense/normal.gbapal");
const u16 gMonShinyPalette_DKanako[] = INCBIN_U16("graphics/puppets/kanako/defense/shiny.gbapal");
const u8 gMonIcon_DKanako[]          = INCBIN_U8 ("graphics/puppets/kanako/defense/icon.4bpp");
const u8 gMonFootprint_DKanako[]     = INCBIN_U8 ("graphics/puppets/kanako/footprint.1bpp");

const u32 gMonFrontPic_CSuwako[]     = INCBIN_U32("graphics/puppets/suwako/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSuwako[]      = INCBIN_U32("graphics/puppets/suwako/chibi/back.4bpp.lz");
const u16 gMonPalette_CSuwako[]      = INCBIN_U16("graphics/puppets/suwako/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSuwako[] = INCBIN_U16("graphics/puppets/suwako/chibi/shiny.gbapal");
const u8 gMonIcon_CSuwako[]          = INCBIN_U8 ("graphics/puppets/suwako/chibi/icon.4bpp");
const u8 gMonFootprint_CSuwako[]     = INCBIN_U8 ("graphics/puppets/suwako/footprint.1bpp");

const u32 gMonFrontPic_Suwako[]     = INCBIN_U32("graphics/puppets/suwako/evolved/front.4bpp.lz");
const u32 gMonBackPic_Suwako[]      = INCBIN_U32("graphics/puppets/suwako/evolved/back.4bpp.lz");
const u16 gMonPalette_Suwako[]      = INCBIN_U16("graphics/puppets/suwako/evolved/normal.gbapal");
const u16 gMonShinyPalette_Suwako[] = INCBIN_U16("graphics/puppets/suwako/evolved/shiny.gbapal");
const u8 gMonIcon_Suwako[]          = INCBIN_U8 ("graphics/puppets/suwako/evolved/icon.4bpp");
const u8 gMonFootprint_Suwako[]     = INCBIN_U8 ("graphics/puppets/suwako/footprint.1bpp");

const u32 gMonFrontPic_ASuwako[]     = INCBIN_U32("graphics/puppets/suwako/attack/front.4bpp.lz");
const u32 gMonBackPic_ASuwako[]      = INCBIN_U32("graphics/puppets/suwako/attack/back.4bpp.lz");
const u16 gMonPalette_ASuwako[]      = INCBIN_U16("graphics/puppets/suwako/attack/normal.gbapal");
const u16 gMonShinyPalette_ASuwako[] = INCBIN_U16("graphics/puppets/suwako/attack/shiny.gbapal");
const u8 gMonIcon_ASuwako[]          = INCBIN_U8 ("graphics/puppets/suwako/attack/icon.4bpp");
const u8 gMonFootprint_ASuwako[]     = INCBIN_U8 ("graphics/puppets/suwako/footprint.1bpp");

const u32 gMonFrontPic_DSuwako[]     = INCBIN_U32("graphics/puppets/suwako/defense/front.4bpp.lz");
const u32 gMonBackPic_DSuwako[]      = INCBIN_U32("graphics/puppets/suwako/defense/back.4bpp.lz");
const u16 gMonPalette_DSuwako[]      = INCBIN_U16("graphics/puppets/suwako/defense/normal.gbapal");
const u16 gMonShinyPalette_DSuwako[] = INCBIN_U16("graphics/puppets/suwako/defense/shiny.gbapal");
const u8 gMonIcon_DSuwako[]          = INCBIN_U8 ("graphics/puppets/suwako/defense/icon.4bpp");
const u8 gMonFootprint_DSuwako[]     = INCBIN_U8 ("graphics/puppets/suwako/footprint.1bpp");

const u32 gMonFrontPic_CTenma[]     = INCBIN_U32("graphics/puppets/tenma/chibi/front.4bpp.lz");
const u32 gMonBackPic_CTenma[]      = INCBIN_U32("graphics/puppets/tenma/chibi/back.4bpp.lz");
const u16 gMonPalette_CTenma[]      = INCBIN_U16("graphics/puppets/tenma/chibi/normal.gbapal");
const u16 gMonShinyPalette_CTenma[] = INCBIN_U16("graphics/puppets/tenma/chibi/shiny.gbapal");
const u8 gMonIcon_CTenma[]          = INCBIN_U8 ("graphics/puppets/tenma/chibi/icon.4bpp");
const u8 gMonFootprint_CTenma[]     = INCBIN_U8 ("graphics/puppets/tenma/footprint.1bpp");

const u32 gMonFrontPic_Tenma[]     = INCBIN_U32("graphics/puppets/tenma/evolved/front.4bpp.lz");
const u32 gMonBackPic_Tenma[]      = INCBIN_U32("graphics/puppets/tenma/evolved/back.4bpp.lz");
const u16 gMonPalette_Tenma[]      = INCBIN_U16("graphics/puppets/tenma/evolved/normal.gbapal");
const u16 gMonShinyPalette_Tenma[] = INCBIN_U16("graphics/puppets/tenma/evolved/shiny.gbapal");
const u8 gMonIcon_Tenma[]          = INCBIN_U8 ("graphics/puppets/tenma/evolved/icon.4bpp");
const u8 gMonFootprint_Tenma[]     = INCBIN_U8 ("graphics/puppets/tenma/footprint.1bpp");

const u32 gMonFrontPic_STenma[]     = INCBIN_U32("graphics/puppets/tenma/speed/front.4bpp.lz");
const u32 gMonBackPic_STenma[]      = INCBIN_U32("graphics/puppets/tenma/speed/back.4bpp.lz");
const u16 gMonPalette_STenma[]      = INCBIN_U16("graphics/puppets/tenma/speed/normal.gbapal");
const u16 gMonShinyPalette_STenma[] = INCBIN_U16("graphics/puppets/tenma/speed/shiny.gbapal");
const u8 gMonIcon_STenma[]          = INCBIN_U8 ("graphics/puppets/tenma/speed/icon.4bpp");
const u8 gMonFootprint_STenma[]     = INCBIN_U8 ("graphics/puppets/tenma/footprint.1bpp");

const u32 gMonFrontPic_CKisume[]     = INCBIN_U32("graphics/puppets/kisume/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKisume[]      = INCBIN_U32("graphics/puppets/kisume/chibi/back.4bpp.lz");
const u16 gMonPalette_CKisume[]      = INCBIN_U16("graphics/puppets/kisume/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKisume[] = INCBIN_U16("graphics/puppets/kisume/chibi/shiny.gbapal");
const u8 gMonIcon_CKisume[]          = INCBIN_U8 ("graphics/puppets/kisume/chibi/icon.4bpp");
const u8 gMonFootprint_CKisume[]     = INCBIN_U8 ("graphics/puppets/kisume/footprint.1bpp");

const u32 gMonFrontPic_Kisume[]     = INCBIN_U32("graphics/puppets/kisume/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kisume[]      = INCBIN_U32("graphics/puppets/kisume/evolved/back.4bpp.lz");
const u16 gMonPalette_Kisume[]      = INCBIN_U16("graphics/puppets/kisume/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kisume[] = INCBIN_U16("graphics/puppets/kisume/evolved/shiny.gbapal");
const u8 gMonIcon_Kisume[]          = INCBIN_U8 ("graphics/puppets/kisume/evolved/icon.4bpp");
const u8 gMonFootprint_Kisume[]     = INCBIN_U8 ("graphics/puppets/kisume/footprint.1bpp");

const u32 gMonFrontPic_TKisume[]     = INCBIN_U32("graphics/puppets/kisume/technic/front.4bpp.lz");
const u32 gMonBackPic_TKisume[]      = INCBIN_U32("graphics/puppets/kisume/technic/back.4bpp.lz");
const u16 gMonPalette_TKisume[]      = INCBIN_U16("graphics/puppets/kisume/technic/normal.gbapal");
const u16 gMonShinyPalette_TKisume[] = INCBIN_U16("graphics/puppets/kisume/technic/shiny.gbapal");
const u8 gMonIcon_TKisume[]          = INCBIN_U8 ("graphics/puppets/kisume/technic/icon.4bpp");
const u8 gMonFootprint_TKisume[]     = INCBIN_U8 ("graphics/puppets/kisume/footprint.1bpp");

const u32 gMonFrontPic_CYamame[]     = INCBIN_U32("graphics/puppets/yamame/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYamame[]      = INCBIN_U32("graphics/puppets/yamame/chibi/back.4bpp.lz");
const u16 gMonPalette_CYamame[]      = INCBIN_U16("graphics/puppets/yamame/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYamame[] = INCBIN_U16("graphics/puppets/yamame/chibi/shiny.gbapal");
const u8 gMonIcon_CYamame[]          = INCBIN_U8 ("graphics/puppets/yamame/chibi/icon.4bpp");
const u8 gMonFootprint_CYamame[]     = INCBIN_U8 ("graphics/puppets/yamame/footprint.1bpp");

const u32 gMonFrontPic_Yamame[]     = INCBIN_U32("graphics/puppets/yamame/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yamame[]      = INCBIN_U32("graphics/puppets/yamame/evolved/back.4bpp.lz");
const u16 gMonPalette_Yamame[]      = INCBIN_U16("graphics/puppets/yamame/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yamame[] = INCBIN_U16("graphics/puppets/yamame/evolved/shiny.gbapal");
const u8 gMonIcon_Yamame[]          = INCBIN_U8 ("graphics/puppets/yamame/evolved/icon.4bpp");
const u8 gMonFootprint_Yamame[]     = INCBIN_U8 ("graphics/puppets/yamame/footprint.1bpp");

const u32 gMonFrontPic_SYamame[]     = INCBIN_U32("graphics/puppets/yamame/speed/front.4bpp.lz");
const u32 gMonBackPic_SYamame[]      = INCBIN_U32("graphics/puppets/yamame/speed/back.4bpp.lz");
const u16 gMonPalette_SYamame[]      = INCBIN_U16("graphics/puppets/yamame/speed/normal.gbapal");
const u16 gMonShinyPalette_SYamame[] = INCBIN_U16("graphics/puppets/yamame/speed/shiny.gbapal");
const u8 gMonIcon_SYamame[]          = INCBIN_U8 ("graphics/puppets/yamame/speed/icon.4bpp");
const u8 gMonFootprint_SYamame[]     = INCBIN_U8 ("graphics/puppets/yamame/footprint.1bpp");

const u32 gMonFrontPic_TYamame[]     = INCBIN_U32("graphics/puppets/yamame/technic/front.4bpp.lz");
const u32 gMonBackPic_TYamame[]      = INCBIN_U32("graphics/puppets/yamame/technic/back.4bpp.lz");
const u16 gMonPalette_TYamame[]      = INCBIN_U16("graphics/puppets/yamame/technic/normal.gbapal");
const u16 gMonShinyPalette_TYamame[] = INCBIN_U16("graphics/puppets/yamame/technic/shiny.gbapal");
const u8 gMonIcon_TYamame[]          = INCBIN_U8 ("graphics/puppets/yamame/technic/icon.4bpp");
const u8 gMonFootprint_TYamame[]     = INCBIN_U8 ("graphics/puppets/yamame/footprint.1bpp");

const u32 gMonFrontPic_CParsee[]     = INCBIN_U32("graphics/puppets/parsee/chibi/front.4bpp.lz");
const u32 gMonBackPic_CParsee[]      = INCBIN_U32("graphics/puppets/parsee/chibi/back.4bpp.lz");
const u16 gMonPalette_CParsee[]      = INCBIN_U16("graphics/puppets/parsee/chibi/normal.gbapal");
const u16 gMonShinyPalette_CParsee[] = INCBIN_U16("graphics/puppets/parsee/chibi/shiny.gbapal");
const u8 gMonIcon_CParsee[]          = INCBIN_U8 ("graphics/puppets/parsee/chibi/icon.4bpp");
const u8 gMonFootprint_CParsee[]     = INCBIN_U8 ("graphics/puppets/parsee/footprint.1bpp");

const u32 gMonFrontPic_Parsee[]     = INCBIN_U32("graphics/puppets/parsee/evolved/front.4bpp.lz");
const u32 gMonBackPic_Parsee[]      = INCBIN_U32("graphics/puppets/parsee/evolved/back.4bpp.lz");
const u16 gMonPalette_Parsee[]      = INCBIN_U16("graphics/puppets/parsee/evolved/normal.gbapal");
const u16 gMonShinyPalette_Parsee[] = INCBIN_U16("graphics/puppets/parsee/evolved/shiny.gbapal");
const u8 gMonIcon_Parsee[]          = INCBIN_U8 ("graphics/puppets/parsee/evolved/icon.4bpp");
const u8 gMonFootprint_Parsee[]     = INCBIN_U8 ("graphics/puppets/parsee/footprint.1bpp");

const u32 gMonFrontPic_DParsee[]     = INCBIN_U32("graphics/puppets/parsee/defense/front.4bpp.lz");
const u32 gMonBackPic_DParsee[]      = INCBIN_U32("graphics/puppets/parsee/defense/back.4bpp.lz");
const u16 gMonPalette_DParsee[]      = INCBIN_U16("graphics/puppets/parsee/defense/normal.gbapal");
const u16 gMonShinyPalette_DParsee[] = INCBIN_U16("graphics/puppets/parsee/defense/shiny.gbapal");
const u8 gMonIcon_DParsee[]          = INCBIN_U8 ("graphics/puppets/parsee/defense/icon.4bpp");
const u8 gMonFootprint_DParsee[]     = INCBIN_U8 ("graphics/puppets/parsee/footprint.1bpp");

const u32 gMonFrontPic_TParsee[]     = INCBIN_U32("graphics/puppets/parsee/technic/front.4bpp.lz");
const u32 gMonBackPic_TParsee[]      = INCBIN_U32("graphics/puppets/parsee/technic/back.4bpp.lz");
const u16 gMonPalette_TParsee[]      = INCBIN_U16("graphics/puppets/parsee/technic/normal.gbapal");
const u16 gMonShinyPalette_TParsee[] = INCBIN_U16("graphics/puppets/parsee/technic/shiny.gbapal");
const u8 gMonIcon_TParsee[]          = INCBIN_U8 ("graphics/puppets/parsee/technic/icon.4bpp");
const u8 gMonFootprint_TParsee[]     = INCBIN_U8 ("graphics/puppets/parsee/footprint.1bpp");

const u32 gMonFrontPic_CYuugi[]     = INCBIN_U32("graphics/puppets/yuugi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYuugi[]      = INCBIN_U32("graphics/puppets/yuugi/chibi/back.4bpp.lz");
const u16 gMonPalette_CYuugi[]      = INCBIN_U16("graphics/puppets/yuugi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYuugi[] = INCBIN_U16("graphics/puppets/yuugi/chibi/shiny.gbapal");
const u8 gMonIcon_CYuugi[]          = INCBIN_U8 ("graphics/puppets/yuugi/chibi/icon.4bpp");
const u8 gMonFootprint_CYuugi[]     = INCBIN_U8 ("graphics/puppets/yuugi/footprint.1bpp");

const u32 gMonFrontPic_Yuugi[]     = INCBIN_U32("graphics/puppets/yuugi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yuugi[]      = INCBIN_U32("graphics/puppets/yuugi/evolved/back.4bpp.lz");
const u16 gMonPalette_Yuugi[]      = INCBIN_U16("graphics/puppets/yuugi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yuugi[] = INCBIN_U16("graphics/puppets/yuugi/evolved/shiny.gbapal");
const u8 gMonIcon_Yuugi[]          = INCBIN_U8 ("graphics/puppets/yuugi/evolved/icon.4bpp");
const u8 gMonFootprint_Yuugi[]     = INCBIN_U8 ("graphics/puppets/yuugi/footprint.1bpp");

const u32 gMonFrontPic_AYuugi[]     = INCBIN_U32("graphics/puppets/yuugi/attack/front.4bpp.lz");
const u32 gMonBackPic_AYuugi[]      = INCBIN_U32("graphics/puppets/yuugi/attack/back.4bpp.lz");
const u16 gMonPalette_AYuugi[]      = INCBIN_U16("graphics/puppets/yuugi/attack/normal.gbapal");
const u16 gMonShinyPalette_AYuugi[] = INCBIN_U16("graphics/puppets/yuugi/attack/shiny.gbapal");
const u8 gMonIcon_AYuugi[]          = INCBIN_U8 ("graphics/puppets/yuugi/attack/icon.4bpp");
const u8 gMonFootprint_AYuugi[]     = INCBIN_U8 ("graphics/puppets/yuugi/footprint.1bpp");

const u32 gMonFrontPic_DYuugi[]     = INCBIN_U32("graphics/puppets/yuugi/defense/front.4bpp.lz");
const u32 gMonBackPic_DYuugi[]      = INCBIN_U32("graphics/puppets/yuugi/defense/back.4bpp.lz");
const u16 gMonPalette_DYuugi[]      = INCBIN_U16("graphics/puppets/yuugi/defense/normal.gbapal");
const u16 gMonShinyPalette_DYuugi[] = INCBIN_U16("graphics/puppets/yuugi/defense/shiny.gbapal");
const u8 gMonIcon_DYuugi[]          = INCBIN_U8 ("graphics/puppets/yuugi/defense/icon.4bpp");
const u8 gMonFootprint_DYuugi[]     = INCBIN_U8 ("graphics/puppets/yuugi/footprint.1bpp");

const u32 gMonFrontPic_CSatori[]     = INCBIN_U32("graphics/puppets/satori/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSatori[]      = INCBIN_U32("graphics/puppets/satori/chibi/back.4bpp.lz");
const u16 gMonPalette_CSatori[]      = INCBIN_U16("graphics/puppets/satori/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSatori[] = INCBIN_U16("graphics/puppets/satori/chibi/shiny.gbapal");
const u8 gMonIcon_CSatori[]          = INCBIN_U8 ("graphics/puppets/satori/chibi/icon.4bpp");
const u8 gMonFootprint_CSatori[]     = INCBIN_U8 ("graphics/puppets/satori/footprint.1bpp");

const u32 gMonFrontPic_Satori[]     = INCBIN_U32("graphics/puppets/satori/evolved/front.4bpp.lz");
const u32 gMonBackPic_Satori[]      = INCBIN_U32("graphics/puppets/satori/evolved/back.4bpp.lz");
const u16 gMonPalette_Satori[]      = INCBIN_U16("graphics/puppets/satori/evolved/normal.gbapal");
const u16 gMonShinyPalette_Satori[] = INCBIN_U16("graphics/puppets/satori/evolved/shiny.gbapal");
const u8 gMonIcon_Satori[]          = INCBIN_U8 ("graphics/puppets/satori/evolved/icon.4bpp");
const u8 gMonFootprint_Satori[]     = INCBIN_U8 ("graphics/puppets/satori/footprint.1bpp");

const u32 gMonFrontPic_DSatori[]     = INCBIN_U32("graphics/puppets/satori/defense/front.4bpp.lz");
const u32 gMonBackPic_DSatori[]      = INCBIN_U32("graphics/puppets/satori/defense/back.4bpp.lz");
const u16 gMonPalette_DSatori[]      = INCBIN_U16("graphics/puppets/satori/defense/normal.gbapal");
const u16 gMonShinyPalette_DSatori[] = INCBIN_U16("graphics/puppets/satori/defense/shiny.gbapal");
const u8 gMonIcon_DSatori[]          = INCBIN_U8 ("graphics/puppets/satori/defense/icon.4bpp");
const u8 gMonFootprint_DSatori[]     = INCBIN_U8 ("graphics/puppets/satori/footprint.1bpp");

const u32 gMonFrontPic_TSatori[]     = INCBIN_U32("graphics/puppets/satori/technic/front.4bpp.lz");
const u32 gMonBackPic_TSatori[]      = INCBIN_U32("graphics/puppets/satori/technic/back.4bpp.lz");
const u16 gMonPalette_TSatori[]      = INCBIN_U16("graphics/puppets/satori/technic/normal.gbapal");
const u16 gMonShinyPalette_TSatori[] = INCBIN_U16("graphics/puppets/satori/technic/shiny.gbapal");
const u8 gMonIcon_TSatori[]          = INCBIN_U8 ("graphics/puppets/satori/technic/icon.4bpp");
const u8 gMonFootprint_TSatori[]     = INCBIN_U8 ("graphics/puppets/satori/footprint.1bpp");

const u32 gMonFrontPic_CRin[]     = INCBIN_U32("graphics/puppets/rin/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRin[]      = INCBIN_U32("graphics/puppets/rin/chibi/back.4bpp.lz");
const u16 gMonPalette_CRin[]      = INCBIN_U16("graphics/puppets/rin/chibi/normal.gbapal");
const u16 gMonShinyPalette_CRin[] = INCBIN_U16("graphics/puppets/rin/chibi/shiny.gbapal");
const u8 gMonIcon_CRin[]          = INCBIN_U8 ("graphics/puppets/rin/chibi/icon.4bpp");
const u8 gMonFootprint_CRin[]     = INCBIN_U8 ("graphics/puppets/rin/footprint.1bpp");

const u32 gMonFrontPic_Rin[]     = INCBIN_U32("graphics/puppets/rin/evolved/front.4bpp.lz");
const u32 gMonBackPic_Rin[]      = INCBIN_U32("graphics/puppets/rin/evolved/back.4bpp.lz");
const u16 gMonPalette_Rin[]      = INCBIN_U16("graphics/puppets/rin/evolved/normal.gbapal");
const u16 gMonShinyPalette_Rin[] = INCBIN_U16("graphics/puppets/rin/evolved/shiny.gbapal");
const u8 gMonIcon_Rin[]          = INCBIN_U8 ("graphics/puppets/rin/evolved/icon.4bpp");
const u8 gMonFootprint_Rin[]     = INCBIN_U8 ("graphics/puppets/rin/footprint.1bpp");

const u32 gMonFrontPic_ARin[]     = INCBIN_U32("graphics/puppets/rin/attack/front.4bpp.lz");
const u32 gMonBackPic_ARin[]      = INCBIN_U32("graphics/puppets/rin/attack/back.4bpp.lz");
const u16 gMonPalette_ARin[]      = INCBIN_U16("graphics/puppets/rin/attack/normal.gbapal");
const u16 gMonShinyPalette_ARin[] = INCBIN_U16("graphics/puppets/rin/attack/shiny.gbapal");
const u8 gMonIcon_ARin[]          = INCBIN_U8 ("graphics/puppets/rin/attack/icon.4bpp");
const u8 gMonFootprint_ARin[]     = INCBIN_U8 ("graphics/puppets/rin/footprint.1bpp");

const u32 gMonFrontPic_SRin[]     = INCBIN_U32("graphics/puppets/rin/speed/front.4bpp.lz");
const u32 gMonBackPic_SRin[]      = INCBIN_U32("graphics/puppets/rin/speed/back.4bpp.lz");
const u16 gMonPalette_SRin[]      = INCBIN_U16("graphics/puppets/rin/speed/normal.gbapal");
const u16 gMonShinyPalette_SRin[] = INCBIN_U16("graphics/puppets/rin/speed/shiny.gbapal");
const u8 gMonIcon_SRin[]          = INCBIN_U8 ("graphics/puppets/rin/speed/icon.4bpp");
const u8 gMonFootprint_SRin[]     = INCBIN_U8 ("graphics/puppets/rin/footprint.1bpp");

const u32 gMonFrontPic_ZombieFairy[]     = INCBIN_U32("graphics/puppets/fairy/zombie/front.4bpp.lz");
const u32 gMonBackPic_ZombieFairy[]      = INCBIN_U32("graphics/puppets/fairy/zombie/back.4bpp.lz");
const u16 gMonPalette_ZombieFairy[]      = INCBIN_U16("graphics/puppets/fairy/zombie/normal.gbapal");
const u16 gMonShinyPalette_ZombieFairy[] = INCBIN_U16("graphics/puppets/fairy/zombie/shiny.gbapal");
const u8 gMonIcon_ZombieFairy[]          = INCBIN_U8 ("graphics/puppets/fairy/zombie/icon.4bpp");
const u8 gMonFootprint_ZombieFairy[]     = INCBIN_U8 ("graphics/puppets/fairy/footprint.1bpp");

const u32 gMonFrontPic_CUtsuho[]     = INCBIN_U32("graphics/puppets/utsuho/chibi/front.4bpp.lz");
const u32 gMonBackPic_CUtsuho[]      = INCBIN_U32("graphics/puppets/utsuho/chibi/back.4bpp.lz");
const u16 gMonPalette_CUtsuho[]      = INCBIN_U16("graphics/puppets/utsuho/chibi/normal.gbapal");
const u16 gMonShinyPalette_CUtsuho[] = INCBIN_U16("graphics/puppets/utsuho/chibi/shiny.gbapal");
const u8 gMonIcon_CUtsuho[]          = INCBIN_U8 ("graphics/puppets/utsuho/chibi/icon.4bpp");
const u8 gMonFootprint_CUtsuho[]     = INCBIN_U8 ("graphics/puppets/utsuho/footprint.1bpp");

const u32 gMonFrontPic_Utsuho[]     = INCBIN_U32("graphics/puppets/utsuho/evolved/front.4bpp.lz");
const u32 gMonBackPic_Utsuho[]      = INCBIN_U32("graphics/puppets/utsuho/evolved/back.4bpp.lz");
const u16 gMonPalette_Utsuho[]      = INCBIN_U16("graphics/puppets/utsuho/evolved/normal.gbapal");
const u16 gMonShinyPalette_Utsuho[] = INCBIN_U16("graphics/puppets/utsuho/evolved/shiny.gbapal");
const u8 gMonIcon_Utsuho[]          = INCBIN_U8 ("graphics/puppets/utsuho/evolved/icon.4bpp");
const u8 gMonFootprint_Utsuho[]     = INCBIN_U8 ("graphics/puppets/utsuho/footprint.1bpp");

const u32 gMonFrontPic_AUtsuho[]     = INCBIN_U32("graphics/puppets/utsuho/attack/front.4bpp.lz");
const u32 gMonBackPic_AUtsuho[]      = INCBIN_U32("graphics/puppets/utsuho/attack/back.4bpp.lz");
const u16 gMonPalette_AUtsuho[]      = INCBIN_U16("graphics/puppets/utsuho/attack/normal.gbapal");
const u16 gMonShinyPalette_AUtsuho[] = INCBIN_U16("graphics/puppets/utsuho/attack/shiny.gbapal");
const u8 gMonIcon_AUtsuho[]          = INCBIN_U8 ("graphics/puppets/utsuho/attack/icon.4bpp");
const u8 gMonFootprint_AUtsuho[]     = INCBIN_U8 ("graphics/puppets/utsuho/footprint.1bpp");

const u32 gMonFrontPic_SUtsuho[]     = INCBIN_U32("graphics/puppets/utsuho/speed/front.4bpp.lz");
const u32 gMonBackPic_SUtsuho[]      = INCBIN_U32("graphics/puppets/utsuho/speed/back.4bpp.lz");
const u16 gMonPalette_SUtsuho[]      = INCBIN_U16("graphics/puppets/utsuho/speed/normal.gbapal");
const u16 gMonShinyPalette_SUtsuho[] = INCBIN_U16("graphics/puppets/utsuho/speed/shiny.gbapal");
const u8 gMonIcon_SUtsuho[]          = INCBIN_U8 ("graphics/puppets/utsuho/speed/icon.4bpp");
const u8 gMonFootprint_SUtsuho[]     = INCBIN_U8 ("graphics/puppets/utsuho/footprint.1bpp");

const u32 gMonFrontPic_CKoishi[]     = INCBIN_U32("graphics/puppets/koishi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKoishi[]      = INCBIN_U32("graphics/puppets/koishi/chibi/back.4bpp.lz");
const u16 gMonPalette_CKoishi[]      = INCBIN_U16("graphics/puppets/koishi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKoishi[] = INCBIN_U16("graphics/puppets/koishi/chibi/shiny.gbapal");
const u8 gMonIcon_CKoishi[]          = INCBIN_U8 ("graphics/puppets/koishi/chibi/icon.4bpp");
const u8 gMonFootprint_CKoishi[]     = INCBIN_U8 ("graphics/puppets/koishi/footprint.1bpp");

const u32 gMonFrontPic_Koishi[]     = INCBIN_U32("graphics/puppets/koishi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Koishi[]      = INCBIN_U32("graphics/puppets/koishi/evolved/back.4bpp.lz");
const u16 gMonPalette_Koishi[]      = INCBIN_U16("graphics/puppets/koishi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Koishi[] = INCBIN_U16("graphics/puppets/koishi/evolved/shiny.gbapal");
const u8 gMonIcon_Koishi[]          = INCBIN_U8 ("graphics/puppets/koishi/evolved/icon.4bpp");
const u8 gMonFootprint_Koishi[]     = INCBIN_U8 ("graphics/puppets/koishi/footprint.1bpp");

const u32 gMonFrontPic_AKoishi[]     = INCBIN_U32("graphics/puppets/koishi/attack/front.4bpp.lz");
const u32 gMonBackPic_AKoishi[]      = INCBIN_U32("graphics/puppets/koishi/attack/back.4bpp.lz");
const u16 gMonPalette_AKoishi[]      = INCBIN_U16("graphics/puppets/koishi/attack/normal.gbapal");
const u16 gMonShinyPalette_AKoishi[] = INCBIN_U16("graphics/puppets/koishi/attack/shiny.gbapal");
const u8 gMonIcon_AKoishi[]          = INCBIN_U8 ("graphics/puppets/koishi/attack/icon.4bpp");
const u8 gMonFootprint_AKoishi[]     = INCBIN_U8 ("graphics/puppets/koishi/footprint.1bpp");

const u32 gMonFrontPic_SKoishi[]     = INCBIN_U32("graphics/puppets/koishi/speed/front.4bpp.lz");
const u32 gMonBackPic_SKoishi[]      = INCBIN_U32("graphics/puppets/koishi/speed/back.4bpp.lz");
const u16 gMonPalette_SKoishi[]      = INCBIN_U16("graphics/puppets/koishi/speed/normal.gbapal");
const u16 gMonShinyPalette_SKoishi[] = INCBIN_U16("graphics/puppets/koishi/speed/shiny.gbapal");
const u8 gMonIcon_SKoishi[]          = INCBIN_U8 ("graphics/puppets/koishi/speed/icon.4bpp");
const u8 gMonFootprint_SKoishi[]     = INCBIN_U8 ("graphics/puppets/koishi/footprint.1bpp");

const u32 gMonFrontPic_CNazrin[]     = INCBIN_U32("graphics/puppets/nazrin/chibi/front.4bpp.lz");
const u32 gMonBackPic_CNazrin[]      = INCBIN_U32("graphics/puppets/nazrin/chibi/back.4bpp.lz");
const u16 gMonPalette_CNazrin[]      = INCBIN_U16("graphics/puppets/nazrin/chibi/normal.gbapal");
const u16 gMonShinyPalette_CNazrin[] = INCBIN_U16("graphics/puppets/nazrin/chibi/shiny.gbapal");
const u8 gMonIcon_CNazrin[]          = INCBIN_U8 ("graphics/puppets/nazrin/chibi/icon.4bpp");
const u8 gMonFootprint_CNazrin[]     = INCBIN_U8 ("graphics/puppets/nazrin/footprint.1bpp");

const u32 gMonFrontPic_Nazrin[]     = INCBIN_U32("graphics/puppets/nazrin/evolved/front.4bpp.lz");
const u32 gMonBackPic_Nazrin[]      = INCBIN_U32("graphics/puppets/nazrin/evolved/back.4bpp.lz");
const u16 gMonPalette_Nazrin[]      = INCBIN_U16("graphics/puppets/nazrin/evolved/normal.gbapal");
const u16 gMonShinyPalette_Nazrin[] = INCBIN_U16("graphics/puppets/nazrin/evolved/shiny.gbapal");
const u8 gMonIcon_Nazrin[]          = INCBIN_U8 ("graphics/puppets/nazrin/evolved/icon.4bpp");
const u8 gMonFootprint_Nazrin[]     = INCBIN_U8 ("graphics/puppets/nazrin/footprint.1bpp");

const u32 gMonFrontPic_TNazrin[]     = INCBIN_U32("graphics/puppets/nazrin/technic/front.4bpp.lz");
const u32 gMonBackPic_TNazrin[]      = INCBIN_U32("graphics/puppets/nazrin/technic/back.4bpp.lz");
const u16 gMonPalette_TNazrin[]      = INCBIN_U16("graphics/puppets/nazrin/technic/normal.gbapal");
const u16 gMonShinyPalette_TNazrin[] = INCBIN_U16("graphics/puppets/nazrin/technic/shiny.gbapal");
const u8 gMonIcon_TNazrin[]          = INCBIN_U8 ("graphics/puppets/nazrin/technic/icon.4bpp");
const u8 gMonFootprint_TNazrin[]     = INCBIN_U8 ("graphics/puppets/nazrin/footprint.1bpp");

const u32 gMonFrontPic_HNazrin[]     = INCBIN_U32("graphics/puppets/nazrin/helper/front.4bpp.lz");
const u32 gMonBackPic_HNazrin[]      = INCBIN_U32("graphics/puppets/nazrin/helper/back.4bpp.lz");
const u16 gMonPalette_HNazrin[]      = INCBIN_U16("graphics/puppets/nazrin/helper/normal.gbapal");
const u16 gMonShinyPalette_HNazrin[] = INCBIN_U16("graphics/puppets/nazrin/helper/shiny.gbapal");
const u8 gMonIcon_HNazrin[]          = INCBIN_U8 ("graphics/puppets/nazrin/helper/icon.4bpp");
const u8 gMonFootprint_HNazrin[]     = INCBIN_U8 ("graphics/puppets/nazrin/footprint.1bpp");

const u32 gMonFrontPic_CKogasa[]     = INCBIN_U32("graphics/puppets/kogasa/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKogasa[]      = INCBIN_U32("graphics/puppets/kogasa/chibi/back.4bpp.lz");
const u16 gMonPalette_CKogasa[]      = INCBIN_U16("graphics/puppets/kogasa/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKogasa[] = INCBIN_U16("graphics/puppets/kogasa/chibi/shiny.gbapal");
const u8 gMonIcon_CKogasa[]          = INCBIN_U8 ("graphics/puppets/kogasa/chibi/icon.4bpp");
const u8 gMonFootprint_CKogasa[]     = INCBIN_U8 ("graphics/puppets/kogasa/footprint.1bpp");

const u32 gMonFrontPic_Kogasa[]     = INCBIN_U32("graphics/puppets/kogasa/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kogasa[]      = INCBIN_U32("graphics/puppets/kogasa/evolved/back.4bpp.lz");
const u16 gMonPalette_Kogasa[]      = INCBIN_U16("graphics/puppets/kogasa/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kogasa[] = INCBIN_U16("graphics/puppets/kogasa/evolved/shiny.gbapal");
const u8 gMonIcon_Kogasa[]          = INCBIN_U8 ("graphics/puppets/kogasa/evolved/icon.4bpp");
const u8 gMonFootprint_Kogasa[]     = INCBIN_U8 ("graphics/puppets/kogasa/footprint.1bpp");

const u32 gMonFrontPic_SKogasa[]     = INCBIN_U32("graphics/puppets/kogasa/speed/front.4bpp.lz");
const u32 gMonBackPic_SKogasa[]      = INCBIN_U32("graphics/puppets/kogasa/speed/back.4bpp.lz");
const u16 gMonPalette_SKogasa[]      = INCBIN_U16("graphics/puppets/kogasa/speed/normal.gbapal");
const u16 gMonShinyPalette_SKogasa[] = INCBIN_U16("graphics/puppets/kogasa/speed/shiny.gbapal");
const u8 gMonIcon_SKogasa[]          = INCBIN_U8 ("graphics/puppets/kogasa/speed/icon.4bpp");
const u8 gMonFootprint_SKogasa[]     = INCBIN_U8 ("graphics/puppets/kogasa/footprint.1bpp");

const u32 gMonFrontPic_TKogasa[]     = INCBIN_U32("graphics/puppets/kogasa/technic/front.4bpp.lz");
const u32 gMonBackPic_TKogasa[]      = INCBIN_U32("graphics/puppets/kogasa/technic/back.4bpp.lz");
const u16 gMonPalette_TKogasa[]      = INCBIN_U16("graphics/puppets/kogasa/technic/normal.gbapal");
const u16 gMonShinyPalette_TKogasa[] = INCBIN_U16("graphics/puppets/kogasa/technic/shiny.gbapal");
const u8 gMonIcon_TKogasa[]          = INCBIN_U8 ("graphics/puppets/kogasa/technic/icon.4bpp");
const u8 gMonFootprint_TKogasa[]     = INCBIN_U8 ("graphics/puppets/kogasa/footprint.1bpp");

const u32 gMonFrontPic_CIchirin[]     = INCBIN_U32("graphics/puppets/ichirin/chibi/front.4bpp.lz");
const u32 gMonBackPic_CIchirin[]      = INCBIN_U32("graphics/puppets/ichirin/chibi/back.4bpp.lz");
const u16 gMonPalette_CIchirin[]      = INCBIN_U16("graphics/puppets/ichirin/chibi/normal.gbapal");
const u16 gMonShinyPalette_CIchirin[] = INCBIN_U16("graphics/puppets/ichirin/chibi/shiny.gbapal");
const u8 gMonIcon_CIchirin[]          = INCBIN_U8 ("graphics/puppets/ichirin/chibi/icon.4bpp");
const u8 gMonFootprint_CIchirin[]     = INCBIN_U8 ("graphics/puppets/ichirin/footprint.1bpp");

const u32 gMonFrontPic_Ichirin[]     = INCBIN_U32("graphics/puppets/ichirin/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ichirin[]      = INCBIN_U32("graphics/puppets/ichirin/evolved/back.4bpp.lz");
const u16 gMonPalette_Ichirin[]      = INCBIN_U16("graphics/puppets/ichirin/evolved/normal.gbapal");
const u16 gMonShinyPalette_Ichirin[] = INCBIN_U16("graphics/puppets/ichirin/evolved/shiny.gbapal");
const u8 gMonIcon_Ichirin[]          = INCBIN_U8 ("graphics/puppets/ichirin/evolved/icon.4bpp");
const u8 gMonFootprint_Ichirin[]     = INCBIN_U8 ("graphics/puppets/ichirin/footprint.1bpp");

const u32 gMonFrontPic_DIchirin[]     = INCBIN_U32("graphics/puppets/ichirin/defense/front.4bpp.lz");
const u32 gMonBackPic_DIchirin[]      = INCBIN_U32("graphics/puppets/ichirin/defense/back.4bpp.lz");
const u16 gMonPalette_DIchirin[]      = INCBIN_U16("graphics/puppets/ichirin/defense/normal.gbapal");
const u16 gMonShinyPalette_DIchirin[] = INCBIN_U16("graphics/puppets/ichirin/defense/shiny.gbapal");
const u8 gMonIcon_DIchirin[]          = INCBIN_U8 ("graphics/puppets/ichirin/defense/icon.4bpp");
const u8 gMonFootprint_DIchirin[]     = INCBIN_U8 ("graphics/puppets/ichirin/footprint.1bpp");

const u32 gMonFrontPic_TIchirin[]     = INCBIN_U32("graphics/puppets/ichirin/technic/front.4bpp.lz");
const u32 gMonBackPic_TIchirin[]      = INCBIN_U32("graphics/puppets/ichirin/technic/back.4bpp.lz");
const u16 gMonPalette_TIchirin[]      = INCBIN_U16("graphics/puppets/ichirin/technic/normal.gbapal");
const u16 gMonShinyPalette_TIchirin[] = INCBIN_U16("graphics/puppets/ichirin/technic/shiny.gbapal");
const u8 gMonIcon_TIchirin[]          = INCBIN_U8 ("graphics/puppets/ichirin/technic/icon.4bpp");
const u8 gMonFootprint_TIchirin[]     = INCBIN_U8 ("graphics/puppets/ichirin/footprint.1bpp");

const u32 gMonFrontPic_CMinamitsu[]     = INCBIN_U32("graphics/puppets/minamitsu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMinamitsu[]      = INCBIN_U32("graphics/puppets/minamitsu/chibi/back.4bpp.lz");
const u16 gMonPalette_CMinamitsu[]      = INCBIN_U16("graphics/puppets/minamitsu/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMinamitsu[] = INCBIN_U16("graphics/puppets/minamitsu/chibi/shiny.gbapal");
const u8 gMonIcon_CMinamitsu[]          = INCBIN_U8 ("graphics/puppets/minamitsu/chibi/icon.4bpp");
const u8 gMonFootprint_CMinamitsu[]     = INCBIN_U8 ("graphics/puppets/minamitsu/footprint.1bpp");

const u32 gMonFrontPic_Minamitsu[]     = INCBIN_U32("graphics/puppets/minamitsu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Minamitsu[]      = INCBIN_U32("graphics/puppets/minamitsu/evolved/back.4bpp.lz");
const u16 gMonPalette_Minamitsu[]      = INCBIN_U16("graphics/puppets/minamitsu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Minamitsu[] = INCBIN_U16("graphics/puppets/minamitsu/evolved/shiny.gbapal");
const u8 gMonIcon_Minamitsu[]          = INCBIN_U8 ("graphics/puppets/minamitsu/evolved/icon.4bpp");
const u8 gMonFootprint_Minamitsu[]     = INCBIN_U8 ("graphics/puppets/minamitsu/footprint.1bpp");

const u32 gMonFrontPic_AMinamitsu[]     = INCBIN_U32("graphics/puppets/minamitsu/attack/front.4bpp.lz");
const u32 gMonBackPic_AMinamitsu[]      = INCBIN_U32("graphics/puppets/minamitsu/attack/back.4bpp.lz");
const u16 gMonPalette_AMinamitsu[]      = INCBIN_U16("graphics/puppets/minamitsu/attack/normal.gbapal");
const u16 gMonShinyPalette_AMinamitsu[] = INCBIN_U16("graphics/puppets/minamitsu/attack/shiny.gbapal");
const u8 gMonIcon_AMinamitsu[]          = INCBIN_U8 ("graphics/puppets/minamitsu/attack/icon.4bpp");
const u8 gMonFootprint_AMinamitsu[]     = INCBIN_U8 ("graphics/puppets/minamitsu/footprint.1bpp");

const u32 gMonFrontPic_DMinamitsu[]     = INCBIN_U32("graphics/puppets/minamitsu/defense/front.4bpp.lz");
const u32 gMonBackPic_DMinamitsu[]      = INCBIN_U32("graphics/puppets/minamitsu/defense/back.4bpp.lz");
const u16 gMonPalette_DMinamitsu[]      = INCBIN_U16("graphics/puppets/minamitsu/defense/normal.gbapal");
const u16 gMonShinyPalette_DMinamitsu[] = INCBIN_U16("graphics/puppets/minamitsu/defense/shiny.gbapal");
const u8 gMonIcon_DMinamitsu[]          = INCBIN_U8 ("graphics/puppets/minamitsu/defense/icon.4bpp");
const u8 gMonFootprint_DMinamitsu[]     = INCBIN_U8 ("graphics/puppets/minamitsu/footprint.1bpp");

const u32 gMonFrontPic_CShou[]     = INCBIN_U32("graphics/puppets/shou/chibi/front.4bpp.lz");
const u32 gMonBackPic_CShou[]      = INCBIN_U32("graphics/puppets/shou/chibi/back.4bpp.lz");
const u16 gMonPalette_CShou[]      = INCBIN_U16("graphics/puppets/shou/chibi/normal.gbapal");
const u16 gMonShinyPalette_CShou[] = INCBIN_U16("graphics/puppets/shou/chibi/shiny.gbapal");
const u8 gMonIcon_CShou[]          = INCBIN_U8 ("graphics/puppets/shou/chibi/icon.4bpp");
const u8 gMonFootprint_CShou[]     = INCBIN_U8 ("graphics/puppets/shou/footprint.1bpp");

const u32 gMonFrontPic_Shou[]     = INCBIN_U32("graphics/puppets/shou/evolved/front.4bpp.lz");
const u32 gMonBackPic_Shou[]      = INCBIN_U32("graphics/puppets/shou/evolved/back.4bpp.lz");
const u16 gMonPalette_Shou[]      = INCBIN_U16("graphics/puppets/shou/evolved/normal.gbapal");
const u16 gMonShinyPalette_Shou[] = INCBIN_U16("graphics/puppets/shou/evolved/shiny.gbapal");
const u8 gMonIcon_Shou[]          = INCBIN_U8 ("graphics/puppets/shou/evolved/icon.4bpp");
const u8 gMonFootprint_Shou[]     = INCBIN_U8 ("graphics/puppets/shou/footprint.1bpp");

const u32 gMonFrontPic_AShou[]     = INCBIN_U32("graphics/puppets/shou/attack/front.4bpp.lz");
const u32 gMonBackPic_AShou[]      = INCBIN_U32("graphics/puppets/shou/attack/back.4bpp.lz");
const u16 gMonPalette_AShou[]      = INCBIN_U16("graphics/puppets/shou/attack/normal.gbapal");
const u16 gMonShinyPalette_AShou[] = INCBIN_U16("graphics/puppets/shou/attack/shiny.gbapal");
const u8 gMonIcon_AShou[]          = INCBIN_U8 ("graphics/puppets/shou/attack/icon.4bpp");
const u8 gMonFootprint_AShou[]     = INCBIN_U8 ("graphics/puppets/shou/footprint.1bpp");

const u32 gMonFrontPic_TShou[]     = INCBIN_U32("graphics/puppets/shou/technic/front.4bpp.lz");
const u32 gMonBackPic_TShou[]      = INCBIN_U32("graphics/puppets/shou/technic/back.4bpp.lz");
const u16 gMonPalette_TShou[]      = INCBIN_U16("graphics/puppets/shou/technic/normal.gbapal");
const u16 gMonShinyPalette_TShou[] = INCBIN_U16("graphics/puppets/shou/technic/shiny.gbapal");
const u8 gMonIcon_TShou[]          = INCBIN_U8 ("graphics/puppets/shou/technic/icon.4bpp");
const u8 gMonFootprint_TShou[]     = INCBIN_U8 ("graphics/puppets/shou/footprint.1bpp");

const u32 gMonFrontPic_CByakuren[]     = INCBIN_U32("graphics/puppets/byakuren/chibi/front.4bpp.lz");
const u32 gMonBackPic_CByakuren[]      = INCBIN_U32("graphics/puppets/byakuren/chibi/back.4bpp.lz");
const u16 gMonPalette_CByakuren[]      = INCBIN_U16("graphics/puppets/byakuren/chibi/normal.gbapal");
const u16 gMonShinyPalette_CByakuren[] = INCBIN_U16("graphics/puppets/byakuren/chibi/shiny.gbapal");
const u8 gMonIcon_CByakuren[]          = INCBIN_U8 ("graphics/puppets/byakuren/chibi/icon.4bpp");
const u8 gMonFootprint_CByakuren[]     = INCBIN_U8 ("graphics/puppets/byakuren/footprint.1bpp");

const u32 gMonFrontPic_Byakuren[]     = INCBIN_U32("graphics/puppets/byakuren/evolved/front.4bpp.lz");
const u32 gMonBackPic_Byakuren[]      = INCBIN_U32("graphics/puppets/byakuren/evolved/back.4bpp.lz");
const u16 gMonPalette_Byakuren[]      = INCBIN_U16("graphics/puppets/byakuren/evolved/normal.gbapal");
const u16 gMonShinyPalette_Byakuren[] = INCBIN_U16("graphics/puppets/byakuren/evolved/shiny.gbapal");
const u8 gMonIcon_Byakuren[]          = INCBIN_U8 ("graphics/puppets/byakuren/evolved/icon.4bpp");
const u8 gMonFootprint_Byakuren[]     = INCBIN_U8 ("graphics/puppets/byakuren/footprint.1bpp");

const u32 gMonFrontPic_DByakuren[]     = INCBIN_U32("graphics/puppets/byakuren/defense/front.4bpp.lz");
const u32 gMonBackPic_DByakuren[]      = INCBIN_U32("graphics/puppets/byakuren/defense/back.4bpp.lz");
const u16 gMonPalette_DByakuren[]      = INCBIN_U16("graphics/puppets/byakuren/defense/normal.gbapal");
const u16 gMonShinyPalette_DByakuren[] = INCBIN_U16("graphics/puppets/byakuren/defense/shiny.gbapal");
const u8 gMonIcon_DByakuren[]          = INCBIN_U8 ("graphics/puppets/byakuren/defense/icon.4bpp");
const u8 gMonFootprint_DByakuren[]     = INCBIN_U8 ("graphics/puppets/byakuren/footprint.1bpp");

const u32 gMonFrontPic_TByakuren[]     = INCBIN_U32("graphics/puppets/byakuren/technic/front.4bpp.lz");
const u32 gMonBackPic_TByakuren[]      = INCBIN_U32("graphics/puppets/byakuren/technic/back.4bpp.lz");
const u16 gMonPalette_TByakuren[]      = INCBIN_U16("graphics/puppets/byakuren/technic/normal.gbapal");
const u16 gMonShinyPalette_TByakuren[] = INCBIN_U16("graphics/puppets/byakuren/technic/shiny.gbapal");
const u8 gMonIcon_TByakuren[]          = INCBIN_U8 ("graphics/puppets/byakuren/technic/icon.4bpp");
const u8 gMonFootprint_TByakuren[]     = INCBIN_U8 ("graphics/puppets/byakuren/footprint.1bpp");

const u32 gMonFrontPic_CNue[]     = INCBIN_U32("graphics/puppets/nue/chibi/front.4bpp.lz");
const u32 gMonBackPic_CNue[]      = INCBIN_U32("graphics/puppets/nue/chibi/back.4bpp.lz");
const u16 gMonPalette_CNue[]      = INCBIN_U16("graphics/puppets/nue/chibi/normal.gbapal");
const u16 gMonShinyPalette_CNue[] = INCBIN_U16("graphics/puppets/nue/chibi/shiny.gbapal");
const u8 gMonIcon_CNue[]          = INCBIN_U8 ("graphics/puppets/nue/chibi/icon.4bpp");
const u8 gMonFootprint_CNue[]     = INCBIN_U8 ("graphics/puppets/nue/footprint.1bpp");

const u32 gMonFrontPic_Nue[]     = INCBIN_U32("graphics/puppets/nue/evolved/front.4bpp.lz");
const u32 gMonBackPic_Nue[]      = INCBIN_U32("graphics/puppets/nue/evolved/back.4bpp.lz");
const u16 gMonPalette_Nue[]      = INCBIN_U16("graphics/puppets/nue/evolved/normal.gbapal");
const u16 gMonShinyPalette_Nue[] = INCBIN_U16("graphics/puppets/nue/evolved/shiny.gbapal");
const u8 gMonIcon_Nue[]          = INCBIN_U8 ("graphics/puppets/nue/evolved/icon.4bpp");
const u8 gMonFootprint_Nue[]     = INCBIN_U8 ("graphics/puppets/nue/footprint.1bpp");

const u32 gMonFrontPic_ANue[]     = INCBIN_U32("graphics/puppets/nue/attack/front.4bpp.lz");
const u32 gMonBackPic_ANue[]      = INCBIN_U32("graphics/puppets/nue/attack/back.4bpp.lz");
const u16 gMonPalette_ANue[]      = INCBIN_U16("graphics/puppets/nue/attack/normal.gbapal");
const u16 gMonShinyPalette_ANue[] = INCBIN_U16("graphics/puppets/nue/attack/shiny.gbapal");
const u8 gMonIcon_ANue[]          = INCBIN_U8 ("graphics/puppets/nue/attack/icon.4bpp");
const u8 gMonFootprint_ANue[]     = INCBIN_U8 ("graphics/puppets/nue/footprint.1bpp");

const u32 gMonFrontPic_TNue[]     = INCBIN_U32("graphics/puppets/nue/technic/front.4bpp.lz");
const u32 gMonBackPic_TNue[]      = INCBIN_U32("graphics/puppets/nue/technic/back.4bpp.lz");
const u16 gMonPalette_TNue[]      = INCBIN_U16("graphics/puppets/nue/technic/normal.gbapal");
const u16 gMonShinyPalette_TNue[] = INCBIN_U16("graphics/puppets/nue/technic/shiny.gbapal");
const u8 gMonIcon_TNue[]          = INCBIN_U8 ("graphics/puppets/nue/technic/icon.4bpp");
const u8 gMonFootprint_TNue[]     = INCBIN_U8 ("graphics/puppets/nue/footprint.1bpp");

const u32 gMonFrontPic_CKyouko[]     = INCBIN_U32("graphics/puppets/kyouko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKyouko[]      = INCBIN_U32("graphics/puppets/kyouko/chibi/back.4bpp.lz");
const u16 gMonPalette_CKyouko[]      = INCBIN_U16("graphics/puppets/kyouko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKyouko[] = INCBIN_U16("graphics/puppets/kyouko/chibi/shiny.gbapal");
const u8 gMonIcon_CKyouko[]          = INCBIN_U8 ("graphics/puppets/kyouko/chibi/icon.4bpp");
const u8 gMonFootprint_CKyouko[]     = INCBIN_U8 ("graphics/puppets/kyouko/footprint.1bpp");

const u32 gMonFrontPic_Kyouko[]     = INCBIN_U32("graphics/puppets/kyouko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kyouko[]      = INCBIN_U32("graphics/puppets/kyouko/evolved/back.4bpp.lz");
const u16 gMonPalette_Kyouko[]      = INCBIN_U16("graphics/puppets/kyouko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kyouko[] = INCBIN_U16("graphics/puppets/kyouko/evolved/shiny.gbapal");
const u8 gMonIcon_Kyouko[]          = INCBIN_U8 ("graphics/puppets/kyouko/evolved/icon.4bpp");
const u8 gMonFootprint_Kyouko[]     = INCBIN_U8 ("graphics/puppets/kyouko/footprint.1bpp");

const u32 gMonFrontPic_CYoshika[]     = INCBIN_U32("graphics/puppets/yoshika/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYoshika[]      = INCBIN_U32("graphics/puppets/yoshika/chibi/back.4bpp.lz");
const u16 gMonPalette_CYoshika[]      = INCBIN_U16("graphics/puppets/yoshika/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYoshika[] = INCBIN_U16("graphics/puppets/yoshika/chibi/shiny.gbapal");
const u8 gMonIcon_CYoshika[]          = INCBIN_U8 ("graphics/puppets/yoshika/chibi/icon.4bpp");
const u8 gMonFootprint_CYoshika[]     = INCBIN_U8 ("graphics/puppets/yoshika/footprint.1bpp");

const u32 gMonFrontPic_Yoshika[]     = INCBIN_U32("graphics/puppets/yoshika/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yoshika[]      = INCBIN_U32("graphics/puppets/yoshika/evolved/back.4bpp.lz");
const u16 gMonPalette_Yoshika[]      = INCBIN_U16("graphics/puppets/yoshika/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yoshika[] = INCBIN_U16("graphics/puppets/yoshika/evolved/shiny.gbapal");
const u8 gMonIcon_Yoshika[]          = INCBIN_U8 ("graphics/puppets/yoshika/evolved/icon.4bpp");
const u8 gMonFootprint_Yoshika[]     = INCBIN_U8 ("graphics/puppets/yoshika/footprint.1bpp");

const u32 gMonFrontPic_CSeiga[]     = INCBIN_U32("graphics/puppets/seiga/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSeiga[]      = INCBIN_U32("graphics/puppets/seiga/chibi/back.4bpp.lz");
const u16 gMonPalette_CSeiga[]      = INCBIN_U16("graphics/puppets/seiga/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSeiga[] = INCBIN_U16("graphics/puppets/seiga/chibi/shiny.gbapal");
const u8 gMonIcon_CSeiga[]          = INCBIN_U8 ("graphics/puppets/seiga/chibi/icon.4bpp");
const u8 gMonFootprint_CSeiga[]     = INCBIN_U8 ("graphics/puppets/seiga/footprint.1bpp");

const u32 gMonFrontPic_Seiga[]     = INCBIN_U32("graphics/puppets/seiga/evolved/front.4bpp.lz");
const u32 gMonBackPic_Seiga[]      = INCBIN_U32("graphics/puppets/seiga/evolved/back.4bpp.lz");
const u16 gMonPalette_Seiga[]      = INCBIN_U16("graphics/puppets/seiga/evolved/normal.gbapal");
const u16 gMonShinyPalette_Seiga[] = INCBIN_U16("graphics/puppets/seiga/evolved/shiny.gbapal");
const u8 gMonIcon_Seiga[]          = INCBIN_U8 ("graphics/puppets/seiga/evolved/icon.4bpp");
const u8 gMonFootprint_Seiga[]     = INCBIN_U8 ("graphics/puppets/seiga/footprint.1bpp");

const u32 gMonFrontPic_CTojiko[]     = INCBIN_U32("graphics/puppets/tojiko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CTojiko[]      = INCBIN_U32("graphics/puppets/tojiko/chibi/back.4bpp.lz");
const u16 gMonPalette_CTojiko[]      = INCBIN_U16("graphics/puppets/tojiko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CTojiko[] = INCBIN_U16("graphics/puppets/tojiko/chibi/shiny.gbapal");
const u8 gMonIcon_CTojiko[]          = INCBIN_U8 ("graphics/puppets/tojiko/chibi/icon.4bpp");
const u8 gMonFootprint_CTojiko[]     = INCBIN_U8 ("graphics/puppets/tojiko/footprint.1bpp");

const u32 gMonFrontPic_Tojiko[]     = INCBIN_U32("graphics/puppets/tojiko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Tojiko[]      = INCBIN_U32("graphics/puppets/tojiko/evolved/back.4bpp.lz");
const u16 gMonPalette_Tojiko[]      = INCBIN_U16("graphics/puppets/tojiko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Tojiko[] = INCBIN_U16("graphics/puppets/tojiko/evolved/shiny.gbapal");
const u8 gMonIcon_Tojiko[]          = INCBIN_U8 ("graphics/puppets/tojiko/evolved/icon.4bpp");
const u8 gMonFootprint_Tojiko[]     = INCBIN_U8 ("graphics/puppets/tojiko/footprint.1bpp");

const u32 gMonFrontPic_CFuto[]     = INCBIN_U32("graphics/puppets/futo/chibi/front.4bpp.lz");
const u32 gMonBackPic_CFuto[]      = INCBIN_U32("graphics/puppets/futo/chibi/back.4bpp.lz");
const u16 gMonPalette_CFuto[]      = INCBIN_U16("graphics/puppets/futo/chibi/normal.gbapal");
const u16 gMonShinyPalette_CFuto[] = INCBIN_U16("graphics/puppets/futo/chibi/shiny.gbapal");
const u8 gMonIcon_CFuto[]          = INCBIN_U8 ("graphics/puppets/futo/chibi/icon.4bpp");
const u8 gMonFootprint_CFuto[]     = INCBIN_U8 ("graphics/puppets/futo/footprint.1bpp");

const u32 gMonFrontPic_Futo[]     = INCBIN_U32("graphics/puppets/futo/evolved/front.4bpp.lz");
const u32 gMonBackPic_Futo[]      = INCBIN_U32("graphics/puppets/futo/evolved/back.4bpp.lz");
const u16 gMonPalette_Futo[]      = INCBIN_U16("graphics/puppets/futo/evolved/normal.gbapal");
const u16 gMonShinyPalette_Futo[] = INCBIN_U16("graphics/puppets/futo/evolved/shiny.gbapal");
const u8 gMonIcon_Futo[]          = INCBIN_U8 ("graphics/puppets/futo/evolved/icon.4bpp");
const u8 gMonFootprint_Futo[]     = INCBIN_U8 ("graphics/puppets/futo/footprint.1bpp");

const u32 gMonFrontPic_CMiko[]     = INCBIN_U32("graphics/puppets/miko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMiko[]      = INCBIN_U32("graphics/puppets/miko/chibi/back.4bpp.lz");
const u16 gMonPalette_CMiko[]      = INCBIN_U16("graphics/puppets/miko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMiko[] = INCBIN_U16("graphics/puppets/miko/chibi/shiny.gbapal");
const u8 gMonIcon_CMiko[]          = INCBIN_U8 ("graphics/puppets/miko/chibi/icon.4bpp");
const u8 gMonFootprint_CMiko[]     = INCBIN_U8 ("graphics/puppets/miko/footprint.1bpp");

const u32 gMonFrontPic_Miko[]     = INCBIN_U32("graphics/puppets/miko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Miko[]      = INCBIN_U32("graphics/puppets/miko/evolved/back.4bpp.lz");
const u16 gMonPalette_Miko[]      = INCBIN_U16("graphics/puppets/miko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Miko[] = INCBIN_U16("graphics/puppets/miko/evolved/shiny.gbapal");
const u8 gMonIcon_Miko[]          = INCBIN_U8 ("graphics/puppets/miko/evolved/icon.4bpp");
const u8 gMonFootprint_Miko[]     = INCBIN_U8 ("graphics/puppets/miko/footprint.1bpp");

const u32 gMonFrontPic_CMamizou[]     = INCBIN_U32("graphics/puppets/mamizou/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMamizou[]      = INCBIN_U32("graphics/puppets/mamizou/chibi/back.4bpp.lz");
const u16 gMonPalette_CMamizou[]      = INCBIN_U16("graphics/puppets/mamizou/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMamizou[] = INCBIN_U16("graphics/puppets/mamizou/chibi/shiny.gbapal");
const u8 gMonIcon_CMamizou[]          = INCBIN_U8 ("graphics/puppets/mamizou/chibi/icon.4bpp");
const u8 gMonFootprint_CMamizou[]     = INCBIN_U8 ("graphics/puppets/mamizou/footprint.1bpp");

const u32 gMonFrontPic_Mamizou[]     = INCBIN_U32("graphics/puppets/mamizou/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mamizou[]      = INCBIN_U32("graphics/puppets/mamizou/evolved/back.4bpp.lz");
const u16 gMonPalette_Mamizou[]      = INCBIN_U16("graphics/puppets/mamizou/evolved/normal.gbapal");
const u16 gMonShinyPalette_Mamizou[] = INCBIN_U16("graphics/puppets/mamizou/evolved/shiny.gbapal");
const u8 gMonIcon_Mamizou[]          = INCBIN_U8 ("graphics/puppets/mamizou/evolved/icon.4bpp");
const u8 gMonFootprint_Mamizou[]     = INCBIN_U8 ("graphics/puppets/mamizou/footprint.1bpp");

const u32 gMonFrontPic_CWakasagihime[]     = INCBIN_U32("graphics/puppets/wakasagihime/chibi/front.4bpp.lz");
const u32 gMonBackPic_CWakasagihime[]      = INCBIN_U32("graphics/puppets/wakasagihime/chibi/back.4bpp.lz");
const u16 gMonPalette_CWakasagihime[]      = INCBIN_U16("graphics/puppets/wakasagihime/chibi/normal.gbapal");
const u16 gMonShinyPalette_CWakasagihime[] = INCBIN_U16("graphics/puppets/wakasagihime/chibi/shiny.gbapal");
const u8 gMonIcon_CWakasagihime[]          = INCBIN_U8 ("graphics/puppets/wakasagihime/chibi/icon.4bpp");
const u8 gMonFootprint_CWakasagihime[]     = INCBIN_U8 ("graphics/puppets/wakasagihime/footprint.1bpp");

const u32 gMonFrontPic_Wakasagihime[]     = INCBIN_U32("graphics/puppets/wakasagihime/evolved/front.4bpp.lz");
const u32 gMonBackPic_Wakasagihime[]      = INCBIN_U32("graphics/puppets/wakasagihime/evolved/back.4bpp.lz");
const u16 gMonPalette_Wakasagihime[]      = INCBIN_U16("graphics/puppets/wakasagihime/evolved/normal.gbapal");
const u16 gMonShinyPalette_Wakasagihime[] = INCBIN_U16("graphics/puppets/wakasagihime/evolved/shiny.gbapal");
const u8 gMonIcon_Wakasagihime[]          = INCBIN_U8 ("graphics/puppets/wakasagihime/evolved/icon.4bpp");
const u8 gMonFootprint_Wakasagihime[]     = INCBIN_U8 ("graphics/puppets/wakasagihime/footprint.1bpp");

const u32 gMonFrontPic_CSekibanki[]     = INCBIN_U32("graphics/puppets/sekibanki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSekibanki[]      = INCBIN_U32("graphics/puppets/sekibanki/chibi/back.4bpp.lz");
const u16 gMonPalette_CSekibanki[]      = INCBIN_U16("graphics/puppets/sekibanki/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSekibanki[] = INCBIN_U16("graphics/puppets/sekibanki/chibi/shiny.gbapal");
const u8 gMonIcon_CSekibanki[]          = INCBIN_U8 ("graphics/puppets/sekibanki/chibi/icon.4bpp");
const u8 gMonFootprint_CSekibanki[]     = INCBIN_U8 ("graphics/puppets/sekibanki/footprint.1bpp");

const u32 gMonFrontPic_Sekibanki[]     = INCBIN_U32("graphics/puppets/sekibanki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sekibanki[]      = INCBIN_U32("graphics/puppets/sekibanki/evolved/back.4bpp.lz");
const u16 gMonPalette_Sekibanki[]      = INCBIN_U16("graphics/puppets/sekibanki/evolved/normal.gbapal");
const u16 gMonShinyPalette_Sekibanki[] = INCBIN_U16("graphics/puppets/sekibanki/evolved/shiny.gbapal");
const u8 gMonIcon_Sekibanki[]          = INCBIN_U8 ("graphics/puppets/sekibanki/evolved/icon.4bpp");
const u8 gMonFootprint_Sekibanki[]     = INCBIN_U8 ("graphics/puppets/sekibanki/footprint.1bpp");

const u32 gMonFrontPic_CKagerou[]     = INCBIN_U32("graphics/puppets/kagerou/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKagerou[]      = INCBIN_U32("graphics/puppets/kagerou/chibi/back.4bpp.lz");
const u16 gMonPalette_CKagerou[]      = INCBIN_U16("graphics/puppets/kagerou/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKagerou[] = INCBIN_U16("graphics/puppets/kagerou/chibi/shiny.gbapal");
const u8 gMonIcon_CKagerou[]          = INCBIN_U8 ("graphics/puppets/kagerou/chibi/icon.4bpp");
const u8 gMonFootprint_CKagerou[]     = INCBIN_U8 ("graphics/puppets/kagerou/footprint.1bpp");

const u32 gMonFrontPic_Kagerou[]     = INCBIN_U32("graphics/puppets/kagerou/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kagerou[]      = INCBIN_U32("graphics/puppets/kagerou/evolved/back.4bpp.lz");
const u16 gMonPalette_Kagerou[]      = INCBIN_U16("graphics/puppets/kagerou/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kagerou[] = INCBIN_U16("graphics/puppets/kagerou/evolved/shiny.gbapal");
const u8 gMonIcon_Kagerou[]          = INCBIN_U8 ("graphics/puppets/kagerou/evolved/icon.4bpp");
const u8 gMonFootprint_Kagerou[]     = INCBIN_U8 ("graphics/puppets/kagerou/footprint.1bpp");

const u32 gMonFrontPic_CBenben[]     = INCBIN_U32("graphics/puppets/benben/chibi/front.4bpp.lz");
const u32 gMonBackPic_CBenben[]      = INCBIN_U32("graphics/puppets/benben/chibi/back.4bpp.lz");
const u16 gMonPalette_CBenben[]      = INCBIN_U16("graphics/puppets/benben/chibi/normal.gbapal");
const u16 gMonShinyPalette_CBenben[] = INCBIN_U16("graphics/puppets/benben/chibi/shiny.gbapal");
const u8 gMonIcon_CBenben[]          = INCBIN_U8 ("graphics/puppets/benben/chibi/icon.4bpp");
const u8 gMonFootprint_CBenben[]     = INCBIN_U8 ("graphics/puppets/benben/footprint.1bpp");

const u32 gMonFrontPic_Benben[]     = INCBIN_U32("graphics/puppets/benben/evolved/front.4bpp.lz");
const u32 gMonBackPic_Benben[]      = INCBIN_U32("graphics/puppets/benben/evolved/back.4bpp.lz");
const u16 gMonPalette_Benben[]      = INCBIN_U16("graphics/puppets/benben/evolved/normal.gbapal");
const u16 gMonShinyPalette_Benben[] = INCBIN_U16("graphics/puppets/benben/evolved/shiny.gbapal");
const u8 gMonIcon_Benben[]          = INCBIN_U8 ("graphics/puppets/benben/evolved/icon.4bpp");
const u8 gMonFootprint_Benben[]     = INCBIN_U8 ("graphics/puppets/benben/footprint.1bpp");

const u32 gMonFrontPic_CYatsuhashi[]     = INCBIN_U32("graphics/puppets/yatsuhashi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYatsuhashi[]      = INCBIN_U32("graphics/puppets/yatsuhashi/chibi/back.4bpp.lz");
const u16 gMonPalette_CYatsuhashi[]      = INCBIN_U16("graphics/puppets/yatsuhashi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYatsuhashi[] = INCBIN_U16("graphics/puppets/yatsuhashi/chibi/shiny.gbapal");
const u8 gMonIcon_CYatsuhashi[]          = INCBIN_U8 ("graphics/puppets/yatsuhashi/chibi/icon.4bpp");
const u8 gMonFootprint_CYatsuhashi[]     = INCBIN_U8 ("graphics/puppets/yatsuhashi/footprint.1bpp");

const u32 gMonFrontPic_Yatsuhashi[]     = INCBIN_U32("graphics/puppets/yatsuhashi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yatsuhashi[]      = INCBIN_U32("graphics/puppets/yatsuhashi/evolved/back.4bpp.lz");
const u16 gMonPalette_Yatsuhashi[]      = INCBIN_U16("graphics/puppets/yatsuhashi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yatsuhashi[] = INCBIN_U16("graphics/puppets/yatsuhashi/evolved/shiny.gbapal");
const u8 gMonIcon_Yatsuhashi[]          = INCBIN_U8 ("graphics/puppets/yatsuhashi/evolved/icon.4bpp");
const u8 gMonFootprint_Yatsuhashi[]     = INCBIN_U8 ("graphics/puppets/yatsuhashi/footprint.1bpp");

const u32 gMonFrontPic_CSeija[]     = INCBIN_U32("graphics/puppets/seija/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSeija[]      = INCBIN_U32("graphics/puppets/seija/chibi/back.4bpp.lz");
const u16 gMonPalette_CSeija[]      = INCBIN_U16("graphics/puppets/seija/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSeija[] = INCBIN_U16("graphics/puppets/seija/chibi/shiny.gbapal");
const u8 gMonIcon_CSeija[]          = INCBIN_U8 ("graphics/puppets/seija/chibi/icon.4bpp");
const u8 gMonFootprint_CSeija[]     = INCBIN_U8 ("graphics/puppets/seija/footprint.1bpp");

const u32 gMonFrontPic_Seija[]     = INCBIN_U32("graphics/puppets/seija/evolved/front.4bpp.lz");
const u32 gMonBackPic_Seija[]      = INCBIN_U32("graphics/puppets/seija/evolved/back.4bpp.lz");
const u16 gMonPalette_Seija[]      = INCBIN_U16("graphics/puppets/seija/evolved/normal.gbapal");
const u16 gMonShinyPalette_Seija[] = INCBIN_U16("graphics/puppets/seija/evolved/shiny.gbapal");
const u8 gMonIcon_Seija[]          = INCBIN_U8 ("graphics/puppets/seija/evolved/icon.4bpp");
const u8 gMonFootprint_Seija[]     = INCBIN_U8 ("graphics/puppets/seija/footprint.1bpp");

const u32 gMonFrontPic_CShinmyoumaru[]     = INCBIN_U32("graphics/puppets/shinmyoumaru/chibi/front.4bpp.lz");
const u32 gMonBackPic_CShinmyoumaru[]      = INCBIN_U32("graphics/puppets/shinmyoumaru/chibi/back.4bpp.lz");
const u16 gMonPalette_CShinmyoumaru[]      = INCBIN_U16("graphics/puppets/shinmyoumaru/chibi/normal.gbapal");
const u16 gMonShinyPalette_CShinmyoumaru[] = INCBIN_U16("graphics/puppets/shinmyoumaru/chibi/shiny.gbapal");
const u8 gMonIcon_CShinmyoumaru[]          = INCBIN_U8 ("graphics/puppets/shinmyoumaru/chibi/icon.4bpp");
const u8 gMonFootprint_CShinmyoumaru[]     = INCBIN_U8 ("graphics/puppets/shinmyoumaru/footprint.1bpp");

const u32 gMonFrontPic_Shinmyoumaru[]     = INCBIN_U32("graphics/puppets/shinmyoumaru/evolved/front.4bpp.lz");
const u32 gMonBackPic_Shinmyoumaru[]      = INCBIN_U32("graphics/puppets/shinmyoumaru/evolved/back.4bpp.lz");
const u16 gMonPalette_Shinmyoumaru[]      = INCBIN_U16("graphics/puppets/shinmyoumaru/evolved/normal.gbapal");
const u16 gMonShinyPalette_Shinmyoumaru[] = INCBIN_U16("graphics/puppets/shinmyoumaru/evolved/shiny.gbapal");
const u8 gMonIcon_Shinmyoumaru[]          = INCBIN_U8 ("graphics/puppets/shinmyoumaru/evolved/icon.4bpp");
const u8 gMonFootprint_Shinmyoumaru[]     = INCBIN_U8 ("graphics/puppets/shinmyoumaru/footprint.1bpp");

const u32 gMonFrontPic_CRaiko[]     = INCBIN_U32("graphics/puppets/raiko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRaiko[]      = INCBIN_U32("graphics/puppets/raiko/chibi/back.4bpp.lz");
const u16 gMonPalette_CRaiko[]      = INCBIN_U16("graphics/puppets/raiko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CRaiko[] = INCBIN_U16("graphics/puppets/raiko/chibi/shiny.gbapal");
const u8 gMonIcon_CRaiko[]          = INCBIN_U8 ("graphics/puppets/raiko/chibi/icon.4bpp");
const u8 gMonFootprint_CRaiko[]     = INCBIN_U8 ("graphics/puppets/raiko/footprint.1bpp");

const u32 gMonFrontPic_Raiko[]     = INCBIN_U32("graphics/puppets/raiko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Raiko[]      = INCBIN_U32("graphics/puppets/raiko/evolved/back.4bpp.lz");
const u16 gMonPalette_Raiko[]      = INCBIN_U16("graphics/puppets/raiko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Raiko[] = INCBIN_U16("graphics/puppets/raiko/evolved/shiny.gbapal");
const u8 gMonIcon_Raiko[]          = INCBIN_U8 ("graphics/puppets/raiko/evolved/icon.4bpp");
const u8 gMonFootprint_Raiko[]     = INCBIN_U8 ("graphics/puppets/raiko/footprint.1bpp");

const u32 gMonFrontPic_CSeiran[]     = INCBIN_U32("graphics/puppets/seiran/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSeiran[]      = INCBIN_U32("graphics/puppets/seiran/chibi/back.4bpp.lz");
const u16 gMonPalette_CSeiran[]      = INCBIN_U16("graphics/puppets/seiran/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSeiran[] = INCBIN_U16("graphics/puppets/seiran/chibi/shiny.gbapal");
const u8 gMonIcon_CSeiran[]          = INCBIN_U8 ("graphics/puppets/seiran/chibi/icon.4bpp");
const u8 gMonFootprint_CSeiran[]     = INCBIN_U8 ("graphics/puppets/seiran/footprint.1bpp");

const u32 gMonFrontPic_Seiran[]     = INCBIN_U32("graphics/puppets/seiran/evolved/front.4bpp.lz");
const u32 gMonBackPic_Seiran[]      = INCBIN_U32("graphics/puppets/seiran/evolved/back.4bpp.lz");
const u16 gMonPalette_Seiran[]      = INCBIN_U16("graphics/puppets/seiran/evolved/normal.gbapal");
const u16 gMonShinyPalette_Seiran[] = INCBIN_U16("graphics/puppets/seiran/evolved/shiny.gbapal");
const u8 gMonIcon_Seiran[]          = INCBIN_U8 ("graphics/puppets/seiran/evolved/icon.4bpp");
const u8 gMonFootprint_Seiran[]     = INCBIN_U8 ("graphics/puppets/seiran/footprint.1bpp");

const u32 gMonFrontPic_CRingo[]     = INCBIN_U32("graphics/puppets/ringo/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRingo[]      = INCBIN_U32("graphics/puppets/ringo/chibi/back.4bpp.lz");
const u16 gMonPalette_CRingo[]      = INCBIN_U16("graphics/puppets/ringo/chibi/normal.gbapal");
const u16 gMonShinyPalette_CRingo[] = INCBIN_U16("graphics/puppets/ringo/chibi/shiny.gbapal");
const u8 gMonIcon_CRingo[]          = INCBIN_U8 ("graphics/puppets/ringo/chibi/icon.4bpp");
const u8 gMonFootprint_CRingo[]     = INCBIN_U8 ("graphics/puppets/ringo/footprint.1bpp");

const u32 gMonFrontPic_Ringo[]     = INCBIN_U32("graphics/puppets/ringo/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ringo[]      = INCBIN_U32("graphics/puppets/ringo/evolved/back.4bpp.lz");
const u16 gMonPalette_Ringo[]      = INCBIN_U16("graphics/puppets/ringo/evolved/normal.gbapal");
const u16 gMonShinyPalette_Ringo[] = INCBIN_U16("graphics/puppets/ringo/evolved/shiny.gbapal");
const u8 gMonIcon_Ringo[]          = INCBIN_U8 ("graphics/puppets/ringo/evolved/icon.4bpp");
const u8 gMonFootprint_Ringo[]     = INCBIN_U8 ("graphics/puppets/ringo/footprint.1bpp");

const u32 gMonFrontPic_CDoremy[]     = INCBIN_U32("graphics/puppets/doremy/chibi/front.4bpp.lz");
const u32 gMonBackPic_CDoremy[]      = INCBIN_U32("graphics/puppets/doremy/chibi/back.4bpp.lz");
const u16 gMonPalette_CDoremy[]      = INCBIN_U16("graphics/puppets/doremy/chibi/normal.gbapal");
const u16 gMonShinyPalette_CDoremy[] = INCBIN_U16("graphics/puppets/doremy/chibi/shiny.gbapal");
const u8 gMonIcon_CDoremy[]          = INCBIN_U8 ("graphics/puppets/doremy/chibi/icon.4bpp");
const u8 gMonFootprint_CDoremy[]     = INCBIN_U8 ("graphics/puppets/doremy/footprint.1bpp");

const u32 gMonFrontPic_Doremy[]     = INCBIN_U32("graphics/puppets/doremy/evolved/front.4bpp.lz");
const u32 gMonBackPic_Doremy[]      = INCBIN_U32("graphics/puppets/doremy/evolved/back.4bpp.lz");
const u16 gMonPalette_Doremy[]      = INCBIN_U16("graphics/puppets/doremy/evolved/normal.gbapal");
const u16 gMonShinyPalette_Doremy[] = INCBIN_U16("graphics/puppets/doremy/evolved/shiny.gbapal");
const u8 gMonIcon_Doremy[]          = INCBIN_U8 ("graphics/puppets/doremy/evolved/icon.4bpp");
const u8 gMonFootprint_Doremy[]     = INCBIN_U8 ("graphics/puppets/doremy/footprint.1bpp");

const u32 gMonFrontPic_CSagume[]     = INCBIN_U32("graphics/puppets/sagume/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSagume[]      = INCBIN_U32("graphics/puppets/sagume/chibi/back.4bpp.lz");
const u16 gMonPalette_CSagume[]      = INCBIN_U16("graphics/puppets/sagume/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSagume[] = INCBIN_U16("graphics/puppets/sagume/chibi/shiny.gbapal");
const u8 gMonIcon_CSagume[]          = INCBIN_U8 ("graphics/puppets/sagume/chibi/icon.4bpp");
const u8 gMonFootprint_CSagume[]     = INCBIN_U8 ("graphics/puppets/sagume/footprint.1bpp");

const u32 gMonFrontPic_Sagume[]     = INCBIN_U32("graphics/puppets/sagume/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sagume[]      = INCBIN_U32("graphics/puppets/sagume/evolved/back.4bpp.lz");
const u16 gMonPalette_Sagume[]      = INCBIN_U16("graphics/puppets/sagume/evolved/normal.gbapal");
const u16 gMonShinyPalette_Sagume[] = INCBIN_U16("graphics/puppets/sagume/evolved/shiny.gbapal");
const u8 gMonIcon_Sagume[]          = INCBIN_U8 ("graphics/puppets/sagume/evolved/icon.4bpp");
const u8 gMonFootprint_Sagume[]     = INCBIN_U8 ("graphics/puppets/sagume/footprint.1bpp");

const u32 gMonFrontPic_CClownpiece[]     = INCBIN_U32("graphics/puppets/clownpiece/chibi/front.4bpp.lz");
const u32 gMonBackPic_CClownpiece[]      = INCBIN_U32("graphics/puppets/clownpiece/chibi/back.4bpp.lz");
const u16 gMonPalette_CClownpiece[]      = INCBIN_U16("graphics/puppets/clownpiece/chibi/normal.gbapal");
const u16 gMonShinyPalette_CClownpiece[] = INCBIN_U16("graphics/puppets/clownpiece/chibi/shiny.gbapal");
const u8 gMonIcon_CClownpiece[]          = INCBIN_U8 ("graphics/puppets/clownpiece/chibi/icon.4bpp");
const u8 gMonFootprint_CClownpiece[]     = INCBIN_U8 ("graphics/puppets/clownpiece/footprint.1bpp");

const u32 gMonFrontPic_Clownpiece[]     = INCBIN_U32("graphics/puppets/clownpiece/evolved/front.4bpp.lz");
const u32 gMonBackPic_Clownpiece[]      = INCBIN_U32("graphics/puppets/clownpiece/evolved/back.4bpp.lz");
const u16 gMonPalette_Clownpiece[]      = INCBIN_U16("graphics/puppets/clownpiece/evolved/normal.gbapal");
const u16 gMonShinyPalette_Clownpiece[] = INCBIN_U16("graphics/puppets/clownpiece/evolved/shiny.gbapal");
const u8 gMonIcon_Clownpiece[]          = INCBIN_U8 ("graphics/puppets/clownpiece/evolved/icon.4bpp");
const u8 gMonFootprint_Clownpiece[]     = INCBIN_U8 ("graphics/puppets/clownpiece/footprint.1bpp");

const u32 gMonFrontPic_CJunko[]     = INCBIN_U32("graphics/puppets/junko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CJunko[]      = INCBIN_U32("graphics/puppets/junko/chibi/back.4bpp.lz");
const u16 gMonPalette_CJunko[]      = INCBIN_U16("graphics/puppets/junko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CJunko[] = INCBIN_U16("graphics/puppets/junko/chibi/shiny.gbapal");
const u8 gMonIcon_CJunko[]          = INCBIN_U8 ("graphics/puppets/junko/chibi/icon.4bpp");
const u8 gMonFootprint_CJunko[]     = INCBIN_U8 ("graphics/puppets/junko/footprint.1bpp");

const u32 gMonFrontPic_Junko[]     = INCBIN_U32("graphics/puppets/junko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Junko[]      = INCBIN_U32("graphics/puppets/junko/evolved/back.4bpp.lz");
const u16 gMonPalette_Junko[]      = INCBIN_U16("graphics/puppets/junko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Junko[] = INCBIN_U16("graphics/puppets/junko/evolved/shiny.gbapal");
const u8 gMonIcon_Junko[]          = INCBIN_U8 ("graphics/puppets/junko/evolved/icon.4bpp");
const u8 gMonFootprint_Junko[]     = INCBIN_U8 ("graphics/puppets/junko/footprint.1bpp");

const u32 gMonFrontPic_CHecatia[]     = INCBIN_U32("graphics/puppets/hecatia/chibi/front.4bpp.lz");
const u32 gMonBackPic_CHecatia[]      = INCBIN_U32("graphics/puppets/hecatia/chibi/back.4bpp.lz");
const u16 gMonPalette_CHecatia[]      = INCBIN_U16("graphics/puppets/hecatia/chibi/normal.gbapal");
const u16 gMonShinyPalette_CHecatia[] = INCBIN_U16("graphics/puppets/hecatia/chibi/shiny.gbapal");
const u8 gMonIcon_CHecatia[]          = INCBIN_U8 ("graphics/puppets/hecatia/chibi/icon.4bpp");
const u8 gMonFootprint_CHecatia[]     = INCBIN_U8 ("graphics/puppets/hecatia/footprint.1bpp");

const u32 gMonFrontPic_Hecatia[]     = INCBIN_U32("graphics/puppets/hecatia/evolved/front.4bpp.lz");
const u32 gMonBackPic_Hecatia[]      = INCBIN_U32("graphics/puppets/hecatia/evolved/back.4bpp.lz");
const u16 gMonPalette_Hecatia[]      = INCBIN_U16("graphics/puppets/hecatia/evolved/normal.gbapal");
const u16 gMonShinyPalette_Hecatia[] = INCBIN_U16("graphics/puppets/hecatia/evolved/shiny.gbapal");
const u8 gMonIcon_Hecatia[]          = INCBIN_U8 ("graphics/puppets/hecatia/evolved/icon.4bpp");
const u8 gMonFootprint_Hecatia[]     = INCBIN_U8 ("graphics/puppets/hecatia/footprint.1bpp");

const u32 gMonFrontPic_CEternityLarva[]     = INCBIN_U32("graphics/puppets/eternitylarva/chibi/front.4bpp.lz");
const u32 gMonBackPic_CEternityLarva[]      = INCBIN_U32("graphics/puppets/eternitylarva/chibi/back.4bpp.lz");
const u16 gMonPalette_CEternityLarva[]      = INCBIN_U16("graphics/puppets/eternitylarva/chibi/normal.gbapal");
const u16 gMonShinyPalette_CEternityLarva[] = INCBIN_U16("graphics/puppets/eternitylarva/chibi/shiny.gbapal");
const u8 gMonIcon_CEternityLarva[]          = INCBIN_U8 ("graphics/puppets/eternitylarva/chibi/icon.4bpp");
const u8 gMonFootprint_CEternityLarva[]     = INCBIN_U8 ("graphics/puppets/eternitylarva/footprint.1bpp");

const u32 gMonFrontPic_EternityLarva[]     = INCBIN_U32("graphics/puppets/eternitylarva/evolved/front.4bpp.lz");
const u32 gMonBackPic_EternityLarva[]      = INCBIN_U32("graphics/puppets/eternitylarva/evolved/back.4bpp.lz");
const u16 gMonPalette_EternityLarva[]      = INCBIN_U16("graphics/puppets/eternitylarva/evolved/normal.gbapal");
const u16 gMonShinyPalette_EternityLarva[] = INCBIN_U16("graphics/puppets/eternitylarva/evolved/shiny.gbapal");
const u8 gMonIcon_EternityLarva[]          = INCBIN_U8 ("graphics/puppets/eternitylarva/evolved/icon.4bpp");
const u8 gMonFootprint_EternityLarva[]     = INCBIN_U8 ("graphics/puppets/eternitylarva/footprint.1bpp");

const u32 gMonFrontPic_CNemuno[]     = INCBIN_U32("graphics/puppets/nemuno/chibi/front.4bpp.lz");
const u32 gMonBackPic_CNemuno[]      = INCBIN_U32("graphics/puppets/nemuno/chibi/back.4bpp.lz");
const u16 gMonPalette_CNemuno[]      = INCBIN_U16("graphics/puppets/nemuno/chibi/normal.gbapal");
const u16 gMonShinyPalette_CNemuno[] = INCBIN_U16("graphics/puppets/nemuno/chibi/shiny.gbapal");
const u8 gMonIcon_CNemuno[]          = INCBIN_U8 ("graphics/puppets/nemuno/chibi/icon.4bpp");
const u8 gMonFootprint_CNemuno[]     = INCBIN_U8 ("graphics/puppets/nemuno/footprint.1bpp");

const u32 gMonFrontPic_Nemuno[]     = INCBIN_U32("graphics/puppets/nemuno/evolved/front.4bpp.lz");
const u32 gMonBackPic_Nemuno[]      = INCBIN_U32("graphics/puppets/nemuno/evolved/back.4bpp.lz");
const u16 gMonPalette_Nemuno[]      = INCBIN_U16("graphics/puppets/nemuno/evolved/normal.gbapal");
const u16 gMonShinyPalette_Nemuno[] = INCBIN_U16("graphics/puppets/nemuno/evolved/shiny.gbapal");
const u8 gMonIcon_Nemuno[]          = INCBIN_U8 ("graphics/puppets/nemuno/evolved/icon.4bpp");
const u8 gMonFootprint_Nemuno[]     = INCBIN_U8 ("graphics/puppets/nemuno/footprint.1bpp");

const u32 gMonFrontPic_CAunn[]     = INCBIN_U32("graphics/puppets/aunn/chibi/front.4bpp.lz");
const u32 gMonBackPic_CAunn[]      = INCBIN_U32("graphics/puppets/aunn/chibi/back.4bpp.lz");
const u16 gMonPalette_CAunn[]      = INCBIN_U16("graphics/puppets/aunn/chibi/normal.gbapal");
const u16 gMonShinyPalette_CAunn[] = INCBIN_U16("graphics/puppets/aunn/chibi/shiny.gbapal");
const u8 gMonIcon_CAunn[]          = INCBIN_U8 ("graphics/puppets/aunn/chibi/icon.4bpp");
const u8 gMonFootprint_CAunn[]     = INCBIN_U8 ("graphics/puppets/aunn/footprint.1bpp");

const u32 gMonFrontPic_Aunn[]     = INCBIN_U32("graphics/puppets/aunn/evolved/front.4bpp.lz");
const u32 gMonBackPic_Aunn[]      = INCBIN_U32("graphics/puppets/aunn/evolved/back.4bpp.lz");
const u16 gMonPalette_Aunn[]      = INCBIN_U16("graphics/puppets/aunn/evolved/normal.gbapal");
const u16 gMonShinyPalette_Aunn[] = INCBIN_U16("graphics/puppets/aunn/evolved/shiny.gbapal");
const u8 gMonIcon_Aunn[]          = INCBIN_U8 ("graphics/puppets/aunn/evolved/icon.4bpp");
const u8 gMonFootprint_Aunn[]     = INCBIN_U8 ("graphics/puppets/aunn/footprint.1bpp");

const u32 gMonFrontPic_CNarumi[]     = INCBIN_U32("graphics/puppets/narumi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CNarumi[]      = INCBIN_U32("graphics/puppets/narumi/chibi/back.4bpp.lz");
const u16 gMonPalette_CNarumi[]      = INCBIN_U16("graphics/puppets/narumi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CNarumi[] = INCBIN_U16("graphics/puppets/narumi/chibi/shiny.gbapal");
const u8 gMonIcon_CNarumi[]          = INCBIN_U8 ("graphics/puppets/narumi/chibi/icon.4bpp");
const u8 gMonFootprint_CNarumi[]     = INCBIN_U8 ("graphics/puppets/narumi/footprint.1bpp");

const u32 gMonFrontPic_Narumi[]     = INCBIN_U32("graphics/puppets/narumi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Narumi[]      = INCBIN_U32("graphics/puppets/narumi/evolved/back.4bpp.lz");
const u16 gMonPalette_Narumi[]      = INCBIN_U16("graphics/puppets/narumi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Narumi[] = INCBIN_U16("graphics/puppets/narumi/evolved/shiny.gbapal");
const u8 gMonIcon_Narumi[]          = INCBIN_U8 ("graphics/puppets/narumi/evolved/icon.4bpp");
const u8 gMonFootprint_Narumi[]     = INCBIN_U8 ("graphics/puppets/narumi/footprint.1bpp");

const u32 gMonFrontPic_CTeireida[]     = INCBIN_U32("graphics/puppets/teireida/chibi/front.4bpp.lz");
const u32 gMonBackPic_CTeireida[]      = INCBIN_U32("graphics/puppets/teireida/chibi/back.4bpp.lz");
const u16 gMonPalette_CTeireida[]      = INCBIN_U16("graphics/puppets/teireida/chibi/normal.gbapal");
const u16 gMonShinyPalette_CTeireida[] = INCBIN_U16("graphics/puppets/teireida/chibi/shiny.gbapal");
const u8 gMonIcon_CTeireida[]          = INCBIN_U8 ("graphics/puppets/teireida/chibi/icon.4bpp");
const u8 gMonFootprint_CTeireida[]     = INCBIN_U8 ("graphics/puppets/teireida/footprint.1bpp");

const u32 gMonFrontPic_Teireida[]     = INCBIN_U32("graphics/puppets/teireida/evolved/front.4bpp.lz");
const u32 gMonBackPic_Teireida[]      = INCBIN_U32("graphics/puppets/teireida/evolved/back.4bpp.lz");
const u16 gMonPalette_Teireida[]      = INCBIN_U16("graphics/puppets/teireida/evolved/normal.gbapal");
const u16 gMonShinyPalette_Teireida[] = INCBIN_U16("graphics/puppets/teireida/evolved/shiny.gbapal");
const u8 gMonIcon_Teireida[]          = INCBIN_U8 ("graphics/puppets/teireida/evolved/icon.4bpp");
const u8 gMonFootprint_Teireida[]     = INCBIN_U8 ("graphics/puppets/teireida/footprint.1bpp");

const u32 gMonFrontPic_CSatono[]     = INCBIN_U32("graphics/puppets/satono/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSatono[]      = INCBIN_U32("graphics/puppets/satono/chibi/back.4bpp.lz");
const u16 gMonPalette_CSatono[]      = INCBIN_U16("graphics/puppets/satono/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSatono[] = INCBIN_U16("graphics/puppets/satono/chibi/shiny.gbapal");
const u8 gMonIcon_CSatono[]          = INCBIN_U8 ("graphics/puppets/satono/chibi/icon.4bpp");
const u8 gMonFootprint_CSatono[]     = INCBIN_U8 ("graphics/puppets/satono/footprint.1bpp");

const u32 gMonFrontPic_Satono[]     = INCBIN_U32("graphics/puppets/satono/evolved/front.4bpp.lz");
const u32 gMonBackPic_Satono[]      = INCBIN_U32("graphics/puppets/satono/evolved/back.4bpp.lz");
const u16 gMonPalette_Satono[]      = INCBIN_U16("graphics/puppets/satono/evolved/normal.gbapal");
const u16 gMonShinyPalette_Satono[] = INCBIN_U16("graphics/puppets/satono/evolved/shiny.gbapal");
const u8 gMonIcon_Satono[]          = INCBIN_U8 ("graphics/puppets/satono/evolved/icon.4bpp");
const u8 gMonFootprint_Satono[]     = INCBIN_U8 ("graphics/puppets/satono/footprint.1bpp");

const u32 gMonFrontPic_COkina[]     = INCBIN_U32("graphics/puppets/okina/chibi/front.4bpp.lz");
const u32 gMonBackPic_COkina[]      = INCBIN_U32("graphics/puppets/okina/chibi/back.4bpp.lz");
const u16 gMonPalette_COkina[]      = INCBIN_U16("graphics/puppets/okina/chibi/normal.gbapal");
const u16 gMonShinyPalette_COkina[] = INCBIN_U16("graphics/puppets/okina/chibi/shiny.gbapal");
const u8 gMonIcon_COkina[]          = INCBIN_U8 ("graphics/puppets/okina/chibi/icon.4bpp");
const u8 gMonFootprint_COkina[]     = INCBIN_U8 ("graphics/puppets/okina/footprint.1bpp");

const u32 gMonFrontPic_Okina[]     = INCBIN_U32("graphics/puppets/okina/evolved/front.4bpp.lz");
const u32 gMonBackPic_Okina[]      = INCBIN_U32("graphics/puppets/okina/evolved/back.4bpp.lz");
const u16 gMonPalette_Okina[]      = INCBIN_U16("graphics/puppets/okina/evolved/normal.gbapal");
const u16 gMonShinyPalette_Okina[] = INCBIN_U16("graphics/puppets/okina/evolved/shiny.gbapal");
const u8 gMonIcon_Okina[]          = INCBIN_U8 ("graphics/puppets/okina/evolved/icon.4bpp");
const u8 gMonFootprint_Okina[]     = INCBIN_U8 ("graphics/puppets/okina/footprint.1bpp");

const u32 gMonFrontPic_Okinamaids[]     = INCBIN_U32("graphics/puppets/okinamaids/evolved/front.4bpp.lz");
const u32 gMonBackPic_Okinamaids[]      = INCBIN_U32("graphics/puppets/okinamaids/evolved/back.4bpp.lz");
const u16 gMonPalette_Okinamaids[]      = INCBIN_U16("graphics/puppets/okinamaids/evolved/normal.gbapal");
const u16 gMonShinyPalette_Okinamaids[] = INCBIN_U16("graphics/puppets/okinamaids/evolved/shiny.gbapal");
const u8 gMonIcon_Okinamaids[]          = INCBIN_U8 ("graphics/puppets/okinamaids/evolved/icon.4bpp");
const u8 gMonFootprint_Okinamaids[]     = INCBIN_U8 ("graphics/puppets/okinamaids/footprint.1bpp");

const u32 gMonFrontPic_CEika[]     = INCBIN_U32("graphics/puppets/eika/chibi/front.4bpp.lz");
const u32 gMonBackPic_CEika[]      = INCBIN_U32("graphics/puppets/eika/chibi/back.4bpp.lz");
const u16 gMonPalette_CEika[]      = INCBIN_U16("graphics/puppets/eika/chibi/normal.gbapal");
const u16 gMonShinyPalette_CEika[] = INCBIN_U16("graphics/puppets/eika/chibi/shiny.gbapal");
const u8 gMonIcon_CEika[]          = INCBIN_U8 ("graphics/puppets/eika/chibi/icon.4bpp");
const u8 gMonFootprint_CEika[]     = INCBIN_U8 ("graphics/puppets/eika/footprint.1bpp");

const u32 gMonFrontPic_Eika[]     = INCBIN_U32("graphics/puppets/eika/evolved/front.4bpp.lz");
const u32 gMonBackPic_Eika[]      = INCBIN_U32("graphics/puppets/eika/evolved/back.4bpp.lz");
const u16 gMonPalette_Eika[]      = INCBIN_U16("graphics/puppets/eika/evolved/normal.gbapal");
const u16 gMonShinyPalette_Eika[] = INCBIN_U16("graphics/puppets/eika/evolved/shiny.gbapal");
const u8 gMonIcon_Eika[]          = INCBIN_U8 ("graphics/puppets/eika/evolved/icon.4bpp");
const u8 gMonFootprint_Eika[]     = INCBIN_U8 ("graphics/puppets/eika/footprint.1bpp");

const u32 gMonFrontPic_CUrumi[]     = INCBIN_U32("graphics/puppets/urumi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CUrumi[]      = INCBIN_U32("graphics/puppets/urumi/chibi/back.4bpp.lz");
const u16 gMonPalette_CUrumi[]      = INCBIN_U16("graphics/puppets/urumi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CUrumi[] = INCBIN_U16("graphics/puppets/urumi/chibi/shiny.gbapal");
const u8 gMonIcon_CUrumi[]          = INCBIN_U8 ("graphics/puppets/urumi/chibi/icon.4bpp");
const u8 gMonFootprint_CUrumi[]     = INCBIN_U8 ("graphics/puppets/urumi/footprint.1bpp");

const u32 gMonFrontPic_Urumi[]     = INCBIN_U32("graphics/puppets/urumi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Urumi[]      = INCBIN_U32("graphics/puppets/urumi/evolved/back.4bpp.lz");
const u16 gMonPalette_Urumi[]      = INCBIN_U16("graphics/puppets/urumi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Urumi[] = INCBIN_U16("graphics/puppets/urumi/evolved/shiny.gbapal");
const u8 gMonIcon_Urumi[]          = INCBIN_U8 ("graphics/puppets/urumi/evolved/icon.4bpp");
const u8 gMonFootprint_Urumi[]     = INCBIN_U8 ("graphics/puppets/urumi/footprint.1bpp");

const u32 gMonFrontPic_CKutaka[]     = INCBIN_U32("graphics/puppets/kutaka/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKutaka[]      = INCBIN_U32("graphics/puppets/kutaka/chibi/back.4bpp.lz");
const u16 gMonPalette_CKutaka[]      = INCBIN_U16("graphics/puppets/kutaka/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKutaka[] = INCBIN_U16("graphics/puppets/kutaka/chibi/shiny.gbapal");
const u8 gMonIcon_CKutaka[]          = INCBIN_U8 ("graphics/puppets/kutaka/chibi/icon.4bpp");
const u8 gMonFootprint_CKutaka[]     = INCBIN_U8 ("graphics/puppets/kutaka/footprint.1bpp");

const u32 gMonFrontPic_Kutaka[]     = INCBIN_U32("graphics/puppets/kutaka/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kutaka[]      = INCBIN_U32("graphics/puppets/kutaka/evolved/back.4bpp.lz");
const u16 gMonPalette_Kutaka[]      = INCBIN_U16("graphics/puppets/kutaka/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kutaka[] = INCBIN_U16("graphics/puppets/kutaka/evolved/shiny.gbapal");
const u8 gMonIcon_Kutaka[]          = INCBIN_U8 ("graphics/puppets/kutaka/evolved/icon.4bpp");
const u8 gMonFootprint_Kutaka[]     = INCBIN_U8 ("graphics/puppets/kutaka/footprint.1bpp");

const u32 gMonFrontPic_CYachie[]     = INCBIN_U32("graphics/puppets/yachie/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYachie[]      = INCBIN_U32("graphics/puppets/yachie/chibi/back.4bpp.lz");
const u16 gMonPalette_CYachie[]      = INCBIN_U16("graphics/puppets/yachie/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYachie[] = INCBIN_U16("graphics/puppets/yachie/chibi/shiny.gbapal");
const u8 gMonIcon_CYachie[]          = INCBIN_U8 ("graphics/puppets/yachie/chibi/icon.4bpp");
const u8 gMonFootprint_CYachie[]     = INCBIN_U8 ("graphics/puppets/yachie/footprint.1bpp");

const u32 gMonFrontPic_Yachie[]     = INCBIN_U32("graphics/puppets/yachie/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yachie[]      = INCBIN_U32("graphics/puppets/yachie/evolved/back.4bpp.lz");
const u16 gMonPalette_Yachie[]      = INCBIN_U16("graphics/puppets/yachie/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yachie[] = INCBIN_U16("graphics/puppets/yachie/evolved/shiny.gbapal");
const u8 gMonIcon_Yachie[]          = INCBIN_U8 ("graphics/puppets/yachie/evolved/icon.4bpp");
const u8 gMonFootprint_Yachie[]     = INCBIN_U8 ("graphics/puppets/yachie/footprint.1bpp");

const u32 gMonFrontPic_CMayumi[]     = INCBIN_U32("graphics/puppets/mayumi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMayumi[]      = INCBIN_U32("graphics/puppets/mayumi/chibi/back.4bpp.lz");
const u16 gMonPalette_CMayumi[]      = INCBIN_U16("graphics/puppets/mayumi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMayumi[] = INCBIN_U16("graphics/puppets/mayumi/chibi/shiny.gbapal");
const u8 gMonIcon_CMayumi[]          = INCBIN_U8 ("graphics/puppets/mayumi/chibi/icon.4bpp");
const u8 gMonFootprint_CMayumi[]     = INCBIN_U8 ("graphics/puppets/mayumi/footprint.1bpp");

const u32 gMonFrontPic_Mayumi[]     = INCBIN_U32("graphics/puppets/mayumi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mayumi[]      = INCBIN_U32("graphics/puppets/mayumi/evolved/back.4bpp.lz");
const u16 gMonPalette_Mayumi[]      = INCBIN_U16("graphics/puppets/mayumi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Mayumi[] = INCBIN_U16("graphics/puppets/mayumi/evolved/shiny.gbapal");
const u8 gMonIcon_Mayumi[]          = INCBIN_U8 ("graphics/puppets/mayumi/evolved/icon.4bpp");
const u8 gMonFootprint_Mayumi[]     = INCBIN_U8 ("graphics/puppets/mayumi/footprint.1bpp");

const u32 gMonFrontPic_CKeiki[]     = INCBIN_U32("graphics/puppets/keiki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKeiki[]      = INCBIN_U32("graphics/puppets/keiki/chibi/back.4bpp.lz");
const u16 gMonPalette_CKeiki[]      = INCBIN_U16("graphics/puppets/keiki/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKeiki[] = INCBIN_U16("graphics/puppets/keiki/chibi/shiny.gbapal");
const u8 gMonIcon_CKeiki[]          = INCBIN_U8 ("graphics/puppets/keiki/chibi/icon.4bpp");
const u8 gMonFootprint_CKeiki[]     = INCBIN_U8 ("graphics/puppets/keiki/footprint.1bpp");

const u32 gMonFrontPic_Keiki[]     = INCBIN_U32("graphics/puppets/keiki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Keiki[]      = INCBIN_U32("graphics/puppets/keiki/evolved/back.4bpp.lz");
const u16 gMonPalette_Keiki[]      = INCBIN_U16("graphics/puppets/keiki/evolved/normal.gbapal");
const u16 gMonShinyPalette_Keiki[] = INCBIN_U16("graphics/puppets/keiki/evolved/shiny.gbapal");
const u8 gMonIcon_Keiki[]          = INCBIN_U8 ("graphics/puppets/keiki/evolved/icon.4bpp");
const u8 gMonFootprint_Keiki[]     = INCBIN_U8 ("graphics/puppets/keiki/footprint.1bpp");

const u32 gMonFrontPic_CSaki[]     = INCBIN_U32("graphics/puppets/saki/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSaki[]      = INCBIN_U32("graphics/puppets/saki/chibi/back.4bpp.lz");
const u16 gMonPalette_CSaki[]      = INCBIN_U16("graphics/puppets/saki/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSaki[] = INCBIN_U16("graphics/puppets/saki/chibi/shiny.gbapal");
const u8 gMonIcon_CSaki[]          = INCBIN_U8 ("graphics/puppets/saki/chibi/icon.4bpp");
const u8 gMonFootprint_CSaki[]     = INCBIN_U8 ("graphics/puppets/saki/footprint.1bpp");

const u32 gMonFrontPic_Saki[]     = INCBIN_U32("graphics/puppets/saki/evolved/front.4bpp.lz");
const u32 gMonBackPic_Saki[]      = INCBIN_U32("graphics/puppets/saki/evolved/back.4bpp.lz");
const u16 gMonPalette_Saki[]      = INCBIN_U16("graphics/puppets/saki/evolved/normal.gbapal");
const u16 gMonShinyPalette_Saki[] = INCBIN_U16("graphics/puppets/saki/evolved/shiny.gbapal");
const u8 gMonIcon_Saki[]          = INCBIN_U8 ("graphics/puppets/saki/evolved/icon.4bpp");
const u8 gMonFootprint_Saki[]     = INCBIN_U8 ("graphics/puppets/saki/footprint.1bpp");

const u32 gMonFrontPic_CMike[]     = INCBIN_U32("graphics/puppets/mike/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMike[]      = INCBIN_U32("graphics/puppets/mike/chibi/back.4bpp.lz");
const u16 gMonPalette_CMike[]      = INCBIN_U16("graphics/puppets/mike/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMike[] = INCBIN_U16("graphics/puppets/mike/chibi/shiny.gbapal");
const u8 gMonIcon_CMike[]          = INCBIN_U8 ("graphics/puppets/mike/chibi/icon.4bpp");
const u8 gMonFootprint_CMike[]     = INCBIN_U8 ("graphics/puppets/mike/footprint.1bpp");

const u32 gMonFrontPic_Mike[]     = INCBIN_U32("graphics/puppets/mike/evolved/front.4bpp.lz");
const u32 gMonBackPic_Mike[]      = INCBIN_U32("graphics/puppets/mike/evolved/back.4bpp.lz");
const u16 gMonPalette_Mike[]      = INCBIN_U16("graphics/puppets/mike/evolved/normal.gbapal");
const u16 gMonShinyPalette_Mike[] = INCBIN_U16("graphics/puppets/mike/evolved/shiny.gbapal");
const u8 gMonIcon_Mike[]          = INCBIN_U8 ("graphics/puppets/mike/evolved/icon.4bpp");
const u8 gMonFootprint_Mike[]     = INCBIN_U8 ("graphics/puppets/mike/footprint.1bpp");

const u32 gMonFrontPic_CTakane[]     = INCBIN_U32("graphics/puppets/takane/chibi/front.4bpp.lz");
const u32 gMonBackPic_CTakane[]      = INCBIN_U32("graphics/puppets/takane/chibi/back.4bpp.lz");
const u16 gMonPalette_CTakane[]      = INCBIN_U16("graphics/puppets/takane/chibi/normal.gbapal");
const u16 gMonShinyPalette_CTakane[] = INCBIN_U16("graphics/puppets/takane/chibi/shiny.gbapal");
const u8 gMonIcon_CTakane[]          = INCBIN_U8 ("graphics/puppets/takane/chibi/icon.4bpp");
const u8 gMonFootprint_CTakane[]     = INCBIN_U8 ("graphics/puppets/takane/footprint.1bpp");

const u32 gMonFrontPic_Takane[]     = INCBIN_U32("graphics/puppets/takane/evolved/front.4bpp.lz");
const u32 gMonBackPic_Takane[]      = INCBIN_U32("graphics/puppets/takane/evolved/back.4bpp.lz");
const u16 gMonPalette_Takane[]      = INCBIN_U16("graphics/puppets/takane/evolved/normal.gbapal");
const u16 gMonShinyPalette_Takane[] = INCBIN_U16("graphics/puppets/takane/evolved/shiny.gbapal");
const u8 gMonIcon_Takane[]          = INCBIN_U8 ("graphics/puppets/takane/evolved/icon.4bpp");
const u8 gMonFootprint_Takane[]     = INCBIN_U8 ("graphics/puppets/takane/footprint.1bpp");

const u32 gMonFrontPic_CSannyo[]     = INCBIN_U32("graphics/puppets/sannyo/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSannyo[]      = INCBIN_U32("graphics/puppets/sannyo/chibi/back.4bpp.lz");
const u16 gMonPalette_CSannyo[]      = INCBIN_U16("graphics/puppets/sannyo/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSannyo[] = INCBIN_U16("graphics/puppets/sannyo/chibi/shiny.gbapal");
const u8 gMonIcon_CSannyo[]          = INCBIN_U8 ("graphics/puppets/sannyo/chibi/icon.4bpp");
const u8 gMonFootprint_CSannyo[]     = INCBIN_U8 ("graphics/puppets/sannyo/footprint.1bpp");

const u32 gMonFrontPic_Sannyo[]     = INCBIN_U32("graphics/puppets/sannyo/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sannyo[]      = INCBIN_U32("graphics/puppets/sannyo/evolved/back.4bpp.lz");
const u16 gMonPalette_Sannyo[]      = INCBIN_U16("graphics/puppets/sannyo/evolved/normal.gbapal");
const u16 gMonShinyPalette_Sannyo[] = INCBIN_U16("graphics/puppets/sannyo/evolved/shiny.gbapal");
const u8 gMonIcon_Sannyo[]          = INCBIN_U8 ("graphics/puppets/sannyo/evolved/icon.4bpp");
const u8 gMonFootprint_Sannyo[]     = INCBIN_U8 ("graphics/puppets/sannyo/footprint.1bpp");

const u32 gMonFrontPic_CMisumaru[]     = INCBIN_U32("graphics/puppets/misumaru/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMisumaru[]      = INCBIN_U32("graphics/puppets/misumaru/chibi/back.4bpp.lz");
const u16 gMonPalette_CMisumaru[]      = INCBIN_U16("graphics/puppets/misumaru/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMisumaru[] = INCBIN_U16("graphics/puppets/misumaru/chibi/shiny.gbapal");
const u8 gMonIcon_CMisumaru[]          = INCBIN_U8 ("graphics/puppets/misumaru/chibi/icon.4bpp");
const u8 gMonFootprint_CMisumaru[]     = INCBIN_U8 ("graphics/puppets/misumaru/footprint.1bpp");

const u32 gMonFrontPic_Misumaru[]     = INCBIN_U32("graphics/puppets/misumaru/evolved/front.4bpp.lz");
const u32 gMonBackPic_Misumaru[]      = INCBIN_U32("graphics/puppets/misumaru/evolved/back.4bpp.lz");
const u16 gMonPalette_Misumaru[]      = INCBIN_U16("graphics/puppets/misumaru/evolved/normal.gbapal");
const u16 gMonShinyPalette_Misumaru[] = INCBIN_U16("graphics/puppets/misumaru/evolved/shiny.gbapal");
const u8 gMonIcon_Misumaru[]          = INCBIN_U8 ("graphics/puppets/misumaru/evolved/icon.4bpp");
const u8 gMonFootprint_Misumaru[]     = INCBIN_U8 ("graphics/puppets/misumaru/footprint.1bpp");

const u32 gMonFrontPic_CTsukasa[]     = INCBIN_U32("graphics/puppets/tsukasa/chibi/front.4bpp.lz");
const u32 gMonBackPic_CTsukasa[]      = INCBIN_U32("graphics/puppets/tsukasa/chibi/back.4bpp.lz");
const u16 gMonPalette_CTsukasa[]      = INCBIN_U16("graphics/puppets/tsukasa/chibi/normal.gbapal");
const u16 gMonShinyPalette_CTsukasa[] = INCBIN_U16("graphics/puppets/tsukasa/chibi/shiny.gbapal");
const u8 gMonIcon_CTsukasa[]          = INCBIN_U8 ("graphics/puppets/tsukasa/chibi/icon.4bpp");
const u8 gMonFootprint_CTsukasa[]     = INCBIN_U8 ("graphics/puppets/tsukasa/footprint.1bpp");

const u32 gMonFrontPic_Tsukasa[]     = INCBIN_U32("graphics/puppets/tsukasa/evolved/front.4bpp.lz");
const u32 gMonBackPic_Tsukasa[]      = INCBIN_U32("graphics/puppets/tsukasa/evolved/back.4bpp.lz");
const u16 gMonPalette_Tsukasa[]      = INCBIN_U16("graphics/puppets/tsukasa/evolved/normal.gbapal");
const u16 gMonShinyPalette_Tsukasa[] = INCBIN_U16("graphics/puppets/tsukasa/evolved/shiny.gbapal");
const u8 gMonIcon_Tsukasa[]          = INCBIN_U8 ("graphics/puppets/tsukasa/evolved/icon.4bpp");
const u8 gMonFootprint_Tsukasa[]     = INCBIN_U8 ("graphics/puppets/tsukasa/footprint.1bpp");

const u32 gMonFrontPic_CMegumu[]     = INCBIN_U32("graphics/puppets/megumu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMegumu[]      = INCBIN_U32("graphics/puppets/megumu/chibi/back.4bpp.lz");
const u16 gMonPalette_CMegumu[]      = INCBIN_U16("graphics/puppets/megumu/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMegumu[] = INCBIN_U16("graphics/puppets/megumu/chibi/shiny.gbapal");
const u8 gMonIcon_CMegumu[]          = INCBIN_U8 ("graphics/puppets/megumu/chibi/icon.4bpp");
const u8 gMonFootprint_CMegumu[]     = INCBIN_U8 ("graphics/puppets/megumu/footprint.1bpp");

const u32 gMonFrontPic_Megumu[]     = INCBIN_U32("graphics/puppets/megumu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Megumu[]      = INCBIN_U32("graphics/puppets/megumu/evolved/back.4bpp.lz");
const u16 gMonPalette_Megumu[]      = INCBIN_U16("graphics/puppets/megumu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Megumu[] = INCBIN_U16("graphics/puppets/megumu/evolved/shiny.gbapal");
const u8 gMonIcon_Megumu[]          = INCBIN_U8 ("graphics/puppets/megumu/evolved/icon.4bpp");
const u8 gMonFootprint_Megumu[]     = INCBIN_U8 ("graphics/puppets/megumu/footprint.1bpp");

const u32 gMonFrontPic_CChimata[]     = INCBIN_U32("graphics/puppets/chimata/chibi/front.4bpp.lz");
const u32 gMonBackPic_CChimata[]      = INCBIN_U32("graphics/puppets/chimata/chibi/back.4bpp.lz");
const u16 gMonPalette_CChimata[]      = INCBIN_U16("graphics/puppets/chimata/chibi/normal.gbapal");
const u16 gMonShinyPalette_CChimata[] = INCBIN_U16("graphics/puppets/chimata/chibi/shiny.gbapal");
const u8 gMonIcon_CChimata[]          = INCBIN_U8 ("graphics/puppets/chimata/chibi/icon.4bpp");
const u8 gMonFootprint_CChimata[]     = INCBIN_U8 ("graphics/puppets/chimata/footprint.1bpp");

const u32 gMonFrontPic_Chimata[]     = INCBIN_U32("graphics/puppets/chimata/evolved/front.4bpp.lz");
const u32 gMonBackPic_Chimata[]      = INCBIN_U32("graphics/puppets/chimata/evolved/back.4bpp.lz");
const u16 gMonPalette_Chimata[]      = INCBIN_U16("graphics/puppets/chimata/evolved/normal.gbapal");
const u16 gMonShinyPalette_Chimata[] = INCBIN_U16("graphics/puppets/chimata/evolved/shiny.gbapal");
const u8 gMonIcon_Chimata[]          = INCBIN_U8 ("graphics/puppets/chimata/evolved/icon.4bpp");
const u8 gMonFootprint_Chimata[]     = INCBIN_U8 ("graphics/puppets/chimata/footprint.1bpp");

const u32 gMonFrontPic_CMomoyo[]     = INCBIN_U32("graphics/puppets/momoyo/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMomoyo[]      = INCBIN_U32("graphics/puppets/momoyo/chibi/back.4bpp.lz");
const u16 gMonPalette_CMomoyo[]      = INCBIN_U16("graphics/puppets/momoyo/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMomoyo[] = INCBIN_U16("graphics/puppets/momoyo/chibi/shiny.gbapal");
const u8 gMonIcon_CMomoyo[]          = INCBIN_U8 ("graphics/puppets/momoyo/chibi/icon.4bpp");
const u8 gMonFootprint_CMomoyo[]     = INCBIN_U8 ("graphics/puppets/momoyo/footprint.1bpp");

const u32 gMonFrontPic_Momoyo[]     = INCBIN_U32("graphics/puppets/momoyo/evolved/front.4bpp.lz");
const u32 gMonBackPic_Momoyo[]      = INCBIN_U32("graphics/puppets/momoyo/evolved/back.4bpp.lz");
const u16 gMonPalette_Momoyo[]      = INCBIN_U16("graphics/puppets/momoyo/evolved/normal.gbapal");
const u16 gMonShinyPalette_Momoyo[] = INCBIN_U16("graphics/puppets/momoyo/evolved/shiny.gbapal");
const u8 gMonIcon_Momoyo[]          = INCBIN_U8 ("graphics/puppets/momoyo/evolved/icon.4bpp");
const u8 gMonFootprint_Momoyo[]     = INCBIN_U8 ("graphics/puppets/momoyo/footprint.1bpp");

const u32 gMonFrontPic_CBiten[]     = INCBIN_U32("graphics/puppets/biten/chibi/front.4bpp.lz");
const u32 gMonBackPic_CBiten[]      = INCBIN_U32("graphics/puppets/biten/chibi/back.4bpp.lz");
const u16 gMonPalette_CBiten[]      = INCBIN_U16("graphics/puppets/biten/chibi/normal.gbapal");
const u16 gMonShinyPalette_CBiten[] = INCBIN_U16("graphics/puppets/biten/chibi/shiny.gbapal");
const u8 gMonIcon_CBiten[]          = INCBIN_U8 ("graphics/puppets/biten/chibi/icon.4bpp");
const u8 gMonFootprint_CBiten[]     = INCBIN_U8 ("graphics/puppets/biten/footprint.1bpp");

const u32 gMonFrontPic_Biten[]     = INCBIN_U32("graphics/puppets/biten/evolved/front.4bpp.lz");
const u32 gMonBackPic_Biten[]      = INCBIN_U32("graphics/puppets/biten/evolved/back.4bpp.lz");
const u16 gMonPalette_Biten[]      = INCBIN_U16("graphics/puppets/biten/evolved/normal.gbapal");
const u16 gMonShinyPalette_Biten[] = INCBIN_U16("graphics/puppets/biten/evolved/shiny.gbapal");
const u8 gMonIcon_Biten[]          = INCBIN_U8 ("graphics/puppets/biten/evolved/icon.4bpp");
const u8 gMonFootprint_Biten[]     = INCBIN_U8 ("graphics/puppets/biten/footprint.1bpp");

const u32 gMonFrontPic_CEnoko[]     = INCBIN_U32("graphics/puppets/enoko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CEnoko[]      = INCBIN_U32("graphics/puppets/enoko/chibi/back.4bpp.lz");
const u16 gMonPalette_CEnoko[]      = INCBIN_U16("graphics/puppets/enoko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CEnoko[] = INCBIN_U16("graphics/puppets/enoko/chibi/shiny.gbapal");
const u8 gMonIcon_CEnoko[]          = INCBIN_U8 ("graphics/puppets/enoko/chibi/icon.4bpp");
const u8 gMonFootprint_CEnoko[]     = INCBIN_U8 ("graphics/puppets/enoko/footprint.1bpp");

const u32 gMonFrontPic_Enoko[]     = INCBIN_U32("graphics/puppets/enoko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Enoko[]      = INCBIN_U32("graphics/puppets/enoko/evolved/back.4bpp.lz");
const u16 gMonPalette_Enoko[]      = INCBIN_U16("graphics/puppets/enoko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Enoko[] = INCBIN_U16("graphics/puppets/enoko/evolved/shiny.gbapal");
const u8 gMonIcon_Enoko[]          = INCBIN_U8 ("graphics/puppets/enoko/evolved/icon.4bpp");
const u8 gMonFootprint_Enoko[]     = INCBIN_U8 ("graphics/puppets/enoko/footprint.1bpp");

const u32 gMonFrontPic_CChiyari[]     = INCBIN_U32("graphics/puppets/chiyari/chibi/front.4bpp.lz");
const u32 gMonBackPic_CChiyari[]      = INCBIN_U32("graphics/puppets/chiyari/chibi/back.4bpp.lz");
const u16 gMonPalette_CChiyari[]      = INCBIN_U16("graphics/puppets/chiyari/chibi/normal.gbapal");
const u16 gMonShinyPalette_CChiyari[] = INCBIN_U16("graphics/puppets/chiyari/chibi/shiny.gbapal");
const u8 gMonIcon_CChiyari[]          = INCBIN_U8 ("graphics/puppets/chiyari/chibi/icon.4bpp");
const u8 gMonFootprint_CChiyari[]     = INCBIN_U8 ("graphics/puppets/chiyari/footprint.1bpp");

const u32 gMonFrontPic_Chiyari[]     = INCBIN_U32("graphics/puppets/chiyari/evolved/front.4bpp.lz");
const u32 gMonBackPic_Chiyari[]      = INCBIN_U32("graphics/puppets/chiyari/evolved/back.4bpp.lz");
const u16 gMonPalette_Chiyari[]      = INCBIN_U16("graphics/puppets/chiyari/evolved/normal.gbapal");
const u16 gMonShinyPalette_Chiyari[] = INCBIN_U16("graphics/puppets/chiyari/evolved/shiny.gbapal");
const u8 gMonIcon_Chiyari[]          = INCBIN_U8 ("graphics/puppets/chiyari/evolved/icon.4bpp");
const u8 gMonFootprint_Chiyari[]     = INCBIN_U8 ("graphics/puppets/chiyari/footprint.1bpp");

const u32 gMonFrontPic_CHisami[]     = INCBIN_U32("graphics/puppets/hisami/chibi/front.4bpp.lz");
const u32 gMonBackPic_CHisami[]      = INCBIN_U32("graphics/puppets/hisami/chibi/back.4bpp.lz");
const u16 gMonPalette_CHisami[]      = INCBIN_U16("graphics/puppets/hisami/chibi/normal.gbapal");
const u16 gMonShinyPalette_CHisami[] = INCBIN_U16("graphics/puppets/hisami/chibi/shiny.gbapal");
const u8 gMonIcon_CHisami[]          = INCBIN_U8 ("graphics/puppets/hisami/chibi/icon.4bpp");
const u8 gMonFootprint_CHisami[]     = INCBIN_U8 ("graphics/puppets/hisami/footprint.1bpp");

const u32 gMonFrontPic_Hisami[]     = INCBIN_U32("graphics/puppets/hisami/evolved/front.4bpp.lz");
const u32 gMonBackPic_Hisami[]      = INCBIN_U32("graphics/puppets/hisami/evolved/back.4bpp.lz");
const u16 gMonPalette_Hisami[]      = INCBIN_U16("graphics/puppets/hisami/evolved/normal.gbapal");
const u16 gMonShinyPalette_Hisami[] = INCBIN_U16("graphics/puppets/hisami/evolved/shiny.gbapal");
const u8 gMonIcon_Hisami[]          = INCBIN_U8 ("graphics/puppets/hisami/evolved/icon.4bpp");
const u8 gMonFootprint_Hisami[]     = INCBIN_U8 ("graphics/puppets/hisami/footprint.1bpp");

const u32 gMonFrontPic_CZanmu[]     = INCBIN_U32("graphics/puppets/zanmu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CZanmu[]      = INCBIN_U32("graphics/puppets/zanmu/chibi/back.4bpp.lz");
const u16 gMonPalette_CZanmu[]      = INCBIN_U16("graphics/puppets/zanmu/chibi/normal.gbapal");
const u16 gMonShinyPalette_CZanmu[] = INCBIN_U16("graphics/puppets/zanmu/chibi/shiny.gbapal");
const u8 gMonIcon_CZanmu[]          = INCBIN_U8 ("graphics/puppets/zanmu/chibi/icon.4bpp");
const u8 gMonFootprint_CZanmu[]     = INCBIN_U8 ("graphics/puppets/zanmu/footprint.1bpp");

const u32 gMonFrontPic_Zanmu[]     = INCBIN_U32("graphics/puppets/zanmu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Zanmu[]      = INCBIN_U32("graphics/puppets/zanmu/evolved/back.4bpp.lz");
const u16 gMonPalette_Zanmu[]      = INCBIN_U16("graphics/puppets/zanmu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Zanmu[] = INCBIN_U16("graphics/puppets/zanmu/evolved/shiny.gbapal");
const u8 gMonIcon_Zanmu[]          = INCBIN_U8 ("graphics/puppets/zanmu/evolved/icon.4bpp");
const u8 gMonFootprint_Zanmu[]     = INCBIN_U8 ("graphics/puppets/zanmu/footprint.1bpp");

const u32 gMonFrontPic_CUbame[]     = INCBIN_U32("graphics/puppets/ubame/chibi/front.4bpp.lz");
const u32 gMonBackPic_CUbame[]      = INCBIN_U32("graphics/puppets/ubame/chibi/back.4bpp.lz");
const u16 gMonPalette_CUbame[]      = INCBIN_U16("graphics/puppets/ubame/chibi/normal.gbapal");
const u16 gMonShinyPalette_CUbame[] = INCBIN_U16("graphics/puppets/ubame/chibi/shiny.gbapal");
const u8 gMonIcon_CUbame[]          = INCBIN_U8 ("graphics/puppets/ubame/chibi/icon.4bpp");
const u8 gMonFootprint_CUbame[]     = INCBIN_U8 ("graphics/puppets/ubame/footprint.1bpp");

const u32 gMonFrontPic_Ubame[]     = INCBIN_U32("graphics/puppets/ubame/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ubame[]      = INCBIN_U32("graphics/puppets/ubame/evolved/back.4bpp.lz");
const u16 gMonPalette_Ubame[]      = INCBIN_U16("graphics/puppets/ubame/evolved/normal.gbapal");
const u16 gMonShinyPalette_Ubame[] = INCBIN_U16("graphics/puppets/ubame/evolved/shiny.gbapal");
const u8 gMonIcon_Ubame[]          = INCBIN_U8 ("graphics/puppets/ubame/evolved/icon.4bpp");
const u8 gMonFootprint_Ubame[]     = INCBIN_U8 ("graphics/puppets/ubame/footprint.1bpp");

const u32 gMonFrontPic_CChimi[]     = INCBIN_U32("graphics/puppets/chimi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CChimi[]      = INCBIN_U32("graphics/puppets/chimi/chibi/back.4bpp.lz");
const u16 gMonPalette_CChimi[]      = INCBIN_U16("graphics/puppets/chimi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CChimi[] = INCBIN_U16("graphics/puppets/chimi/chibi/shiny.gbapal");
const u8 gMonIcon_CChimi[]          = INCBIN_U8 ("graphics/puppets/chimi/chibi/icon.4bpp");
const u8 gMonFootprint_CChimi[]     = INCBIN_U8 ("graphics/puppets/chimi/footprint.1bpp");

const u32 gMonFrontPic_Chimi[]     = INCBIN_U32("graphics/puppets/chimi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Chimi[]      = INCBIN_U32("graphics/puppets/chimi/evolved/back.4bpp.lz");
const u16 gMonPalette_Chimi[]      = INCBIN_U16("graphics/puppets/chimi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Chimi[] = INCBIN_U16("graphics/puppets/chimi/evolved/shiny.gbapal");
const u8 gMonIcon_Chimi[]          = INCBIN_U8 ("graphics/puppets/chimi/evolved/icon.4bpp");
const u8 gMonFootprint_Chimi[]     = INCBIN_U8 ("graphics/puppets/chimi/footprint.1bpp");

const u32 gMonFrontPic_CNareko[]     = INCBIN_U32("graphics/puppets/nareko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CNareko[]      = INCBIN_U32("graphics/puppets/nareko/chibi/back.4bpp.lz");
const u16 gMonPalette_CNareko[]      = INCBIN_U16("graphics/puppets/nareko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CNareko[] = INCBIN_U16("graphics/puppets/nareko/chibi/shiny.gbapal");
const u8 gMonIcon_CNareko[]          = INCBIN_U8 ("graphics/puppets/nareko/chibi/icon.4bpp");
const u8 gMonFootprint_CNareko[]     = INCBIN_U8 ("graphics/puppets/nareko/footprint.1bpp");

const u32 gMonFrontPic_Nareko[]     = INCBIN_U32("graphics/puppets/nareko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Nareko[]      = INCBIN_U32("graphics/puppets/nareko/evolved/back.4bpp.lz");
const u16 gMonPalette_Nareko[]      = INCBIN_U16("graphics/puppets/nareko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Nareko[] = INCBIN_U16("graphics/puppets/nareko/evolved/shiny.gbapal");
const u8 gMonIcon_Nareko[]          = INCBIN_U8 ("graphics/puppets/nareko/evolved/icon.4bpp");
const u8 gMonFootprint_Nareko[]     = INCBIN_U8 ("graphics/puppets/nareko/footprint.1bpp");

const u32 gMonFrontPic_CAsama[]     = INCBIN_U32("graphics/puppets/asama/chibi/front.4bpp.lz");
const u32 gMonBackPic_CAsama[]      = INCBIN_U32("graphics/puppets/asama/chibi/back.4bpp.lz");
const u16 gMonPalette_CAsama[]      = INCBIN_U16("graphics/puppets/asama/chibi/normal.gbapal");
const u16 gMonShinyPalette_CAsama[] = INCBIN_U16("graphics/puppets/asama/chibi/shiny.gbapal");
const u8 gMonIcon_CAsama[]          = INCBIN_U8 ("graphics/puppets/asama/chibi/icon.4bpp");
const u8 gMonFootprint_CAsama[]     = INCBIN_U8 ("graphics/puppets/asama/footprint.1bpp");

const u32 gMonFrontPic_Asama[]     = INCBIN_U32("graphics/puppets/asama/evolved/front.4bpp.lz");
const u32 gMonBackPic_Asama[]      = INCBIN_U32("graphics/puppets/asama/evolved/back.4bpp.lz");
const u16 gMonPalette_Asama[]      = INCBIN_U16("graphics/puppets/asama/evolved/normal.gbapal");
const u16 gMonShinyPalette_Asama[] = INCBIN_U16("graphics/puppets/asama/evolved/shiny.gbapal");
const u8 gMonIcon_Asama[]          = INCBIN_U8 ("graphics/puppets/asama/evolved/icon.4bpp");
const u8 gMonFootprint_Asama[]     = INCBIN_U8 ("graphics/puppets/asama/footprint.1bpp");

const u32 gMonFrontPic_CAriya[]     = INCBIN_U32("graphics/puppets/ariya/chibi/front.4bpp.lz");
const u32 gMonBackPic_CAriya[]      = INCBIN_U32("graphics/puppets/ariya/chibi/back.4bpp.lz");
const u16 gMonPalette_CAriya[]      = INCBIN_U16("graphics/puppets/ariya/chibi/normal.gbapal");
const u16 gMonShinyPalette_CAriya[] = INCBIN_U16("graphics/puppets/ariya/chibi/shiny.gbapal");
const u8 gMonIcon_CAriya[]          = INCBIN_U8 ("graphics/puppets/ariya/chibi/icon.4bpp");
const u8 gMonFootprint_CAriya[]     = INCBIN_U8 ("graphics/puppets/ariya/footprint.1bpp");

const u32 gMonFrontPic_Ariya[]     = INCBIN_U32("graphics/puppets/ariya/evolved/front.4bpp.lz");
const u32 gMonBackPic_Ariya[]      = INCBIN_U32("graphics/puppets/ariya/evolved/back.4bpp.lz");
const u16 gMonPalette_Ariya[]      = INCBIN_U16("graphics/puppets/ariya/evolved/normal.gbapal");
const u16 gMonShinyPalette_Ariya[] = INCBIN_U16("graphics/puppets/ariya/evolved/shiny.gbapal");
const u8 gMonIcon_Ariya[]          = INCBIN_U8 ("graphics/puppets/ariya/evolved/icon.4bpp");
const u8 gMonFootprint_Ariya[]     = INCBIN_U8 ("graphics/puppets/ariya/footprint.1bpp");

const u32 gMonFrontPic_CNina[]     = INCBIN_U32("graphics/puppets/nina/chibi/front.4bpp.lz");
const u32 gMonBackPic_CNina[]      = INCBIN_U32("graphics/puppets/nina/chibi/back.4bpp.lz");
const u16 gMonPalette_CNina[]      = INCBIN_U16("graphics/puppets/nina/chibi/normal.gbapal");
const u16 gMonShinyPalette_CNina[] = INCBIN_U16("graphics/puppets/nina/chibi/shiny.gbapal");
const u8 gMonIcon_CNina[]          = INCBIN_U8 ("graphics/puppets/nina/chibi/icon.4bpp");
const u8 gMonFootprint_CNina[]     = INCBIN_U8 ("graphics/puppets/nina/footprint.1bpp");

const u32 gMonFrontPic_Nina[]     = INCBIN_U32("graphics/puppets/nina/evolved/front.4bpp.lz");
const u32 gMonBackPic_Nina[]      = INCBIN_U32("graphics/puppets/nina/evolved/back.4bpp.lz");
const u16 gMonPalette_Nina[]      = INCBIN_U16("graphics/puppets/nina/evolved/normal.gbapal");
const u16 gMonShinyPalette_Nina[] = INCBIN_U16("graphics/puppets/nina/evolved/shiny.gbapal");
const u8 gMonIcon_Nina[]          = INCBIN_U8 ("graphics/puppets/nina/evolved/icon.4bpp");
const u8 gMonFootprint_Nina[]     = INCBIN_U8 ("graphics/puppets/nina/footprint.1bpp");

const u32 gMonFrontPic_Tori[]     = INCBIN_U32("graphics/puppets/tori/evolved/front.4bpp.lz");
const u32 gMonBackPic_Tori[]      = INCBIN_U32("graphics/puppets/tori/evolved/back.4bpp.lz");
const u16 gMonPalette_Tori[]      = INCBIN_U16("graphics/puppets/tori/evolved/normal.gbapal");
const u16 gMonShinyPalette_Tori[] = INCBIN_U16("graphics/puppets/tori/evolved/shiny.gbapal");
const u8 gMonIcon_Tori[]          = INCBIN_U8 ("graphics/puppets/tori/evolved/icon.4bpp");
const u8 gMonFootprint_Tori[]     = INCBIN_U8 ("graphics/puppets/tori/footprint.1bpp");

const u32 gMonFrontPic_Isami[]     = INCBIN_U32("graphics/puppets/isami/evolved/front.4bpp.lz");
const u32 gMonBackPic_Isami[]      = INCBIN_U32("graphics/puppets/isami/evolved/back.4bpp.lz");
const u16 gMonPalette_Isami[]      = INCBIN_U16("graphics/puppets/isami/evolved/normal.gbapal");
const u16 gMonShinyPalette_Isami[] = INCBIN_U16("graphics/puppets/isami/evolved/shiny.gbapal");
const u8 gMonIcon_Isami[]          = INCBIN_U8 ("graphics/puppets/isami/evolved/icon.4bpp");
const u8 gMonFootprint_Isami[]     = INCBIN_U8 ("graphics/puppets/isami/footprint.1bpp");

const u32 gMonFrontPic_CVivit[]     = INCBIN_U32("graphics/puppets/vivit/chibi/front.4bpp.lz");
const u32 gMonBackPic_CVivit[]      = INCBIN_U32("graphics/puppets/vivit/chibi/back.4bpp.lz");
const u16 gMonPalette_CVivit[]      = INCBIN_U16("graphics/puppets/vivit/chibi/normal.gbapal");
const u16 gMonShinyPalette_CVivit[] = INCBIN_U16("graphics/puppets/vivit/chibi/shiny.gbapal");
const u8 gMonIcon_CVivit[]          = INCBIN_U8 ("graphics/puppets/vivit/chibi/icon.4bpp");
const u8 gMonFootprint_CVivit[]     = INCBIN_U8 ("graphics/puppets/vivit/footprint.1bpp");

const u32 gMonFrontPic_Vivit[]     = INCBIN_U32("graphics/puppets/vivit/evolved/front.4bpp.lz");
const u32 gMonBackPic_Vivit[]      = INCBIN_U32("graphics/puppets/vivit/evolved/back.4bpp.lz");
const u16 gMonPalette_Vivit[]      = INCBIN_U16("graphics/puppets/vivit/evolved/normal.gbapal");
const u16 gMonShinyPalette_Vivit[] = INCBIN_U16("graphics/puppets/vivit/evolved/shiny.gbapal");
const u8 gMonIcon_Vivit[]          = INCBIN_U8 ("graphics/puppets/vivit/evolved/icon.4bpp");
const u8 gMonFootprint_Vivit[]     = INCBIN_U8 ("graphics/puppets/vivit/footprint.1bpp");

const u32 gMonFrontPic_AnVivit[]     = INCBIN_U32("graphics/puppets/vivit/angel/front.4bpp.lz");
const u32 gMonBackPic_AnVivit[]      = INCBIN_U32("graphics/puppets/vivit/angel/back.4bpp.lz");
const u16 gMonPalette_AnVivit[]      = INCBIN_U16("graphics/puppets/vivit/angel/normal.gbapal");
const u16 gMonShinyPalette_AnVivit[] = INCBIN_U16("graphics/puppets/vivit/angel/shiny.gbapal");
const u8 gMonIcon_AnVivit[]          = INCBIN_U8 ("graphics/puppets/vivit/angel/icon.4bpp");
const u8 gMonFootprint_AnVivit[]     = INCBIN_U8 ("graphics/puppets/vivit/footprint.1bpp");

const u32 gMonFrontPic_CTokiko[]     = INCBIN_U32("graphics/puppets/tokiko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CTokiko[]      = INCBIN_U32("graphics/puppets/tokiko/chibi/back.4bpp.lz");
const u16 gMonPalette_CTokiko[]      = INCBIN_U16("graphics/puppets/tokiko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CTokiko[] = INCBIN_U16("graphics/puppets/tokiko/chibi/shiny.gbapal");
const u8 gMonIcon_CTokiko[]          = INCBIN_U8 ("graphics/puppets/tokiko/chibi/icon.4bpp");
const u8 gMonFootprint_CTokiko[]     = INCBIN_U8 ("graphics/puppets/tokiko/footprint.1bpp");

const u32 gMonFrontPic_Tokiko[]     = INCBIN_U32("graphics/puppets/tokiko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Tokiko[]      = INCBIN_U32("graphics/puppets/tokiko/evolved/back.4bpp.lz");
const u16 gMonPalette_Tokiko[]      = INCBIN_U16("graphics/puppets/tokiko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Tokiko[] = INCBIN_U16("graphics/puppets/tokiko/evolved/shiny.gbapal");
const u8 gMonIcon_Tokiko[]          = INCBIN_U8 ("graphics/puppets/tokiko/evolved/icon.4bpp");
const u8 gMonFootprint_Tokiko[]     = INCBIN_U8 ("graphics/puppets/tokiko/footprint.1bpp");

const u32 gMonFrontPic_ATokiko[]     = INCBIN_U32("graphics/puppets/tokiko/attack/front.4bpp.lz");
const u32 gMonBackPic_ATokiko[]      = INCBIN_U32("graphics/puppets/tokiko/attack/back.4bpp.lz");
const u16 gMonPalette_ATokiko[]      = INCBIN_U16("graphics/puppets/tokiko/attack/normal.gbapal");
const u16 gMonShinyPalette_ATokiko[] = INCBIN_U16("graphics/puppets/tokiko/attack/shiny.gbapal");
const u8 gMonIcon_ATokiko[]          = INCBIN_U8 ("graphics/puppets/tokiko/attack/icon.4bpp");
const u8 gMonFootprint_ATokiko[]     = INCBIN_U8 ("graphics/puppets/tokiko/footprint.1bpp");

const u32 gMonFrontPic_Akyuu[]     = INCBIN_U32("graphics/puppets/akyuu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Akyuu[]      = INCBIN_U32("graphics/puppets/akyuu/evolved/back.4bpp.lz");
const u16 gMonPalette_Akyuu[]      = INCBIN_U16("graphics/puppets/akyuu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Akyuu[] = INCBIN_U16("graphics/puppets/akyuu/evolved/shiny.gbapal");
const u8 gMonIcon_Akyuu[]          = INCBIN_U8 ("graphics/puppets/akyuu/evolved/icon.4bpp");
const u8 gMonFootprint_Akyuu[]     = INCBIN_U8 ("graphics/puppets/akyuu/footprint.1bpp");

const u32 gMonFrontPic_CRinnosuke[]     = INCBIN_U32("graphics/puppets/rinnosuke/chibi/front.4bpp.lz");
const u32 gMonBackPic_CRinnosuke[]      = INCBIN_U32("graphics/puppets/rinnosuke/chibi/back.4bpp.lz");
const u16 gMonPalette_CRinnosuke[]      = INCBIN_U16("graphics/puppets/rinnosuke/chibi/normal.gbapal");
const u16 gMonShinyPalette_CRinnosuke[] = INCBIN_U16("graphics/puppets/rinnosuke/chibi/shiny.gbapal");
const u8 gMonIcon_CRinnosuke[]          = INCBIN_U8 ("graphics/puppets/rinnosuke/chibi/icon.4bpp");
const u8 gMonFootprint_CRinnosuke[]     = INCBIN_U8 ("graphics/puppets/rinnosuke/footprint.1bpp");

const u32 gMonFrontPic_Rinnosuke[]     = INCBIN_U32("graphics/puppets/rinnosuke/evolved/front.4bpp.lz");
const u32 gMonBackPic_Rinnosuke[]      = INCBIN_U32("graphics/puppets/rinnosuke/evolved/back.4bpp.lz");
const u16 gMonPalette_Rinnosuke[]      = INCBIN_U16("graphics/puppets/rinnosuke/evolved/normal.gbapal");
const u16 gMonShinyPalette_Rinnosuke[] = INCBIN_U16("graphics/puppets/rinnosuke/evolved/shiny.gbapal");
const u8 gMonIcon_Rinnosuke[]          = INCBIN_U8 ("graphics/puppets/rinnosuke/evolved/icon.4bpp");
const u8 gMonFootprint_Rinnosuke[]     = INCBIN_U8 ("graphics/puppets/rinnosuke/footprint.1bpp");

const u32 gMonFrontPic_Gyokuto[]     = INCBIN_U32("graphics/puppets/gyokuto/evolved/front.4bpp.lz");
const u32 gMonBackPic_Gyokuto[]      = INCBIN_U32("graphics/puppets/gyokuto/evolved/back.4bpp.lz");
const u16 gMonPalette_Gyokuto[]      = INCBIN_U16("graphics/puppets/gyokuto/evolved/normal.gbapal");
const u16 gMonShinyPalette_Gyokuto[] = INCBIN_U16("graphics/puppets/gyokuto/evolved/shiny.gbapal");
const u8 gMonIcon_Gyokuto[]          = INCBIN_U8 ("graphics/puppets/gyokuto/evolved/icon.4bpp");
const u8 gMonFootprint_Gyokuto[]     = INCBIN_U8 ("graphics/puppets/gyokuto/footprint.1bpp");

const u32 gMonFrontPic_CToyohime[]     = INCBIN_U32("graphics/puppets/toyohime/chibi/front.4bpp.lz");
const u32 gMonBackPic_CToyohime[]      = INCBIN_U32("graphics/puppets/toyohime/chibi/back.4bpp.lz");
const u16 gMonPalette_CToyohime[]      = INCBIN_U16("graphics/puppets/toyohime/chibi/normal.gbapal");
const u16 gMonShinyPalette_CToyohime[] = INCBIN_U16("graphics/puppets/toyohime/chibi/shiny.gbapal");
const u8 gMonIcon_CToyohime[]          = INCBIN_U8 ("graphics/puppets/toyohime/chibi/icon.4bpp");
const u8 gMonFootprint_CToyohime[]     = INCBIN_U8 ("graphics/puppets/toyohime/footprint.1bpp");

const u32 gMonFrontPic_Toyohime[]     = INCBIN_U32("graphics/puppets/toyohime/evolved/front.4bpp.lz");
const u32 gMonBackPic_Toyohime[]      = INCBIN_U32("graphics/puppets/toyohime/evolved/back.4bpp.lz");
const u16 gMonPalette_Toyohime[]      = INCBIN_U16("graphics/puppets/toyohime/evolved/normal.gbapal");
const u16 gMonShinyPalette_Toyohime[] = INCBIN_U16("graphics/puppets/toyohime/evolved/shiny.gbapal");
const u8 gMonIcon_Toyohime[]          = INCBIN_U8 ("graphics/puppets/toyohime/evolved/icon.4bpp");
const u8 gMonFootprint_Toyohime[]     = INCBIN_U8 ("graphics/puppets/toyohime/footprint.1bpp");

const u32 gMonFrontPic_TToyohime[]     = INCBIN_U32("graphics/puppets/toyohime/technic/front.4bpp.lz");
const u32 gMonBackPic_TToyohime[]      = INCBIN_U32("graphics/puppets/toyohime/technic/back.4bpp.lz");
const u16 gMonPalette_TToyohime[]      = INCBIN_U16("graphics/puppets/toyohime/technic/normal.gbapal");
const u16 gMonShinyPalette_TToyohime[] = INCBIN_U16("graphics/puppets/toyohime/technic/shiny.gbapal");
const u8 gMonIcon_TToyohime[]          = INCBIN_U8 ("graphics/puppets/toyohime/technic/icon.4bpp");
const u8 gMonFootprint_TToyohime[]     = INCBIN_U8 ("graphics/puppets/toyohime/footprint.1bpp");

const u32 gMonFrontPic_CYorihime[]     = INCBIN_U32("graphics/puppets/yorihime/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYorihime[]      = INCBIN_U32("graphics/puppets/yorihime/chibi/back.4bpp.lz");
const u16 gMonPalette_CYorihime[]      = INCBIN_U16("graphics/puppets/yorihime/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYorihime[] = INCBIN_U16("graphics/puppets/yorihime/chibi/shiny.gbapal");
const u8 gMonIcon_CYorihime[]          = INCBIN_U8 ("graphics/puppets/yorihime/chibi/icon.4bpp");
const u8 gMonFootprint_CYorihime[]     = INCBIN_U8 ("graphics/puppets/yorihime/footprint.1bpp");

const u32 gMonFrontPic_Yorihime[]     = INCBIN_U32("graphics/puppets/yorihime/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yorihime[]      = INCBIN_U32("graphics/puppets/yorihime/evolved/back.4bpp.lz");
const u16 gMonPalette_Yorihime[]      = INCBIN_U16("graphics/puppets/yorihime/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yorihime[] = INCBIN_U16("graphics/puppets/yorihime/evolved/shiny.gbapal");
const u8 gMonIcon_Yorihime[]          = INCBIN_U8 ("graphics/puppets/yorihime/evolved/icon.4bpp");
const u8 gMonFootprint_Yorihime[]     = INCBIN_U8 ("graphics/puppets/yorihime/footprint.1bpp");

const u32 gMonFrontPic_SYorihime[]     = INCBIN_U32("graphics/puppets/yorihime/speed/front.4bpp.lz");
const u32 gMonBackPic_SYorihime[]      = INCBIN_U32("graphics/puppets/yorihime/speed/back.4bpp.lz");
const u16 gMonPalette_SYorihime[]      = INCBIN_U16("graphics/puppets/yorihime/speed/normal.gbapal");
const u16 gMonShinyPalette_SYorihime[] = INCBIN_U16("graphics/puppets/yorihime/speed/shiny.gbapal");
const u8 gMonIcon_SYorihime[]          = INCBIN_U8 ("graphics/puppets/yorihime/speed/icon.4bpp");
const u8 gMonFootprint_SYorihime[]     = INCBIN_U8 ("graphics/puppets/yorihime/footprint.1bpp");

const u32 gMonFrontPic_CKasen[]     = INCBIN_U32("graphics/puppets/kasen/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKasen[]      = INCBIN_U32("graphics/puppets/kasen/chibi/back.4bpp.lz");
const u16 gMonPalette_CKasen[]      = INCBIN_U16("graphics/puppets/kasen/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKasen[] = INCBIN_U16("graphics/puppets/kasen/chibi/shiny.gbapal");
const u8 gMonIcon_CKasen[]          = INCBIN_U8 ("graphics/puppets/kasen/chibi/icon.4bpp");
const u8 gMonFootprint_CKasen[]     = INCBIN_U8 ("graphics/puppets/kasen/footprint.1bpp");

const u32 gMonFrontPic_Kasen[]     = INCBIN_U32("graphics/puppets/kasen/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kasen[]      = INCBIN_U32("graphics/puppets/kasen/evolved/back.4bpp.lz");
const u16 gMonPalette_Kasen[]      = INCBIN_U16("graphics/puppets/kasen/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kasen[] = INCBIN_U16("graphics/puppets/kasen/evolved/shiny.gbapal");
const u8 gMonIcon_Kasen[]          = INCBIN_U8 ("graphics/puppets/kasen/evolved/icon.4bpp");
const u8 gMonFootprint_Kasen[]     = INCBIN_U8 ("graphics/puppets/kasen/footprint.1bpp");

const u32 gMonFrontPic_CSendai[]     = INCBIN_U32("graphics/puppets/sendai/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSendai[]      = INCBIN_U32("graphics/puppets/sendai/chibi/back.4bpp.lz");
const u16 gMonPalette_CSendai[]      = INCBIN_U16("graphics/puppets/sendai/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSendai[] = INCBIN_U16("graphics/puppets/sendai/chibi/shiny.gbapal");
const u8 gMonIcon_CSendai[]          = INCBIN_U8 ("graphics/puppets/sendai/chibi/icon.4bpp");
const u8 gMonFootprint_CSendai[]     = INCBIN_U8 ("graphics/puppets/sendai/footprint.1bpp");

const u32 gMonFrontPic_Sendai[]     = INCBIN_U32("graphics/puppets/sendai/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sendai[]      = INCBIN_U32("graphics/puppets/sendai/evolved/back.4bpp.lz");
const u16 gMonPalette_Sendai[]      = INCBIN_U16("graphics/puppets/sendai/evolved/normal.gbapal");
const u16 gMonShinyPalette_Sendai[] = INCBIN_U16("graphics/puppets/sendai/evolved/shiny.gbapal");
const u8 gMonIcon_Sendai[]          = INCBIN_U8 ("graphics/puppets/sendai/evolved/icon.4bpp");
const u8 gMonFootprint_Sendai[]     = INCBIN_U8 ("graphics/puppets/sendai/footprint.1bpp");

const u32 gMonFrontPic_TSendai[]     = INCBIN_U32("graphics/puppets/sendai/technic/front.4bpp.lz");
const u32 gMonBackPic_TSendai[]      = INCBIN_U32("graphics/puppets/sendai/technic/back.4bpp.lz");
const u16 gMonPalette_TSendai[]      = INCBIN_U16("graphics/puppets/sendai/technic/normal.gbapal");
const u16 gMonShinyPalette_TSendai[] = INCBIN_U16("graphics/puppets/sendai/technic/shiny.gbapal");
const u8 gMonIcon_TSendai[]          = INCBIN_U8 ("graphics/puppets/sendai/technic/icon.4bpp");
const u8 gMonFootprint_TSendai[]     = INCBIN_U8 ("graphics/puppets/sendai/footprint.1bpp");

const u32 gMonFrontPic_CKosuzu[]     = INCBIN_U32("graphics/puppets/kosuzu/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKosuzu[]      = INCBIN_U32("graphics/puppets/kosuzu/chibi/back.4bpp.lz");
const u16 gMonPalette_CKosuzu[]      = INCBIN_U16("graphics/puppets/kosuzu/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKosuzu[] = INCBIN_U16("graphics/puppets/kosuzu/chibi/shiny.gbapal");
const u8 gMonIcon_CKosuzu[]          = INCBIN_U8 ("graphics/puppets/kosuzu/chibi/icon.4bpp");
const u8 gMonFootprint_CKosuzu[]     = INCBIN_U8 ("graphics/puppets/kosuzu/footprint.1bpp");

const u32 gMonFrontPic_Kosuzu[]     = INCBIN_U32("graphics/puppets/kosuzu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kosuzu[]      = INCBIN_U32("graphics/puppets/kosuzu/evolved/back.4bpp.lz");
const u16 gMonPalette_Kosuzu[]      = INCBIN_U16("graphics/puppets/kosuzu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kosuzu[] = INCBIN_U16("graphics/puppets/kosuzu/evolved/shiny.gbapal");
const u8 gMonIcon_Kosuzu[]          = INCBIN_U8 ("graphics/puppets/kosuzu/evolved/icon.4bpp");
const u8 gMonFootprint_Kosuzu[]     = INCBIN_U8 ("graphics/puppets/kosuzu/footprint.1bpp");

const u32 gMonFrontPic_CMiyoi[]     = INCBIN_U32("graphics/puppets/miyoi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CMiyoi[]      = INCBIN_U32("graphics/puppets/miyoi/chibi/back.4bpp.lz");
const u16 gMonPalette_CMiyoi[]      = INCBIN_U16("graphics/puppets/miyoi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CMiyoi[] = INCBIN_U16("graphics/puppets/miyoi/chibi/shiny.gbapal");
const u8 gMonIcon_CMiyoi[]          = INCBIN_U8 ("graphics/puppets/miyoi/chibi/icon.4bpp");
const u8 gMonFootprint_CMiyoi[]     = INCBIN_U8 ("graphics/puppets/miyoi/footprint.1bpp");

const u32 gMonFrontPic_Miyoi[]     = INCBIN_U32("graphics/puppets/miyoi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Miyoi[]      = INCBIN_U32("graphics/puppets/miyoi/evolved/back.4bpp.lz");
const u16 gMonPalette_Miyoi[]      = INCBIN_U16("graphics/puppets/miyoi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Miyoi[] = INCBIN_U16("graphics/puppets/miyoi/evolved/shiny.gbapal");
const u8 gMonIcon_Miyoi[]          = INCBIN_U8 ("graphics/puppets/miyoi/evolved/icon.4bpp");
const u8 gMonFootprint_Miyoi[]     = INCBIN_U8 ("graphics/puppets/miyoi/footprint.1bpp");

const u32 gMonFrontPic_CLunaChild[]     = INCBIN_U32("graphics/puppets/lunachild/chibi/front.4bpp.lz");
const u32 gMonBackPic_CLunaChild[]      = INCBIN_U32("graphics/puppets/lunachild/chibi/back.4bpp.lz");
const u16 gMonPalette_CLunaChild[]      = INCBIN_U16("graphics/puppets/lunachild/chibi/normal.gbapal");
const u16 gMonShinyPalette_CLunaChild[] = INCBIN_U16("graphics/puppets/lunachild/chibi/shiny.gbapal");
const u8 gMonIcon_CLunaChild[]          = INCBIN_U8 ("graphics/puppets/lunachild/chibi/icon.4bpp");
const u8 gMonFootprint_CLunaChild[]     = INCBIN_U8 ("graphics/puppets/lunachild/footprint.1bpp");

const u32 gMonFrontPic_LunaChild[]     = INCBIN_U32("graphics/puppets/lunachild/evolved/front.4bpp.lz");
const u32 gMonBackPic_LunaChild[]      = INCBIN_U32("graphics/puppets/lunachild/evolved/back.4bpp.lz");
const u16 gMonPalette_LunaChild[]      = INCBIN_U16("graphics/puppets/lunachild/evolved/normal.gbapal");
const u16 gMonShinyPalette_LunaChild[] = INCBIN_U16("graphics/puppets/lunachild/evolved/shiny.gbapal");
const u8 gMonIcon_LunaChild[]          = INCBIN_U8 ("graphics/puppets/lunachild/evolved/icon.4bpp");
const u8 gMonFootprint_LunaChild[]     = INCBIN_U8 ("graphics/puppets/lunachild/footprint.1bpp");

const u32 gMonFrontPic_ALunaChild[]     = INCBIN_U32("graphics/puppets/lunachild/attack/front.4bpp.lz");
const u32 gMonBackPic_ALunaChild[]      = INCBIN_U32("graphics/puppets/lunachild/attack/back.4bpp.lz");
const u16 gMonPalette_ALunaChild[]      = INCBIN_U16("graphics/puppets/lunachild/attack/normal.gbapal");
const u16 gMonShinyPalette_ALunaChild[] = INCBIN_U16("graphics/puppets/lunachild/attack/shiny.gbapal");
const u8 gMonIcon_ALunaChild[]          = INCBIN_U8 ("graphics/puppets/lunachild/attack/icon.4bpp");
const u8 gMonFootprint_ALunaChild[]     = INCBIN_U8 ("graphics/puppets/lunachild/footprint.1bpp");

const u32 gMonFrontPic_TLunaChild[]     = INCBIN_U32("graphics/puppets/lunachild/technic/front.4bpp.lz");
const u32 gMonBackPic_TLunaChild[]      = INCBIN_U32("graphics/puppets/lunachild/technic/back.4bpp.lz");
const u16 gMonPalette_TLunaChild[]      = INCBIN_U16("graphics/puppets/lunachild/technic/normal.gbapal");
const u16 gMonShinyPalette_TLunaChild[] = INCBIN_U16("graphics/puppets/lunachild/technic/shiny.gbapal");
const u8 gMonIcon_TLunaChild[]          = INCBIN_U8 ("graphics/puppets/lunachild/technic/icon.4bpp");
const u8 gMonFootprint_TLunaChild[]     = INCBIN_U8 ("graphics/puppets/lunachild/footprint.1bpp");

const u32 gMonFrontPic_CStarSapphire[]     = INCBIN_U32("graphics/puppets/starsapphire/chibi/front.4bpp.lz");
const u32 gMonBackPic_CStarSapphire[]      = INCBIN_U32("graphics/puppets/starsapphire/chibi/back.4bpp.lz");
const u16 gMonPalette_CStarSapphire[]      = INCBIN_U16("graphics/puppets/starsapphire/chibi/normal.gbapal");
const u16 gMonShinyPalette_CStarSapphire[] = INCBIN_U16("graphics/puppets/starsapphire/chibi/shiny.gbapal");
const u8 gMonIcon_CStarSapphire[]          = INCBIN_U8 ("graphics/puppets/starsapphire/chibi/icon.4bpp");
const u8 gMonFootprint_CStarSapphire[]     = INCBIN_U8 ("graphics/puppets/starsapphire/footprint.1bpp");

const u32 gMonFrontPic_StarSapphire[]     = INCBIN_U32("graphics/puppets/starsapphire/evolved/front.4bpp.lz");
const u32 gMonBackPic_StarSapphire[]      = INCBIN_U32("graphics/puppets/starsapphire/evolved/back.4bpp.lz");
const u16 gMonPalette_StarSapphire[]      = INCBIN_U16("graphics/puppets/starsapphire/evolved/normal.gbapal");
const u16 gMonShinyPalette_StarSapphire[] = INCBIN_U16("graphics/puppets/starsapphire/evolved/shiny.gbapal");
const u8 gMonIcon_StarSapphire[]          = INCBIN_U8 ("graphics/puppets/starsapphire/evolved/icon.4bpp");
const u8 gMonFootprint_StarSapphire[]     = INCBIN_U8 ("graphics/puppets/starsapphire/footprint.1bpp");

const u32 gMonFrontPic_AStarSapphire[]     = INCBIN_U32("graphics/puppets/starsapphire/attack/front.4bpp.lz");
const u32 gMonBackPic_AStarSapphire[]      = INCBIN_U32("graphics/puppets/starsapphire/attack/back.4bpp.lz");
const u16 gMonPalette_AStarSapphire[]      = INCBIN_U16("graphics/puppets/starsapphire/attack/normal.gbapal");
const u16 gMonShinyPalette_AStarSapphire[] = INCBIN_U16("graphics/puppets/starsapphire/attack/shiny.gbapal");
const u8 gMonIcon_AStarSapphire[]          = INCBIN_U8 ("graphics/puppets/starsapphire/attack/icon.4bpp");
const u8 gMonFootprint_AStarSapphire[]     = INCBIN_U8 ("graphics/puppets/starsapphire/footprint.1bpp");

const u32 gMonFrontPic_HStarSapphire[]     = INCBIN_U32("graphics/puppets/starsapphire/helper/front.4bpp.lz");
const u32 gMonBackPic_HStarSapphire[]      = INCBIN_U32("graphics/puppets/starsapphire/helper/back.4bpp.lz");
const u16 gMonPalette_HStarSapphire[]      = INCBIN_U16("graphics/puppets/starsapphire/helper/normal.gbapal");
const u16 gMonShinyPalette_HStarSapphire[] = INCBIN_U16("graphics/puppets/starsapphire/helper/shiny.gbapal");
const u8 gMonIcon_HStarSapphire[]          = INCBIN_U8 ("graphics/puppets/starsapphire/helper/icon.4bpp");
const u8 gMonFootprint_HStarSapphire[]     = INCBIN_U8 ("graphics/puppets/starsapphire/footprint.1bpp");

const u32 gMonFrontPic_CSunnyMilk[]     = INCBIN_U32("graphics/puppets/sunnymilk/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSunnyMilk[]      = INCBIN_U32("graphics/puppets/sunnymilk/chibi/back.4bpp.lz");
const u16 gMonPalette_CSunnyMilk[]      = INCBIN_U16("graphics/puppets/sunnymilk/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSunnyMilk[] = INCBIN_U16("graphics/puppets/sunnymilk/chibi/shiny.gbapal");
const u8 gMonIcon_CSunnyMilk[]          = INCBIN_U8 ("graphics/puppets/sunnymilk/chibi/icon.4bpp");
const u8 gMonFootprint_CSunnyMilk[]     = INCBIN_U8 ("graphics/puppets/sunnymilk/footprint.1bpp");

const u32 gMonFrontPic_SunnyMilk[]     = INCBIN_U32("graphics/puppets/sunnymilk/evolved/front.4bpp.lz");
const u32 gMonBackPic_SunnyMilk[]      = INCBIN_U32("graphics/puppets/sunnymilk/evolved/back.4bpp.lz");
const u16 gMonPalette_SunnyMilk[]      = INCBIN_U16("graphics/puppets/sunnymilk/evolved/normal.gbapal");
const u16 gMonShinyPalette_SunnyMilk[] = INCBIN_U16("graphics/puppets/sunnymilk/evolved/shiny.gbapal");
const u8 gMonIcon_SunnyMilk[]          = INCBIN_U8 ("graphics/puppets/sunnymilk/evolved/icon.4bpp");
const u8 gMonFootprint_SunnyMilk[]     = INCBIN_U8 ("graphics/puppets/sunnymilk/footprint.1bpp");

const u32 gMonFrontPic_ASunnyMilk[]     = INCBIN_U32("graphics/puppets/sunnymilk/attack/front.4bpp.lz");
const u32 gMonBackPic_ASunnyMilk[]      = INCBIN_U32("graphics/puppets/sunnymilk/attack/back.4bpp.lz");
const u16 gMonPalette_ASunnyMilk[]      = INCBIN_U16("graphics/puppets/sunnymilk/attack/normal.gbapal");
const u16 gMonShinyPalette_ASunnyMilk[] = INCBIN_U16("graphics/puppets/sunnymilk/attack/shiny.gbapal");
const u8 gMonIcon_ASunnyMilk[]          = INCBIN_U8 ("graphics/puppets/sunnymilk/attack/icon.4bpp");
const u8 gMonFootprint_ASunnyMilk[]     = INCBIN_U8 ("graphics/puppets/sunnymilk/footprint.1bpp");

const u32 gMonFrontPic_DSunnyMilk[]     = INCBIN_U32("graphics/puppets/sunnymilk/defense/front.4bpp.lz");
const u32 gMonBackPic_DSunnyMilk[]      = INCBIN_U32("graphics/puppets/sunnymilk/defense/back.4bpp.lz");
const u16 gMonPalette_DSunnyMilk[]      = INCBIN_U16("graphics/puppets/sunnymilk/defense/normal.gbapal");
const u16 gMonShinyPalette_DSunnyMilk[] = INCBIN_U16("graphics/puppets/sunnymilk/defense/shiny.gbapal");
const u8 gMonIcon_DSunnyMilk[]          = INCBIN_U8 ("graphics/puppets/sunnymilk/defense/icon.4bpp");
const u8 gMonFootprint_DSunnyMilk[]     = INCBIN_U8 ("graphics/puppets/sunnymilk/footprint.1bpp");

const u32 gMonFrontPic_CSuika[]     = INCBIN_U32("graphics/puppets/suika/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSuika[]      = INCBIN_U32("graphics/puppets/suika/chibi/back.4bpp.lz");
const u16 gMonPalette_CSuika[]      = INCBIN_U16("graphics/puppets/suika/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSuika[] = INCBIN_U16("graphics/puppets/suika/chibi/shiny.gbapal");
const u8 gMonIcon_CSuika[]          = INCBIN_U8 ("graphics/puppets/suika/chibi/icon.4bpp");
const u8 gMonFootprint_CSuika[]     = INCBIN_U8 ("graphics/puppets/suika/footprint.1bpp");

const u32 gMonFrontPic_Suika[]     = INCBIN_U32("graphics/puppets/suika/evolved/front.4bpp.lz");
const u32 gMonBackPic_Suika[]      = INCBIN_U32("graphics/puppets/suika/evolved/back.4bpp.lz");
const u16 gMonPalette_Suika[]      = INCBIN_U16("graphics/puppets/suika/evolved/normal.gbapal");
const u16 gMonShinyPalette_Suika[] = INCBIN_U16("graphics/puppets/suika/evolved/shiny.gbapal");
const u8 gMonIcon_Suika[]          = INCBIN_U8 ("graphics/puppets/suika/evolved/icon.4bpp");
const u8 gMonFootprint_Suika[]     = INCBIN_U8 ("graphics/puppets/suika/footprint.1bpp");

const u32 gMonFrontPic_ASuika[]     = INCBIN_U32("graphics/puppets/suika/attack/front.4bpp.lz");
const u32 gMonBackPic_ASuika[]      = INCBIN_U32("graphics/puppets/suika/attack/back.4bpp.lz");
const u16 gMonPalette_ASuika[]      = INCBIN_U16("graphics/puppets/suika/attack/normal.gbapal");
const u16 gMonShinyPalette_ASuika[] = INCBIN_U16("graphics/puppets/suika/attack/shiny.gbapal");
const u8 gMonIcon_ASuika[]          = INCBIN_U8 ("graphics/puppets/suika/attack/icon.4bpp");
const u8 gMonFootprint_ASuika[]     = INCBIN_U8 ("graphics/puppets/suika/footprint.1bpp");

const u32 gMonFrontPic_TSuika[]     = INCBIN_U32("graphics/puppets/suika/technic/front.4bpp.lz");
const u32 gMonBackPic_TSuika[]      = INCBIN_U32("graphics/puppets/suika/technic/back.4bpp.lz");
const u16 gMonPalette_TSuika[]      = INCBIN_U16("graphics/puppets/suika/technic/normal.gbapal");
const u16 gMonShinyPalette_TSuika[] = INCBIN_U16("graphics/puppets/suika/technic/shiny.gbapal");
const u8 gMonIcon_TSuika[]          = INCBIN_U8 ("graphics/puppets/suika/technic/icon.4bpp");
const u8 gMonFootprint_TSuika[]     = INCBIN_U8 ("graphics/puppets/suika/footprint.1bpp");

const u32 gMonFrontPic_MPSuika[]     = INCBIN_U32("graphics/puppets/suika/minuspower/front.4bpp.lz");
const u32 gMonBackPic_MPSuika[]      = INCBIN_U32("graphics/puppets/suika/minuspower/back.4bpp.lz");
const u16 gMonPalette_MPSuika[]      = INCBIN_U16("graphics/puppets/suika/minuspower/normal.gbapal");
const u16 gMonShinyPalette_MPSuika[] = INCBIN_U16("graphics/puppets/suika/minuspower/shiny.gbapal");
const u8 gMonIcon_MPSuika[]          = INCBIN_U8 ("graphics/puppets/suika/minuspower/icon.4bpp");
const u8 gMonFootprint_MPSuika[]     = INCBIN_U8 ("graphics/puppets/suika/footprint.1bpp");

const u32 gMonFrontPic_CIku[]     = INCBIN_U32("graphics/puppets/iku/chibi/front.4bpp.lz");
const u32 gMonBackPic_CIku[]      = INCBIN_U32("graphics/puppets/iku/chibi/back.4bpp.lz");
const u16 gMonPalette_CIku[]      = INCBIN_U16("graphics/puppets/iku/chibi/normal.gbapal");
const u16 gMonShinyPalette_CIku[] = INCBIN_U16("graphics/puppets/iku/chibi/shiny.gbapal");
const u8 gMonIcon_CIku[]          = INCBIN_U8 ("graphics/puppets/iku/chibi/icon.4bpp");
const u8 gMonFootprint_CIku[]     = INCBIN_U8 ("graphics/puppets/iku/footprint.1bpp");

const u32 gMonFrontPic_Iku[]     = INCBIN_U32("graphics/puppets/iku/evolved/front.4bpp.lz");
const u32 gMonBackPic_Iku[]      = INCBIN_U32("graphics/puppets/iku/evolved/back.4bpp.lz");
const u16 gMonPalette_Iku[]      = INCBIN_U16("graphics/puppets/iku/evolved/normal.gbapal");
const u16 gMonShinyPalette_Iku[] = INCBIN_U16("graphics/puppets/iku/evolved/shiny.gbapal");
const u8 gMonIcon_Iku[]          = INCBIN_U8 ("graphics/puppets/iku/evolved/icon.4bpp");
const u8 gMonFootprint_Iku[]     = INCBIN_U8 ("graphics/puppets/iku/footprint.1bpp");

const u32 gMonFrontPic_DIku[]     = INCBIN_U32("graphics/puppets/iku/defense/front.4bpp.lz");
const u32 gMonBackPic_DIku[]      = INCBIN_U32("graphics/puppets/iku/defense/back.4bpp.lz");
const u16 gMonPalette_DIku[]      = INCBIN_U16("graphics/puppets/iku/defense/normal.gbapal");
const u16 gMonShinyPalette_DIku[] = INCBIN_U16("graphics/puppets/iku/defense/shiny.gbapal");
const u8 gMonIcon_DIku[]          = INCBIN_U8 ("graphics/puppets/iku/defense/icon.4bpp");
const u8 gMonFootprint_DIku[]     = INCBIN_U8 ("graphics/puppets/iku/footprint.1bpp");

const u32 gMonFrontPic_TIku[]     = INCBIN_U32("graphics/puppets/iku/technic/front.4bpp.lz");
const u32 gMonBackPic_TIku[]      = INCBIN_U32("graphics/puppets/iku/technic/back.4bpp.lz");
const u16 gMonPalette_TIku[]      = INCBIN_U16("graphics/puppets/iku/technic/normal.gbapal");
const u16 gMonShinyPalette_TIku[] = INCBIN_U16("graphics/puppets/iku/technic/shiny.gbapal");
const u8 gMonIcon_TIku[]          = INCBIN_U8 ("graphics/puppets/iku/technic/icon.4bpp");
const u8 gMonFootprint_TIku[]     = INCBIN_U8 ("graphics/puppets/iku/footprint.1bpp");

const u32 gMonFrontPic_CTenshi[]     = INCBIN_U32("graphics/puppets/tenshi/chibi/front.4bpp.lz");
const u32 gMonBackPic_CTenshi[]      = INCBIN_U32("graphics/puppets/tenshi/chibi/back.4bpp.lz");
const u16 gMonPalette_CTenshi[]      = INCBIN_U16("graphics/puppets/tenshi/chibi/normal.gbapal");
const u16 gMonShinyPalette_CTenshi[] = INCBIN_U16("graphics/puppets/tenshi/chibi/shiny.gbapal");
const u8 gMonIcon_CTenshi[]          = INCBIN_U8 ("graphics/puppets/tenshi/chibi/icon.4bpp");
const u8 gMonFootprint_CTenshi[]     = INCBIN_U8 ("graphics/puppets/tenshi/footprint.1bpp");

const u32 gMonFrontPic_Tenshi[]     = INCBIN_U32("graphics/puppets/tenshi/evolved/front.4bpp.lz");
const u32 gMonBackPic_Tenshi[]      = INCBIN_U32("graphics/puppets/tenshi/evolved/back.4bpp.lz");
const u16 gMonPalette_Tenshi[]      = INCBIN_U16("graphics/puppets/tenshi/evolved/normal.gbapal");
const u16 gMonShinyPalette_Tenshi[] = INCBIN_U16("graphics/puppets/tenshi/evolved/shiny.gbapal");
const u8 gMonIcon_Tenshi[]          = INCBIN_U8 ("graphics/puppets/tenshi/evolved/icon.4bpp");
const u8 gMonFootprint_Tenshi[]     = INCBIN_U8 ("graphics/puppets/tenshi/footprint.1bpp");

const u32 gMonFrontPic_ATenshi[]     = INCBIN_U32("graphics/puppets/tenshi/attack/front.4bpp.lz");
const u32 gMonBackPic_ATenshi[]      = INCBIN_U32("graphics/puppets/tenshi/attack/back.4bpp.lz");
const u16 gMonPalette_ATenshi[]      = INCBIN_U16("graphics/puppets/tenshi/attack/normal.gbapal");
const u16 gMonShinyPalette_ATenshi[] = INCBIN_U16("graphics/puppets/tenshi/attack/shiny.gbapal");
const u8 gMonIcon_ATenshi[]          = INCBIN_U8 ("graphics/puppets/tenshi/attack/icon.4bpp");
const u8 gMonFootprint_ATenshi[]     = INCBIN_U8 ("graphics/puppets/tenshi/footprint.1bpp");

const u32 gMonFrontPic_DTenshi[]     = INCBIN_U32("graphics/puppets/tenshi/defense/front.4bpp.lz");
const u32 gMonBackPic_DTenshi[]      = INCBIN_U32("graphics/puppets/tenshi/defense/back.4bpp.lz");
const u16 gMonPalette_DTenshi[]      = INCBIN_U16("graphics/puppets/tenshi/defense/normal.gbapal");
const u16 gMonShinyPalette_DTenshi[] = INCBIN_U16("graphics/puppets/tenshi/defense/shiny.gbapal");
const u8 gMonIcon_DTenshi[]          = INCBIN_U8 ("graphics/puppets/tenshi/defense/icon.4bpp");
const u8 gMonFootprint_DTenshi[]     = INCBIN_U8 ("graphics/puppets/tenshi/footprint.1bpp");

const u32 gMonFrontPic_Goliath[]     = INCBIN_U32("graphics/puppets/alicedolls/goliath/front.4bpp.lz");
const u32 gMonBackPic_Goliath[]      = INCBIN_U32("graphics/puppets/alicedolls/goliath/back.4bpp.lz");
const u16 gMonPalette_Goliath[]      = INCBIN_U16("graphics/puppets/alicedolls/goliath/normal.gbapal");
const u16 gMonShinyPalette_Goliath[] = INCBIN_U16("graphics/puppets/alicedolls/goliath/shiny.gbapal");
const u8 gMonIcon_Goliath[]          = INCBIN_U8 ("graphics/puppets/alicedolls/goliath/icon.4bpp");
const u8 gMonFootprint_Goliath[]     = INCBIN_U8 ("graphics/puppets/alicedolls/footprint.1bpp");

const u32 gMonFrontPic_Namazu[]     = INCBIN_U32("graphics/puppets/namazu/evolved/front.4bpp.lz");
const u32 gMonBackPic_Namazu[]      = INCBIN_U32("graphics/puppets/namazu/evolved/back.4bpp.lz");
const u16 gMonPalette_Namazu[]      = INCBIN_U16("graphics/puppets/namazu/evolved/normal.gbapal");
const u16 gMonShinyPalette_Namazu[] = INCBIN_U16("graphics/puppets/namazu/evolved/shiny.gbapal");
const u8 gMonIcon_Namazu[]          = INCBIN_U8 ("graphics/puppets/namazu/evolved/icon.4bpp");
const u8 gMonFootprint_Namazu[]     = INCBIN_U8 ("graphics/puppets/namazu/footprint.1bpp");

const u32 gMonFrontPic_Tensoku[]     = INCBIN_U32("graphics/puppets/tensoku/evolved/front.4bpp.lz");
const u32 gMonBackPic_Tensoku[]      = INCBIN_U32("graphics/puppets/tensoku/evolved/back.4bpp.lz");
const u16 gMonPalette_Tensoku[]      = INCBIN_U16("graphics/puppets/tensoku/evolved/normal.gbapal");
const u16 gMonShinyPalette_Tensoku[] = INCBIN_U16("graphics/puppets/tensoku/evolved/shiny.gbapal");
const u8 gMonIcon_Tensoku[]          = INCBIN_U8 ("graphics/puppets/tensoku/evolved/icon.4bpp");
const u8 gMonFootprint_Tensoku[]     = INCBIN_U8 ("graphics/puppets/tensoku/footprint.1bpp");

const u32 gMonFrontPic_GTensoku[]     = INCBIN_U32("graphics/puppets/tensoku/golden/front.4bpp.lz");
const u32 gMonBackPic_GTensoku[]      = INCBIN_U32("graphics/puppets/tensoku/golden/back.4bpp.lz");
const u16 gMonPalette_GTensoku[]      = INCBIN_U16("graphics/puppets/tensoku/golden/normal.gbapal");
const u16 gMonShinyPalette_GTensoku[] = INCBIN_U16("graphics/puppets/tensoku/golden/shiny.gbapal");
const u8 gMonIcon_GTensoku[]          = INCBIN_U8 ("graphics/puppets/tensoku/golden/icon.4bpp");
const u8 gMonFootprint_GTensoku[]     = INCBIN_U8 ("graphics/puppets/tensoku/footprint.1bpp");

const u32 gMonFrontPic_CHatate[]     = INCBIN_U32("graphics/puppets/hatate/chibi/front.4bpp.lz");
const u32 gMonBackPic_CHatate[]      = INCBIN_U32("graphics/puppets/hatate/chibi/back.4bpp.lz");
const u16 gMonPalette_CHatate[]      = INCBIN_U16("graphics/puppets/hatate/chibi/normal.gbapal");
const u16 gMonShinyPalette_CHatate[] = INCBIN_U16("graphics/puppets/hatate/chibi/shiny.gbapal");
const u8 gMonIcon_CHatate[]          = INCBIN_U8 ("graphics/puppets/hatate/chibi/icon.4bpp");
const u8 gMonFootprint_CHatate[]     = INCBIN_U8 ("graphics/puppets/hatate/footprint.1bpp");

const u32 gMonFrontPic_Hatate[]     = INCBIN_U32("graphics/puppets/hatate/evolved/front.4bpp.lz");
const u32 gMonBackPic_Hatate[]      = INCBIN_U32("graphics/puppets/hatate/evolved/back.4bpp.lz");
const u16 gMonPalette_Hatate[]      = INCBIN_U16("graphics/puppets/hatate/evolved/normal.gbapal");
const u16 gMonShinyPalette_Hatate[] = INCBIN_U16("graphics/puppets/hatate/evolved/shiny.gbapal");
const u8 gMonIcon_Hatate[]          = INCBIN_U8 ("graphics/puppets/hatate/evolved/icon.4bpp");
const u8 gMonFootprint_Hatate[]     = INCBIN_U8 ("graphics/puppets/hatate/footprint.1bpp");

const u32 gMonFrontPic_DHatate[]     = INCBIN_U32("graphics/puppets/hatate/defense/front.4bpp.lz");
const u32 gMonBackPic_DHatate[]      = INCBIN_U32("graphics/puppets/hatate/defense/back.4bpp.lz");
const u16 gMonPalette_DHatate[]      = INCBIN_U16("graphics/puppets/hatate/defense/normal.gbapal");
const u16 gMonShinyPalette_DHatate[] = INCBIN_U16("graphics/puppets/hatate/defense/shiny.gbapal");
const u8 gMonIcon_DHatate[]          = INCBIN_U8 ("graphics/puppets/hatate/defense/icon.4bpp");
const u8 gMonFootprint_DHatate[]     = INCBIN_U8 ("graphics/puppets/hatate/footprint.1bpp");

const u32 gMonFrontPic_THatate[]     = INCBIN_U32("graphics/puppets/hatate/technic/front.4bpp.lz");
const u32 gMonBackPic_THatate[]      = INCBIN_U32("graphics/puppets/hatate/technic/back.4bpp.lz");
const u16 gMonPalette_THatate[]      = INCBIN_U16("graphics/puppets/hatate/technic/normal.gbapal");
const u16 gMonShinyPalette_THatate[] = INCBIN_U16("graphics/puppets/hatate/technic/shiny.gbapal");
const u8 gMonIcon_THatate[]          = INCBIN_U8 ("graphics/puppets/hatate/technic/icon.4bpp");
const u8 gMonFootprint_THatate[]     = INCBIN_U8 ("graphics/puppets/hatate/footprint.1bpp");

const u32 gMonFrontPic_CKokoro[]     = INCBIN_U32("graphics/puppets/kokoro/chibi/front.4bpp.lz");
const u32 gMonBackPic_CKokoro[]      = INCBIN_U32("graphics/puppets/kokoro/chibi/back.4bpp.lz");
const u16 gMonPalette_CKokoro[]      = INCBIN_U16("graphics/puppets/kokoro/chibi/normal.gbapal");
const u16 gMonShinyPalette_CKokoro[] = INCBIN_U16("graphics/puppets/kokoro/chibi/shiny.gbapal");
const u8 gMonIcon_CKokoro[]          = INCBIN_U8 ("graphics/puppets/kokoro/chibi/icon.4bpp");
const u8 gMonFootprint_CKokoro[]     = INCBIN_U8 ("graphics/puppets/kokoro/footprint.1bpp");

const u32 gMonFrontPic_Kokoro[]     = INCBIN_U32("graphics/puppets/kokoro/evolved/front.4bpp.lz");
const u32 gMonBackPic_Kokoro[]      = INCBIN_U32("graphics/puppets/kokoro/evolved/back.4bpp.lz");
const u16 gMonPalette_Kokoro[]      = INCBIN_U16("graphics/puppets/kokoro/evolved/normal.gbapal");
const u16 gMonShinyPalette_Kokoro[] = INCBIN_U16("graphics/puppets/kokoro/evolved/shiny.gbapal");
const u8 gMonIcon_Kokoro[]          = INCBIN_U8 ("graphics/puppets/kokoro/evolved/icon.4bpp");
const u8 gMonFootprint_Kokoro[]     = INCBIN_U8 ("graphics/puppets/kokoro/footprint.1bpp");

const u32 gMonFrontPic_AKokoro[]     = INCBIN_U32("graphics/puppets/kokoro/attack/front.4bpp.lz");
const u32 gMonBackPic_AKokoro[]      = INCBIN_U32("graphics/puppets/kokoro/attack/back.4bpp.lz");
const u16 gMonPalette_AKokoro[]      = INCBIN_U16("graphics/puppets/kokoro/attack/normal.gbapal");
const u16 gMonShinyPalette_AKokoro[] = INCBIN_U16("graphics/puppets/kokoro/attack/shiny.gbapal");
const u8 gMonIcon_AKokoro[]          = INCBIN_U8 ("graphics/puppets/kokoro/attack/icon.4bpp");
const u8 gMonFootprint_AKokoro[]     = INCBIN_U8 ("graphics/puppets/kokoro/footprint.1bpp");

const u32 gMonFrontPic_CSumireko[]     = INCBIN_U32("graphics/puppets/sumireko/chibi/front.4bpp.lz");
const u32 gMonBackPic_CSumireko[]      = INCBIN_U32("graphics/puppets/sumireko/chibi/back.4bpp.lz");
const u16 gMonPalette_CSumireko[]      = INCBIN_U16("graphics/puppets/sumireko/chibi/normal.gbapal");
const u16 gMonShinyPalette_CSumireko[] = INCBIN_U16("graphics/puppets/sumireko/chibi/shiny.gbapal");
const u8 gMonIcon_CSumireko[]          = INCBIN_U8 ("graphics/puppets/sumireko/chibi/icon.4bpp");
const u8 gMonFootprint_CSumireko[]     = INCBIN_U8 ("graphics/puppets/sumireko/footprint.1bpp");

const u32 gMonFrontPic_Sumireko[]     = INCBIN_U32("graphics/puppets/sumireko/evolved/front.4bpp.lz");
const u32 gMonBackPic_Sumireko[]      = INCBIN_U32("graphics/puppets/sumireko/evolved/back.4bpp.lz");
const u16 gMonPalette_Sumireko[]      = INCBIN_U16("graphics/puppets/sumireko/evolved/normal.gbapal");
const u16 gMonShinyPalette_Sumireko[] = INCBIN_U16("graphics/puppets/sumireko/evolved/shiny.gbapal");
const u8 gMonIcon_Sumireko[]          = INCBIN_U8 ("graphics/puppets/sumireko/evolved/icon.4bpp");
const u8 gMonFootprint_Sumireko[]     = INCBIN_U8 ("graphics/puppets/sumireko/footprint.1bpp");

const u32 gMonFrontPic_CJoon[]     = INCBIN_U32("graphics/puppets/joon/chibi/front.4bpp.lz");
const u32 gMonBackPic_CJoon[]      = INCBIN_U32("graphics/puppets/joon/chibi/back.4bpp.lz");
const u16 gMonPalette_CJoon[]      = INCBIN_U16("graphics/puppets/joon/chibi/normal.gbapal");
const u16 gMonShinyPalette_CJoon[] = INCBIN_U16("graphics/puppets/joon/chibi/shiny.gbapal");
const u8 gMonIcon_CJoon[]          = INCBIN_U8 ("graphics/puppets/joon/chibi/icon.4bpp");
const u8 gMonFootprint_CJoon[]     = INCBIN_U8 ("graphics/puppets/joon/footprint.1bpp");

const u32 gMonFrontPic_Joon[]     = INCBIN_U32("graphics/puppets/joon/evolved/front.4bpp.lz");
const u32 gMonBackPic_Joon[]      = INCBIN_U32("graphics/puppets/joon/evolved/back.4bpp.lz");
const u16 gMonPalette_Joon[]      = INCBIN_U16("graphics/puppets/joon/evolved/normal.gbapal");
const u16 gMonShinyPalette_Joon[] = INCBIN_U16("graphics/puppets/joon/evolved/shiny.gbapal");
const u8 gMonIcon_Joon[]          = INCBIN_U8 ("graphics/puppets/joon/evolved/icon.4bpp");
const u8 gMonFootprint_Joon[]     = INCBIN_U8 ("graphics/puppets/joon/footprint.1bpp");

const u32 gMonFrontPic_AJoon[]     = INCBIN_U32("graphics/puppets/joon/attack/front.4bpp.lz");
const u32 gMonBackPic_AJoon[]      = INCBIN_U32("graphics/puppets/joon/attack/back.4bpp.lz");
const u16 gMonPalette_AJoon[]      = INCBIN_U16("graphics/puppets/joon/attack/normal.gbapal");
const u16 gMonShinyPalette_AJoon[] = INCBIN_U16("graphics/puppets/joon/attack/shiny.gbapal");
const u8 gMonIcon_AJoon[]          = INCBIN_U8 ("graphics/puppets/joon/attack/icon.4bpp");
const u8 gMonFootprint_AJoon[]     = INCBIN_U8 ("graphics/puppets/joon/footprint.1bpp");

const u32 gMonFrontPic_CShion[]     = INCBIN_U32("graphics/puppets/shion/chibi/front.4bpp.lz");
const u32 gMonBackPic_CShion[]      = INCBIN_U32("graphics/puppets/shion/chibi/back.4bpp.lz");
const u16 gMonPalette_CShion[]      = INCBIN_U16("graphics/puppets/shion/chibi/normal.gbapal");
const u16 gMonShinyPalette_CShion[] = INCBIN_U16("graphics/puppets/shion/chibi/shiny.gbapal");
const u8 gMonIcon_CShion[]          = INCBIN_U8 ("graphics/puppets/shion/chibi/icon.4bpp");
const u8 gMonFootprint_CShion[]     = INCBIN_U8 ("graphics/puppets/shion/footprint.1bpp");

const u32 gMonFrontPic_Shion[]     = INCBIN_U32("graphics/puppets/shion/evolved/front.4bpp.lz");
const u32 gMonBackPic_Shion[]      = INCBIN_U32("graphics/puppets/shion/evolved/back.4bpp.lz");
const u16 gMonPalette_Shion[]      = INCBIN_U16("graphics/puppets/shion/evolved/normal.gbapal");
const u16 gMonShinyPalette_Shion[] = INCBIN_U16("graphics/puppets/shion/evolved/shiny.gbapal");
const u8 gMonIcon_Shion[]          = INCBIN_U8 ("graphics/puppets/shion/evolved/icon.4bpp");
const u8 gMonFootprint_Shion[]     = INCBIN_U8 ("graphics/puppets/shion/footprint.1bpp");

const u32 gMonFrontPic_SShion[]     = INCBIN_U32("graphics/puppets/shion/speed/front.4bpp.lz");
const u32 gMonBackPic_SShion[]      = INCBIN_U32("graphics/puppets/shion/speed/back.4bpp.lz");
const u16 gMonPalette_SShion[]      = INCBIN_U16("graphics/puppets/shion/speed/normal.gbapal");
const u16 gMonShinyPalette_SShion[] = INCBIN_U16("graphics/puppets/shion/speed/shiny.gbapal");
const u8 gMonIcon_SShion[]          = INCBIN_U8 ("graphics/puppets/shion/speed/icon.4bpp");
const u8 gMonFootprint_SShion[]     = INCBIN_U8 ("graphics/puppets/shion/footprint.1bpp");

const u32 gMonFrontPic_Yorigamisisters[]     = INCBIN_U32("graphics/puppets/yorigamisisters/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yorigamisisters[]      = INCBIN_U32("graphics/puppets/yorigamisisters/evolved/back.4bpp.lz");
const u16 gMonPalette_Yorigamisisters[]      = INCBIN_U16("graphics/puppets/yorigamisisters/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yorigamisisters[] = INCBIN_U16("graphics/puppets/yorigamisisters/evolved/shiny.gbapal");
const u8 gMonIcon_Yorigamisisters[]          = INCBIN_U8 ("graphics/puppets/yorigamisisters/evolved/icon.4bpp");
const u8 gMonFootprint_Yorigamisisters[]     = INCBIN_U8 ("graphics/puppets/yorigamisisters/footprint.1bpp");

const u32 gMonFrontPic_CYuuma[]     = INCBIN_U32("graphics/puppets/yuuma/chibi/front.4bpp.lz");
const u32 gMonBackPic_CYuuma[]      = INCBIN_U32("graphics/puppets/yuuma/chibi/back.4bpp.lz");
const u16 gMonPalette_CYuuma[]      = INCBIN_U16("graphics/puppets/yuuma/chibi/normal.gbapal");
const u16 gMonShinyPalette_CYuuma[] = INCBIN_U16("graphics/puppets/yuuma/chibi/shiny.gbapal");
const u8 gMonIcon_CYuuma[]          = INCBIN_U8 ("graphics/puppets/yuuma/chibi/icon.4bpp");
const u8 gMonFootprint_CYuuma[]     = INCBIN_U8 ("graphics/puppets/yuuma/footprint.1bpp");

const u32 gMonFrontPic_Yuuma[]     = INCBIN_U32("graphics/puppets/yuuma/evolved/front.4bpp.lz");
const u32 gMonBackPic_Yuuma[]      = INCBIN_U32("graphics/puppets/yuuma/evolved/back.4bpp.lz");
const u16 gMonPalette_Yuuma[]      = INCBIN_U16("graphics/puppets/yuuma/evolved/normal.gbapal");
const u16 gMonShinyPalette_Yuuma[] = INCBIN_U16("graphics/puppets/yuuma/evolved/shiny.gbapal");
const u8 gMonIcon_Yuuma[]          = INCBIN_U8 ("graphics/puppets/yuuma/evolved/icon.4bpp");
const u8 gMonFootprint_Yuuma[]     = INCBIN_U8 ("graphics/puppets/yuuma/footprint.1bpp");
