void CreateCaymanCharacters(ref n)
{
	object chobj;
	ref ch;

	makeref(ch, chobj);

// KK -->
	// governor
	ch.old.name = "Edmund";
	ch.old.middlename = "Christobel";
	ch.old.lastname = "Shaw";
	ch.name = TranslateString("","Edmund");
	ch.middlename = TranslateString("","Christobel");
	ch.lastname = TranslateString("","Shaw");
	ch.id		= "Edmund Christobel Shaw";
	ch.model = "albermal";
	ch.sex = "man";
	ch.location	= "Grand_Cayman_townhall";
	ch.location.group = "sit";
	ch.location.locator = "sit2";
	ch.Dialog.Filename = "Edmund Christobel Shaw_dialog.c";
	ch.Dialog.Filename.GroupDialog = "governor.c";
	ch.nation = ENGLAND;
	ch.rank 	= 1;
	ch.reputation = "60";
	ch.experience = "0";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.quest.meeting = "0";
	LAi_RemoveLoginTime(ch);
	LAi_SetHuberType(ch);
	LAi_group_MoveCharacter(ch, "ENGLAND_CITIZENS");
	ch.greeting = "Gr_Robert Christopher Silehard";
	AddGameCharacter(n, ch);
// <-- KK

// Citizens
	ch.old.name = "Ginny";
	ch.old.lastname = "Weasly";
	ch.name = TranslateString("","Ginny");
	ch.lastname = TranslateString("","Weasly");
	ch.id		= "Gillian Atterbury";
	ch.model	= "Fanielle";
	ch.sound_type = "female_citizen";
	ch.sex = "woman";
	ch.nation = ENGLAND;
	ch.location	= "Cayman_port";
	ch.location.group = "goto";
	ch.location.locator = "goto3";
	ch.Dialog.Filename = "Cayman citizen_dialog.c";
	ch.greeting = "Gr_Woman_English Citizen";
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
	LAi_SetCitizenType(ch);
	LAi_group_MoveCharacter(ch, "ENGLAND_CITIZENS");
	AddGameCharacter(n, ch);

	ch.old.name = "Ron Mc";
	ch.old.lastname = "Donald";
	ch.name = TranslateString("","Ron Mc");
	ch.lastname = TranslateString("","Donald");
	ch.id		= "Ron Donald";
	ch.model	= "sailor2";
	ch.sound_type = "male_citizen";
	ch.sex = "man";
	ch.nation = ENGLAND;
	ch.location	= "Cayman_port";
	ch.location.group = "goto";
	ch.location.locator = "goto1";
	ch.Dialog.Filename = "Cayman citizen_dialog.c";
	ch.greeting = "Gr_redmond Citizen";
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
	LAi_SetCitizenType(ch);
	LAi_group_MoveCharacter(ch, "ENGLAND_CITIZENS");
	AddGameCharacter(n, ch);

	ch.old.name = "Harry";
	ch.old.lastname = "Propper";
	ch.name = TranslateString("","Harry");
	ch.lastname = TranslateString("","Propper");
	ch.id		= "Harry Propper";
	ch.model	= "man3";
	ch.sound_type = "male_citizen";
	ch.sex = "man";
	ch.nation = ENGLAND;
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto5";
	ch.Dialog.Filename = "Cayman citizen_dialog.c";
	ch.greeting = "Gr_redmond Citizen";
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
	LAi_SetCitizenType(ch);
	LAi_group_MoveCharacter(ch, "ENGLAND_CITIZENS");
	AddGameCharacter(n, ch);

	ch.old.name = "John";
	ch.old.lastname = "Ranger";
	ch.name = TranslateString("","John");
	ch.lastname = TranslateString("","Ranger");
	ch.id		= "John Ranger";
	ch.model	= "capitan1";
	ch.sound_type = "male_citizen";
	ch.sex = "man";
	ch.nation = ENGLAND;
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto38";
	ch.Dialog.Filename = "Cayman citizen_dialog.c";
	ch.greeting = "Gr_redmond Citizen";
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
	LAi_SetCitizenType(ch);
	LAi_group_MoveCharacter(ch, "ENGLAND_CITIZENS");
	AddGameCharacter(n, ch);

	ch.old.name = "Jenna";
	ch.old.lastname = "Valentine";
	ch.name = TranslateString("","Jenna");
	ch.lastname = TranslateString("","Valentine");
	ch.id		= "Jenna Valentine";
	ch.model	= "towngirl4";
	ch.sound_type = "female_citizen";
	ch.sex = "woman";
	ch.nation = ENGLAND;
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto23";
	ch.Dialog.Filename = "Cayman citizen_dialog.c";
	ch.greeting = "Gr_woman_english Citizen";
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
	LAi_SetCitizenType(ch);
	LAi_group_MoveCharacter(ch, "ENGLAND_CITIZENS");
	AddGameCharacter(n, ch);

// Cayman pirate house 1 :

	// John Coxon.
	ch.old.name = "John";
	ch.old.lastname = "Coxon";
	ch.name 	= TranslateString("","John"); 
	ch.lastname 	= TranslateString("","Coxon");
	ch.id		= "John Coxon";
	ch.model = "Corsair1_4";
	ch.headmodel = "h_Corsair1_4";
	ch.model.height = 1.75;
	//ch.model.animation = "man_woman_sit";
	ch.sex = "man"; 
	ch.loyality = 9;
	ch.nodisarm	= 1;				// PB: Disable disarming
	//ch.alignment = "bad";
	ch.nation	= PIRATE;
	ch.sound_type = "pirate";
	GiveItem2Character(ch, "blade27");
	ch.equip.blade = "blade27";
	GiveItem2Character(ch, "pistol5");
	ch.equip.gun = "pistol5";
	ch.location	= "Cayman_Pirate_house_01_inside";
	ch.location.group = "goto";
	ch.location.locator = "goto1";
	ch.homelocation	= "Cayman_Pirate_house_01_inside";
	ch.homelocation.group = "goto";
	ch.homelocation.locator = "goto1";
	ch.Dialog.Filename = "John Coxon_dialog.c"; // boal
	ch.rank 	= 45;
	ch.reputation = "42";
	TakeNItems(ch,"medical1", Rand(4)+1); // PB
	ch.experience = 20000;
	ch.skill.Leadership = "7";
	ch.skill.Fencing = "9";
	ch.skill.Sailing = "7";
	ch.skill.Accuracy = "8";
	ch.skill.Cannons = "6";
	ch.skill.Grappling = "4";
	ch.skill.Repair = "5";
	ch.skill.Defence = "8";
	ch.skill.Commerce = "2";
	ch.skill.Sneak = "5";
	ch.money = "0";
	ch.quest.meeting = "0";
	ch.Ship.Name = "The Virgin Queen";
	ch.Ship.Type = "PiratCorvette"; // PRS3
	ch.Ship.Stopped = true;
	//KNB ch.Ship.Cannons.Type = CANNON_TYPE_CANNON_LBS12;
	ch.perks.list.BasicDefence = true;
	ch.perks.list.AdvancedDefence = true;
	ch.perks.list.SwordplayProfessional = true;
	ch.perks.list.CriticalHit = true;
	ch.perks.list.Gunman = true;
	ch.perks.list.ProfessionalGunman = true;
	ch.perks.list.Rush = true;
	ch.perks.list.IronWill = true;
	ch.perks.list.FastReload = true;
	ch.perks.list.HullDamageUp = true;
	ch.perks.list.CrewDamageUp = true;
	ch.perks.list.BasicBattleState = true;
	ch.perks.list.BasicDefence = true;
	ch.perks.list.AdvancedDefence = true;
	ch.perks.list.ShipSpeedUp = true;
	ch.perks.list.LightRepair = true;
	ch.perks.list.SharedExperience = true;
	ch.perks.list.BasicCommerce = true;
	//LAi_SetSitType(ch);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetHP(ch, 900.0, 900.0);
	LAi_NoRebirthEnable(ch);
	ch.greeting = "Gr_Ralph Fawn";
	LAi_group_MoveCharacter(ch, "QC_CITIZENS");
	AddGameCharacter(n, ch);


	///////////////////////////////////////////////////////////////////////////////////////////////
	// SOLDIERS
	///////////////////////////////////////////////////////////////////////////////////////////////
	// Soldier
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman soldier 01";
	ch.model = 6; // PB
	ch.sex = "man";
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Cayman_port";
	ch.location.group = "goto";
	ch.location.locator = "soldier_01";
	ch.Dialog.Filename = "Greenford soldier_dialog.c";
	ch.nation = ENGLAND;
	ch.rank 	= 1;
	ch.reputation = "50";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "4";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.quest.meeting = "0";
	LAi_SetGuardianType(ch);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_SetHP(ch, 80.0, 80.0);
	LAi_group_MoveCharacter(ch, "ENGLAND_SOLDIERS");
	ch.greeting = "Gr_Greenford Soldier";
	AddGameCharacter(n, ch);

	// Soldier
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman soldier 02";
	ch.model = 3; // PB
	ch.sex = "man";
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Cayman_port";
	ch.location.group = "goto";
	ch.location.locator = "soldier_02";
	ch.Dialog.Filename = "Greenford soldier_dialog.c";
	ch.nation = ENGLAND;
	ch.rank 	= 1;
	ch.reputation = "50";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "2";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.quest.meeting = "0";
	LAi_SetGuardianType(ch);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_SetHP(ch, 80.0, 80.0);
	LAi_group_MoveCharacter(ch, "ENGLAND_SOLDIERS");
	ch.greeting = "Gr_Greenford Soldier";
	AddGameCharacter(n, ch);

	// Soldier
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman soldier 03";
	ch.model = 5; // PB
	ch.sex = "man";
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Cayman_port";
	ch.location.group = "goto";
	ch.location.locator = "citizen07";
	ch.Dialog.Filename = "Greenford soldier_dialog.c";
	ch.nation = ENGLAND;
	ch.rank 	= 1;
	ch.reputation = "50";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "2";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.quest.meeting = "0";
	LAi_SetPatrolType(ch);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_SetHP(ch, 80.0, 80.0);
	LAi_group_MoveCharacter(ch, "ENGLAND_SOLDIERS");
	ch.greeting = "Gr_Greenford Soldier";
	AddGameCharacter(n, ch);

	// patrol
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman patrol 01";
	ch.model = 2; // PB
	ch.sex = "man";
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Cayman_port";
	ch.location.group = "goto";
	ch.location.locator = "locator28";
	ch.Dialog.Filename = "Patrol_dialog.c";
	ch.nation = ENGLAND;
	ch.rank 	= 1;
	ch.reputation = "50";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "3";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	ch.quest.meeting = "0";
	LAi_SetPatrolType(ch);
	LAi_SetLoginTime(ch, 22.0, 5.98333);
	LAi_SetHP(ch, 80.0, 80.0);
	LAi_group_MoveCharacter(ch, "ENGLAND_SOLDIERS");
	ch.greeting = "Gr_Patrol";
	AddGameCharacter(n, ch);

	//Soldier �� ������ �� ������ � ����
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman soldier 04";
	ch.model = 6; // PB
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto1";
	ch.Dialog.Filename = "Greenford soldier_dialog.c";
	ch.nation = ENGLAND;
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
	ch.greeting = "Gr_Greenford Soldier";
	AddGameCharacter(n, ch);

	//Soldier �� ������ �� ������ � ����  -- ��� ����
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman soldier 05";
	ch.model = 4; // PB
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto2";
	ch.Dialog.Filename = "Greenford soldier_dialog.c";
	ch.nation = ENGLAND;
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
	ch.greeting = "Gr_Greenford Soldier";
	AddGameCharacter(n, ch);

	//Soldier ����� ����������
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman soldier 06";
	ch.model = 3; // PB
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto28";
	ch.Dialog.Filename = "Greenford soldier_dialog.c";
	ch.nation = ENGLAND;
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
	ch.greeting = "Gr_Greenford Soldier";
	AddGameCharacter(n, ch);

	//Soldier ����� ����������  -- ��� ����
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman soldier 07";
	ch.model = 2; // PB
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto29";
	ch.Dialog.Filename = "Greenford soldier_dialog.c";
	ch.nation = ENGLAND;
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
	ch.greeting = "Gr_Greenford Soldier";
	AddGameCharacter(n, ch);

	//Soldier �� ������ �� ������ � �������
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman soldier 08";
	ch.model = 5; // PB
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto19";
	ch.Dialog.Filename = "Greenford soldier_dialog.c";
	ch.nation = ENGLAND;
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
	ch.greeting = "Gr_Greenford Soldier";
	AddGameCharacter(n, ch);

	//Soldier �� ������ �� ������ � �������  -- ��� ����
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman soldier 09";
	ch.model = 3; // PB
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto20";
	ch.Dialog.Filename = "Greenford soldier_dialog.c";
	ch.nation = ENGLAND;
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
	ch.greeting = "Gr_Greenford Soldier";
	AddGameCharacter(n, ch);

	//Patrol
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman patrol 02";
	ch.model = 4; // PB
	LAi_CharacterReincarnation(ch, true, false);
	ch.sound_type = "soldier";
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto37";
	ch.Dialog.Filename = "Patrol_dialog.c";
	ch.nation = ENGLAND;
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
	LAi_SetPatrolType(ch);
	LAi_SetLoginTime(ch, 22.0, 5.98333);
	LAi_SetHP(ch, 80.0, 80.0);
	LAi_group_MoveCharacter(ch, "ENGLAND_SOLDIERS");
	ch.greeting = "Gr_Patrol";
	AddGameCharacter(n, ch);

	//Patrol
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman patrol 03";
	ch.model = 5; // PB
	LAi_CharacterReincarnation(ch, true, false);
	ch.sound_type = "soldier";
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto23";
	ch.Dialog.Filename = "Patrol_dialog.c";
	ch.nation = ENGLAND;
	ch.rank 	= 1;
	ch.reputation = "None";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "3";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "10";
	LAi_SetPatrolType(ch);
	LAi_SetLoginTime(ch, 22.0, 5.98333);
	LAi_SetHP(ch, 80.0, 80.0);
	LAi_group_MoveCharacter(ch, "ENGLAND_SOLDIERS");
	ch.greeting = "Gr_Patrol";
	AddGameCharacter(n, ch);

	//Patrol
	ch.old.name = "";
	ch.old.lastname = "";
	ch.name 	= "";
	ch.lastname 	= "";
	ch.id		= "Grand Cayman patrol 04";
	ch.model = 3; // PB
	ch.sound_type = "soldier";
	LAi_CharacterReincarnation(ch, true, false);
	ch.sex = "man";
	GiveItem2Character(ch, "blade4");
	ch.equip.blade = "blade4";
	ch.location	= "Grand_Cayman_town";
	ch.location.group = "goto";
	ch.location.locator = "goto27";
	ch.Dialog.Filename = "Patrol_dialog.c";
	ch.nation = ENGLAND;
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
	LAi_SetPatrolType(ch);
	LAi_SetLoginTime(ch, 22.0, 5.98333);
	LAi_SetHP(ch, 80.0, 80.0);
	LAi_group_MoveCharacter(ch, "ENGLAND_SOLDIERS");
	ch.greeting = "Gr_Patrol";
	AddGameCharacter(n, ch);
}
