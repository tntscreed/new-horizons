/*
���: �������, ������ �����, �������� �� �������, ������� �� ������

	������������ �������:
		stay
		dialog
*/



#define LAI_TYPE_SIT		"sit"


//�������������
void LAi_type_sit_Init(aref chr)
{
	DeleteAttribute(chr, "location.follower");
	DeleteAttribute(chr, "chr_ai.type");
	chr.chr_ai.type = LAI_TYPE_SIT;
	LAi_tmpl_stay_InitTemplate(chr);
	//��������� �������� ���������
	LAi_SetDefaultSitAnimation(chr);
	SendMessage(&chr, "lsl", MSG_CHARACTER_EX_MSG, "SetFightWOWeapon", false);
}

//��������������� ���� ���������
void LAi_type_sit_CharacterUpdate(aref chr, float dltTime)
{
	string snd = "male-citizen";
	if(CheckAttribute(chr,"sex"))
	{
		if(chr.sex == "woman")
		{
			snd = "female-citizen";
		}
	}
	if(rand(300) == 123)
	{
		LAi_CharacterPlaySound(chr, snd);
	}else{
		if(FindNearCharacters(chr, 2.5, -1.0, 30.0, 0.1, false, false) > 0)
		{
			if(rand(100) == 10)
			{
				LAi_CharacterPlaySound(chr, snd);
			}
		}
	}
}

//�������� ��������� � �������
bool LAi_type_sit_CharacterLogin(aref chr)
{
	return true;
}

//�������� ��������� �� �������
bool LAi_type_sit_CharacterLogoff(aref chr)
{
	return true;
}

//���������� ������ ���������
void LAi_type_sit_TemplateComplite(aref chr, string tmpl)
{
	LAi_tmpl_player_InitTemplate(chr);
}

//�������� � ������� ������� ������
void LAi_type_sit_NeedDialog(aref chr, aref by)
{
}

//������ �� ������, ���� ���������� true �� � ���� ������ ����� ������ ������
bool LAi_type_sit_CanDialog(aref chr, aref by)
{
	//���� ��� �������, �� �������
	if(chr.chr_ai.tmpl == LAI_TMPL_DIALOG) return false;
	//���������� �� ������
	return true;
}

//������ ������
void LAi_type_sit_StartDialog(aref chr, aref by)
{
	//���� �� �������, ��������� ������ ��� ������� ����������
	LAi_tmpl_stay_InitTemplate(chr);
	LAi_tmpl_SetActivatedDialog(chr, by);
	LAi_tmpl_dialog_NoAni(chr);
}

//��������� ������
void LAi_type_sit_EndDialog(aref chr, aref by)
{
	LAi_tmpl_stay_InitTemplate(chr);
}

//�������� �������� ������� ���������
void LAi_type_sit_Attack(aref attack, aref enemy, float attackDmg, float hitDmg)
{
}

//�������� �������� ������������������ ���������
void LAi_type_sit_Block(aref attack, aref enemy, float attackDmg, float hitDmg)
{
}

//�������� ���������
void LAi_type_sit_Fire(aref attack, aref enemy, float kDist, bool isFindedEnemy)
{
}


//�������� ��������
void LAi_type_sit_Attacked(aref chr, aref by)
{
	
}


