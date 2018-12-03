/*******************************************************************************
* タイトル:		タイトルプログラム
* プログラム名:	title.cpp
* 作成者:		クラス記号 出席番号 氏名
* 作成日:		2018/04/16
*******************************************************************************/

/*******************************************************************************
* インクルードファイル
*******************************************************************************/
#include "main.h"
#include "title.h"

/*******************************************************************************
* マクロ定義
*******************************************************************************/


/*******************************************************************************
* 構造体定義
*******************************************************************************/


/*******************************************************************************
* プロトタイプ宣言
*******************************************************************************/


/*******************************************************************************
* グローバル変数
*******************************************************************************/

char title[TATE_MAX][YOKO_MAX] = {
	"    -------------------------------------------------------------------       \n",
	"              ___  ___ ______________    ____   ___  ___ _____                \n",
	"             / _ )/ _ /_  __ /_ __/ /   / __/ / _  |/_ |/ ___/                \n",
	"            / _  / __| / /    / // /__ / _/  / ,_  /___/ (_ /                 \n",
	"           /____/_/ |_/_/    /_//____ /___/ /_/|_/_/  |___ /                  \n",
	"              ___ _        _           _ _ _   _                              \n",
	"             | _ |_|______| |_   ___ _| |_| |_|_|___ ___                      \n",
	"             |  _| | _|_ -| _ | | -_| . | |  _| | . |   |                     \n",
	"             |_| |_|_||___|_|   |___|___|_|_| |_|___|_|_|                     \n",
	"    -------------------------------------------------------------------       \n",
	"                                                                              \n",
	"                                                                              \n",
	"                                                  さぁ　始めよう！            \n",
	"                                /ﾉ＼∧_∧ Ψ                                  \n",
	"                              ／ﾉ＼( ﾟ∀ﾟ)｜                                  \n",
	"                              ⌒⌒ (∪悪 つ                                   \n",
	"                                 ←し―Ｊ ｜                                  \n",
	"                                                                              \n",
	"                                                                              \n",
	"                                                                              \n",
	"                                                                              \n",
	"                        plese press the Enter key !!                          \n",
	"                                                                              \n",
	"                       Created by Yuta Kurosawa 2018                          \n",
};



/*******************************************************************************
関数名:	void DrawTitle( void )
引数:	void
戻り値:	void
説明:	タイトルの初期化処理
*******************************************************************************/
void InitTitle(void)
{
	
	

}


/*******************************************************************************
関数名:	void UpdateTitle( void )
引数:	void
戻り値:	void
説明:	タイトルの更新処理
*******************************************************************************/
void UpdateTitle(void)
{
	

	while (1)
	{
		// 何かキー入力があったら処理を行う
		if (_kbhit())
		{
			

			
			DrawTitle();
		}

		/* 処理速度調整 */
		Sleep(100);
	}


}

/*******************************************************************************
関数名:	void DrawTitle( void )
引数:	void
戻り値:	void
説明:	タイトルの描画処理
*******************************************************************************/

void DrawTitle(void)
{
	
	int y;
	system("cls");
	
	/* 画面描画処理 */
	for (y = 0; y < TATE_MAX; y++)
	{
		printf("%s", &title[y][0]);
		Sleep(50);

		

	}

	//キー入力待ち
	rewind(stdin);
	_getch();
	system("cls");

}


/*******************************************************************************
関数名:	void UninitTitle( void )
引数:	void
戻り値:	void
説明:	タイトルの終了処理　４つの分割になれるため記述
*******************************************************************************/
void UninitTitle(void)
{

}

/*******************************************************************************
関数名:	char *GetMapAdr( void )
引数:	int y : Y座標
int x : X座標
戻り値:	char *
説明:	フィールドのアドレスを取得する
*******************************************************************************/
char *GetTitleAdr(int y,int x)
{
	return &title[y][x];
}
