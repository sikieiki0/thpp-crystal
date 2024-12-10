WakabaTown_PlayersHouse_1F_MapScripts::
	.byte 0

WakabaTown_PlayersHouse_1F_EventScript_Mom::
    lockall
    faceplayer
	checkitem ITEM_TOHONAV, 1
	compare VAR_RESULT, 1
	goto_if_ge WakabaTown_PlayersHouse_1F_EventScript_MomGeneric
    msgbox WakabaTown_PlayersHouse_1F_Text_MomElmLookingForYou, MSGBOX_DEFAULT
    closemessage
    msgbox WakabaTown_PlayersHouse_1F_Text_MomTohoNavBackFromRepair, MSGBOX_DEFAULT
    closemessage
    giveitem ITEM_TOHONAV, 1
	msgbox WakabaTown_PlayersHouse_1F_Text_MomTohoNavReceive, MSGBOX_DEFAULT
    msgbox WakabaTown_PlayersHouse_1F_Text_MomSetTime, MSGBOX_DEFAULT
	goto WakabaTown_PlayersHouse_1F_EventScript_SetWallClock

WakabaTown_PlayersHouse_1F_EventScript_SetWallClock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	goto WakabaTown_PlayersHouse_1F_EventScript_MomTohoNavQuestion

WakabaTown_PlayersHouse_1F_EventScript_MomTohoNavQuestion:
    msgbox WakabaTown_PlayersHouse_1F_Text_MomTohoNavQuestion, MSGBOX_YESNO
    call_if_eq VAR_RESULT, YES, WakabaTown_PlayersHouse_1F_EventScript_MomTohoNavSummary
    msgbox WakabaTown_PlayersHouse_1F_Text_MomTohoNavExplanation, MSGBOX_DEFAULT
    closemessage
    releaseall
    end

WakabaTown_PlayersHouse_1F_EventScript_MomTohoNavSummary:
    msgbox WakabaTown_PlayersHouse_1F_Text_MomTohoNavSummary, MSGBOX_DEFAULT
	closemessage
    releaseall
    end

WakabaTown_PlayersHouse_1F_EventScript_MomGeneric:
	msgbox WakabaTown_PlayersHouse_1F_Text_MomGeneric, MSGBOX_DEFAULT
	closemessage
    releaseall
    end

WakabaTown_PlayersHouse_1F_EventScript_MomMoveToPlayer::
	lockall
	faceplayer
	applymovement 1, Movement_MomMoveToPlayer
	waitmovement 1
    goto WakabaTown_PlayersHouse_1F_EventScript_Mom

Movement_MomMoveToPlayer:
	walk_up
	walk_up
	walk_right
	step_end

WakabaTown_PlayersHouse_2F_EventScript_TurnOffPlayerPC::
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end
