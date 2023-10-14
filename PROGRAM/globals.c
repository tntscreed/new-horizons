#include "storm-engine\sound.h"
#include "storm-engine\messages.h"
#include "Sound\sound.c"

//--------------------------------------------------------------------
// Math section
//--------------------------------------------------------------------
#define PI		3.1415926535897932384626433832795 // 3.14159265
#define PIm2	6.283185307179586476925286766559 // 6.28318530
#define PId2	1.5707963267948966192313216916398 // 1.57079632
#define INVALID_SOUND_ID	0

int ngMusicID = 0;
string sgMusicName = "?";

float FRAND(float _x) { return rand(32768) / 32768.0 * _x; }

//--------------------------------------------------------------------
// Bool section
//--------------------------------------------------------------------
#define false			0
#define true			1


//--------------------------------------------------------------------
// Nation section
//--------------------------------------------------------------------
#define	MAX_NATIONS			8
#define MAX_NATIONS_SQR		64

#define ENGLAND          0
#define FRANCE           1
#define SPAIN            2
#define PIRATE           3
#define HOLLAND          4
#define PORTUGAL         5
// KK -->
#define AMERICA          6
#define SWEDEN           6

#define GUEST1_NATION    6
#define GUEST2_NATION    7

#define PRIVATEER_NATION 8
#define NEUTRAL_NATION   9
#define UNKNOWN_NATION  10
#define ANY_NATION      11

#define PERSONAL_NATION  -1
// <-- KK

// Natmask string handling, NK 05-07-07 -----------------------------------
// CHANGE THESE WHEN WE INCREASE NATIONS!

// returns the true-for-all-nations mask. Good for checking the length of the natmask string, or setting a natmask to true-for-all
string GetNationStringAll()
{
	return "1111111"; // true for all nations
}

// the following two functions are mostly for ethnic typing of models:
// Returns the Northern European nations: Britain and the Netherlands.
string GetNationStringNorthEuro()
{
	return "1000100";
}
// same as above but with France too.
string GetNationStringNorthEuroFr()
{
	return "1100100";
}

// Returns the Southern European nations: Spain and Portugal
string GetNationStringSouthEuro()
{
	return "0010010";
}
// Returns only specified nation (true for only nat)
// useful for PIRATE only, say
string GetNationString(int nat)
{
	string ostr = "";
	for(int i = 0; i < NATIONS_QUANTITY; i++)
	{
		if(i == nat) ostr += "1";
		else ostr += "0";
	}
	return ostr;
}

// same as above but true for all BUT nat
string GetNationStringNot(int nat)
{
	string ostr = "";
	for(int i = 0; i < NATIONS_QUANTITY; i++)
	{
		if(i == nat) ostr += "0";
		else ostr += "1";
	}
	return ostr;
}
// NK <--

object	Nations[MAX_NATIONS];
int		NationsRelations[MAX_NATIONS_SQR];

object  GameState;

//--------------------------------------------------------------------
// Characters section
//--------------------------------------------------------------------
//	TOTAL_CHARACTERS is the size of the Characters array.  This will include every character generated by the game.
//  MAX_CHARACTERS is the number of permanent characters generated.  Does not include fantoms, does enclude Enc_Officer slots.  
//    If additional permanent characters are added, increase this and the following numbers.
//    To find out how many permanent characters are currently generated, call FindBlankCharSlot() then look at CHARACTERS_QUANTITY.
//  CHARACTERS_QUANTITY	is a variable that shows the total number characters used out of MAX_CHARACTERS. 
//    Call FindBlankCharSlot() before using CHARACTERS_QUANTITY to get actual current number.
//    If you add a character using FindBlankCharSlot(), you must update CHARACTERS_QUANTITY after calling.  See comments in that function.
//    Currently in B13_beta4 CHARACTERS_QUANTITY is 1158
//  LOC_FANTOM_CHARACTERS is the index of the first local fantom.  Must be > MAX_CHARACTERS
//  FANTOM_CHARACTERS is the starting index for global fantoms, such as ships around an island.  
//    TOTAL_CHARACTERS minus FANTOM_CHARACTERS gives the number of possible global fantoms.
//--------------------------------------------------------------------
// LDH new numbers 02May09
#define TOTAL_CHARACTERS			2600	// Size of Characters array, all the characters in the game. JRH was 2400
#define MAX_CHARACTERS				2349	// Number of permanent characters, JRH was 2149
#define LOC_FANTOM_CHARACTERS			2350    // Index of first local fantom, must be > MAX_CHARACTERS, JRH was 2150
#define FANTOM_CHARACTERS			2400	// Index of first permanent fantom, remainder of Character array is used for these, JRH was 2200
int CHARACTERS_QUANTITY = 0; // 05-04-05 add int for max char, replace using of MAX_CHARACTERS.

