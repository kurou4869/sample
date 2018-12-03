/******************************************************************************
* �^�C�g��:		�G�l�~�[�v���O����
* �v���O������:	enemy.cpp
* �쐬��:		gp11b341 11 kurosawa yuta
* �쐬��:		2018/04/16
*******************************************************************************/


/*******************************************************************************
* �C���N���[�h�t�@�C��
*******************************************************************************/
#include "main.h"
#include "map.h"
#include "map1.h"
#include "map2.h"
#include "map3.h"
#include "map4.h"
#include "player.h"
#include "enemy.h"

/*******************************************************************************
* �}�N����`
*******************************************************************************/


/*******************************************************************************
* �O���[�o���ϐ�
*******************************************************************************/
ENEMY enemy[ENEMY_MAX];                       //�G�l�~�[�̍\���̔z��



/*******************************************************************************
 �֐���:	void InitEnemy( void )
 ����:	    void
 �߂�l:	void
 ����:	    �G�l�~�[�̏���������
*******************************************************************************/
void InitEnemy(void)
{ 
	PLAYER *player = GetPlayerAdr(0);
	ENEMY *enemy = GetEnemyAdr(0);            //�G�l�~�[�̂O�Ԗڂ̃A�h���X���擾����
	char *map;                               //�}�b�v�̃|�C���^�[

	//�G�l�~�[�̏����ʒu
	enemy->fx = 39;
	enemy->fy = 5;

	map = GetMapAdr(enemy->fy, enemy->fx);     //�t�B�[���h�̃A�h���X���擾
	*map = 'E';                                //�G�l�~�[�L������������
	
	
	

	//���ʃp�����[�^�[
	strcpy(&enemy->name[0],"�X���C��");
	enemy->HP = 50;
	enemy->MP = 50; 
	enemy->ATK = 10;
	enemy->DEF = 20;
	enemy->eno = 0;

	enemy++;

	strcpy(&enemy->name[0], "�S�[����");
	enemy->HP = 100;
	enemy->MP = 150;
	enemy->ATK = 50;
	enemy->DEF = 90;
	enemy->eno = 1;

	enemy++;

	strcpy(&enemy->name[0], "�L���O�X���C��");
	enemy->HP = 200;
	enemy->MP = 300;
	enemy->ATK = 200;
	enemy->DEF = 100;
	enemy->eno = 2;

	enemy++;

	strcpy(&enemy->name[0], "�h���S��");
	enemy->HP = 300;
	enemy->MP = 600;
	enemy->ATK = 200;
	enemy->DEF = 100;
	enemy->eno = 3;

	enemy++;

	strcpy(&enemy->name[0], "����");
	enemy->HP = 500;
	enemy->MP = 50;
	enemy->ATK = 200;
	enemy->DEF = 150;
	enemy->eno = 4;

	






}



/*******************************************************************************
�֐���:	void UpdateEnemy( void )
����:	void
�߂�l:	void
����:	�G�l�~�[�̍X�V����
*******************************************************************************/
void UpdateEnemy(void)
{
	int key;
	int old_x, old_y;
	
	PLAYER *player = GetPlayerAdr(0);
	ENEMY *enemy = GetEnemyAdr(0);               //�G�l�~�[�̂O�Ԗڂ̃A�h���X���擾
	char *map;
	char *map1;
	char *map2;
	char *map3;
	char *map4;

	key = rand() % 5 + 1;

	//�O��̕\���ʒu�̏���
	switch (player->LV)
	{
	case 1:
		
		map = GetMapAdr(enemy->fy, enemy->fx);
		*map = ' ';
		break;

	case 2:
		map1 = GetMap1Adr(enemy->fy, enemy->fx);
		*map1 = ' ';
		break;

	case 3:
		map2 = GetMap2Adr(enemy->fy, enemy->fx);
		*map2 = ' ';
		break;

	case 4:
		map3 = GetMap3Adr(enemy->fy, enemy->fx);
		*map3 = ' ';
		break;

	default:
		map4 = GetMap4Adr(enemy->fy, enemy->fx);
		*map4 = ' ';
		break;
	}

	old_x = enemy->fx;
	old_y = enemy->fy;
	
	// �G�l�~�[�̈ړ�����
	switch (key)
	{
	case 1:                 //���ֈړ�����
		enemy->fx--;
		break;

	case 2:                //�E�ֈړ�����
		enemy->fx++;
		break;

	case 3:                //���ֈړ�����
		enemy->fy--;
		break;

	case 4:                //��ֈړ�����
		enemy->fy++;
		break;

	default:
		break;
	}
	
	switch (player->LV)
	{
	case 1:
		//�ړ������悪�ǂ�������
		map = GetMapAdr(enemy->fy, enemy->fx);   //�t�B�[���h�̃A�h���X���擾
		if (*map == '*')
		{   //�G�l�~�[�̈ʒu��O�ɖ߂�
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;

	case 2:
		map1 = GetMap1Adr(enemy->fy, enemy->fx);   //�t�B�[���h�̃A�h���X���擾
		if (*map1 == '*')
		{   //�G�l�~�[�̈ʒu��O�ɖ߂�
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;

	case 3:
		map2 = GetMap2Adr(enemy->fy, enemy->fx);   //�t�B�[���h�̃A�h���X���擾
		if (*map2 == '*')
		{   //�G�l�~�[�̈ʒu��O�ɖ߂�
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;

	case 4:
		map3 = GetMap3Adr(enemy->fy, enemy->fx);   //�t�B�[���h�̃A�h���X���擾
		if (*map3 == '*')
		{   //�G�l�~�[�̈ʒu��O�ɖ߂�
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;

	default:
		map4 = GetMap4Adr(enemy->fy, enemy->fx);   //�t�B�[���h�̃A�h���X���擾
		if (*map4 == '*')
		{   //�G�l�~�[�̈ʒu��O�ɖ߂�
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;
	}
	
}



/*******************************************************************************
�֐���:	void DrawEnemy( void )
����:	void
�߂�l:	void
����:	�G�l�~�[�̕`�揈��
*******************************************************************************/
void DrawEnemy(void)
{
	PLAYER *player = GetPlayerAdr(0);
	ENEMY *enemy = GetEnemyAdr(0);                  //�G�l�~�[�̂O�Ԗڂ̃A�h���X���擾

	//�t�B�[���h�̃A�h���X���擾
	char *map = GetMapAdr(enemy->fy, enemy->fx);
	char *map1 = GetMap1Adr(enemy->fy, enemy->fx);    
	char *map2 = GetMap2Adr(enemy->fy, enemy->fx);
	char *map3 = GetMap3Adr(enemy->fy, enemy->fx);
	char *map4 = GetMap4Adr(enemy->fy, enemy->fx);

	switch (player->LV)
	{
	case 1:
		//�G�l�~�[�̈ʒu�X�V
		*map = 'E';
		break;

	case 2:
		*map1 = 'E';
		break;

	case 3:
		*map2 = 'E';
		break;

	case 4:
		*map3 = 'E';
		break;

	default:
		*map4 = 'E';
		break;
	}
}

/*******************************************************************************
�֐���:	void DrawEnemy( void )
����:	void
�߂�l:	void
����:	�G�l�~�[�̕`�揈��
*******************************************************************************/
void UninitEnemy(void)
{

}

/*******************************************************************************
�֐���:	ENEMY *GetEnemyAdr( void )
����:	int eno
�߂�l:	ENEMY*
����:	�G�l�~�[�̃A�h���X���擾����
*******************************************************************************/
ENEMY *GetEnemyAdr(int eno)
{
	return &enemy[eno];
}