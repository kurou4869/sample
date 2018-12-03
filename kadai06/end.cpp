/*******************************************************************************
* タイトル:		endプログラム
* プログラム名:	battle.cpp
* 作成者:		gp11b341 11 kurosawa yuta
* 作成日:		2018/04/16
*******************************************************************************/

/*******************************************************************************
* インクルードファイル
*******************************************************************************/
#include "main.h"
#include "end.h"
/*******************************************************************************
* マクロ定義
*******************************************************************************/


/*******************************************************************************
* 構造体定義
*******************************************************************************/


/*******************************************************************************
* グローバル変数
*******************************************************************************/


/*******************************************************************************
関数名:	 void DrawEnd(void)
引数:	void
戻り値: void
説明:	bukiyaの描画処理
*******************************************************************************/
void DrawEnd(void)
{
	int y;

	char end[TATE_MAX][FW_MAX + 1] = { // 横を+1しているのは文末のNULLの分
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

	char end1[TATE_Y][FW_MAX + 1] = { // 横を+1しているのは文末のNULLの分
		"**                                                                           **",
		"**                                                                           **",
		"**                          /*   GAME CLEAR   */                             **",
		"**                                                      /ﾉ＼∧_∧ Ψ         **",
		"**                             /*  TITLE   */         ／ﾉ＼( ﾟ∀ﾟ)｜         **",
		"**                                                   ⌒⌒ (∪悪 つ           **",
		"**                               BATTLE RPG              ←し―Ｊ ｜         **",
		"**                                                                           **",
		"**                                                                           **",
		"**                            /   PLANNING     /                             **",
		"**                                                                           **",
		"**                              Yuta Kurosawa                                **",
		"**                                                                           **",
		"**                                                                           **",
		"**                         /  CHARACTER DESIGN  /                            **",
		"**           ﾉ~ﾍ                                                             **",
		"**          ﾉ  丶               Yuta Kurosawa                                **",
		"**     ,ー￣    ￣ー､                                                        **",
		"**    //) (・) (・)  ﾍ                                                       **",
		"**   | Ｕ(~ヽ＿_／~)  |     /   ART DURECTER  /                              **",
		"**   ﾍ    ＼＿＿_／   /                                                      **",
		"**    `ーーーーーーー-′        Yuta Kurosawa                                **",
		"**                                                                           **",
		"**                                                                           **",
		"**                               /  EDIT  /                                  **",
		"**                                                                           **",
		"**                              Yuta Kurosawa              ／＼              **",
		"**                                                         | l|              **",
		"**                                                         | l|              **",
		"**                             /  PRODUCER  /              | l|              **",
		"**                                                         | l|              **",
		"**                              Yuta Kurosawa              | l|              **",
		"**                                                         | l|              **",
		"**                                                         | l|              **",
		"**                        /  ANIMATUON PRODUCER  /      〔二二二〕           **",
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
		"**                                 ／|∧_∧|                                 **",
		"**                                 |.(    )|  See you next time              **",
		"**                                 |oと.　 |                                 **",
		"**                                 | |(__)J|                                 **",
		"**                                 |／彡 ￣                                  **",

	};


	for (y = 0; y < TATE_MAX; y++)
	{
		printf("%s\n", &end[y][0]);

	}

	/* 画面描画処理 */
	for (y = 0; y < (TATE_Y); y++)
	{
		///* 1画面分表示したら少しウェイトさせる */
		//if( y%TATE_MAX == 0 )
		//{
		//	/* ウェイト */
		//	Sleep(500);
		//	
		//	/* 画面クリア */
		//	system("cls");
		//}

		///* 1行ずつ一気に描画する */
		printf("%s\n", &end1[y][0]);
		Sleep(100);

		/* 1文字ずつ描画する */
		//for( int x=0; x<YOKO_MAX; x++ )
		//{
		//	printf("%c", title[y][x]);
		//	Sleep(1);
		//}

	}

	//キー入力待ち
	rewind(stdin);
	_getch();

	return;

}