#define	MAX_LOCATIONS		1100 //NK 05-03-30 up number of locs	//JRH was 1000
#define	MAX_ISLANDS			24 // ditto, and now use ISLANDS_QUANTITY. 8
// KK #define	MAX_BOARDING		16

string 	sEnManNames[2], sEnWomenNames[2], sEnFamilies[2];
string 	sHoManNames[2], sHoWomenNames[2], sHoFamilies[2];
string 	sPoManNames[2], sPoWomenNames[2], sPoFamilies[2];
string 	sFrManNames[2], sFrWomenNames[2], sFrFamilies[2];
string 	sSpManNames[2], sSpWomenNames[2], sSpFamilies[2];
string 	sAmManNames[2], sAmWomenNames[2], sAmFamilies[2];
string  sSwManNames[2], sSwWomenNames[2], sSwFamilies[2];

// KK -->
#define MAN_HEIGHT      1.85
#define MAN_CAPACITY   10.0
#define WOMAN_HEIGHT    1.7
#define WOMAN_CAPACITY  9.5

#define PASSENGERS_MAX			32
#define OFFICER_MAX				4
#define COMPANION_MAX			4
#define MAX_CHARACTER_SKILL		10	// Maximum number for each skill
#define NUM_DIFF_SKILLS			10	// Number of different skills
// <-- KK

object  NullCharacter;
// KK object	Boarding[MAX_BOARDING]; // never used, it seems. 05-07-15
object	Characters[TOTAL_CHARACTERS];
object	Locations[MAX_LOCATIONS];
object	Islands[MAX_ISLANDS];
object  Environment;
int		nMainCharacterIndex = 0;//-1;
int		iNumFantoms;

int		nLocationsNum;
int		ISLANDS_QUANTITY = 0; // NK 05-03-30 now use an oversized islands array too.
int		nTeleportLocation;
string	sTeleportLocName;

int		iRealismMode = 1; // PB: 0=Arcade - 1=Realistic - 2=Iron Man

// added by MAXIMUS -->
bool	tradeLow = false;
bool	tradeHigh = false;
bool	bAnimation = true;
bool	bNewInterface = true;
bool	bNewIcons = true;
bool	bStealExchange = false;
bool	bEnemyExchange = false;
bool	bDeadExchange = false;

// KK -->
#define ILANG_ENG   0
#define ILANG_RUS   1
#define ILANG_SPA   2
#define ILANG_FRA   3
#define ILANG_GER   4
#define ILANG_POL   5
#define ILANG_SWE   6

int iLangInterface = ILANG_ENG;
int GetInterfaceLanguage() { return iLangInterface; }
void SetInterfaceLanguage(int il) { if (il >= 0 && il < 7) iLangInterface = il; }
int iKeyboardLayout = iLangInterface;
int GetKeyboardLayout() { return iKeyboardLayout; }
void SetKeyboardLayout(int kl) { if (kl >= 0 && kl < 7) iKeyboardLayout = kl; }
// <-- KK

bool	bLanguageRus = false;
//bool	transferCaptain = false; // eliminated - no longer in use anywhere
bool	ransackCaptain = false;
bool	wasSwap = false;
bool	newModel = false;
bool	isGunpowder = false;
bool	isStorage = false;
bool	bRealBattleInterface = false; // ccc
string  CharModel = "Animists1";
string  CharSex = "man";
string  CharAni = "man";
string  CharFirstName;
string  CharMiddleName;
string  CharLastName;
string  CharOldFirstName;
string  CharOldMiddleName;
string  CharOldLastName;
int	CharNation = ENGLAND;
string  CharShipType = "Lugger1";
string  CharShipName = "Victory";
int	CharStore = OXBAY_STORE;
int	CharGood1 = GOOD_CHOCOLATE;
int	CharGood2 = GOOD_LEATHER;
int	CharDifficulty = 1;
string  CapturedColonyName = "";
bool	bCaptureShip = false;
// added by MAXIMUS <--

