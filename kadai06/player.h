/*******************************************************************************
* �^�C�g��:		���C���w�b�_�[�t�@�C��
* �v���O������:	main.h
* �쐬��:		�N���X�L�� �o�Ȕԍ� ����
* �쐬��:		2018/04/16
*******************************************************************************/
#ifndef PLAYER_H
#define PLAYER_H


/*******************************************************************************
* �}�N����`
*******************************************************************************/




/*******************************************************************************
* �\���̒�`
*******************************************************************************/
typedef struct
{
	char name[NAME_MAX];  //���O
	char jobname[NAME_MAX];    //�E��
	char sname1[NAME_MAX];    //�X�L���̖��O
	char sname2[NAME_MAX];    //�X�L���̖��O
	char sname3[NAME_MAX];    //�X�L���̖��O
	int HP;         //�̗�
	int BEFHP;		//LVUP�O�̗̑�
	int MP;         //�}�W�b�N�|�C���g
	int s1MP;
	int s2MP;
	int s3MP;
	int BEFMP;		//LVUP�O�̃}�W�b�N�|�C���g
	int ATK;        //�U����
	int SATK1;      //�X�L���P�U����
	int SATK2;      //�X�L���Q�U����
	int SATK3;      //�X�L���R�U����
	int DEF;        //�h���
	int EXP;        //�o���l
	int LV;         //���x���@
	int BEFLV;		//���x���A�b�v�O�̃��x��
	int LVEXP;      //���x���A�b�v�o���l
	int MAXHP;      //�̗͂̏��
	int MAXMP;		//MP�̏��
	int MAXATK;     //�U���͂̏��
	int MAXDEF;		//�h��͂̏��
	int flag;		//player�̔��f
	int fx;
	int fy;

}PLAYER;




/*******************************************************************************
* �v���g�^�C�v�錾
*******************************************************************************/
void InitPlayer(void);
void UpdatePlayer(void);
void DrawPlayer(void);
PLAYER *GetPlayerAdr(int pno);

#endif