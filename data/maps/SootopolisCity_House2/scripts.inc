SootopolisCity_House2_MapScripts::
	.byte 0

SootopolisCity_House2_EventScript_KnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
	return

SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
	return

SootopolisCity_House2_Text_YesTwoOrbsSideBySide:
	.string "Yes, two orbs side by side…\p"
	.string "The sight of them together…\n"
	.string "It is somehow soothing…$"

SootopolisCity_House2_Text_OughtToVisitAndSee:
	.string "Is that so?\n"
	.string "Perhaps you ought to visit and see…$"