// KK -->
#define PIRATEFLAGS_TEXTURES_QUANTITY       6 // Previously commented as able to support 6. Could it support 7 like PERSONALFLAGS_TEXTURES_QUANTITY?
#define PERSONALFLAGS_TEXTURES_QUANTITY     7 //
#define FLAGS_PICTURES_QUANTITY_PER_TEXTURE 7
#define FLAGS_NULL_PICTURE_TEXTURE_INDEX    -1

bool	bChangeNation = true;
int CharLocation = 0;
int	CharSkills[NUM_DIFF_SKILLS];
float	CharBonusSkills[NUM_DIFF_SKILLS];
int	CharPlayerType; // PB
int CharYear = 1690;
int CharMonth = 4;
int CharDay = 15;
int CharHour = 10;
int CharMinute = 24;
int CharSecond = 42;
bool bGuest1NationExists = false;
bool bGuest2NationExists = false;
int CharPirateFlag = 0;
int CharPirateFlagTex = 0;
int CharPersonalFlag = 0;
int CharPersonalFlagTex = 0;

bool bAutosaveAtSea = true;
// <-- KK

// Screwface
int CurrentStoryline = -1;
string CurrentProfile = "";
//int stringlen = 0;
// End

// Screwface : switch for permanent crewmembers on shore
bool LANDCREWMEMBERS = false;
int  MAX_CREWMEMBERS = 10;
//

bool isCharacterDead(int iIndex) { return sti(Characters[iIndex].Dead); }
ref GetFantomCharacter(int iIndex) { return &Characters[FANTOM_CHARACTERS + iIndex]; }
ref GetCharacter(int iIndex) { if(iIndex >= TOTAL_CHARACTERS || iIndex < 0) return &NullCharacter; return &Characters[iIndex]; }
ref GetMainCharacter() { return &Characters[nMainCharacterIndex]; }
int	GetMainCharacterIndex() { return nMainCharacterIndex; }
int	GetCharacterIndex(string string_id) 
{
	return NativeFindCharacter(&Characters, string_id);
/*	int n;
	for(n=0;n<TOTAL_CHARACTERS;n++)
	{
		if(string_id == Characters[n].id) return n; 
	}
	return -1;*/
}

void SetMainCharacterIndex(int index) 
{ 
	if (nMainCharacterIndex!=-1)
	{
		Characters[nMainCharacterIndex].MainCharacter = "0";
		Characters[nMainCharacterIndex].model.entity = "NPCharacter";
	}
	nMainCharacterIndex = index; 
	Characters[nMainCharacterIndex].MainCharacter = "1";
	Characters[nMainCharacterIndex].model.entity = "Player";
}

// NK -->
// move item defines to BS.h

//--------------------------------------------------------------------
// Land Encounters section
//--------------------------------------------------------------------
// NK -->
#define MAX_LANDENCTEMPLATES 20 // was 5
int LANDENCTEMPLATES_QUANTITY = 0;
#define MAX_LAND_ENCOUNTERS 20 // was 3
int LAND_ENCOUNTERS_QUANTITY = 0;
// NK <--

object LandEncTemplate[MAX_LANDENCTEMPLATES];
object LandEncounters[MAX_LAND_ENCOUNTERS];
// NK -->
bool AlwaysRunToggle = true;
// KK -->
#define LOG_QUIET   0
#define LOG_LACONIC 1
#define LOG_NORMAL  2
#define LOG_VERBOSE 3
int LogsToggle = LOG_NORMAL;
// <-- KK
// NK <--


// RM put these in globals.c -->

// Rank defines and rank database.
#define NEXTRANK_SCALAR 1.0
#define NEXTRANK_POW 2.5
#define NEXTRANK_COEFF 1.0
#define NEXTRANK_ADD 0.5
#define MAX_RANK 12
#define LAND_PER_RANK 200

#define DEFAULT_TITLE "Mister"

