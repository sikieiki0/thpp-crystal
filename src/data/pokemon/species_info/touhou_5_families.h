#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou5[] =
{
#endif

    [SPECIES_CARISU] =
    {
        .speciesName = _("Arisu{CHIBI}"), // CAlice is taken so JP name 
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_ARISU}),
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 95,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_DREAM),
        .catchRate = 45,
        .expYield = 90,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 1,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 20,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CARISU,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Wonderland"),
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(
        "A child in a strange world.\n"
        "She prefers to use tactics over raw\n"
        "power."),
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CArisu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CArisu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CArisu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CArisu,
        .shinyPalette = gMonShinyPalette_CArisu,
        .iconSprite = gMonIcon_CArisu,
        .iconPalIndex = 1,
        FOOTPRINT(CArisu)
        .levelUpLearnset = sCArisuLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCArisuTeachableLearnset,
    },

    [SPECIES_ARISU] =
    {
        .speciesName = _("Arisu"),   // Alice is taken so JP name 
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 120,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_DREAM),
        .catchRate = 45,
        .expYield = 220,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 3,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_ARISU,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Wonderland"),
        .height = 3,
        .weight = 15,
        .description = COMPOUND_STRING(
        "Having unsealed the grimoire, her\n"
        "powers increased exponentially. She\n"
        "is a dangerous opponent in this state"),
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arisu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Arisu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Arisu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Arisu,
        .shinyPalette = gMonShinyPalette_Arisu,
        .iconSprite = gMonIcon_Arisu,
        .iconPalIndex = 1,
        FOOTPRINT(Arisu)
        .levelUpLearnset = sArisuLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sArisuTeachableLearnset,
    },

    #if P_TOUHOU5_PUPPETS  

    [SPECIES_CSARA] =
    {
        .speciesName = _("Sara{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_SARA}),
        .baseHP        = 115,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 15,
        .baseSpAttack  = 15,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FIGHTING,TYPE_FIGHTING),
        .catchRate = 75,
        .expYield = 120,
        .evYield_HP        = 1,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FIELD),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CSARA,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Gatekeeper"),
        .height = 5,
        .weight = 120,
        .description = COMPOUND_STRING(
        "For some reason, Sara is entrusted\n"
        "as the gatekeeper of Maikai."),
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CSara,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CSara,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CSara,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CSara,
        .shinyPalette = gMonShinyPalette_CSara,
        .iconSprite = gMonIcon_CSara,
        .iconPalIndex = 0,
        FOOTPRINT(CSara)
        .levelUpLearnset = sCSaraLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCSaraTeachableLearnset,
    },

    [SPECIES_SARA] =
    {
        .speciesName = _("Sara"),
        .baseHP        = 140,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_FIGHTING,TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 180,
        .evYield_HP        = 3,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FIELD),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_SARA,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Gatekeeper"),
        .height = 12,
        .weight = 225,
        .description = COMPOUND_STRING(
        "Protects the gate to Makai in a mountain\n"
        "cave. As such, a total hermit."),
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sara,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sara,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Sara,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Sara,
        .shinyPalette = gMonShinyPalette_Sara,
        .iconSprite = gMonIcon_Sara,
        .iconPalIndex = 0,
        FOOTPRINT(Sara)
        .levelUpLearnset = sSaraLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sSaraTeachableLearnset,
    },

    [SPECIES_CLUIZE] =
    {
        .speciesName = _("Luize{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_LUIZE}),
        .baseHP        = 65,
        .baseAttack    = 35,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 75,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_SPIRIT,TYPE_SPIRIT),
        .catchRate = 150,
        .expYield = 110,
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
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CLUIZE,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Demon"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
        "Somehow, she manages to communicate\n"
        "just fine with people despite having\n"
        "her eyes closed."),
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CLuize,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CLuize,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CLuize,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CLuize,
        .shinyPalette = gMonShinyPalette_CLuize,
        .iconSprite = gMonIcon_CLuize,
        .iconPalIndex = 1,
        FOOTPRINT(CLuize)
        .levelUpLearnset = sCLuizeLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCLuizeTeachableLearnset,
    },

    [SPECIES_LUIZE] =
    {
        .speciesName = _("Luize"),
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_SPIRIT,TYPE_SPIRIT),
        .catchRate = 45,
        .expYield = 180,
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
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_LUIZE,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Demon"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING(
        "She really wants to go to the Human\n"
        "World for sightseeing. Quite polite."),
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Luize,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Luize,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Luize,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Luize,
        .shinyPalette = gMonShinyPalette_Luize,
        .iconSprite = gMonIcon_Luize,
        .iconPalIndex = 1,
        FOOTPRINT(Luize)
        .levelUpLearnset = sLuizeLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sLuizeTeachableLearnset,
    },

    [SPECIES_CYUKI] =
    {
        .speciesName = _("Yuki{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_YUKI}),
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 5,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE,TYPE_FIRE),
        .catchRate = 45,
        .expYield = 105,
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
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_BLAZE, ABILITY_INTIMIDATE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CYUKI,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Fire Witch"),
        .height = 7,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Capable of using fire magic.\n"
            "A cheerful and vocial girl."),
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CYuki,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CYuki,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CYuki,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CYuki,
        .shinyPalette = gMonShinyPalette_CYuki,
        .iconSprite = gMonIcon_CYuki,
        .iconPalIndex = 1,
        FOOTPRINT(CYuki)
        .levelUpLearnset = sCYukiLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCYukiTeachableLearnset,
    },

    [SPECIES_YUKI] =
    {
        .speciesName = _("Yuki"),
        .baseHP        = 95,
        .baseAttack    = 80,
        .baseDefense   = 30,
        .baseSpeed     = 110,
        .baseSpAttack  = 115,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FIRE,TYPE_FIRE),
        .catchRate = 45,
        .expYield = 190,
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
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_BLAZE, ABILITY_INTIMIDATE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_YUKI,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Fire Witch"),
        .height = 7,
        .weight = 177,
        .description = COMPOUND_STRING(
            "Prefers fire, but hangs\n"
            "out with an ice witch."),
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yuki,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Yuki,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Yuki,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Yuki,
        .shinyPalette = gMonShinyPalette_Yuki,
        .iconSprite = gMonIcon_Yuki,
        .iconPalIndex = 1,
        FOOTPRINT(Yuki)
        .levelUpLearnset = sYukiLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sYukiTeachableLearnset,
    },

    [SPECIES_CMAI] =
    {
        .speciesName = _("Mai{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_MAI}),
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 75,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ICE,TYPE_DARK),
        .expYield = 105,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_INSOMNIA, ABILITY_RAIN_DISH},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CMAI,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Ice Witch"),
        .height = 13,
        .weight = 285,
        .description = COMPOUND_STRING(
            "The opposite of Yuki, Mai is quitere\n"
            "but more charming."),
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CMai,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CMai,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CMai,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CMai,
        .shinyPalette = gMonShinyPalette_CMai,
        .iconSprite = gMonIcon_CMai,
        .iconPalIndex = 1,
        FOOTPRINT(CMai)
        .levelUpLearnset = sCMaiLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCMaiTeachableLearnset,
    },

    [SPECIES_MAI] =
    {
        .speciesName = _("Mai"),
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_ICE,TYPE_DARK),
        .catchRate = 45,
        .expYield = 190,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 3,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_SILK_SCARF,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_INSOMNIA, ABILITY_RAIN_DISH},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_MAI,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Ice Witch"),
        .height = 15,
        .weight = 415,
        .description = COMPOUND_STRING(
            "Mai uses ice magic to attack.\n"
            "This quite resembles some\n"
            "other idiot..."),
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mai,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Mai,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Mai,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Mai,
        .shinyPalette = gMonShinyPalette_Mai,
        .iconSprite = gMonIcon_Mai,
        .iconPalIndex = 1,
        FOOTPRINT(Mai)
        .levelUpLearnset = sMaiLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sMaiTeachableLearnset,
    },

    [SPECIES_CYUMEKO] =
    {
        .speciesName = _("Yumeko{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_YUMEKO}),
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_STEEL,TYPE_DARK),
        .catchRate = 65,
        .expYield = 125,
        .evYield_HP        = 0,
        .evYield_Attack    = 1,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FIELD),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CYUMEKO,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Maid"),
        .height = 8,
        .weight = 285,
        .description = COMPOUND_STRING(
            "A strange resident of Makai,\n"
            "all dressed in red."),
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CYumeko,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CYumeko,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CYumeko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CYumeko,
        .shinyPalette = gMonShinyPalette_CYumeko,
        .iconSprite = gMonIcon_CYumeko,
        .iconPalIndex = 1,
        FOOTPRINT(CYumeko)
        .levelUpLearnset = sCYumekoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCYumekoTeachableLearnset,
    },

    [SPECIES_YUMEKO] =
    {
        .speciesName = _("Yumeko"),
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL,TYPE_DARK),
        .catchRate = 45,
        .expYield = 220,
        .evYield_HP        = 0,
        .evYield_Attack    = 3,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FIELD),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_YUMEKO,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Maid"),
        .height = 12,
        .weight = 380,
        .description = COMPOUND_STRING(
            "Serves the powerful Shinki.\n"
            "Throws sword at people, somehow.\n"),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yumeko,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Yumeko,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Yumeko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Yumeko,
        .shinyPalette = gMonShinyPalette_Yumeko,
        .iconSprite = gMonIcon_Yumeko,
        .iconPalIndex = 1,
        FOOTPRINT(Yumeko)
        .levelUpLearnset = sYumekoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sYumekoTeachableLearnset,
    },

    [SPECIES_CSHINKI] =
    {
        .speciesName = _("Shinki{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_SHINKI}),
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 95,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_DARK,TYPE_HOLY),
        .catchRate = 45,
        .expYield = 180,
        .evYield_HP        = 0,
        .evYield_Attack    = 2,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_SILK_SCARF,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FLYING),
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CSHINKI,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Deity"),
        .height = 11,
        .weight = 339,
        .description = COMPOUND_STRING(
            "The creator of Makai. Her immense\n"
            "presence causes her to be respected\n"
            "as a goddess."),
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CShinki,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CShinki,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CShinki,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CShinki,
        .shinyPalette = gMonShinyPalette_CShinki,
        .iconSprite = gMonIcon_CShinki,
        .iconPalIndex = 1,
        FOOTPRINT(CShinki)
        .levelUpLearnset = sCShinkiLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCShinkiTeachableLearnset,
    },

    [SPECIES_SHINKI] =
    {
        .speciesName = _("Shinki"),
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 60,
        .baseSpAttack  = 120,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK,TYPE_HOLY),
        .catchRate = 45,
        .expYield = 255,
        .evYield_HP        = 0,
        .evYield_Attack    = 3,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FLYING),
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_SHINKI,
        .sourceGame = SOURCE_MS,
        .categoryName = _("Deity"),
        .height = 4,
        .weight = 5,
        .description = COMPOUND_STRING(
            "A six-winged demon, that lives\n"
            "in the depths of Pandaemonium."),
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shinki,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Shinki,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Shinki,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Shinki,
        .shinyPalette = gMonShinyPalette_Shinki,
        .iconSprite = gMonIcon_Shinki,
        .iconPalIndex = 1,
        FOOTPRINT(Shinki)
        .levelUpLearnset = sShinkiLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sShinkiTeachableLearnset,
    },
    
    #endif // P_TOUHOU6_PUPPETS


#ifdef __INTELLISENSE__
};
#endif