#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou13[] =
{
#endif


    #if P_TOUHOU13_PUPPETS  

    [SPECIES_CKYOUKO] =
    {
        .speciesName = _("Kyouko{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_KYOUKO}),
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING,TYPE_FIGHTING),
        .catchRate = 255,
        .expYield = 65,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_PERSIM_BERRY,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 90,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FIELD),
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_EARLY_BIRD},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CKYOUKO,
        .sourceGame = SOURCE_TD,
        .noFlip = FALSE,
        .categoryName = _("Yamabiko"),
        .height = 16,
        .weight = 484,
        .description = COMPOUND_STRING(
            "Able to reflect sounds, she's seen\n"
            "often at Myouren Temple as\n"
            "a groundskeeper."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CKyouko,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CKyouko,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CKyouko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CKyouko,
        .shinyPalette = gMonShinyPalette_CKyouko,
        .iconSprite = gMonIcon_CKyouko,
        .iconPalIndex = 2,
        FOOTPRINT(CKyouko)
        .levelUpLearnset = sCKyoukoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCKyoukoTeachableLearnset,
    },

    [SPECIES_KYOUKO] =
    {
        .speciesName = _("Kyouko"),
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIGHTING,TYPE_PRIMAL),
        .catchRate = 45,
        .expYield = 165,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_PERSIM_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FIELD),
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_EARLY_BIRD},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_KYOUKO,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Yamabiko"),
        .height = 6,
        .weight = 421,
        .description = COMPOUND_STRING(
        "xyz\n"
        "xyz\n"
        "xyz"),
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kyouko,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kyouko,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Kyouko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Kyouko,
        .shinyPalette = gMonShinyPalette_Kyouko,
        .iconSprite = gMonIcon_Kyouko,
        .iconPalIndex = 2,
        FOOTPRINT(Kyouko)
        .levelUpLearnset = sKyoukoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sKyoukoTeachableLearnset,
    },

    [SPECIES_CYOSHIKA] =
    {
        .speciesName = _("Yoshika{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_YOSHIKA}),
        .baseHP        = 105,
        .baseAttack    = 45,
        .baseDefense   = 85,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_MIASMA,TYPE_MIASMA),
        .catchRate = 200,
        .expYield = 75,
        .evYield_HP        = 1,
        .evYield_Attack    = 0,
        .evYield_Defense   = 1,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_APICOT_BERRY,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_AMORPHOUS),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CYOSHIKA,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Jiangshi"),
        .height = 11,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "A carefree, undead girl who guards\n"
            "the graveyard. Can eat anything."),
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CYoshika,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CYoshika,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CYoshika,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CYoshika,
        .shinyPalette = gMonShinyPalette_CYoshika,
        .iconSprite = gMonIcon_CYoshika,
        .iconPalIndex = 1,
        FOOTPRINT(CYoshika)
        .levelUpLearnset = sCYoshikaLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCYoshikaTeachableLearnset,
    },

    [SPECIES_YOSHIKA] =
    {
        .speciesName = _("Yoshika"),
        .baseHP        = 140,
        .baseAttack    = 75,
        .baseDefense   = 120,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_MIASMA,TYPE_MIASMA),
        .catchRate = 45,
        .expYield = 200,
        .evYield_HP        = 2,
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
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_AMORPHOUS),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_YOSHIKA,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Jiangshi"),
        .height = 15,
        .weight = 1026,
        .description = COMPOUND_STRING(
        "Yoshika is a Jiang Shi who is of an ancient\n"
        "era of Japan, who was revived by Seiga\n"
        "to be the guard of the Great Mausoleum"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yoshika,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Yoshika,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Yoshika,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Yoshika,
        .shinyPalette = gMonShinyPalette_Yoshika,
        .iconSprite = gMonIcon_Yoshika,
        .iconPalIndex = 1,
        FOOTPRINT(Yoshika)
        .levelUpLearnset = sYoshikaLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sYoshikaTeachableLearnset,
    },

    [SPECIES_CSEIGA] =
    {
        .speciesName = _("Seiga{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SEIGA}),
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK,TYPE_HOLY),
        .catchRate = 175,
        .expYield = 75,
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
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CSEIGA,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Dark Hermit"),
        .height = 6,
        .weight = 952,
        .description = COMPOUND_STRING(
            "Able to pass through walls by cutting,\n"
            "replacing and restoring holes in them.\n"
            "She likes to take things..."),
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CSeiga,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CSeiga,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CSeiga,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CSeiga,
        .shinyPalette = gMonShinyPalette_CSeiga,
        .iconSprite = gMonIcon_CSeiga,
        .iconPalIndex = 0,
        FOOTPRINT(CSeiga)
        .levelUpLearnset = sCSeigaLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCSeigaTeachableLearnset,
    },

    [SPECIES_SEIGA] =
    {
        .speciesName = _("Seiga"),
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DARK,TYPE_HOLY),
        .catchRate = 45,
        .expYield = 220,
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
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_SEIGA,
        .sourceGame = SOURCE_TD,
        .noFlip = FALSE,
        .categoryName = _("Dark Hermit"),
        .height = 12,
        .weight = 2025,
        .description = COMPOUND_STRING(
        "Her hairpin is a chisel which opens holes\n"
        "in walls tepmorarily. A stone wall poses \n"
        "no resistance, but soft material might.."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seiga,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Seiga,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Seiga,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Seiga,
        .shinyPalette = gMonShinyPalette_Seiga,
        .iconSprite = gMonIcon_Seiga,
        .iconPalIndex = 0,
        FOOTPRINT(Seiga)
        .levelUpLearnset = sSeigaLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sSeigaTeachableLearnset,
    },

    [SPECIES_CTOJIKO] =
    {
        .speciesName = _("Tojiko{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_TOJIKO}),
        .baseHP        = 65,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 90,
        .baseSpAttack  = 75,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NETHER,TYPE_ELECTRIC),
        .catchRate = 150,
        .expYield = 75,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_AMORPHOUS),
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_STATIC},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CTOJIKO,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Spirit"),
        .height = 16,
        .weight = 5500,
        .description = COMPOUND_STRING(
            "A servant of the crown prince, Miko.\n"
            "Able to control lightning."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        .frontPic = gMonFrontPic_CTojiko,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CTojiko,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CTojiko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CTojiko,
        .shinyPalette = gMonShinyPalette_CTojiko,
        .iconSprite = gMonIcon_CTojiko,
        .iconPalIndex = 0,
        FOOTPRINT(CTojiko)
        .levelUpLearnset = sCTojikoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCTojikoTeachableLearnset,
    },

    [SPECIES_TOJIKO] =
    {
        .speciesName = _("Tojiko"),
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 80,
        .baseSpeed     = 120,
        .baseSpAttack  = 95,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NETHER,TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = 220,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 3,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_NONE,
        .genderRatio = 127,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_AMORPHOUS),
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_STATIC},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_TOJIKO,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Spirit"),
        .height = 17,
        .weight = 2300,
        .description = COMPOUND_STRING(
        "xyz\n"
        "xyz\n"
        "xyz"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Tojiko,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Tojiko,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Tojiko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Tojiko,
        .shinyPalette = gMonShinyPalette_Tojiko,
        .iconSprite = gMonIcon_Tojiko,
        .iconPalIndex = 0,
        FOOTPRINT(Tojiko)
        .levelUpLearnset = sTojikoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sTojikoTeachableLearnset,
    },

    [SPECIES_CFUTO] =
    {
        .speciesName = _("Futo{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_FUTO}),
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_HOLY,TYPE_HOLY),
        .catchRate = 125,
        .expYield = 100,
        .evYield_HP        = 0,
        .evYield_Attack    = 1,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_TORRENT, ABILITY_FLASH_FIRE},
        .safariZoneFleeRate = 20,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CFUTO,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Feng Shui"),
        .height = 18,
        .weight = 1750,
        .description = COMPOUND_STRING(
            "She's able to manipulate feng shui,\n"
            "which sounds graceful, but she's\n"
            "anything but that."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_CFuto,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CFuto,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CFuto,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CFuto,
        .shinyPalette = gMonShinyPalette_CFuto,
        .iconSprite = gMonIcon_CFuto,
        .iconPalIndex = 0,
        FOOTPRINT(CFuto)
        .levelUpLearnset = sCFutoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCFutoTeachableLearnset,
    },

    [SPECIES_FUTO] =
    {
        .speciesName = _("Futo"),
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_HOLY,TYPE_WATER),
        .catchRate = 45,
        .expYield = 215,
        .evYield_HP        = 0,
        .evYield_Attack    = 3,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = 127,
        .eggCycles = 80,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_TORRENT, ABILITY_FLASH_FIRE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_FUTO,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Feng Shui"),
        .height = 19,
        .weight = 2050,
        .description = COMPOUND_STRING(
        "xyz\n"
        "xyz\n"
        "xyz"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Futo,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Futo,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Futo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Futo,
        .shinyPalette = gMonShinyPalette_Futo,
        .iconSprite = gMonIcon_Futo,
        .iconPalIndex = 0,
        FOOTPRINT(Futo)
        .levelUpLearnset = sFutoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sFutoTeachableLearnset,
    },

    [SPECIES_CMIKO] =
    {
        .speciesName = _("Miko{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MIKO}),
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_HOLY,TYPE_REASON),
        .catchRate = 45,
        .expYield = 100,
        .evYield_HP        = 0,
        .evYield_Attack    = 1,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_LIMBER},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CMIKO,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Saintly"),
        .height = 45,
        .weight = 3520,
        .description = COMPOUND_STRING(
            "She can hear the desires and wishes\n"
            "of others' hearts, and follow ten\n"
            "conversations at once."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_CMiko,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CMiko,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CMiko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CMiko,
        .shinyPalette = gMonShinyPalette_CMiko,
        .iconSprite = gMonIcon_CMiko,
        .iconPalIndex = 1,
        FOOTPRINT(CMiko)
        .levelUpLearnset = sCMikoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCMikoTeachableLearnset,
    },
    [SPECIES_MIKO] =
    {
        .speciesName = _("Miko"),
        .baseHP        = 85,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_HOLY,TYPE_REASON),
        .catchRate = 45,
        .expYield = 230,
        .evYield_HP        = 0,
        .evYield_Attack    = 2,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 0,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_SACRED_ASH,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_HUMAN_LIKE),
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_LIMBER},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_MIKO,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Saintly"),
        .height = 35,
        .weight = 9500,
        .description = COMPOUND_STRING(
        "xyz\n"
        "xyz\n"
        "xyz"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_Miko,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Miko,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Miko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Miko,
        .shinyPalette = gMonShinyPalette_Miko,
        .iconSprite = gMonIcon_Miko,
        .iconPalIndex = 1,
        FOOTPRINT(Miko)
        .levelUpLearnset = sMikoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sMikoTeachableLearnset,
    },

    [SPECIES_CMAMIZOU] =
    {
        .speciesName = _("Mamizou{CHIBI}"),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_MAMIZOU}),
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = 75,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_PRIMAL,TYPE_NATURE),
        .catchRate = 45,
        .expYield = 110,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_STARF_BERRY,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FIELD),
        .abilities = {ABILITY_KEEN_EYE, ABILITY_KEEN_EYE},
        .safariZoneFleeRate = 75,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CMAMIZOU,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Tanuki"),
        .height = 70,
        .weight = 2065,
        .description = COMPOUND_STRING(
            "A clever, tricky tanuki that\n"
            "can easily disguise herself\n"
            "or various objects."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
        .frontPic = gMonFrontPic_CMamizou,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CMamizou,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_CMamizou,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CMamizou,
        .shinyPalette = gMonShinyPalette_CMamizou,
        .iconSprite = gMonIcon_CMamizou,
        .iconPalIndex = 2,
        FOOTPRINT(CMamizou)
        .levelUpLearnset = sCMamizouLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sCMamizouTeachableLearnset,
    },

    [SPECIES_MAMIZOU] =
    {
        .speciesName = _("Mamizou"),
        .baseHP        = 100,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 90,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_PRIMAL,TYPE_NATURE),
        .catchRate = 45,
        .expYield = 230,
        .evYield_HP        = 0,
        .evYield_Attack    = 0,
        .evYield_Defense   = 0,
        .evYield_Speed     = 0,
        .evYield_SpAttack  = 0,
        .evYield_SpDefense = 3,
        .itemCommon = ITEM_NONE,
        .itemRare = ITEM_STARF_BERRY,
        .genderRatio = 127,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE,EGG_GROUP_FIELD),
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .safariZoneFleeRate = 0,
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_MAMIZOU,
        .sourceGame = SOURCE_TD,
        .categoryName = _("Tanuki"),
        .height = 14,
        .weight = 400,
        .description = COMPOUND_STRING(
        "xyz\n"
        "xyz\n"
        "xyz"),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mamizou,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Mamizou,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_Mamizou,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Mamizou,
        .shinyPalette = gMonShinyPalette_Mamizou,
        .iconSprite = gMonIcon_Mamizou,
        .iconPalIndex = 2,
        FOOTPRINT(Mamizou)
        .levelUpLearnset = sMamizouLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,//sMamizouTeachableLearnset,
    },
    
    #endif // P_TOUHOU13_PUPPETS


#ifdef __INTELLISENSE__
};
#endif