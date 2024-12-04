#define DEFAULT_POKEMON_CENTER_COORDS .x = 7, .y = 4

static const struct HealLocation sHealLocationsPokemonCenter[HEAL_LOCATION_COUNT - 1] =
{
    [HEAL_LOCATION_WAKABA_TOWN_PLAYERS_HOUSE_2F - 1] =
    {
        .group = MAP_GROUP(WAKABA_TOWN_PLAYERS_HOUSE_2F),
        .map = MAP_NUM(WAKABA_TOWN_PLAYERS_HOUSE_2F),
        .x = 2,
        .y = 7,
    },
    [HEAL_LOCATION_YOSHINO_CITY - 1] =
    {
        .group = MAP_GROUP(YOSHINO_CITY_BONEKA_CENTER),
        .map = MAP_NUM(YOSHINO_CITY_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_KIKYOU_CITY - 1] =
    {
        .group = MAP_GROUP(KIKYOU_CITY_BONEKA_CENTER),
        .map = MAP_NUM(KIKYOU_CITY_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_HIWADA_TOWN - 1] =
    {
        .group = MAP_GROUP(HIWADA_TOWN_BONEKA_CENTER),
        .map = MAP_NUM(HIWADA_TOWN_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_KOGANE_CITY - 1] =
    {
        .group = MAP_GROUP(KOGANE_CITY_BONEKA_COMMUNICATION_CENTER_1F),
        .map = MAP_NUM(KOGANE_CITY_BONEKA_COMMUNICATION_CENTER_1F),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_ENJU_CITY - 1] =
    {
        .group = MAP_GROUP(ENJU_CITY_BONEKA_CENTER),
        .map = MAP_NUM(ENJU_CITY_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_ASAGI_CITY - 1] =
    {
        .group = MAP_GROUP(ASAGI_CITY_BONEKA_CENTER),
        .map = MAP_NUM(ASAGI_CITY_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_TANBA_CITY - 1] =
    {
        .group = MAP_GROUP(TANBA_CITY_BONEKA_CENTER),
        .map = MAP_NUM(TANBA_CITY_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_CHOUJI_TOWN - 1] =
    {
        .group = MAP_GROUP(CHOUJI_TOWN_BONEKA_CENTER),
        .map = MAP_NUM(CHOUJI_TOWN_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_FUSUBE_CITY - 1] =
    {
        .group = MAP_GROUP(FUSUBE_CITY_BONEKA_CENTER),
        .map = MAP_NUM(FUSUBE_CITY_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_INDIGO_PLATEAU - 1] =
    {
        .group = MAP_GROUP(INDIGO_LEAGUE_RECEPTION),
        .map = MAP_NUM(INDIGO_LEAGUE_RECEPTION),
        .x = 2,
        .y = 7,
    },
    [HEAL_LOCATION_SILVER_CAVE - 1] =
    {
        .group = MAP_GROUP(SILVER_CAVE_BONEKA_CENTER),
        .map = MAP_NUM(SILVER_CAVE_BONEKA_CENTER),
        .x = 8,
        .y = 7,
    },
    [HEAL_LOCATION_BATTLE_FRONTIER - 1] =
    {
        .group = MAP_GROUP(BATTLE_FRONTIER_BONEKA_CENTER),
        .map = MAP_NUM(BATTLE_FRONTIER_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
    [HEAL_LOCATION_ROUTE_32 - 1] =
    {
        .group = MAP_GROUP(ROUTE32_BONEKA_CENTER),
        .map = MAP_NUM(ROUTE32_BONEKA_CENTER),
        DEFAULT_POKEMON_CENTER_COORDS,
    },
};

#undef DEFAULT_POKEMON_CENTER_COORDS

// localIds can be found in the generated events.inc file for the specific heal location map
// e.g. for OldaleTown_PokemonCenter1F/events.inc the following entry gets generated:
// object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_PokemonCenter_1F_EventScript_Nurse, 0
// In this case the localId is 1.
static const u8 sHealNpcLocalId[HEAL_LOCATION_COUNT - 1] =
{
    [HEAL_LOCATION_WAKABA_TOWN_PLAYERS_HOUSE_2F - 1] = 0,
};
