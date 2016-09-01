void ProcessDialogEvent()
{
	int tmpLangFileID = LanguageOpenFile("characters_names.txt");
	ref NPChar;
	aref Link, NextDiag;
	string boarder_blade = BOARDER_SPAREBLADE;

	DeleteAttribute(&Dialog,"Links");

	makeref(NPChar,CharacterRef);
	makearef(Link, Dialog.Links);
	makearef(NextDiag, NPChar.Dialog);

	ref PChar;
	PChar = GetMainCharacter();

// PB -->
	ref TutDeck = &Locations[FindLocation("Tutorial_Deck")];
// PB <--
	
	switch(Dialog.CurrentNode)
	{
		case "start":
			switch(CharPlayerType)
			{
				case PLAYER_TYPE_NAVAL_OFFICER:
					dialog.text = "Congratulations on your promotion, " + GetMyAddressForm(NPChar, PChar, ADDR_CIVIL, false, true) + ". You are hereby required and directed to sink, burn or take as a prize all enemy ships that you can.";
					link.l1 = "Aye aye, sir! I will set sail as soon as I arrive in port.";
					link.l1.go = "stormystart";
				break;

				case PLAYER_TYPE_ROGUE:
					dialog.text = "Captain, are you sure you want to do this? You know that what you did wasn't entirely honourable.";
					link.l1 = "The lady knew what she was doing. If her brother cannot deal with that, then he can deal with ME!";
					link.l1.go = "stormystart";
				break;

				case PLAYER_TYPE_GAMBLER:
					dialog.text = "Captain, while we are happy to serve under you, we have no ill will towards our previous commander. He is just an unlucky man.";
					link.l1 = "He accused me of cheating! How dare he do such a thing? I'll make him pay for that.";
					link.l1.go = "stormystart";
				break;

				case PLAYER_TYPE_AGENT:
					dialog.text = "You are hereby ordered to go undercover in this hostile town and make as many problems for our enemies as you can. It will be dangerous and I do not expect we will see each other again.";
					link.l1 = "Understood, Sir. From here on, I will be on my own.";
					link.l1.go = "stormystart";
				break;

				case PLAYER_TYPE_SMUGGLER:
					dialog.text = "Captain, we're lucky to have reached this friendly port through that horrible storm! The ship has taken substantial damage and we have lost many of the crew.";
					link.l1 = "It will be expensive getting us ready to set sail again. Unfortunately, we have no honest means to do so on this island. We'll need to take our chances and see if we can find a smuggling agent in the tavern.";
					link.l1.go = "stormystart";
				break;

				case PLAYER_TYPE_CURSED:
					if(CheckCharacterItem(PChar, "Davy_Chest"))
					{
						dialog.text = "Captain, are you certain you cannot be convinced to do the job we were supposed to be doing? Until this curse is lifted, we can never set foot ashore! And this whole fishy look is not so great either.";
						link.l1 = "Ferry the lost souls who died at sea for the goddess of the sea? Never! I have been betrayed and the world will know my wrath! No ship at sea is safe from me.";
						
					}
					else
					{
						dialog.text = "Captain, all the coins we could find have been stashed in the weapons locker as you ordered. But it seems some are missing, sir! One of the crew must have taken them.";
						link.l1 = "Is that so? Before we know it, they will be scattered all over the Caribbean and we'll have a hard time getting them back! I will go ashore straight away to start the search.";
					}
					link.l1.go = "stormystart";
				break;

				case PLAYER_TYPE_CORSAIR:
					dialog.text = "I cannot believe the #sTortuga# fort did not fire on us coming into port!";
					if (GetNationRelation2MainCharacter(GetTownNation("Tortuga")) == RELATION_ENEMY)
						link.l1 = "There was nothing to worry about. The French governor here is really very forgiving of all those flying a pirate flag. You'd do well to remember that!";
					else
						link.l1 = "There was nothing to worry about. France rules here and we are at peace with France.";
					link.l1.go = "stormystart";
				break;

				case PLAYER_TYPE_CASTAWAY:
					dialog.text = "I am sorry the ship's rolling is making you seasick, but we do not have different quarters available for you. Now please leave my cabin.";
					link.l1 = "Very well, then. Let's just hope I don't fall overboard in this storm. You could get into a lot of trouble with your employer if you lose one of your passengers!";
					link.l1.go = "stormystart";
				break;

				dialog.text = DLG_TEXT[0];
				link.l1 = DLG_TEXT[1];
				link.l1.go = "intro2";
				link.l2 = DLG_TEXT[2];
				link.l2.go = "start1";
				link.l3 = DLG_TEXT[3];
				link.l3.go = "stormystart";
			}
			PChar.vcskip = true;
		break;

		case "intro2":
			dialog.text = DLG_TEXT[4];
			link.l1 = DLG_TEXT[5];
			link.l1.go = "intro3";
		break;

		case "intro3":
			dialog.text = DLG_TEXT[6];
			link.l1 = DLG_TEXT[7];
			link.l1.go = "intro4";
		break;

		case "intro4":
			dialog.text = DLG_TEXT[8];
			link.l1 = DLG_TEXT[9];
			Link.l1.go = "start1";
		break;

		case "start1":
			BLI_UpdateOfficers();
			dialog.text = DLG_TEXT[10];
			link.l1 = DLG_TEXT[11];
			link.l1.go = "start2";
			link.l2 = DLG_TEXT[12];
			link.l2.go = "Skip_tutorial";
			link.l3 = DLG_TEXT[13];
			link.l3.go = "stormystart";
		break;

		case "start2":
			dialog.text = DLG_TEXT[14];
			link.l1 = DLG_TEXT[15];
			link.l1.go = "start3";
		break;

		case "start3":
			dialog.text = DLG_TEXT[16] + DLG_TEXT[17];
			link.l1 = DLG_TEXT[18];
			link.l1.go = "start4";
		break;

		case "start4":
			addDialogExitQuest("Tut_TakeStuff");
			NextDiag.TempNode = "TakeWeapon";
			dialog.text = DLG_TEXT[19];
			link.l1 = DLG_TEXT[20];
			link.l1.go = "Exit";
		break;
		
		case "TakeWeapon":
			if(FindCharacterItemByGroup(PChar, BLADE_ITEM_TYPE) == "" || FindCharacterItemByGroup(PChar, SPYGLASS_ITEM_TYPE) == "")
			{	
				NextDiag.TempNode = "TakeWeapon";
				dialog.text = DLG_TEXT[21];
				link.l1 = DLG_TEXT[22];
				link.l1.go = "Exit";
			}
			else
			{
				if(CheckAttribute(PChar,"equip."+BLADE_ITEM_TYPE) && GetCharacterEquipByGroup(PChar,SPYGLASS_ITEM_TYPE) != "") // PB
				{
					if (WEAPONSLOCKER == 1) 
					{
						if (GET_WEAPONS_BACK == 1)
							Dialog.text = DLG_TEXT[23] + DLG_TEXT[24] + DLG_TEXT[26];
						else
							Dialog.text = DLG_TEXT[23] + DLG_TEXT[25] + DLG_TEXT[26];
							link.l1 = DLG_TEXT[18];
							link.l1.go = "Weaponslocker";
					} 
					else 
					{
						dialog.text = DLG_TEXT[27];
						link.l1 = DLG_TEXT[28];
						link.l1.go = "Swordplay";
						link.l2 = DLG_TEXT[29];
						link.l2.go = "OutOfThisShip";
						link.l3 = DLG_TEXT[30];
						link.l3.go = "Skip_tutorial";
					}
				}
				else
				{
				//	addDialogExitQuest("Tut_EquipWeapon");	// PB: Doesn't exist?
					NextDiag.TempNode = "EquipWeapon";
					dialog.text = DLG_TEXT[31] + DLG_TEXT[32];
					link.l1 = DLG_TEXT[33];
					link.l1.go = "Exit";
				}
			}
		break;

		case "EquipWeapon":
			if(FindCharacterItemByGroup(PChar, BLADE_ITEM_TYPE) == "" || FindCharacterItemByGroup(PChar, SPYGLASS_ITEM_TYPE) == "")
			{
				NextDiag.TempNode = "TakeWeapon";
				dialog.text = DLG_TEXT[21];
				link.l1 = DLG_TEXT[22];
				link.l1.go = "Exit";
			}
			else
			{
				if(CheckAttribute(PChar,"equip."+BLADE_ITEM_TYPE) && GetCharacterEquipByGroup(PChar,SPYGLASS_ITEM_TYPE) != "") // PB
				{
					if(GetCharacterEquipByGroup(PChar,BLADE_ITEM_TYPE)=="bladeX4")
					{
						Dialog.TempNode = "EquipWeapon";
						dialog.text = DLG_TEXT[34];
						link.l1 = DLG_TEXT[35];
						link.l1.go = "Exit";
					}
					else
					{
						if (WEAPONSLOCKER == 1) 
						{
							if (GET_WEAPONS_BACK == 1)
								Dialog.text = DLG_TEXT[23] + DLG_TEXT[24] + DLG_TEXT[26];
							else
								Dialog.text = DLG_TEXT[23] + DLG_TEXT[25] + DLG_TEXT[26];
								link.l1 = DLG_TEXT[18];
								link.l1.go = "Weaponslocker";
						}
						else
						{
							dialog.text = DLG_TEXT[27];
							link.l1 = DLG_TEXT[28];
							link.l1.go = "Swordplay";
						}
					}
				}
				else
				{
					Dialog.TempNode = "EquipWeapon";
					dialog.text = DLG_TEXT[31];
					link.l1 = DLG_TEXT[38];
					link.l1.go = "Exit";
				}
				link.l2 = DLG_TEXT[29];
				link.l2.go = "OutOfThisShip";
				link.l3 = DLG_TEXT[30];
				link.l3.go = "Skip_tutorial";
			}
		break;

		case "Weaponslocker":
			Dialog.text = DLG_TEXT[39] + GetItemNameByID(boarder_blade) + DLG_TEXT[40];
			Link.l1 = DLG_TEXT[41];
			Link.l1.go = "EquipWeaponslocker";
			Link.l2 = DLG_TEXT[42];
			Link.l2.go = "SkipWeaponslocker";
		break;

		case "EquipWeaponslocker":
			DeleteAttribute(TutDeck, "WeaponsLocker.items");	// LDH 01May09
			TakenItems(Pchar, boarder_blade, 12);
			NextDiag.TempNode = "EquipWeaponslocker_1";
			NextDiag.CurrentNode = NextDiag.Tempnode;
			DialogExit();
		break;

		case "EquipWeaponslocker_1":
			if (CheckAttribute(TutDeck, "WeaponsLocker.items." + boarder_blade) == false || TutDeck.WeaponsLocker.items.(boarder_blade) < 12)
				{
					NextDiag.TempNode = "EquipWeaponslocker_1";
					Dialog.text = DLG_TEXT[43];
					Link.l1 = DLG_TEXT[44];
					Link.l1.go = "Exit";
				}
			else 
				{
					dialog.text = DLG_TEXT[27];
					link.l1 = DLG_TEXT[28];
					link.l1.go = "Swordplay";
					link.l2 = DLG_TEXT[29];
					link.l2.go = "OutOfThisShip";
					link.l3 = DLG_TEXT[30];
					link.l3.go = "Skip_tutorial";
				}
		break;

		case "SkipWeaponslocker":
			TutDeck.WeaponsLocker.items.(boarder_blade) = 12;
			dialog.text = DLG_TEXT[27];
			link.l1 = DLG_TEXT[28];
			link.l1.go = "Swordplay";
			link.l2 = DLG_TEXT[29];
			link.l2.go = "OutOfThisShip";
			link.l3 = DLG_TEXT[30];
			link.l3.go = "Skip_tutorial";
		break;

		case "Swordplay":
			dialog.text = DLG_TEXT[45];
			link.l1 = DLG_TEXT[46];
			link.l1.go = "Swordplay_1";
		break;

		case "Swordplay_1":
			addDialogExitQuest("Tut_WalkToSwordplayPlace");
			NextDiag.Tempnode = "NowHitMe";
			dialog.text = DLG_TEXT[47];
			link.l1 = DLG_TEXT[48];
			link.l1.go = "Exit";
		break;

		case "NowHitMe":
			AddDialogExitQuest("Tut_FirstMeleeFight");
			NextDiag.Tempnode = "WhatAreYouWaitingFor";
			dialog.text = DLG_TEXT[49];
			link.l1 = DLG_TEXT[50];
			link.l1.go = "NowHitMe_1";
		break;

		case "NowHitMe_1":
			NextDiag.Tempnode = "WhatAreYouWaitingFor";
			dialog.text = DLG_TEXT[51];
			link.l1 = DLG_TEXT[52];
			link.l1.go = "Exit";
		break;

		case "WhatAreYouWaitingFor":
			NextDiag.Tempnode = "WhatAreYouWaitingFor";
			dialog.text = DLG_TEXT[53];
			link.l1 = DLG_TEXT[54];
			link.l1.go = "Continue_ToSeriousFight";
			link.l2 = DLG_TEXT[55];
			link.l2.go = "WhatAreYouWaitingFor_1";
			link.l3 = DLG_TEXT[56];
			link.l3.go = "Skip_tutorial";
		break;

		case "HurtEnough":
			AddDialogExitQuest("Tut_ReturnPlayer");
			dialog.text = DLG_TEXT[57];
			link.l1 = DLG_TEXT[58];
			link.l1.go = "Continue_ToSeriousFight";
			link.l2 = DLG_TEXT[59];
			link.l2.go = "WhatAreYouWaitingFor_1";
			link.l3 = DLG_TEXT[56];
			link.l3.go = "Skip_tutorial";
		break;

		case "WhatAreYouWaitingFor_1":
			AddDialogExitQuest("Tut_FirstMeleeFight");
			NextDiag.Tempnode = "WhatAreYouWaitingFor";
			dialog.text = DLG_TEXT[60];
			link.l1 = DLG_TEXT[61];
			link.l1.go = "Exit";
		break;

		case "Continue_ToSeriousFight":
			AddDialogExitQuest("Tut_StartSeriousFight");
			NextDiag.Tempnode = "WhatAreYouWaitingFor";
			dialog.text = DLG_TEXT[62];
			link.l1 = DLG_TEXT[63];
			link.l1.go = "Exit";
		break;

		case "SeriousStopped":
			if(LAi_GetCharacterHP(Pchar) >= (LAi_GetCharacterHP(CharacterFromID("Malcolm Hatcher"))+50))
				{
					dialog.text = DLG_TEXT[64];
					link.l1 = DLG_TEXT[65];
					link.l1.go = "OutOfThisShip";
					link.l2 = DLG_TEXT[66];
					link.l2.go = "OnceAgain";
					link.l3 = DLG_TEXT[67];
					link.l3.go = "Skip_Tutorial";
				}
			else
				{
					dialog.text = DLG_TEXT[68];
					link.l1 = DLG_TEXT[69];
					link.l1.go = "OnceAgain";
					link.l2 = DLG_TEXT[70];
					link.l2.go = "OutOfThisShip";
					link.l3 = DLG_TEXT[71];
					link.l3.go = "Skip_Tutorial";
				}
		break;

		case "OnceAgain":
			AddDialogExitQuest("Tut_StartSeriousFightAgain");
			dialog.text = DLG_TEXT[72];
			link.l1 = DLG_TEXT[73];
			link.l1.go = "Exit";
		break;

		case "SeriousStoppedAgain":
			if(LAi_GetCharacterHP(Pchar) >= (LAi_GetCharacterHP(CharacterFromID("Malcolm Hatcher"))+50))
				{
					dialog.text = DLG_TEXT[74];
					link.l1 = DLG_TEXT[75];
					link.l1.go = "OutOfThisShip";
					link.l2 = DLG_TEXT[76];
					link.l2.go = "OnceAgain";
					link.l3 = DLG_TEXT[77];
					link.l3.go = "Skip_Tutorial";
				}
			else
				{
					dialog.text = DLG_TEXT[78];
					link.l1 = DLG_TEXT[79];
					link.l1.go = "OnceAgain";
					link.l2 = DLG_TEXT[80];
					link.l2.go = "OutOfThisShip";
					link.l3 = DLG_TEXT[67];
					link.l3.go = "Skip_Tutorial";
				}
		break;

		case "OutOfThisShip":
			if (AUTO_SKILL_SYSTEM == 0)
				{
					dialog.text = DLG_TEXT[81];
					link.l1 = DLG_TEXT[82];
					link.l1.go = "DistributePoints";
				} 
			else 
				{
					dialog.text = DLG_TEXT[83];
					link.l1 = DLG_TEXT[84];
					link.l1.go = "EarnPoints";
				}
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[86];
			link.l3.go = "FuckTheSkillsLetsGo";
		break;

		case "DistributePoints":
			dialog.text = DLG_TEXT[87];
			link.l1 = DLG_TEXT[88];
			link.l1.go = "DistributePoints_1";
			link.l2 = DLG_TEXT[89];
			link.l2.go = "FuckTheSkillsLetsGo";
			link.l3 = DLG_TEXT[85];
			link.l3.go = "SkillDescription";
		break;

		case "DistributePoints_1":
			NextDiag.TempNode = "ContinueAfterSkills";
			AddDialogExitQuest("Tut_PlayerDistributeSkills");
			dialog.text = DLG_TEXT[90];
			link.l1 = DLG_TEXT[35];
			link.l1.go = "Exit";
		break;

		case "EarnPoints":
			dialog.text = DLG_TEXT[91];
			link.l1 = DLG_TEXT[92];
			link.l1.go = "ELeadership";
			link.l2 = DLG_TEXT[93];
			link.l2.go = "EMelee Combat";
			link.l3 = DLG_TEXT[94];
			link.l3.go = "ESailing";
			link.l4 = DLG_TEXT[95];
			link.l4.go = "EAccuracy";
			link.l5 = DLG_TEXT[96];
			link.l5.go = "ECannons";
			link.l6 = DLG_TEXT[97];
			link.l6.go = "EGrappling";
			link.l7 = DLG_TEXT[98];
			link.l7.go = "ERepair";
			link.l8 = DLG_TEXT[99];
			link.l8.go = "EDefense";
			link.l9 = DLG_TEXT[100];
			link.l9.go = "ECommerce";
			link.l10 = DLG_TEXT[101];
			link.l10.go = "Eluck";
		break;

		case "ELeadership":
			dialog.text = DLG_TEXT[102];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";	
		break;

		case "EMelee Combat":
			dialog.text = DLG_TEXT[105];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";	
		break;

		case "ESailing":
			dialog.text = DLG_TEXT[106];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];	
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";	
		break;

		case "EAccuracy":
			dialog.text = DLG_TEXT[107];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";
		break;

		case "ECannons":
			dialog.text = DLG_TEXT[108];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";
		break;

		case "EGrappling":
			dialog.text = DLG_TEXT[109];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";
		break;

		case "ERepair":
			dialog.text = DLG_TEXT[110];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";
		break;

		case "EDefense":
			dialog.text = DLG_TEXT[111];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";
		break;

		case "ECommerce":
			dialog.text = DLG_TEXT[112];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";
		break;

		case "Eluck":
			dialog.text = DLG_TEXT[113];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "EarnPoints";
			link.l2 = DLG_TEXT[85];
			link.l2.go = "SkillDescription";
			link.l3 = DLG_TEXT[104];
			link.l3.go = "FuckTheSkillsLetsGo";	
		break;

		case "ContinueAfterSkills":
			NextDiag.TempNode = "ContinueAfterSkills";
			dialog.text = DLG_TEXT[114];
			link.l1 = DLG_TEXT[38];
			link.l1.go = "DistributePoints_1";
			link.l2 = DLG_TEXT[89];
			link.l2.go = "FuckTheSkillsLetsGo";
			link.l3 = DLG_TEXT[85];
			link.l3.go = "SkillDescription";
		break;

		case "SkillDescription":
			dialog.text = DLG_TEXT[91];
			link.l1 = DLG_TEXT[92];
			link.l1.go = "Leadership";
			link.l2 = DLG_TEXT[93];
			link.l2.go = "Melee Combat";
			link.l3 = DLG_TEXT[94];
			link.l3.go = "Sailing";
			link.l4 = DLG_TEXT[95];
			link.l4.go = "Accuracy";
			link.l5 = DLG_TEXT[96];
			link.l5.go = "Cannons";
			link.l6 = DLG_TEXT[97];
			link.l6.go = "Grappling";
			link.l7 = DLG_TEXT[98];
			link.l7.go = "Repair";
			link.l8 = DLG_TEXT[99];
			link.l8.go = "Defence";
			link.l9 = DLG_TEXT[100];
			link.l9.go = "Commerce";
			link.l10 = DLG_TEXT[101];
			link.l10.go = "Luck";
		break;

		case "Leadership":
			dialog.text = DLG_TEXT[115];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0)
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "Melee Combat":
			dialog.text = DLG_TEXT[117];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0) 
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else 
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "Sailing":
			dialog.text = DLG_TEXT[118];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0) 
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "Accuracy":
			dialog.text = DLG_TEXT[119];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0) 
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else 
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "Cannons":
			dialog.text = DLG_TEXT[120];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0)
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else 
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "Grappling":
			dialog.text = DLG_TEXT[121];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0)
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else 
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "Repair":
			dialog.text = DLG_TEXT[122];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0)
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "Defence":
			dialog.text = DLG_TEXT[123];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0) 
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else 
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "Commerce":
			dialog.text = DLG_TEXT[124];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0)
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else 
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "Luck":
			dialog.text = DLG_TEXT[125];
			link.l1 = DLG_TEXT[103];
			link.l1.go = "SkillDescription";
			link.l2 = DLG_TEXT[104];
			link.l2.go = "FuckTheSkillsLetsGo";
			if (AUTO_SKILL_SYSTEM == 0)
				{
					link.l3 = DLG_TEXT[116];
					link.l3.go = "DistributePoints_1";
				}
			else 
				{
					link.l3 = DLG_TEXT[84];
					link.l3.go = "EarnPoints";
				}
		break;

		case "FuckTheSkillsLetsGo":
			dialog.text = DLG_TEXT[126];
			link.l1 = DLG_TEXT[127];
			link.l1.go = "TutorialTasks";
		break;

		case "TutorialTasks":
			dialog.text = DLG_TEXT[128];
			link.l1 = DLG_TEXT[129];
			link.l1.go = "TutorialTasks_1";
		break;

		case "TutorialTasks_1":
			dialog.text = DLG_TEXT[130];
			if (GetCurrentFlag() == ENGLAND) dialog.text = dialog.text + "\n" + DLG_TEXT[131];
			link.l1 = DLG_TEXT[132];
			if (PChar.location == "Tutorial_Deck")
				{
					addDialogExitQuest("Tut_WalkThroughQDeck");
					link.l1.go = "Exit";
				}
			else
				{
					addDialogExitQuest("Tut_ReloadToOxbayPort");
					link.l1.go = "Exit";
				}
		break;

		case "NowLetsBuyASpyglass":
			dialog.text = DLG_TEXT[133];
			link.l1 = DLG_TEXT[134];
			link.l1.go = "GuideToSpyglass";
			link.l2 = DLG_TEXT[135];
			link.l2.go = "ContinueWithoutSpyglass";
			link.l3 = DLG_TEXT[136];
			link.l3.go = "Skip_TutorialInPort";
		break;

		case "ToFdFCenter":
			dialog.text = DLG_TEXT[137];
			link.l1 = DLG_TEXT[41];
			link.l1.go = "ToTheTown_1";
			link.l2 = DLG_TEXT[136];
			link.l2.go = "ToTheTown_2";
		break;

		case "ToQCTown":
			dialog.text = DLG_TEXT[138];
			link.l1 = DLG_TEXT[41];
			link.l1.go = "ToTheTown_1";
			link.l2 = DLG_TEXT[136];
			link.l2.go = "ToTheTown_2";
		break;

		case "ToTheTown_1":
			AddDialogExitQuest("Tut_GuideToSpyglass");
			DialogExit();
		break;

		case "ToTheTown_2":
			AddDialogExitQuest("Tut_SkipTutorialInPort");
			DialogExit();
		break;

		case "NoStallsOnQC":
			dialog.text = DLG_TEXT[139];
			link.l1 = DLG_TEXT[134];
			link.l1.go = "GuideToSpyglass";
			link.l2 = DLG_TEXT[135];
			link.l2.go = "ContinueWithoutSpyglass";
			link.l3 = DLG_TEXT[136];
			link.l3.go = "Skip_TutorialInPort";
		break;

		case "GuideToSpyglass":
			if (GetCurrentFlag() != FRANCE && GetCurrentFlag() != PIRATE)
				AddDialogExitQuest("Tut_GuideToSpyglass");
			else
				AddDialogExitQuest("Tut_ToTheTown");
				dialog.text = DLG_TEXT[140];
				link.l1 = DLG_TEXT[141];
				link.l1.go = "Exit";
		break;

		case "HereAretheTraders":
			addDialogExitQuest("Tut_SoBuyTheFuckingGlass");
			NextDiag.TempNode = "SoBuyTheFuckingGlass";
			dialog.text = DLG_TEXT[142];
			link.l1 = DLG_TEXT[35];
			link.l1.go = "Exit";
		break;

		case "SoBuyTheFuckingGlass":
			if(CheckCharacterItem(Pchar, "spyglass2"))
			{
				dialog.text = DLG_TEXT[143];
				link.l1 = DLG_TEXT[144];
				if (GetCurrentFlag() == PIRATE)
					link.l1.go = "NowGoTotheStore_1";
				else
				{
					if (GetCurrentFlag() == AMERICA)
						link.l1.go = "NowGoTotheStore";
					else
						link.l1.go = "GoToStore";
				}
				link.l2 = DLG_TEXT[145];
				link.l2.go = "Skip_TutorialInPort";
			}
			else
			{
				NextDiag.TempNode = "SoBuyTheFuckingGlass";
				dialog.text = DLG_TEXT[146];
				link.l1 = DLG_TEXT[147];
				link.l1.go = "Exit";
				link.l2 = DLG_TEXT[148];
				link.l2.go = "ContinueWithoutSpyglass";
				link.l3 = DLG_TEXT[149];
				link.l3.go = "Skip_TutorialInPort";
			}
		break;

		case "ContinueWithoutSpyglass":
			dialog.text = DLG_TEXT[150];
			link.l1 = DLG_TEXT[144];
			if (GetCurrentFlag() == PIRATE)
			{
				PChar.quest.ContinueWithoutSpyglass = "1";
				link.l1.go = "NowGoTotheStore_1";
			} 
			else 
			{
				if (GetCurrentFlag() == AMERICA)
					link.l1.go = "NowGoTotheStore";
				else
					link.l1.go = "GoToStore";
			}
			link.l2 = DLG_TEXT[145];
			link.l2.go = "Skip_TutorialInPort";
		break;

		case "GoToStore":
			AddDialogExitQuest("Tut_ReloadToOxbay");
			if (GetCurrentFlag() == FRANCE)
				dialog.text = DLG_TEXT[151];
			else
				dialog.text = DLG_TEXT[152];
				link.l1 = DLG_TEXT[35];
				link.l1.go = "Exit";
		break;

		case "NowGoTotheStore":
			dialog.text = DLG_TEXT[153];
			link.l1 = DLG_TEXT[154];
			link.l1.go = "NowGoTotheStore_1";
			link.l2 = DLG_TEXT[155];
			link.l2.go = "Skip_tutorialInTown";
		break;

		case "NowGoTotheStore_1":
			AddDialogExitQuest("Tut_MalcolmShowsTheStore");
			dialog.text = DLG_TEXT[156];
			link.l1 = DLG_TEXT[132];
			link.l1.go = "Exit";
		break;

		case "MoreDetailsOnTrade":
			AddDialogExitQuest("Tut_StartTrading");
			if (GetCurrentFlag() != PIRATE || CheckQuestAttribute("ContinueWithoutSpyglass", "1"))
				dialog.text = DLG_TEXT[157];
			else
				dialog.text = DLG_TEXT[159];
			if (GetCargoGoods(Pchar, CharGood1) != 0) dialog.text = dialog.text + XI_ConvertString(Goods[CharGood1].name);
			if (GetCargoGoods(Pchar, CharGood2) != 0 && CharGood2 != CharGood1) dialog.text = dialog.text + DLG_TEXT[158] + XI_ConvertString(Goods[CharGood2].name);
			if (GetCurrentFlag() != PIRATE || CheckQuestAttribute("ContinueWithoutSpyglass", "1"))
				dialog.text = dialog.text + DLG_TEXT[160];
			else
				DeleteQuestAttribute("ContinueWithoutSpyglass");
				dialog.text = dialog.text + DLG_TEXT[161];
				link.l1 = DLG_TEXT[162];
				link.l1.go = "MoreDetailsOnTrade_1";
				link.l2 = DLG_TEXT[163];
				link.l2.go = "MoreDetailsOnTrade_2";
		break;

		case "MoreDetailsOnTrade_1":
			dialog.text = DLG_TEXT[164];
			link.l1 = DLG_TEXT[165];
			link.l1.go = "MoreDetailsOnTrade_2";
		break;

		case "MoreDetailsOnTrade_2":
			if (AUTO_SKILL_SYSTEM == 0)
			{
				dialog.text = DLG_TEXT[166];
			}
			else 
			{
				dialog.text = DLG_TEXT[167];
			}
			link.l1 = DLG_TEXT[168];
			link.l1.go = "exit";
		break;
		
		case "GoodsSoldInStore":
			if(GetCargoGoods(Pchar, CharGood1) != 0 || GetCargoGoods(Pchar, CharGood2) != 0) // KK
				{
					dialog.text = DLG_TEXT[169];
					link.l1 = DLG_TEXT[170];
					link.l1.go = "GoodsSoldInStore_1";
					link.l2 = DLG_TEXT[171];
					link.l2.go = "Skip_TutorialInTown";
				}
			else
				{
					dialog.text = DLG_TEXT[172];
					link.l1 = DLG_TEXT[35];
					link.l1.go = "GoodsSoldInStore_1";
					link.l2 = DLG_TEXT[171];
					link.l2.go = "Skip_TutorialInTown";
				}
			if (GetCurrentFlag() == FRANCE) dialog.text = dialog.text + DLG_TEXT[295];
		break;

		case "GoodsSoldInStore_1":
			AddDialogExitQuest("Tut_MalcolmLeadsToTavern");
			dialog.text = DLG_TEXT[173];
			link.l1 = DLG_TEXT[174];
			link.l1.go = "exit";
		break;

		case "CrewHiringInTavern":
			dialog.text = DLG_TEXT[175];
			link.l1 = DLG_TEXT[61];
			link.l1.go = "CrewHiringInTavern_1";
		break;

		case "CrewHiringInTavern_1":
			addDialogExitQuest("Tut_MalcolmLeavesTavern");
			dialog.text = DLG_TEXT[176];
			link.l1 = DLG_TEXT[177];
			link.l1.go = "exit";
		break;

		case "CrewHiredintavern":
			if(GetMaxCrewQuantity(Pchar) == GetCrewQuantity(Pchar))
				{
					dialog.text = DLG_TEXT[178];
					link.l1 = DLG_TEXT[179];
					link.l1.go = "CrewHiredintavern_1";
					link.l2 = DLG_TEXT[180];
					link.l2.go = "Skip_TutorialInTown";
				}
			else
				{
					dialog.text = DLG_TEXT[181];
					link.l1 = DLG_TEXT[179];
					link.l1.go = "CrewHiredintavern_1";
					link.l2 = DLG_TEXT[180];
					link.l2.go = "Skip_TutorialInTown";
				}
		break;

		case "CrewHiredintavern_1":
			AddDialogExitQuest("Tut_BooGoForShipyard");
			dialog.text = DLG_TEXT[182];
			link.l1 = DLG_TEXT[183];
			link.l1.go = "exit";
		break;

		case "ShipRepairing":
			dialog.text = DLG_TEXT[184];
			link.l1 = DLG_TEXT[185];
			link.l1.go = "ShipRepairing_1";
			link.l2 = DLG_TEXT[186];
			link.l2.go = "ShipRepairing_2";
		break;

		case "ShipRepairing_1":
			dialog.text = DLG_TEXT[187];
			link.l1 = DLG_TEXT[188];
			link.l1.go = "ShipRepairing_2";
		break;

		case "ShipRepairing_2":
			AddDialogExitQuest("Tut_MalcolmLeavesShipyard");
			dialog.text = DLG_TEXT[189];
			link.l1 = DLG_TEXT[35];
			link.l1.go = "exit";
		break;

		case "FinalStage":
			DeleteAttribute(&PChar,"vcskip"); // NK 04-06
			if (GetCharacterShipCabin(PChar) != "Cabin_none")
				dialog.text = DLG_TEXT[190];
			else
				dialog.text = DLG_TEXT[191];
				link.l1 = DLG_TEXT[192];
				link.l1.go = "FinalStage_1";
		break;

		case "FinalStage_1":
			dialog.text = DLG_TEXT[193];
			link.l1 = DLG_TEXT[194];
			link.l1.go = "Suggestions";
			link.l2 = DLG_TEXT[195];
			link.l2.go = "Ship_sailing";
			link.l3 = DLG_TEXT[196];
			link.l3.go = "CannonFire";
			link.l4 = DLG_TEXT[197];
			link.l4.go = "BoardingShips";
			link.l5 = DLG_TEXT[198];
			link.l5.go = "Salary";
			link.l6 = DLG_TEXT[199];
			link.l6.go = "Direct_Sailing";
			link.l7 = DLG_TEXT[200];
			link.l7.go = "Moralee";
			link.l8 = DLG_TEXT[201];
			link.l8.go = "Flags";
			link.l9 = DLG_TEXT[202];
			link.l9.go = "Final_Goodbye";
		break;

		case "Suggestions":
			string good1 = "";
			string good2 = "";
			string colony1 = "";
			string colony2 = "";
			FindProfitableRoute(&good1, &colony1, &good2, &colony2);
			string aboutColony = good2 + DLG_TEXT[203] + colony2;
			if(colony1 == "nowhere") colony1 = "";
			if(colony2 == "nowhere") aboutColony = "..";
			if (colony1 != "")
				dialog.text = DLG_TEXT[204] + good1 + DLG_TEXT[158] + good2 + DLG_TEXT[205] + colony1 + DLG_TEXT[206] + good1 + DLG_TEXT[207] + aboutColony + ".";
			else
				dialog.text = DLG_TEXT[208];
				link.l1 = DLG_TEXT[195];
				link.l1.go = "Ship_sailing";
				link.l2 = DLG_TEXT[196];
				link.l2.go = "CannonFire";
				link.l3 = DLG_TEXT[197];
				link.l3.go = "BoardingShips";
				link.l4 = DLG_TEXT[198];
				link.l4.go = "Salary";
				link.l5 = DLG_TEXT[199];
				link.l5.go = "Direct_Sailing";
				link.l6 = DLG_TEXT[200];
				link.l6.go = "Moralee";
				link.l7 = DLG_TEXT[201];
				link.l7.go = "Flags";
				link.l8 = DLG_TEXT[202];
				link.l8.go = "Final_Goodbye";
		break;

		case "Skip_tutorial":
			dialog.text = DLG_TEXT[209];
			link.l1 = DLG_TEXT[127];
			link.l1.go = "Skip_tutorial_1";
		break;

		case "Skip_tutorial_1":
			dialog.text = DLG_TEXT[128];
			link.l1 = DLG_TEXT[129];
			link.l1.go = "Skip_tutorial_2";
		break;

		case "Skip_tutorial_2":
			bDisableFastReload = 0;
			addDialogExitQuest("Tut_SkipTutorialOnShip");
			NextDiag.Tempnode = "Questions";
			dialog.text = DLG_TEXT[210];
			if (GetCurrentFlag() == ENGLAND) dialog.text = dialog.text + "\n" + DLG_TEXT[211];
			dialog.text = dialog.text + DLG_TEXT[212];
			link.l1 = DLG_TEXT[213];
			link.l1.go = "Exit";
		break;

		case "Skip_TutorialInPort":
			addDialogExitQuest("Tut_SkipTutorialInPort");
			dialog.text = DLG_TEXT[214];
			link.l1 = DLG_TEXT[192];
			link.l1.go = "Skip_TutorialInPort_1";
		break

		case "Skip_TutorialInPort_1":
			dialog.text = DLG_TEXT[193];
			link.l1 = DLG_TEXT[215];
			link.l1.go = "Suggestions";
			link.l2 = DLG_TEXT[195];
			link.l2.go = "Ship_sailing";
			link.l3 = DLG_TEXT[196];
			link.l3.go = "CannonFire";
			link.l4 = DLG_TEXT[197];
			link.l4.go = "BoardingShips";
			link.l5 = DLG_TEXT[198];
			link.l5.go = "Salary";
			link.l6 = DLG_TEXT[199];
			link.l6.go = "Direct_Sailing";
			link.l7 = DLG_TEXT[200];
			link.l7.go = "Moralee";
			link.l8 = DLG_TEXT[201];
			link.l8.go = "Flags";
			link.l9 = DLG_TEXT[202];
			link.l9.go = "Final_Goodbye";
		break;

		case "Skip_TutorialInTown":
			bDisableFastReload = 0;
			addDialogExitQuest("Tut_SkipTutorialInTown");
			dialog.text = DLG_TEXT[214];
			link.l1 = DLG_TEXT[192];
			link.l1.go = "Skip_TutorialInTown_1";
		break;

		case "Skip_TutorialInTown_1":
			dialog.text = DLG_TEXT[193];
			link.l1 = DLG_TEXT[215];
			link.l1.go = "Suggestions";
			link.l2 = DLG_TEXT[195];
			link.l2.go = "Ship_sailing";
			link.l3 = DLG_TEXT[196];
			link.l3.go = "CannonFire";
			link.l4 = DLG_TEXT[197];
			link.l4.go = "BoardingShips";
			link.l5 = DLG_TEXT[198];
			link.l5.go = "Salary";
			link.l6 = DLG_TEXT[199];
			link.l6.go = "Direct_Sailing";
			link.l7 = DLG_TEXT[200];
			link.l7.go = "Moralee";
			link.l8 = DLG_TEXT[201];
			link.l8.go = "Flags";
			link.l9 = DLG_TEXT[202];
			link.l9.go = "Final_Goodbye";
		break;

		case "Ship_sailing":
			dialog.text = DLG_TEXT[216];
			link.l1 = DLG_TEXT[196];
			link.l1.go = "CannonFire";
			link.l2 = DLG_TEXT[197];
			link.l2.go = "BoardingShips";
			link.l3 = DLG_TEXT[198];
			link.l3.go = "Salary";
			link.l4 = DLG_TEXT[199];
			link.l4.go = "Direct_Sailing";
			link.l5 = DLG_TEXT[200];
			link.l5.go = "Moralee";
			link.l6 = DLG_TEXT[201];
			link.l6.go = "Flags";
			link.l7 = DLG_TEXT[202];
			link.l7.go = "Final_Goodbye";
		break;

		case "CannonFire":
			dialog.text = DLG_TEXT[217];
			link.l1 = DLG_TEXT[197];
			link.l1.go = "BoardingShips";
			link.l2 = DLG_TEXT[198];
			link.l2.go = "Salary";
			link.l3 = DLG_TEXT[199];
			link.l3.go = "Direct_Sailing";
			link.l4 = DLG_TEXT[200];
			link.l4.go = "Moralee";
			link.l5 = DLG_TEXT[201];
			link.l5.go = "Flags";
			link.l6 = DLG_TEXT[195];
			link.l6.go = "Ship_sailing";
			link.l7 = DLG_TEXT[202];
			link.l7.go = "Final_Goodbye";
		break;

		case "BoardingShips":
			dialog.text = DLG_TEXT[218];
			link.l1 = DLG_TEXT[198];
			link.l1.go = "Salary";
			link.l2 = DLG_TEXT[199];
			link.l2.go = "Direct_Sailing";
			link.l3 = DLG_TEXT[200];
			link.l3.go = "Morale";
			link.l4 = DLG_TEXT[201];
			link.l4.go = "Flags";
			link.l5 = DLG_TEXT[195];
			link.l5.go = "Ship_sailing";
			link.l6 = DLG_TEXT[196];
			link.l6.go = "CannonFire";
			link.l7 = DLG_TEXT[202];
			link.l7.go = "Final_Goodbye";
		break;
		
		case "Salary":
			dialog.text = DLG_TEXT[219];
			link.l1 = DLG_TEXT[220];
			link.l1.go = "Salary_1";
		break;
		
		case "Salary_1":
			dialog.text = DLG_TEXT[222];
			link.l1 = DLG_TEXT[221];
			link.l1.go = "Salary_2";
		break;

		case "Salary_2":
			dialog.text = DLG_TEXT[223];
			link.l1 = DLG_TEXT[199];
			link.l1.go = "Direct_Sailing";
			link.l2 = DLG_TEXT[200];
			link.l2.go = "Morale";
			link.l3 = DLG_TEXT[201];
			link.l3.go = "Flags";
			link.l4 = DLG_TEXT[195];
			link.l4.go = "Ship_sailing";
			link.l5 = DLG_TEXT[196];
			link.l5.go = "CannonFire";
			link.l6 = DLG_TEXT[197];
			link.l6.go = "BoardingShips";
			link.l7 = DLG_TEXT[202];
			link.l7.go = "Final_Goodbye";
		break;

		case "Direct_Sailing":
			dialog.text = DLG_TEXT[224];
			link.l1 = DLG_TEXT[200];
			link.l1.go = "Morale";
			link.l2 = DLG_TEXT[201];
			link.l2.go = "Flags";
			link.l3 = DLG_TEXT[195];
			link.l3.go = "Ship_sailing";
			link.l4 = DLG_TEXT[196];
			link.l4.go = "CannonFire";
			link.l5 = DLG_TEXT[197];
			link.l5.go = "BoardingShips";
			link.l6 = DLG_TEXT[198];
			link.l6.go = "Salary";
			link.l7 = DLG_TEXT[202];
			link.l7.go = "Final_Goodbye";
		break;

		case "Morale":
			dialog.text = DLG_TEXT[225];
			link.l1 = DLG_TEXT[201];
			link.l1.go = "Flags";
			link.l2 = DLG_TEXT[195];
			link.l2.go = "Ship_sailing";
			link.l3 = DLG_TEXT[196];
			link.l3.go = "CannonFire";
			link.l4 = DLG_TEXT[197];
			link.l4.go = "BoardingShips";
			link.l5 = DLG_TEXT[198];
			link.l5.go = "Salary";
			link.l6 = DLG_TEXT[199];
			link.l6.go = "Direct_Sailing";
			link.l7 = DLG_TEXT[202];
			link.l7.go = "Final_Goodbye";
		break;

		case "Flags":
			dialog.text = DLG_TEXT[226];
			link.l1 = DLG_TEXT[195];
			link.l1.go = "Ship_sailing";
			link.l2 = DLG_TEXT[196];
			link.l2.go = "CannonFire";
			link.l3 = DLG_TEXT[197];
			link.l3.go = "BoardingShips";
			link.l4 = DLG_TEXT[198];
			link.l4.go = "Salary";
			link.l5 = DLG_TEXT[199];
			link.l5.go = "Direct_Sailing";
			link.l6 = DLG_TEXT[200];
			link.l6.go = "Morale";
			link.l7 = DLG_TEXT[202];
			link.l7.go = "Final_Goodbye";
		break;

		case "Final_Goodbye":
			if (Locations[FindLoadedLocation()].type != "tavern") AddDialogExitQuest("Tut_SkipTutorialInTown");
			NextDiag.Tempnode = "Questions";
			string locTavern = DLG_TEXT[227];
			if(Locations[FindLoadedLocation()].type != "tavern") locTavern += DLG_TEXT[212];
			dialog.text = locTavern;
			if (GetCurrentFlag() == ENGLAND) dialog.text = dialog.text + "\n" + DLG_TEXT[211];
			link.l1 = DLG_TEXT[228];
			link.l1.go = "Exit";
		break;

		case "Questions":
			dialog.text = DLG_TEXT[229];
			link.l1 = DLG_TEXT[215];
			link.l1.go = "Suggestions";
			link.l2 = DLG_TEXT[195];
			link.l2.go = "Ship_sailing";
			link.l3 = DLG_TEXT[196];
			link.l3.go = "CannonFire";
			link.l4 = DLG_TEXT[197];
			link.l4.go = "BoardingShips";
			link.l5 = DLG_TEXT[198];
			link.l5.go = "Salary";
			link.l6 = DLG_TEXT[199];
			link.l6.go = "Direct_Sailing";
			link.l7 = DLG_TEXT[200];
			link.l7.go = "Morale";
			link.l8 = DLG_TEXT[201];
			link.l8.go = "Flags";
			link.l9 = DLG_TEXT[202];
			link.l9.go = "Goodbye";
		break;
		
		case "Goodbye":
			NextDiag.Tempnode = "Questions";
			locTavern = DLG_TEXT[227];
			if(Locations[FindLoadedLocation()].type != "tavern") locTavern += DLG_TEXT[212];
			dialog.text = locTavern;
			link.l1 = DLG_TEXT[228];
			link.l1.go = "Exit";
		break;

		case "stormystart":
			PlayStereoSound("sails_up");
			addDialogExitQuest("stormystart");
			DialogExit();
			bChangeNation = true;
		break;

		case "OnMalcolmShip":
			dialog.text = DLG_TEXT[230] + XI_ConvertString(GetShipTypeName(PChar)) + DLG_TEXT[231] + GetMyShipNameShow(PChar) + DLG_TEXT[232];
			link.l1 = DLG_TEXT[233] + XI_ConvertString(GetShipTypeName(NPChar)) + ", '" + NPChar.ship.name + "'" + DLG_TEXT[141];
			link.l1.go = "OnMalcolmShip_1";
			link.l2 = DLG_TEXT[234];
			link.l2.go = "stormystart";
		break;

		case "OnMalcolmShip_1":
			dialog.text = DLG_TEXT[235];
			link.l1 = DLG_TEXT[236];
			link.l1.go = "OnMalcolmShip_2";
			link.l2 = DLG_TEXT[237];
			link.l2.go = "Skip_tutorial";
		break;

		case "OnMalcolmShip_2":
			addDialogExitQuest("Tut_TakeStuff");
			NextDiag.TempNode = "TakeWeapon";
			dialog.text = DLG_TEXT[238];
			link.l1 = DLG_TEXT[16];
			link.l1.go = "Exit";
		break;

		case "SkipTutorialOnShip":
			NextDiag.TempNode = "SkipTutorialOnShip";
			dialog.text = DLG_TEXT[239];
			link.l1 = DLG_TEXT[35];
			link.l1.go = "Exit";
		break;
		
		case "exit":
			NextDiag.CurrentNode = NextDiag.Tempnode;
			DialogExit();
		break;
	}
}