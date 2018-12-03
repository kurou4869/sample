/*******************************************************************************
* �^�C�g��:		���C���v���O����
* �v���O������:	player.cpp
* �쐬��:		�N���X�L�� �o�Ȕԍ� ����
* �쐬��:		2018/04/16
*******************************************************************************/


/*******************************************************************************
* �C���N���[�h�t�@�C��
*******************************************************************************/
#include "main.h"
#include "worldmap.h"
#include "town.h"
#include "map.h"
#include "map1.h"
#include "map2.h"
#include "map3.h"
#include "map4.h"
#include "player.h"
#include "file.h"





/*******************************************************************************
* �O���[�o���ϐ�
*******************************************************************************/
PLAYER player[PLAYER_MAX];                      //�v���C���[�\���̔z��i�l�����j




/*******************************************************************************
�֐���:	void InitPlayer( void )
����:	    void
�߂�l:	void
����:	�@�@�v���C���[�̏���������
*******************************************************************************/
void InitPlayer(void)
{
	PLAYER *player = GetPlayerAdr(0);           //�v���C���[�̃A�h���X���擾����
	char *map;									//�}�b�v�̃|�C���^�[

	

	//�v���C���[�̏����ʒu�ݒ�
	player->fx = 40;
	player->fy = 17;
	
	map = GetMapAdr(player->fy, player->fx);    //�t�B�[���h�̃A�h���X���擾
	*map = 'P';                                 //�v���C���[�L������������
	
	//���ʃp�����[�^�[�Z�b�g
	strcpy(&player->sname1[0], "�V�t�g�u���C�N");
	strcpy(&player->sname2[0], "�t�@�C��");
	strcpy(&player->sname3[0], "�T���_�[");
	player->HP = 100;
	player->BEFHP = player->HP;
	player->MP = 50;
	player->s1MP = 20;
	player->s2MP = 20;
	player->s3MP = 30;
	player->BEFMP = player->MP;
	player->ATK = 30;
	player->DEF = 20;
	player->SATK1 = 50;
	player->SATK2 = 100;
	player->SATK3 = 150;
	player->LV = 0;
	player->BEFLV = player->LV;
	player->MAXHP = player->HP;
	player->MAXMP = player->MP;
	player->MAXDEF = player->DEF;
	player->MAXATK = player->ATK;
	player->flag = 0;



}



