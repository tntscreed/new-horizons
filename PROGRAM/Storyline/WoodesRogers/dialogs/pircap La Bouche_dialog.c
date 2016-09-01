//#include "DIALOGS\Arabella's guard_dialog.h"
void ProcessDialogEvent()
{
	ref NPChar;
	aref Link, NextDiag;

	DeleteAttribute(&Dialog,"Links");

	makeref(NPChar,CharacterRef);
	makearef(Link, Dialog.Links);
	makearef(NextDiag, NPChar.Dialog);

	ref PChar;
	PChar = GetMainCharacter();


	switch(Dialog.CurrentNode)
	{
		// -----------------------------------������ ������ - ������ �������
		case "First time":

			Dialog.defAni = "dialog_stay1";
			Dialog.defCam = "1";
			Dialog.defSnd = "dialogs\0\017";
			Dialog.defLinkAni = "dialog_1";
			Dialog.defLinkCam = "1";
			Dialog.defLinkSnd = "dialogs\woman\024";
			Dialog.ani = "dialog_stay2";
			Dialog.cam = "1";
			dialog.snd = "Voice\ARGU\ARGU001";

			PlaySound("VOICE\ENGLISH\pir_capLL.wav");

			if(CheckAttribute(Pchar,"quest.pircap_perks") && Pchar.quest.pircap_perks == "start")
			{
				if(CheckCharacterPerk(Pchar, "GunProfessional"))
				{
					Dialog.text = DLG_TEXT[0];
					link.l1 = DLG_TEXT[1];
					link.l1.go = "exit";
				}
				else
				{
					if(CheckCharacterPerk(Pchar, "Gunman"))
					{
						LAi_SetStayType(CharacterFromID("pir_cap8"));
						LAi_SetActorType(CharacterFromID("pir_cap8"));
						LAi_ActorTurnToCharacter(characterFromID("pir_cap8"), Pchar);

						Pchar.perks.list.GunProfessional = true;
						Pchar.quest.Aperks = makeint(Pchar.quest.Aperks)-1;
						Dialog.text = DLG_TEXT[4];
						link.l1 = DLG_TEXT[5];
						link.l1.go = "exit";
						AddDialogExitQuest("perk_gunprofessional");
						
					}
					else
					{
						Dialog.text = DLG_TEXT[2];
						link.l1 = DLG_TEXT[3];
						link.l1.go = "exit";
					}
				}
			}
			else
			{
				if(CheckAttribute(Pchar,"quest.pircap_perks") && Pchar.quest.pircap_perks == "coins_instead")
				{
					if(CheckCharacterItem(Pchar,"fake_reliquary"))
					{
							Dialog.text = DLG_TEXT[8];
							link.l1 = DLG_TEXT[9];
							link.l1.go = "trade";
					}
					else
					{
							Dialog.text = DLG_TEXT[0];
							link.l1 = DLG_TEXT[1];
							link.l1.go = "exit";
							AddDialogExitQuest("labouche_dialog_move");
					}
				}
			}
			else
			{
				Dialog.text = DLG_TEXT[0];
				link.l1 = DLG_TEXT[1];
				link.l1.go = "exit";
			}
		break;

		case "who_took_the_coins":
			PlaySound("VOICE\ENGLISH\pir_capLL.wav");
			LAi_SetActorType(NPchar);
			LAi_ActorTurnToLocator(NPchar, "barmen", "stay");

			Dialog.text = DLG_TEXT[6];
			link.l1 = DLG_TEXT[7];
			link.l1.go = "exit";
			AddDialogExitQuest("who_took_the_coins2");
		break;

		case "trade":
			LAi_QuestDelay("LaBouche_reliquary_check", 0.1);
		
			string	itmid;
		
			itmid = "fake_censer";
			if(CheckCharacterItem(Pchar,"fake_censer"))
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 1.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 1.25;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 1.25;	
			}
			else
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 0.0;	
			}
		
			itmid = "fake_candelabre";
			if(CheckCharacterItem(Pchar,"fake_candelabre"))
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 1.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 1.25;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 1.25;	
			}
			else
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 0.0;	
			}
		
			itmid = "fake_chalice";
			if(CheckCharacterItem(Pchar,"fake_chalice"))
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 1.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 1.25;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 1.25;	
			}
			else
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 0.0;	
			}
		
			itmid = "jewelcross";
			if(CheckCharacterItem(Pchar,"jewelcross"))
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 1.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 1.25;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 1.25;	
			}
			else
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 0.0;	
			}

			itmid = "fake_reliquary";
			if(CheckCharacterItem(Pchar,"fake_reliquary"))
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 1.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 1.25;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 1.25;	
			}
			else
			{
				NPChar.itemtrade.itemlist.items.(itmid).qty 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).price 	= 0.0;
				NPChar.itemtrade.itemlist.items.(itmid).fprice 	= 0.0;	
			}
		
		//	AddDialogExitQuest("labouche_dialog_move");
			NextDiag.CurrentNode = NextDiag.TempNode;
			DialogExit();
			LaunchItemsTrade(NPChar);
		break;

		case "shop_&_residence_empty":
			PlaySound("VOICE\ENGLISH\pir_capLL.wav");
			Dialog.text = DLG_TEXT[10];
			link.l1 = DLG_TEXT[11];
			link.l1.go = "exit";
			AddDialogExitQuest("Vane_mine_search17");
		break;


		case "Exit":
			DialogExit();
			NextDiag.CurrentNode = NextDiag.TempNode;

		break;
	}
}
