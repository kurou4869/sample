/*******************************************************************************
* タイトル:		map2プログラム
* プログラム名:	battle.cpp
* 作成者:		gp11b341 11 kurosawa yuta
* 作成日:		2018/04/16
*******************************************************************************/

/*******************************************************************************
* インクルードファイル
*******************************************************************************/
#include "main.h"
#include "map.h"
#include "map2.h"
#include "map3.h"
#include "battle.h"
#include "player.h"
#include "enemy.h"
#include "title.h"
/*******************************************************************************
* マクロ定義
*******************************************************************************/


/*******************************************************************************
* 構造体定義
*******************************************************************************/


/*******************************************************************************
* グローバル変数
*******************************************************************************/
char map2[FH_MAX][FW_MAX + 1] = { // 横を+1しているのは文末のNULLの分
	"*******************************************************************************",
	"************ ************************* ******* STAGE 03 ******** **************",
	"***********   ***********************   * ENEMY キングスライム*   *************",
	"**********     *********************     *********************     ************",
	"*********       *******************       *******************       ***********",
	"********         *****************         *****************         **********",
	"*******           ***************           ***************           *********",
	"******             *************             *************             ********",
	"*****               ***********               ***********               *******",
	"****                 *********                 *********                 ******",
	"***                   *******                   *******                   *****",
	"**                     *****                     *****                     ****",
	"**                      ***                       ***                       ***",
	"**                                                                           **",
	"**                                                                           **",
	"**                                                                           **",
	"**                                                                           **",
	"**                                                                           **",
	"**                                                                           **",
	"**                                                                           **",
	"**                                                                           **",
	"**                                                                           **",
	"*******************************************************************************",
	"*******************************************************************************",
};

char battlech2[FH_MAX][FW_MAX + 1] = { // 横を+1しているのは文末のNULLの分
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
	"*******************************************************************************",
};


/*******************************************************************************
関数名:	void DrawMap2( void )
引数:	void
戻り値:	void
説明:	マップの描画処理
*******************************************************************************/
void DrawMap2(void)
{
	int i, y;
	PLAYER *player = GetPlayerAdr(0);
	ENEMY *enemy = GetEnemyAdr(0);
	char *map3;


	/* 画面クリア */
	system("cls");

	/* マップ描画処理 */
	for (i = 0; i < FH_MAX; i++)
	{
		printf("%s\n", &map2[i][0]);
		
	}




	if ((player->fx == enemy->fx) && (player->fy == enemy->fy))
	{
		printf("モンスターと遭遇した!!");
		rewind(stdin);
		_getch();

		system("cls");

		/* 画面描画処理 */
		for (y = 0; y < FH_MAX; y++)
		{
			///* 1画面分表示したら少しウェイトさせる */
			//if( y%TATE_MAX == 0 )
			//{
			//	/* ウェイト */
			//	/*Sleep(500);*/
			//	
			//	/* 画面クリア */
			//	system("cls");
			//}

			///* 1行ずつ一気に描画する */
			printf("%s", &battlech2[y][0]);
			Sleep(50);



			//	printf("%c", title[y][x]);
			//	Sleep(1);
			//}

		}

		// ここでバトル関数へ飛ぶ
		system("cls");
		DrawBattle();
		if (player->HP == 0)
		{
			InitPlayer();
			InitEnemy();
			DrawTitle();
		}
		else
		{
			rewind(stdin);
			_getch();
			system("cls");
			printf("フィールドへ戻るよ！ Hit Any Key.\n");

			// バトルから戻ってきたらエネミーを再POP
			enemy->fx = 38;
			enemy->fy = 11;
			map3 = GetMap3Adr(enemy->fy, enemy->fx);
			*map3 = 'E';

			// プレイヤーを元の位置で再表示
			player->fx = 17;
			player->fy = 22;
			map3 = GetMap3Adr(player->fy, player->fx);
			*map3 = 'P';

		}

	}
	else
	{
		printf("Push Key ← → ↑↓                 1:SaveData   2:LoadData");
	}
}


/*******************************************************************************
関数名:	char *GetMap2Adr( void )
引数:	int y : Y座標
int x : X座標
戻り値:	char *
説明:	フィールドのアドレスを取得する
*******************************************************************************/
char *GetMap2Adr(int y, int x)
{
	return &map2[y][x];
}