/******************************************************************************
* タイトル:		エネミープログラム
* プログラム名:	enemy.cpp
* 作成者:		gp11b341 11 kurosawa yuta
* 作成日:		2018/04/16
*******************************************************************************/


/*******************************************************************************
* インクルードファイル
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
* マクロ定義
*******************************************************************************/


/*******************************************************************************
* グローバル変数
*******************************************************************************/
ENEMY enemy[ENEMY_MAX];                       //エネミーの構造体配列



/*******************************************************************************
 関数名:	void InitEnemy( void )
 引数:	    void
 戻り値:	void
 説明:	    エネミーの初期化処理
*******************************************************************************/
void InitEnemy(void)
{ 
	PLAYER *player = GetPlayerAdr(0);
	ENEMY *enemy = GetEnemyAdr(0);            //エネミーの０番目のアドレスを取得する
	char *map;                               //マップのポインター

	//エネミーの初期位置
	enemy->fx = 39;
	enemy->fy = 5;

	map = GetMapAdr(enemy->fy, enemy->fx);     //フィールドのアドレスを取得
	*map = 'E';                                //エネミー記号を書き込む
	
	
	

	//共通パラメーター
	strcpy(&enemy->name[0],"スライム");
	enemy->HP = 50;
	enemy->MP = 50; 
	enemy->ATK = 10;
	enemy->DEF = 20;
	enemy->eno = 0;

	enemy++;

	strcpy(&enemy->name[0], "ゴーレム");
	enemy->HP = 100;
	enemy->MP = 150;
	enemy->ATK = 50;
	enemy->DEF = 90;
	enemy->eno = 1;

	enemy++;

	strcpy(&enemy->name[0], "キングスライム");
	enemy->HP = 200;
	enemy->MP = 300;
	enemy->ATK = 200;
	enemy->DEF = 100;
	enemy->eno = 2;

	enemy++;

	strcpy(&enemy->name[0], "ドラゴン");
	enemy->HP = 300;
	enemy->MP = 600;
	enemy->ATK = 200;
	enemy->DEF = 100;
	enemy->eno = 3;

	enemy++;

	strcpy(&enemy->name[0], "魔王");
	enemy->HP = 500;
	enemy->MP = 50;
	enemy->ATK = 200;
	enemy->DEF = 150;
	enemy->eno = 4;

	






}



/*******************************************************************************
関数名:	void UpdateEnemy( void )
引数:	void
戻り値:	void
説明:	エネミーの更新処理
*******************************************************************************/
void UpdateEnemy(void)
{
	int key;
	int old_x, old_y;
	
	PLAYER *player = GetPlayerAdr(0);
	ENEMY *enemy = GetEnemyAdr(0);               //エネミーの０番目のアドレスを取得
	char *map;
	char *map1;
	char *map2;
	char *map3;
	char *map4;

	key = rand() % 5 + 1;

	//前回の表示位置の消去
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
	
	// エネミーの移動処理
	switch (key)
	{
	case 1:                 //左へ移動する
		enemy->fx--;
		break;

	case 2:                //右へ移動する
		enemy->fx++;
		break;

	case 3:                //下へ移動する
		enemy->fy--;
		break;

	case 4:                //上へ移動する
		enemy->fy++;
		break;

	default:
		break;
	}
	
	switch (player->LV)
	{
	case 1:
		//移動した先が壁だったら
		map = GetMapAdr(enemy->fy, enemy->fx);   //フィールドのアドレスを取得
		if (*map == '*')
		{   //エネミーの位置を前に戻す
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;

	case 2:
		map1 = GetMap1Adr(enemy->fy, enemy->fx);   //フィールドのアドレスを取得
		if (*map1 == '*')
		{   //エネミーの位置を前に戻す
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;

	case 3:
		map2 = GetMap2Adr(enemy->fy, enemy->fx);   //フィールドのアドレスを取得
		if (*map2 == '*')
		{   //エネミーの位置を前に戻す
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;

	case 4:
		map3 = GetMap3Adr(enemy->fy, enemy->fx);   //フィールドのアドレスを取得
		if (*map3 == '*')
		{   //エネミーの位置を前に戻す
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;

	default:
		map4 = GetMap4Adr(enemy->fy, enemy->fx);   //フィールドのアドレスを取得
		if (*map4 == '*')
		{   //エネミーの位置を前に戻す
			enemy->fx = old_x;
			enemy->fy = old_y;
		}
		break;
	}
	
}



/*******************************************************************************
関数名:	void DrawEnemy( void )
引数:	void
戻り値:	void
説明:	エネミーの描画処理
*******************************************************************************/
void DrawEnemy(void)
{
	PLAYER *player = GetPlayerAdr(0);
	ENEMY *enemy = GetEnemyAdr(0);                  //エネミーの０番目のアドレスを取得

	//フィールドのアドレスを取得
	char *map = GetMapAdr(enemy->fy, enemy->fx);
	char *map1 = GetMap1Adr(enemy->fy, enemy->fx);    
	char *map2 = GetMap2Adr(enemy->fy, enemy->fx);
	char *map3 = GetMap3Adr(enemy->fy, enemy->fx);
	char *map4 = GetMap4Adr(enemy->fy, enemy->fx);

	switch (player->LV)
	{
	case 1:
		//エネミーの位置更新
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
関数名:	void DrawEnemy( void )
引数:	void
戻り値:	void
説明:	エネミーの描画処理
*******************************************************************************/
void UninitEnemy(void)
{

}

/*******************************************************************************
関数名:	ENEMY *GetEnemyAdr( void )
引数:	int eno
戻り値:	ENEMY*
説明:	エネミーのアドレスを取得する
*******************************************************************************/
ENEMY *GetEnemyAdr(int eno)
{
	return &enemy[eno];
}