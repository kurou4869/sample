/*******************************************************************************
* タイトル:		メインプログラム
* プログラム名:	player.cpp
* 作成者:		クラス記号 出席番号 氏名
* 作成日:		2018/04/16
*******************************************************************************/


/*******************************************************************************
* インクルードファイル
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
* グローバル変数
*******************************************************************************/
PLAYER player[PLAYER_MAX];                      //プレイヤー構造体配列（人数分）




/*******************************************************************************
関数名:	void InitPlayer( void )
引数:	    void
戻り値:	void
説明:	　　プレイヤーの初期化処理
*******************************************************************************/
void InitPlayer(void)
{
	PLAYER *player = GetPlayerAdr(0);           //プレイヤーのアドレスを取得する
	char *map;									//マップのポインター

	

	//プレイヤーの初期位置設定
	player->fx = 40;
	player->fy = 17;
	
	map = GetMapAdr(player->fy, player->fx);    //フィールドのアドレスを取得
	*map = 'P';                                 //プレイヤー記号を書き込む
	
	//共通パラメーターセット
	strcpy(&player->sname1[0], "シフトブレイク");
	strcpy(&player->sname2[0], "ファイヤ");
	strcpy(&player->sname3[0], "サンダー");
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
関数名:	void UpdatePlayer( void )
引数:	void
戻り値:	void
説明:	プレイヤーの更新処理
*******************************************************************************/
void UpdatePlayer(void)
{
	int key;
	int old_x, old_y;
	PLAYER *player = GetPlayerAdr(0);             //プレイヤーの０番目のアドレスを取得
	char *map;
	char *map1;
	char *map2;
	char *map3;
	char *map4;
	char *world;
	char *town;

	//キーが入力されたら
	key = _getch();
	if ((key == 0) || (key == 224))
	{
		key = _getch();
	}

	//前回の表示位置の消去
	switch (player->LV)
	{
	case 0:
		world = GetWorldMapAdr(player->fy, player->fx);    //フィールドのアドレスを取得
		*world = ' ';                                 //プレイヤー記号を書き込む
		break;
	case 1:
		map = GetMapAdr(player->fy, player->fx);    //フィールドのアドレスを取得
		*map = ' ';                                 //プレイヤー記号を書き込む
		break;

	case 2:
		map1 = GetMap1Adr(player->fy, player->fx);    //フィールドのアドレスを取得
		*map1 = ' ';                                 //プレイヤー記号を書き込む
		break;

	case 3:
		map2 = GetMap2Adr(player->fy, player->fx);    //フィールドのアドレスを取得
		*map2 = ' ';                                 //プレイヤー記号を書き込む
		break;

	case 4:
		map3 = GetMap3Adr(player->fy, player->fx);    //フィールドのアドレスを取得
		*map3 = ' ';                                 //プレイヤー記号を書き込む
		break;

	default:
		map4 = GetMap4Adr(player->fy, player->fx);    //フィールドのアドレスを取得
		*map4 = ' ';                                 //プレイヤー記号を書き込む
		break;
	}


	if (player->flag==1)
	{
		town = GetTownAdr(player->fy, player->fx);    //フィールドのアドレスを取得
		*town = ' ';                                 //プレイヤー記号を書き込む
	}

	//プレイヤーの位置設定
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
		world = GetWorldMapAdr(player->fy, player->fx);           //フィールドのアドレスを取得
		if (*world == '*')
		{
			//壁なら移動前の場所に戻す
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	case 1:
		//移動した先が壁だったら
		map = GetMapAdr(player->fy, player->fx);           //フィールドのアドレスを取得
		if (*map == '*')
		{
			//壁なら移動前の場所に戻す
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	case 2:
		map1 = GetMap1Adr(player->fy, player->fx);           //フィールドのアドレスを取得
		if (*map1 == '*')
		{
			//壁なら移動前の場所に戻す
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	case 3:
		map2 = GetMap2Adr(player->fy, player->fx);           //フィールドのアドレスを取得
		if (*map2 == '*')
		{
			//壁なら移動前の場所に戻す
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	case 4:
		map3 = GetMap3Adr(player->fy, player->fx);           //フィールドのアドレスを取得
		if (*map3 == '*')
		{
			//壁なら移動前の場所に戻す
			player->fx = old_x;
			player->fy = old_y;
		}
		break;

	default:
		map4 = GetMap4Adr(player->fy, player->fx);           //フィールドのアドレスを取得
		if (*map4 == '*')
		{
			//壁なら移動前の場所に戻す
			player->fx = old_x;
			player->fy = old_y;
		}
		break;
	}

	
	if (player->flag==1)
	{
		
		town = GetTownAdr(player->fy, player->fx);           //フィールドのアドレスを取得
		if (*town == '*')
		{
			//壁なら移動前の場所に戻す
			player->fx = old_x;
			player->fy = old_y;
		}

	}


}



/*******************************************************************************
関数名:	void DrawPlayer( void )
引数:	void
戻り値:	void
説明:	プレイヤーの描画処理
*******************************************************************************/
void DrawPlayer(void)
{
	PLAYER *player = GetPlayerAdr(0);                 //プレイヤーの０番目のアドレスを取得

	//フィールドのアドレスを取得
	char *map = GetMapAdr(player->fy, player->fx);
	char *map1 = GetMap1Adr(player->fy, player->fx);
	char *map2 = GetMap2Adr(player->fy, player->fx);
	char *map3 = GetMap3Adr(player->fy, player->fx);
	char *map4 = GetMap4Adr(player->fy, player->fx);
	char *world = GetWorldMapAdr(player->fy, player->fx);
	char *town = GetTownAdr(player->fy, player->fx);



	//プレイヤーの位置更新
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
関数名:	void UninitPlayer( void )
引数:	void
戻り値:	void
説明:	プレイヤーの終了処理
*******************************************************************************/
void UninitPlayer(void)
{

}


/*******************************************************************************
関数名:	PLAYER *GetMapAdr( int pno )
引数:	int pno : プレイヤー番号
戻り値:	PLAYER *
説明:	プレイヤーのアドレスを取得する
*******************************************************************************/
PLAYER *GetPlayerAdr(int pno)
{
	return &player[pno];
}