//define relation boundaries
#define REL_MIN -119.0
#define REL_WAR -60.0
#define REL_AFTERATTACK -45.0
#define REL_AMNESTY -30.0
#define REL_NEUTRAL 0.0
#define REP_LEAVEMIN 30.0
/*if rep less than this and you try to leave service... bad things happen:
(instant war, hostile soldiers, land confiscated, can't come back to old rank)*/
#define REP_COMEBACKMIN 30 //if rep >= this, can resume career. Same as above for now.

//for groups, OK just soldiers
#define RM_GROUP_MINKILLS	3 // if player has killed fewer than this many soldiers, soldiers will be neutral, otherwise hostile.

#define LOM_COST 400 //cost to buy a Letter of Marque = (5.0-relation difference) x this

//gov relation defines
#define GOVREL_RANKSCALAR 0.1 //amount of nation relation to add to gov relation when that gov promotes you

//note that REPCH_FRIENDLY is in /addition/ to RCH_neut.
#define REPCH_FRIENDLY -30
#define REPCH_NEUTRAL -1
/* EXPLANATION
This adds the following properties to each char (well, right now pchar).
char.nations.(nationnumber) for each nation.

For pchar.nation and all nations at peace with pchar.nation it's REL_NEUTRAL;
all neutral with pchar.nation it's REL_AMNESTY; and all at war with pchar.nation
it's REL_AFTERATTACK.
Pchar.nations.(nationnumber).LoM is 0 for all nations but Pchar.nation,
in which case it's 1 (you start out with a Letter of Marque from your home nation).
Note that you must be neutral with that nation to buy a LoM and buying the LoM sets your relation to 0 if it's less than 0.
*/
//define various rep boundaries for trading with merchants/shipwrights.
#define TRADEREP_MIN 10
#define TRADEREP_STRENGTH 20
#define TRADEREP_NEUTRAL 40
#define TRADEREP_WAR 60
#define TRADEREP_ALL 80

// RM <--

#define BUILDVERSION				"15.0.0-alpha.17" // this is not used in reinit.c anymore, so we can use a string now
#define IS_SGV					14.945 // must be a float - use small numbers to keep them sequential for all these updates --> 12.10 is smaller than 12.9!

#define PA_INET					"www.piratesahoy.net"
#define PA_DOWN					"www.moddb.com/mods/new-horizons"
#define PA_WALK					"www.piratesahoy.net/wiki/new-horizons-quests"

//**********DEBUG***********
//DO NOT CHANGE THESE UNLESS YOU KNOW WHAT YOU ARE DOING!
//Note if you are not starting a new game you will have to change these values in the console.
int DEBUG = 				0; 		// debug mode:
							//	1. in the "Select Storyline" interface: replaces 'pretty display names' for ships with their 'internal ID', which matches their model folder name.
							//	2. in the "Shipyard>Appearance" interface: makes ALL ship models and repaints available; and displays their "internal ID" there too.
							//	3. at the Tailor: adds dialog option to cycle through ALL character models in the game.
							//	- does also other stuff in places; use http://piratesahoy.net/threads/modding-tips-tricks.24942 to find out what and where.
							//	  (seriously; what the holly crappaloni does this have to do with marrying governors' daughters/nieces/nephews/sons?!?)
							//	- as this is not a #define, this can be switched ON/OFF at ANY time in mid-game;
							//	  most simple/logical is to use PROGRAM\console.c for this (again, refer to the "Modding Tips & Tricks" link above);
							//	  but you could also link it to a button in an interface, a dialog option, or whatever else catches yer fancy.
							//	  After all... if you are reading this, then you are a pirate; and you are FREE!
int DEBUGINFO = 			0; 		// log debug info
int TRACELOG = 				0; 		// run extra trace() commands
int TRACEALLLOGS = 			0; 		// trace() every Log() call


//**********WIP MODS***********
#define FCOHS				0		// Erwin Lindemann: Friendly Contact on High Seas / Hail Ship Mod
#define WEIGHTMOD			0		// KK: All items except quest-items have specific weight which limits the amount a character can take or keep in chests
#define SHIPS_WEIGHT		0		// PB: Cannons and crew have weight; ship capacities are increased to match; overweight ships capsize
#define BUILDING_COLLISION	0		// Levis: Avoid walking through specific BuildingSet structures
#define IMPROVE_FIGHT_AI	0		// Levis: Enemies behave more natural
#define OFFICER_TUTORIAL	0		// Levis: Ingame explanation of officer system