/*******************************************************************************
�֐���:	void UpdatePlayer( void )
����:	void
�߂�l:	void
����:	�v���C���[�̍X�V����
*******************************************************************************/
void UpdatePlayer(void)
{
	int key;
	int old_x, old_y;
	PLAYER *player = GetPlayerAdr(0);             //�v���C���[�̂O�Ԗڂ̃A�h���X���擾
	char *map;
	char *map1;
	char *map2;
	char *map3;
	char *map4;
	char *world;
	char *town;

	//�L�[�����͂��ꂽ��
	key = _getch();
	if ((key == 0) || (key == 224))
	{
		key = _getch();
	}

	//�O��̕\���ʒu�̏���
	switch (player->LV)
	{
	case 0:
		world = GetWorldMapAdr(player->fy, player->fx);    //�t�B�[���h�̃A�h���X���擾
		*world = ' ';                                 //�v���C���[�L������������
		break;
	case 1:
		map = GetMapAdr(player->fy, player->fx);    //�t�B�[���h�̃A�h���X���擾
		*map = ' ';                                 //�v���C���[�L������������
		break;

	case 2:
		map1 = GetMap1Adr(player->fy, player->fx);    //�t�B�[���h�̃A�h���X���擾
		*map1 = ' ';                                 //�v���C���[�L������������
		break;

	case 3:
		map2 = GetMap2Adr(player->fy, player->fx);    //�t�B�[���h�̃A�h���X���擾
		*map2 = ' ';                                 //�v���C���[�L������������
		break;

	case 4:
		map3 = GetMap3Adr(player->fy, player->fx);    //�t�B�[���h�̃A�h���X���擾
		*map3 = ' ';                                 //�v���C���[�L������������
		break;

	default:
		map4 = GetMap4Adr(player->fy, player->fx);    //�t�B�[���h�̃A�h���X���擾
		*map4 = ' ';                                 //�v���C���[�L������������
		break;
	}


	if (player->flag==1)
	{
		town = GetTownAdr(player->fy, player->fx);    //�t�B�[���h�̃A�h���X���擾
		*town = ' ';                                 //�v���C���[�L������������
	}

	//�v���C���[�̈ʒu�ݒ�
	old_x = player->fx;
	old_y = player->fy;
	switch (key)
	{

	case'a':
	case 0x4b:
		player->fx--;
		break;

	case 'd':
	case 0x4d:
		player->fx++;
		break;

	case'w':
	case 0x48:
		player->fy--;
		break;

	case 's':
	case 0x50:
		player->fy++;
		break;

	case 1:
		SaveData();
		break;

	case 2:
		LoadData();
		break;

	default:
		break;
	}

	switch (player->LV)
	{
	case 0:
		world = GetWorldMapAdr(player->fy, player->fx);           //�t�B�[���h�̃A�h���X���擾
		if (*world == '*')
		{
			//�ǂȂ�ړ��O�̏ꏊ�ɖ߂�
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	case 1:
		//�ړ������悪�ǂ�������
		map = GetMapAdr(player->fy, player->fx);           //�t�B�[���h�̃A�h���X���擾
		if (*map == '*')
		{
			//�ǂȂ�ړ��O�̏ꏊ�ɖ߂�
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	case 2:
		map1 = GetMap1Adr(player->fy, player->fx);           //�t�B�[���h�̃A�h���X���擾
		if (*map1 == '*')
		{
			//�ǂȂ�ړ��O�̏ꏊ�ɖ߂�
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	case 3:
		map2 = GetMap2Adr(player->fy, player->fx);           //�t�B�[���h�̃A�h���X���擾
		if (*map2 == '*')
		{
			//�ǂȂ�ړ��O�̏ꏊ�ɖ߂�
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	case 4:
		map3 = GetMap3Adr(player->fy, player->fx);           //�t�B�[���h�̃A�h���X���擾
		if (*map3 == '*')
		{
			//�ǂȂ�ړ��O�̏ꏊ�ɖ߂�
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	default:
		map4 = GetMap4Adr(player->fy, player->fx);           //�t�B�[���h�̃A�h���X���擾
		if (*map4 == '*')
		{
			//�ǂȂ�ړ��O�̏ꏊ�ɖ߂�
			player->fx = old_x;
			player->fy = old_y;
		}
		break;
	}

	
	if (player->flag==1)
	{
		
		town = GetTownAdr(player->fy, player->fx);           //�t�B�[���h�̃A�h���X���擾
		if (*town == '*')
		{
			//�ǂȂ�ړ��O�̏ꏊ�ɖ߂�
			player->fx = old_x;
			player->fy = old_y;
		}

	}


}



/*******************************************************************************
�֐���:	void DrawPlayer( void )
����:	void
�߂�l:	void
����:	�v���C���[�̕`�揈��
*******************************************************************************/
void DrawPlayer(void)
{
	PLAYER *player = GetPlayerAdr(0);                 //�v���C���[�̂O�Ԗڂ̃A�h���X���擾

	//�t�B�[���h�̃A�h���X���擾
	char *map = GetMapAdr(player->fy, player->fx);
	char *map1 = GetMap1Adr(player->fy, player->fx);
	char *map2 = GetMap2Adr(player->fy, player->fx);
	char *map3 = GetMap3Adr(player->fy, player->fx);
	char *map4 = GetMap4Adr(player->fy, player->fx);
	char *world = GetWorldMapAdr(player->fy, player->fx);
	char *town = GetTownAdr(player->fy, player->fx);



	//�v���C���[�̈ʒu�X�V
	switch (player->LV)
	{
	case 0:
		*world = 'P';
		break;

	case 1:
		*map = 'P';
		break;

	case 2:
		*map1 = 'P';
		break;

	case 3:
		*map2 = 'P';
		break;

	case 4:
		*map3 = 'P';
		break;

	default:
		*map4 = 'P';
		break;
	}
	
	if (player->flag==1)
	{
		*town = 'P';
	}

}


/*******************************************************************************
�֐���:	void UninitPlayer( void )
����:	void
�߂�l:	void
����:	�v���C���[�̏I������
*******************************************************************************/
void UninitPlayer(void)
{

}


/*******************************************************************************
�֐���:	PLAYER *GetMapAdr( int pno )
����:	int pno : �v���C���[�ԍ�
�߂�l:	PLAYER *
����:	�v���C���[�̃A�h���X���擾����
*******************************************************************************/
PLAYER *GetPlayerAdr(int pno)
{
	return &player[pno];
}

