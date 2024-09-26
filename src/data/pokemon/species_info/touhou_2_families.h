#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou2[] =
{
#endif 

    [SPECIES_CKIRISAME] =
    {
        .speciesName = _("Kirisame{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_KIRISAME}),
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 115,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_REASON, TYPE_REASON),
        .catchRate = 45,
        .expYield = 120,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FLYING),
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_FLASH_FIRE},
        .safariZoneFleeRate = 20,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CKIRISAME,
        .sourceGame = SOURCE_SOEW,
        .categoryName = _("Witch"),
        .height = 8,
        .weight = 133,
        .description = COMPOUND_STRING(
        "A witch who's proud of her power,\n"
        "but still has a long way to go."),
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CKirisame,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CKirisame,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CKirisame,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CKirisame,
        .shinyPalette = gMonShinyPalette_CKirisame,
        .iconSprite = gMonIcon_CKirisame,
        .iconPalIndex = 1,
        FOOTPRINT(CKirisame)
        .levelUpLearnset = sCKirisameLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCKirisameTeachableLearnset,
    },

    [SPECIES_KIRISAME] =
    {
        .speciesName = _("Kirisame"),
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_REASON, TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = 200,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 3,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FLYING),
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_FLASH_FIRE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_KIRISAME,
        .sourceGame = SOURCE_SOEW,
        .categoryName = _("Witch"),
        .height = 14,
        .weight = 615,
        .description = COMPOUND_STRING(
        "A cheerful witch who learned\n"
        "some magic from her teacher, Mima.\n"
        "Enjoys lasers."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kirisame,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kirisame,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Kirisame,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Kirisame,
        .shinyPalette = gMonShinyPalette_Kirisame,
        .iconSprite = gMonIcon_Kirisame,
        .iconPalIndex = 1,
        FOOTPRINT(Kirisame)
        .levelUpLearnset = sKirisameLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sKirisameTeachableLearnset,
    },

    #if P_TOUHOU2_PUPPETS  

    [SPECIES_GENJII] =
    {
        .speciesName = _("Genjii"),
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 220,
        .baseSpeed     = 60,
        .baseSpAttack  = 10,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_EARTH, TYPE_FLYING),
        .catchRate = 120,
        .expYield = 65,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 2,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD,EGG_GROUP_FLYING),
        .abilities = {ABILITY_STURDY, ABILITY_NONE},
        .safariZoneFleeRate = 50,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_GENJII,
        .sourceGame = SOURCE_SOEW,
        .categoryName = _("Penyu"),
        .height = 9,
        .weight = 64,
        .description = COMPOUND_STRING(
        "A long lived flying turtle. Is currently\n"
        "living in a pond behind the shrine."),
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Genjii,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Genjii,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Genjii,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Genjii,
        .shinyPalette = gMonShinyPalette_Genjii,
        .iconSprite = gMonIcon_Genjii,
        .iconPalIndex = 1,
        FOOTPRINT(Genjii)
        .levelUpLearnset = sGenjiiLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sGenjiiTeachableLearnset,
    },

    [SPECIES_CRIKA] =
    {
        .speciesName = _("Rika{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_RIKA}),
        .baseHP        = 60,
        .baseAttack    = 10,
        .baseDefense   = 80,
        .baseSpeed     = 20,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL,TYPE_STEEL),
        .catchRate = 190,
        .expYield = 70,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 1,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_MINERAL),
        .abilities = {ABILITY_STURDY, ABILITY_STURDY},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CRIKA,
        .sourceGame = SOURCE_SOEW,
        .categoryName = _("Engineer"),
        .height = 8,
        .weight = 115,
        .description = COMPOUND_STRING(
            "A mechanic that can make all\n"
            "sorts of things. Her favorite's the\n"
            "Flower Tank."),
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CRika,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CRika,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CRika,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CRika,
        .shinyPalette = gMonShinyPalette_CRika,
        .iconSprite = gMonIcon_CRika,
        .iconPalIndex = 1,
        FOOTPRINT(CRika)
        .levelUpLearnset = sCRikaLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCRikaTeachableLearnset,
    },

    [SPECIES_RIKA] =
    {
        .speciesName = _("Rika"),
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 75,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL,TYPE_DARK),
        .catchRate = 45,
        .expYield = 230,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 3,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_MINERAL),
        .abilities = {ABILITY_STURDY, ABILITY_PRESSURE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_RIKA,
        .sourceGame = SOURCE_SOEW,
        .categoryName = _("Engineer"),
        .height = 3,
        .weight = 18,
        .description = COMPOUND_STRING(
            "Strangely able to create monsters\n"
            "and ghosts, but still likes the\n"
            "Flower Tank the most."),
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rika,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rika,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Rika,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Rika,
        .shinyPalette = gMonShinyPalette_Rika,
        .iconSprite = gMonIcon_Rika,
        .iconPalIndex = 0,
        FOOTPRINT(Rika)
        .levelUpLearnset = sRikaLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sRikaTeachableLearnset,
    },

    [SPECIES_CMEIRA] =
    {
        .speciesName = _("Meira{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MEIRA}),
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 45,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_STEEL,TYPE_STEEL),
        .catchRate = 190,
        .expYield = 110,
        .evYield_HP        = 0,
        .evYield_Attack    = 2,
        .evYield_Defense   = 0,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CMEIRA,
        .sourceGame = SOURCE_SOEW,
        .categoryName = _("Samurari"),
        .height = 11,
        .weight = 335,
        .description = COMPOUND_STRING(
        "A samurai who wanted the power of the\n"
        "Hakurei family, but was quickly defeated"),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CMeira,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CMeira,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CMeira,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CMeira,
        .shinyPalette = gMonShinyPalette_CMeira,
        .iconSprite = gMonIcon_CMeira,
        .iconPalIndex = 1,
        FOOTPRINT(CMeira)
        .levelUpLearnset = sCMeiraLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCMeiraTeachableLearnset,
    },

    [SPECIES_MEIRA] =
    {
        .speciesName = _("Meira"),
        .baseHP        = 70,
        .baseAttack    = 125,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_STEEL,TYPE_STEEL),
        .catchRate = 45,
        .expYield = 200,
        .evYield_HP        = 0,
        .evYield_Attack    = 2,
        .evYield_Defense   = 0,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_MEIRA,
        .sourceGame = SOURCE_SOEW,
        .categoryName = _("Samurai"),
        .height = 18,
        .weight = 750,
        .description = COMPOUND_STRING(
        "Capable of using many sword skills.\n"
        "She tends to move under the\n"
        "cover of night."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Meira,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Meira,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Meira,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Meira,
        .shinyPalette = gMonShinyPalette_Meira,
        .iconSprite = gMonIcon_Meira,
        .iconPalIndex = 1,
        FOOTPRINT(Meira)
        .levelUpLearnset = sMeiraLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sMeiraTeachableLearnset,
    },

    [SPECIES_MAGICSTONES] =
    {
        .speciesName = _("Magic Stones"),
        .baseHP        = 85,
        .baseAttack    = 60,
        .baseDefense   = 125,
        .baseSpeed     = 5,
        .baseSpAttack  = 130,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_REASON,TYPE_REASON),
        .catchRate = 1,
        .expYield = 190,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 1,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 120,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS,EGG_GROUP_MINERAL),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_MAGICSTONES,
        .sourceGame = SOURCE_SOEW,
        .categoryName = _("Sentinel"),
        .height = 17,
        .weight = 608,
        .description = COMPOUND_STRING(
        "Five Magic Spheres serving as gatekeepers.\n"
        "It is unclear if they are even living beings,\n"
        "a material made of stone or some machine."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_MagicStones,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MagicStones,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_MagicStones,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_MagicStones,
        .shinyPalette = gMonShinyPalette_MagicStones,
        .iconSprite = gMonIcon_MagicStones,
        .iconPalIndex = 0,
        FOOTPRINT(MagicStones)
        .isMythical = TRUE,
        .levelUpLearnset = sMagicStonesLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sMagicStonesTeachableLearnset,
    },

    #endif //P_TOUHOU2_PUPPETS


#ifdef __INTELLISENSE__
};
#endif