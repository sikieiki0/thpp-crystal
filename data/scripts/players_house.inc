@ Local IDs are the same for both players houses
.set LOCALID_MOM, 1
.set LOCALID_DAD, 5
.set LOCALID_MOM_2F, 14

PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet::
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	return

PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

PlayersHouse_1F_Movement_PlayerWalkIn:
	walk_up
	step_end

PlayersHouse_2F_EventScript_CheckWallClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	end

PlayersHouse_2F_EventScript_SetWallClock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	return

PlayersHouse_2F_Movement_MomEntersMale:
	delay_8
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_8
	walk_left
	step_end

PlayersHouse_2F_Movement_MomExitsMale:
	walk_right
	walk_up
	delay_8
	step_end

PlayersHouse_2F_Movement_MomEntersFemale:
	delay_8
	walk_down
	walk_in_place_faster_right
	delay_16
	delay_8
	walk_right
	step_end

PlayersHouse_2F_Movement_MomExitsFemale:
	walk_left
	walk_up
	delay_8
	step_end

PlayersHouse_1F_EventScript_SetWatchedBroadcast::
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
	releaseall
	end

PlayersHouse_1F_Movement_MomApproachDadMale:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_in_place_faster_right
	step_end

PlayersHouse_1F_Movement_MomApproachDadFemale:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_faster_left
	step_end

PlayersHouse_1F_Movement_MomApproachPlayerMale:
	walk_right
	step_end

PlayersHouse_1F_Movement_MomApproachPlayerFemale:
	walk_left
	step_end

PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
	walk_in_place_faster_left
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_right
	delay_16
	delay_16
	step_end

PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
	walk_in_place_faster_right
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_left
	delay_16
	delay_16
	step_end

PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
	walk_up
	walk_left
	walk_left
	step_end

PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
	walk_up
	walk_right
	walk_right
	step_end

PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale:
	walk_left
	walk_in_place_faster_right
	step_end

PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale:
	walk_right
	walk_in_place_faster_left
	step_end

PlayersHouse_1F_Movement_MomReturnToSeatMale:
	walk_left
	walk_down
	walk_in_place_faster_right
	step_end

PlayersHouse_1F_Movement_MomReturnToSeatFemale:
	walk_right
	walk_down
	walk_in_place_faster_left
	step_end

PlayersHouse_1F_Movement_PlayerApproachTVForGymMale:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

PlayersHouse_1F_Movement_PlayerMoveToTVMale:
	walk_left
	step_end

PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

PlayersHouse_1F_Movement_PlayerMoveToTVFemale:
	walk_right
	step_end

PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
	walk_up
	step_end

@ Never called.
PlayersHouse_1F_EventScript_AirLatiBroadcast::
	setflag FLAG_SYS_TV_LATIAS_LATIOS
	return

PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
	setvar VAR_0x8008, MALE
	setvar VAR_0x8009, LOCALID_DAD
	setvar VAR_0x800A, LOCALID_MOM
	return

PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
	setvar VAR_0x8008, FEMALE
	setvar VAR_0x8009, LOCALID_DAD
	setvar VAR_0x800A, LOCALID_MOM
	return

PlayersHouse_1F_EventScript_DadApproachPlayerMale::
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachDadMale::
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
	waitmovement 0
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachDadFemale::
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
	waitmovement 0
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_DadExitsMale::
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_DadExitsFemale::
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
	waitmovement 0
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
	waitmovement 0
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachPlayerMale::
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

PlayersHouse_1F_Movement_DadApproachPlayerMale:
	walk_right
	walk_right
	step_end

PlayersHouse_1F_Movement_DadApproachPlayerFemale:
	walk_left
	walk_left
	step_end

PlayersHouse_1F_Movement_DadFaceMomMale:
	face_left
	step_end

PlayersHouse_1F_Movement_DadFaceMomFemale:
	face_right
	step_end

PlayersHouse_1F_Movement_DadExitsMale:
	walk_down
	walk_right
	walk_down
	delay_8
	step_end

PlayersHouse_1F_Movement_DadExitsFemale:
	walk_down
	walk_left
	walk_down
	delay_8
	step_end

PlayersHouse_1F_Movement_PlayerEnterRoomMale:
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
	delay_8
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end
