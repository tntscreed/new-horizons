void CreateRedmondCharacters(ref n)
{
	object chobj;
	ref ch;

	makeref(ch, chobj);

	ch.old.name = "Henry";
	ch.old.lastname = "";
	ch.name = TranslateString("","Henry");
	ch.lastname = TranslateString("","");
	ch.id		= "Henry";
	ch.model	= "HenryBeggar"; // Thomas the Terror
	ch.sound_type = "poorman";
	ch.sex = "man";
	ch.location	= "Redmond_town_01";
	ch.location.group = "goto";
	ch.location.locator = "citizen03";
	ch.Dialog.Filename = "Henry_dialog.c"; //NK reenable Henry's dialog
//	ch.greeting = "Gr_Redmond Citizen";
	ch.greeting = "Gr_Henry";
	ch.rank 	= 1;
	ch.reputation = "None";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.quest.pay100 = "0";
	ch.beggar = true;
	LAi_SetPoorType(ch);
	LAi_group_MoveCharacter(ch, "ENGLAND_CITIZENS");
	AddGameCharacter(n, ch);

	ch.old.name = "Weatherby";
	ch.old.lastname = "Swann";
	ch.name 	= TranslateString("","Weatherby");
	ch.lastname 	= TranslateString("","Swann");
	ch.id		= "Weatherby Swann";
	ch.model	= "Modyford"; // PB
	ch.model.animation = "new_man"; // PB
	ch.headmodel = "h_Nobleman2";
	ch.sex = "man";
	ch.sound_type = "seaman";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "Weatherby Swann_dialog.c";
	ch.greeting = "Gr_John Clifford Brin";
	ch.rank 	= 10;
	ch.nation = ENGLAND;
	ch.reputation = "80";
	ch.experience = "10";
	ch.skill.Leadership = "8";
	ch.skill.Fencing = "8";
	ch.skill.Sailing = "5";
	ch.skill.Accuracy = "3";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "4";
	ch.skill.Repair = "1";
	ch.skill.Defence = "5";
	ch.skill.Commerce = "9";
	ch.skill.Sneak = "1";
	ch.money = "10000";
	LAi_SetCitizenType(ch);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, "ENGLAND_CITIZENS");
	AddGameCharacter(n, ch);

	ch.old.name = "Soldier";
	ch.old.lastname = "";
	ch.name = TranslateString("","Soldier");
	ch.lastname = TranslateString("","");
	ch.id		= "Red_soldier_1";
	ch.model	= 2;
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Redmond_port";
	ch.location.group = "goto";
	ch.location.locator = "soldier_1";
	ch.Dialog.Filename = "Redmond Soldier_dialog.c";
	ch.rank 	= 1;
	ch.reputation = "None";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	LAi_SetGuardianType(ch);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_SetHP(ch, 80.0, 80.0);
	LAi_group_MoveCharacter(ch, "ENGLAND_SOLDIERS");
	ch.greeting = "Gr_Redmond Soldier";
	AddGameCharacter(n, ch);
}
