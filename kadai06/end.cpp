/*******************************************************************************
* �^�C�g��:		end�v���O����
* �v���O������:	battle.cpp
* �쐬��:		gp11b341 11 kurosawa yuta
* �쐬��:		2018/04/16
*******************************************************************************/

/*******************************************************************************
* �C���N���[�h�t�@�C��
*******************************************************************************/
#include "main.h"
#include "end.h"
/*******************************************************************************
* �}�N����`
*******************************************************************************/


/*******************************************************************************
* �\���̒�`
*******************************************************************************/


/*******************************************************************************
* �O���[�o���ϐ�
*******************************************************************************/


/*******************************************************************************
�֐���:	 void DrawEnd(void)
����:	void
�߂�l: void
����:	bukiya�̕`�揈��
*******************************************************************************/
void DrawEnd(void)
{
	int y;

	char end[TATE_MAX][FW_MAX + 1] = { // ����+1���Ă���͕̂�����NULL�̕�
		"*******************************************************************************",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                                                           **",

	};

	char end1[TATE_Y][FW_MAX + 1] = { // ����+1���Ă���͕̂�����NULL�̕�
		"**                                                                           **",
		"**                                                                           **",
		"**                          /*   GAME CLEAR   */                             **",
		"**                                                      /Ɂ_��_�� ��         **",
		"**                             /*  TITLE   */         �^Ɂ_( ߁��)�b         **",
		"**                                                   �܁� (���� ��           **",
		"**                               BATTLE RPG              �����\�i �b         **",
		"**                                                                           **",
		"**                                                                           **",
		"**                            /   PLANNING     /                             **",
		"**                                                                           **",
		"**                              Yuta Kurosawa                                **",
		"**                                                                           **",
		"**                                                                           **",
		"**                         /  CHARACTER DESIGN  /                            **",
		"**           �~�                                                             **",
		"**          �  ��               Yuta Kurosawa                                **",
		"**     ,�[�P    �P�[�                                                        **",
		"**    //) (�E) (�E)  �                                                       **",
		"**   | �t(~�R�Q_�^~)  |     /   ART DURECTER  /                              **",
		"**   �    �_�Q�Q_�^   /                                                      **",
		"**    `�[�[�[�[�[�[�[-��        Yuta Kurosawa                                **",
		"**                                                                           **",
		"**                                                                           **",
		"**                               /  EDIT  /                                  **",
		"**                                                                           **",
		"**                              Yuta Kurosawa              �^�_              **",
		"**                                                         | l|              **",
		"**                                                         | l|              **",
		"**                             /  PRODUCER  /              | l|              **",
		"**                                                         | l|              **",
		"**                              Yuta Kurosawa              | l|              **",
		"**                                                         | l|              **",
		"**                                                         | l|              **",
		"**                        /  ANIMATUON PRODUCER  /      �k����l           **",
		"**                                                         }::{              **",
		"**                              Yuta Kurosawa              }::{              **",
		"**                                                         }::{              **",
		"**                                                                           **",
		"**                       /  ANIMATION PRODUCTION  /                          **",
		"**                                                                           **",
		"**                              Yuta Kurosawa                                **",
		"**                                                                           **",
		"**                                                                           **",
		"**                             /  DIRECTER  /                                **",
		"**                                                                           **",
		"**                              Yuta Kurosawa                                **",
		"**                                                                           **",
		"**                                                                           **",
		"**                            /  PRODUCTION  /                               **",
		"**                                                                           **",
		"**                              Yuta Kurosawa                                **",
		"**                                                                           **",
		"**                                                                           **",
		"**    -------------------------------------------------------------------    **",
		"**              ___  ___ ______________    ____   ___  ___ _____             **",
		"**             / _ )/ _ /_  __ /_ __/ /   / __/ / _  |/_ |/ ___/             **",
		"**            / _  / __| / /    / // /__ / _/  / ,_  /___/ (_ /              **",
		"**           /____/_/ |_/_/    /_//____ /___/ /_/|_/_/  |___ /               **",
		"**              ___ _        _           _ _ _   _                           **",
		"**             | _ |_|______| |_   ___ _| |_| |_|_|___ ___                   **",
		"**             |  _| | _|_ -| _ | | -_| . | |  _| | . |   |                  **",
		"**             |_| |_|_||___|_|   |___|___|_|_| |_|___|_|_|                  **",
		"**    -------------------------------------------------------------------    **",
		"**                                                                           **",
		"**                                                                           **",
		"**                                 �^|��_��|                                 **",
		"**                                 |.(    )|  See you next time              **",
		"**                                 |o��.�@ |                                 **",
		"**                                 | |(__)J|                                 **",
		"**                                 |�^�c �P                                  **",

	};


	for (y = 0; y < TATE_MAX; y++)
	{
		printf("%s\n", &end[y][0]);

	}

	/* ��ʕ`�揈�� */
	for (y = 0; y < (TATE_Y); y++)
	{
		///* 1��ʕ��\�������班���E�F�C�g������ */
		//if( y%TATE_MAX == 0 )
		//{
		//	/* �E�F�C�g */
		//	Sleep(500);
		//	
		//	/* ��ʃN���A */
		//	system("cls");
		//}

		///* 1�s����C�ɕ`�悷�� */
		printf("%s\n", &end1[y][0]);
		Sleep(100);

		/* 1�������`�悷�� */
		//for( int x=0; x<YOKO_MAX; x++ )
		//{
		//	printf("%c", title[y][x]);
		//	Sleep(1);
		//}

	}

	//�L�[���͑҂�
	rewind(stdin);
	_getch();

	return;

}