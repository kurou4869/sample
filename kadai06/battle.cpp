/*******************************************************************************
* タイトル:		バトルプログラム
* プログラム名:	battle.cpp
* 作成者:		gp11b341 11 kurosawa yuta
* 作成日:		2018/04/16
*******************************************************************************/



/*******************************************************************************
* インクルードファイル
*******************************************************************************/
#include "main.h"
#include "battle.h"
#include "player.h"
#include "enemy.h"
/*******************************************************************************
* マクロ定義
*******************************************************************************/


/*******************************************************************************
* 構造体定義
*******************************************************************************/


/*******************************************************************************
* グローバル変数
*******************************************************************************/
char batbg[TATE_BAT][YOKO_MAX]{
	"*******************************************************************************",
	"*                                                                             *",
	"*                                                                             *",
	"*                                                                             *",
	"*                                                                             *",
	"*                                    ﾉ~ﾍ                                      *",
	"*                                   ﾉ  丶                                     *",
	"*                              ,ー￣    ￣ー､                                 *",
	"*                             //) (・) (・)  ﾍ                                *",
	"*                            | Ｕ(~ヽ＿_／~)  |                               *",
	"*                            ﾍ    ＼＿＿_／   /                               *",
	"*                             `ーーーーーーー-′                              *",
	"*                                                                             *",
	"*                                                                             *",
};

char batbg1[TATE_BAT][YOKO_MAX]{
	"*******************************************************************************",
	"*                                  _＿＿                                      *",
	"*                                 <_＿＿_>                                    *",
	"*                        「-------|_.エ+ェ|------」                           *",
	"*                       ,| i | ＿ﾄ.｀´｀´-|    |＼                          *",
	"*                 ,-／  | .￣工  ￣Т￣ /￣￣7/ ,>― - ､                      *",
	"*              / （＿／ヽ_ ＿_]＿ | ＿_工工_ /＼/.＿|                         *",
	"*             iヽ + 工 / ∨＿_ | ⊥⊥_/   /           ヽ                      *",
	"*                Vっし　 / －二二 工エ | l⌒l⌒.l⌒l⌒l                       *",
	"*                     　／＼＿＿l　T＿＿／＼i＼_|＿|__/_／                    *",
	"*                     ／　　T　／         >    ヽ｀ - ―´                    *",
	"*                    | ￣工 エ |_         | ｀ー ´＼                         *",
	"*                  ／｀ー一 ´／          | ＼_二二l                          *",
	"*                 |二二二二／                                                 *",
};

char batbg2[TATE_BAT][YOKO_MAX]{
	"*******************************************************************************",
	"*                                                                             *",
	"*                                                                             *",
	"*                                  .,A､                                       *",
	"*                          .r-‐i'''''''''i''-､                               *",
	"*                         o|  ｏ!   .ｏ   iｏ  !o                             *",
	"*                        .|＼__|｀‐´｀‐／|__/|                             *",
	"*                         |_,─'''''''''' ─,､ /_                             *",
	"*                       ／                       ＼                           *",
	"*                      /     ／                   i                           *",
	"*                      |      ●　（__人_） ●     |                          *",
	"*                      !                          ﾉ                           *",
	"*                      丶________________________ノ                           *",
	"*                                                                             *",
};

char batbg3[TATE_BAT][YOKO_MAX]{
	"*******************************************************************************",
	"*                                                                             *",
	"*                      ,r^(フ  iゝ-|＼ﾍ    くﾌヽ                              *",
	"*                    ./ /ﾊ（   く_ﾉﾍ  p ＼  ）ｲ＼                             *",
	"*                    / /ｌ| ､＼ く/r-､二フ  / ﾊ |                             *",
	"*                   / / ! |ﾍ  く/ /三（ノ／/ / ||                             *",
	"*                  | f  | | ﾍ /⌒t三;rく -､'_'.//                             *",
	"*                  | |＿| !__ﾚi7ﾚ'三ﾆ)､_,ｨ   ｝/                              *",
	"*                  !/ ⌒ﾚ⌒Y   { 三三ｊ|  lﾙﾘ /                               *",
	"*                       _ /   〈三三{ 〈⌒ヽ                                  *",
	"*                     ／f     ヽ三ｦ  ヽ､   ＼                                 *",
	"*                   （＿_ゝ､_ / ￣´＼   ）＼ ヽ                              *",
	"*                      ／   ／      く  く_  ﾚ′                              *",
	"*                    〈rﾍゝゝ        ヽゝゝ>                                  *",
};

char batbg4[TATE_BAT][YOKO_MAX]{
	"*******************************************************************************",
	"*                                                                             *",
	"*                                                                             *",
	"*                                                                             *",
	"*                               /ﾉ＼∧_∧ Ψ                                  *",
	"*                             ／ﾉ＼( ﾟ∀ﾟ)｜                                  *",
	"*                             ⌒⌒ (∪悪 つ                                   *",
	"*                                ←し―Ｊ ｜                                  *",
	"*                                                                             *",
	"*                                                                             *",
	"*                               我が、魔王だ                                  *",
	"*                                                                             *",
	"*                                                                             *",
	"*                                                                             *",
};



/*******************************************************************************
関数名:	void InitBattle( void )
引数:	void
戻り値:	void
説明:	バトルの初期化処理
*******************************************************************************/
void InitBattle(void)
{

}


/*******************************************************************************
関数名:	void UpdateBattle( void )
引数:	void
戻り値:	void
説明:	バトルの更新処理
*******************************************************************************/

void DrawBattle(void)
{
	PLAYER *player = GetPlayerAdr(0);
	ENEMY *enemy = GetEnemyAdr(0);
	int  com, y;

	//enemyのインクリメント
	if (player->LV > 4)
	{
		enemy += 4;
	}
	else if (player->LV == 4)
	{
		enemy += 3;
	}
	else if (player->LV == 3)
	{
		enemy += 2;
	}
	else if (player->LV == 2)
	{
		enemy++;
	}



	int atk = player->ATK, atk1 = enemy->ATK;			

	
	switch (player->LV)
	{
	case 1:
		/* 画面描画処理 */
		for (y = 0; y < TATE_BAT; y++)
		{
			printf("%s\n", &batbg[y][0]);

		}
		break;

	case 2:
		/* 画面描画処理 */
		for (y = 0; y < TATE_BAT; y++)
		{
			printf("%s\n", &batbg1[y][0]);

		}
		break;

	case 3:
		/* 画面描画処理 */
		for (y = 0; y < TATE_BAT; y++)
		{
			printf("%s\n", &batbg2[y][0]);

		}
		break;

	case 4:
		/* 画面描画処理 */
		for (y = 0; y < TATE_BAT; y++)
		{
			printf("%s\n", &batbg3[y][0]);

		}
		break;

	default:
		/* 画面描画処理 */
		for (y = 0; y < TATE_BAT; y++)
		{
			printf("%s\n", &batbg4[y][0]);

		}
		break;
	}
	
	printf("*                      %7s      HP %4d                            *\n", &enemy->name[0], enemy->HP);
	printf("*******************************************************************************\n");
	printf(" %7sが現れた！                                                                \n", &enemy->name[0]);
	printf("                               　                           LV%d           　\n",player->LV);
	printf("                                                                          　 \n");
	printf("                                                            HP%d             \n",player->HP);
	printf("                                                                             \n");
	printf("                                                            MP%d             \n",player->MP);
	printf("                                                                              \n");
	printf("行動選択－＞Press Enter  ");
	//scanf("%d", &com);

	//キー入力待ち
	rewind(stdin);
	_getch();

	
	while (1)
	{
		/*if (a == 0);
		{
		Sleep(1);
		}*/
		system("cls");

		switch (player->LV)
		{
		case 1:
			/* 画面描画処理 */
			for (y = 0; y < TATE_BAT; y++)
			{
				printf("%s\n", &batbg[y][0]);

			}
			break;

		case 2:
			/* 画面描画処理 */
			for (y = 0; y < TATE_BAT; y++)
			{
				printf("%s\n", &batbg1[y][0]);

			}
			break;

		case 3:
			/* 画面描画処理 */
			for (y = 0; y < TATE_BAT; y++)
			{
				printf("%s\n", &batbg2[y][0]);

			}
			break;

		case 4:
			/* 画面描画処理 */
			for (y = 0; y < TATE_BAT; y++)
			{
				printf("%s\n", &batbg3[y][0]);

			}
			break;

		default:
			/* 画面描画処理 */
			for (y = 0; y < TATE_BAT; y++)
			{
				printf("%s\n", &batbg4[y][0]);

			}
			break;
		}
		printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
		printf("*******************************************************************************\n");
		printf("                                                                              \n");
		printf("                               　                1 たたかう  LV%d           　\n", player->LV);
		printf("                                                                           　 \n");
		printf("                                                 2 ぼうぎょ  HP%d             \n", player->HP);
		printf("                                                                              \n");
		printf("                                                 3 じゅもん  MP%d             \n", player->MP);
		printf("                                                                              \n");
		printf("行動選択－＞");
		scanf("%d", &com);


		switch (com)
		{
		case 1:
			player->ATK = rand() % (atk + 1);                                 //player->ATK=プレイヤーの攻撃力に基づくダメージ
			enemy->HP = enemy->HP - player->ATK;

			if (player->ATK == 0)                                             //プレイヤーの攻撃が０
			{


				system("cls");
				switch (player->LV)
				{
				case 1:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg[y][0]);

					}
					break;

				case 2:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg1[y][0]);

					}
					break;

				case 3:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg2[y][0]);

					}
					break;

				case 4:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg3[y][0]);

					}
					break;

				default:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg4[y][0]);

					}
					break;
				}
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("%9sが%sを攻撃！                                                                \n", &player->name[0], &enemy->name[0]);
				printf("%9sは攻撃を外した！                                           LV%d           　\n", &player->name[0], player->LV);
				printf("                                                                            　 \n");
				printf("                                                              HP%d             \n", player->HP);
				printf("                                                                               \n");
				printf("                                                              MP%d             \n", player->MP);
				printf("行動選択－＞PressEnter");
				/*scanf("%d", &com); */           //プレイヤーの攻撃が０の時の表示

				//キー入力待ち
				rewind(stdin);
				_getch();
			}
			else 
			{
				system("cls");
				
				if (enemy->HP <= 0)
				{
					enemy->HP = 0;
				}
				switch (player->LV)
				{
				case 1:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg[y][0]);

					}
					break;

				case 2:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg1[y][0]);

					}
					break;

				case 3:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg2[y][0]);

					}
					break;

				case 4:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg3[y][0]);

					}
					break;

				default:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg4[y][0]);

					}
					break;
				}
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("%9sが%sを攻撃！                                                               \n", &player->name[0], &enemy->name[0]);
				printf("%7sに%3dのダメージ！                                    LV%d           　\n", &enemy->name[0], player->ATK, player->LV);
				printf("                                                                           　 \n");
				printf("                                                             HP%d             \n", player->HP);
				printf("                                                                              \n");
				printf("                                                             MP%d             \n", player->MP);
				printf("行動選択－＞Press Enter");

				//キー入力待ち
				rewind(stdin);
				_getch();

				if (enemy->HP <= 0)
				{
					enemy->HP = 0;
				}
			}
			

				
				
				//エネミーが死んだかの確認の処理
			if (enemy->HP <= 0)
			{

				//printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				//printf("*******************************************************************************\n");
				//printf("%9sが%sを攻撃！                                                               \n", &player->name[0], &enemy->name[0]);
				//printf("%7sに%3dのダメージ！                                    LV%d           　\n", &enemy->name[0], player->ATK, player->LV);
				//printf("                                                                           　 \n");
				//printf("                                                             HP%d             \n", player->HP);
				//printf("                                                                              \n");
				//printf("                                                             MP%d             \n", player->MP);
				//printf("行動選択－＞Press Enter");

				//画面クリア
				system("cls");

				player->EXP = rand() % (100 + 1);           //プレイヤーの取得経験値
															/* 画面描画処理 */
				switch (player->LV)
				{
				case 1:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg[y][0]);

					}
					break;

				case 2:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg1[y][0]);

					}
					break;

				case 3:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg2[y][0]);

					}
					break;

				case 4:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg3[y][0]);

					}
					break;

				default:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg4[y][0]);

					}
					break;
				}
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("%9sは%sを倒した！                                                             \n", &player->name[0], &enemy->name[0]);
				printf("%9sは経験値%3dを手に入れた             　             LV%d           　\n", &player->name[0], player->EXP, player->LV);
				printf("                                                                           　 \n");
				printf("                                                             HP%d             \n", player->HP);
				printf("                                                                              \n");
				printf("                                                             MP%d             \n", player->MP);
				printf("行動選択－＞Press Enter");
				/*scanf("%d", &com);*/

				//キー入力待ち
				rewind(stdin);
				_getch();

				//enemy++;									//エネミーのアドレスをインクリメント

				//レベルアップ処理
				if (player->EXP >= player->LVEXP)
				{
					system("cls");

					switch (player->LV)
					{
					case 1:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg[y][0]);

						}
						break;

					case 2:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg1[y][0]);

						}
						break;

					case 3:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg2[y][0]);

						}
						break;

					case 4:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg3[y][0]);

						}
						break;

					default:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg4[y][0]);

						}
						break;
					}

					player->LV++;                           //レベルアップ

					//ステータス上昇処理
					player->MAXHP = player->MAXHP + 100;
					player->MAXMP = player->MAXMP + 50;
					player->MAXATK = player->MAXATK + 50;
					player->MAXDEF = player->MAXDEF + 50;

					player->HP = player->MAXHP;
					player->ATK = player->MAXATK;
					player->MP = player->MAXMP;
					player->DEF = player->MAXDEF;

					if (player->LV == 2)
					{
						printf("*******************************************************************************\n");
						printf("LV UP!!                                                                       \n");
						printf("       LV:%d -> %d        じゅもん「シフトブレイク」を覚えた！      　\n", player->BEFLV, player->LV);
						printf("                                                                           　 \n");
						printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
						printf("                                                                              \n");
						printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
						printf("                                                                              \n");
						printf("                                                                              \n");
						printf("行動選択－＞Press Enter");

						//レベルアップ前のステータスをインクリメント
						player->BEFLV++;
						player->BEFHP = player->MAXHP;
						player->BEFMP = player->MAXMP;

					}
					else if (player->LV == 3)
					{
						printf("*******************************************************************************\n");
						printf("LV UP!!                                                                       \n");
						printf("       LV:%d -> %d        じゅもん「ファイヤー」を覚えた！      　\n", player->BEFLV, player->LV);
						printf("                                                                           　 \n");
						printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
						printf("                                                                              \n");
						printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
						printf("                                                                              \n");
						printf("                                                                              \n");
						printf("行動選択－＞Press Enter");

						//レベルアップ前のステータスをインクリメント
						player->BEFLV++;
						player->BEFHP = player->MAXHP;
						player->BEFMP = player->MAXMP;

					}
					else if (player->LV == 4)
					{
						printf("*******************************************************************************\n");
						printf("LV UP!!                                                                       \n");
						printf("       LV:%d -> %d        じゅもん「サンダー」を覚えた！      　\n", player->BEFLV, player->LV);
						printf("                                                                           　 \n");
						printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
						printf("                                                                              \n");
						printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
						printf("                                                                              \n");
						printf("                                                                              \n");
						printf("行動選択－＞Press Enter");

						//レベルアップ前のステータスをインクリメント
						player->BEFLV++;
						player->BEFHP = player->MAXHP;
						player->BEFMP = player->MAXMP;

					}
					else
					{
						printf("*******************************************************************************\n");
						printf("LV UP!!                                                                       \n");
						printf("       LV:%d -> %d                                                          　\n", player->BEFLV, player->LV);
						printf("                                                                           　 \n");
						printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
						printf("                                                                              \n");
						printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
						printf("                                                                              \n");
						printf("                                                                              \n");
						printf("行動選択－＞Press Enter");

						//レベルアップ前のステータスをインクリメント
						player->BEFLV++;
						player->BEFHP = player->MAXHP;
						player->BEFMP = player->MAXMP;

					}




					//キー入力待ち
					rewind(stdin);
					_getch();



					return;
				}
			}
			//else
			//{
			//	printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
			//	printf("*******************************************************************************\n");
			//	printf("%9sが%sを攻撃！                                                               \n", &player->name[0], &enemy->name[0]);
			//	printf("%7sに%3dのダメージ！                                    LV%d           　\n", &enemy->name[0], player->ATK, player->LV);
			//	printf("                                                                           　 \n");
			//	printf("                                                             HP%d             \n", player->HP);
			//	printf("                                                                              \n");
			//	printf("                                                             MP%d             \n", player->MP);
			//	printf("行動選択－＞Press Enter");

			//	//キー入力待ち
			//	rewind(stdin);
			//	_getch();
			//}
			

			



			//エネミーの攻撃処理
			enemy->ATK = rand() % (atk1 + 1);								//enemy->ATK=エネミーの攻撃力に基づくダメージ
			player->HP = player->HP - enemy->ATK;							//プレイヤーの残りHP表示

			rewind(stdin);
			_getch();

			//エネミーの攻撃力が０の時の処理
			if ((enemy->ATK == 0) && (&enemy[0]))
			{

				system("cls");
				switch (player->LV)
				{
				case 1:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg[y][0]);

					}
					break;

				case 2:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg1[y][0]);

					}
					break;

				case 3:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg2[y][0]);

					}
					break;

				case 4:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg3[y][0]);

					}
					break;

				default:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg4[y][0]);

					}
					break;
				}
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
				printf("%sは攻撃を外した！                                    LV%d           　\n", &enemy->name[0], player->LV);
				printf("                                                                           　 \n");
				printf("                                                             HP%d             \n", player->HP);
				printf("                                                                              \n");
				printf("                                                             MP%d             \n", player->MP);
				printf("行動選択－＞PressEnter");

				//キー入力待ち
				rewind(stdin);
				_getch();

			}
			else
			{

				system("cls");
				switch (player->LV)
				{
				case 1:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg[y][0]);

					}
					break;

				case 2:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg1[y][0]);

					}
					break;

				case 3:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg2[y][0]);

					}
					break;

				case 4:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg3[y][0]);

					}
					break;

				default:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg4[y][0]);

					}
					break;
				}
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
				printf("%9sに%3dのダメージ！                                   LV%d           　\n", &player->name[0], enemy->ATK, player->LV);
				printf("                                                                           　 \n");
				printf("                                                             HP%d             \n", player->HP);
				printf("                                                                              \n");
				printf("                                                             MP%d             \n", player->MP);
				printf("行動選択－＞Press Enter");
				/*scanf("%d", &com);*/

				//キー入力待ち
				rewind(stdin);
				_getch();

				//プレイヤーが死んだかの確認処理
				if (player->HP <= 0)
				{
					player->HP = 0;

					//画面クリア
					system("cls");

					switch (player->LV)
					{
					case 1:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg[y][0]);

						}
						break;

					case 2:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg1[y][0]);

						}
						break;

					case 3:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg2[y][0]);

						}
						break;

					case 4:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg3[y][0]);

						}
						break;

					default:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg4[y][0]);

						}
						break;
					}
					printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
					printf("*******************************************************************************\n");
					printf("%9sは%7sに倒された                                                       \n", &player->name[0], &enemy->name[0]);
					printf("                                                             LV%d           　\n", player->LV);
					printf("                                                                           　 \n");
					printf("                                                             HP%d             \n", player->HP);
					printf("                                                                              \n");
					printf("                                                             MP%d             \n", player->MP);
					printf("行動選択－＞Press Enter");

					//キー入力待ち
					rewind(stdin);
					_getch();

					return;
				}

			}
			break;


		case 2:
			//エネミーの攻撃処理
			enemy->ATK = rand() % (atk + 1) - player->DEF;								//enemy->ATK=エネミーの攻撃力に基づくダメージ

																			//エネミーの攻撃力が０の時の処理
			if (enemy->ATK <= 0)
			{
				

				system("cls");
				switch (player->LV)
				{
				case 1:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg[y][0]);

					}
					break;

				case 2:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg1[y][0]);

					}
					break;

				case 3:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg2[y][0]);

					}
					break;

				case 4:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg3[y][0]);

					}
					break;

				default:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg4[y][0]);

					}
					break;
				}
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("%9sは防御している！                                                            \n", &player->name[0]);
				printf("%9sは攻撃を防いだ！                                   LV%d           　\n", &player->name[0], player->LV);
				printf("                                                                           　 \n");
				printf("                                                             HP%d             \n", player->HP);
				printf("                                                                              \n");
				printf("                                                             MP%d             \n", player->MP);
				printf("行動選択－＞PressEnter");

				//キー入力待ち
				rewind(stdin);
				_getch();

			}
			else
			{
				player->HP = player->HP - enemy->ATK;							//プレイヤーの残りHP表示

				system("cls");

				switch (player->LV)
				{
				case 1:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg[y][0]);

					}
					break;

				case 2:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg1[y][0]);

					}
					break;

				case 3:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg2[y][0]);

					}
					break;

				case 4:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg3[y][0]);

					}
					break;

				default:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg4[y][0]);

					}
					break;
				}
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("%9sは防御している                                                               \n", &player->name[0]);
				printf("%9sに%3dのダメージ！                                    LV%d           　\n", &player->name[0], enemy->ATK, player->LV);
				printf("                                                                           　 \n");
				printf("                                                             HP%d             \n", player->HP);
				printf("                                                                              \n");
				printf("                                                             MP%d             \n", player->MP);
				printf("行動選択－＞Press Enter");
				/*scanf("%d", &com);*/

				//キー入力待ち
				rewind(stdin);
				_getch();

				//プレイヤーが死んだかの確認処理
				if (player->HP <= 0)
				{
					player->HP = 0;

					//画面クリア
					system("cls");

					switch (player->LV)
					{
					case 1:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg[y][0]);

						}
						break;

					case 2:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg1[y][0]);

						}
						break;

					case 3:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg2[y][0]);

						}
						break;

					case 4:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg3[y][0]);

						}
						break;

					default:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg4[y][0]);

						}
						break;
					}
					printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
					printf("*******************************************************************************\n");
					printf("%9sは%7sに倒された                                                       \n", &player->name[0], &enemy->name[0]);
					printf("                                                             LV%d           　\n", player->LV);
					printf("                                                                           　 \n");
					printf("                                                             HP%d             \n", player->HP);
					printf("                                                                              \n");
					printf("                                                             MP%d             \n", player->MP);
					printf("行動選択－＞Press Enter");

					//キー入力待ち
					rewind(stdin);
					_getch();

					return;
				}
			}
			break;

		case 3:

			system("cls");

			switch (player->LV)
			{
			case 1:
				/* 画面描画処理 */
				for (y = 0; y < TATE_BAT; y++)
				{
					printf("%s\n", &batbg[y][0]);

				}
				break;

			case 2:
				/* 画面描画処理 */
				for (y = 0; y < TATE_BAT; y++)
				{
					printf("%s\n", &batbg1[y][0]);

				}
				break;

			case 3:
				/* 画面描画処理 */
				for (y = 0; y < TATE_BAT; y++)
				{
					printf("%s\n", &batbg2[y][0]);

				}
				break;

			case 4:
				/* 画面描画処理 */
				for (y = 0; y < TATE_BAT; y++)
				{
					printf("%s\n", &batbg3[y][0]);

				}
				break;

			default:
				/* 画面描画処理 */
				for (y = 0; y < TATE_BAT; y++)
				{
					printf("%s\n", &batbg4[y][0]);

				}
				break;
			}
			if (player->LV == 1)
			{
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("    まだ、じゅもんは習得していないぞ！                                         \n");
				printf("                                                              LV%d           　\n", player->LV);
				printf("                                                                               \n");
				printf("                                                              HP%d             \n", player->HP);
				printf("                                                                               \n");
				printf("                                                              MP%d             \n", player->MP);
				printf("行動選択－＞Press Enter");
				
				//キー入力待ち
				rewind(stdin);
				_getch();

				break;
			}
			else if (player->LV == 2)
			{
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("                                                                               \n");
				printf("    1 「シフトブレイク」                                      LV%d           　\n", player->LV);
				printf("                                                                               \n");
				printf("                                                              HP%d             \n", player->HP);
				printf("                                                                               \n");
				printf("                                                              MP%d             \n", player->MP);
				printf("行動選択－＞");
				scanf("%d", &com);

				switch (com)
				{
				case 1:
					enemy->HP = enemy->HP - player->SATK1;
					player->MP = player->MP - player->s1MP;
					if (player->MP <= 0)
					{
						player->MP = 0;
						
					}

					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}

					system("cls");

					switch (player->LV)
					{
					case 1:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg[y][0]);

						}
						break;

					case 2:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg1[y][0]);

						}
						break;

					case 3:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg2[y][0]);

						}
						break;

					case 4:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg3[y][0]);

						}
						break;

					default:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg4[y][0]);

						}
						break;
					}
					printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
					printf("*******************************************************************************\n");
					printf("%9sがじゅもん「シフトブレイク」を発動した！                                    \n", &player->name[0]);
					printf("%9sは%7sに%dのダメージ！                       LV%d           　\n", &player->name[0], &enemy->name[0], player->SATK1, player->LV);
					printf("                                                                            　 \n");
					printf("                                                              HP%d             \n", player->HP);
					printf("                                                                               \n");
					printf("                                                              MP%d             \n", player->MP);
					printf("行動選択－＞PressEnter");
					/*scanf("%d", &com); */           //プレイヤーの攻撃が０の時の表示


					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}

					//キー入力待ち
					rewind(stdin);
					_getch();

					//エネミーが死んだかの確認の処理
					if (enemy->HP <= 0)
					{
						//画面クリア
						system("cls");

						player->EXP = rand() % (100 + 1);           //プレイヤーの取得経験値
																	/* 画面描画処理 */
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%9sは%sを倒した！                                                             \n", &player->name[0], &enemy->name[0]);
						printf("%9sは経験値%3dを手に入れた             　             LV%d           　\n", &player->name[0], player->EXP, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//レベルアップ処理
						if (player->EXP >= player->LVEXP)
						{

							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}

							player->LV++;                           //レベルアップ

																	//ステータス上昇処理
							player->MAXHP = player->MAXHP + 100;
							player->MAXMP = player->MAXMP + 50;
							player->MAXATK = player->MAXATK + 50;
							player->MAXDEF = player->MAXDEF + 50;

							player->HP = player->MAXHP;
							player->ATK = player->MAXATK;
							player->MP = player->MAXMP;
							player->DEF = player->MAXDEF;


							if (player->LV == 3)
							{
								printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
								printf("*******************************************************************************\n");
								printf("LV UP!!                                                                       \n");
								printf("       LV:%d -> %d        じゅもん「ファイヤー」を覚えた！      　\n", player->BEFLV, player->LV);
								printf("                                                                           　 \n");
								printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
								printf("                                                                              \n");
								printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
								printf("                                                                              \n");
								printf("                                                                              \n");
								printf("行動選択－＞Press Enter");
								return;
							}
							else if (player->LV == 4)
							{
								printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
								printf("*******************************************************************************\n");
								printf("LV UP!!                                                                       \n");
								printf("       LV:%d -> %d        じゅもん「サンダー」を覚えた！      　\n", player->BEFLV, player->LV);
								printf("                                                                           　 \n");
								printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
								printf("                                                                              \n");
								printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
								printf("                                                                              \n");
								printf("                                                                              \n");
								printf("行動選択－＞Press Enter");
								return;
							}
							else (player->LV > 4);
							{
								printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
								printf("*******************************************************************************\n");
								printf("LV UP!!                                                                       \n");
								printf("       LV:%d -> %d                                                          　\n", player->BEFLV, player->LV);
								printf("                                                                           　 \n");
								printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
								printf("                                                                              \n");
								printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
								printf("                                                                              \n");
								printf("                                                                              \n");
								printf("行動選択－＞Press Enter");
								return;
							}


							//キー入力待ち
							rewind(stdin);
							_getch();

							//enemy++;												//enemyのインクリメント

							return;
						}


					}



					//エネミーの攻撃処理
					enemy->ATK = rand() % (atk1 + 1);								//enemy->ATK=エネミーの攻撃力に基づくダメージ
					player->HP = player->HP - enemy->ATK;							//プレイヤーの残りHP表示


					rewind(stdin);
					_getch();

					//エネミーの攻撃力が０の時の処理
					if ((enemy->ATK == 0) && (&enemy[0]))
					{

						system("cls");
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%sは攻撃を外した！                                 LV%d           　\n", &enemy->name[0], player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞PressEnter");

						//キー入力待ち
						rewind(stdin);
						_getch();

					}
					else
					{

						system("cls");

						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}

						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%9sに%3dのダメージ！                                   LV%d           　\n", &player->name[0], enemy->ATK, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//プレイヤーが死んだかの確認処理
						if (player->HP <= 0)
						{
							player->HP = 0;

							//画面クリア
							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("%9sは%7sに倒された                                                       \n", &player->name[0], &enemy->name[0]);
							printf("                                                             LV%d           　\n", player->LV);
							printf("                                                                           　 \n");
							printf("                                                             HP%d             \n", player->HP);
							printf("                                                                              \n");
							printf("                                                             MP%d             \n", player->MP);
							printf("行動選択－＞Press Enter");

							//キー入力待ち
							rewind(stdin);
							_getch();

							return;
						}

					}
					break;
				}
				//キー入力待ち
				rewind(stdin);
				_getch();
			}
			else if (player->LV == 3)
			{
				

				switch (player->LV)
				{
				case 1:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg[y][0]);

					}
					break;

				case 2:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg1[y][0]);

					}
					break;

				case 3:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg2[y][0]);

					}
					break;

				case 4:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg3[y][0]);

					}
					break;

				default:
					/* 画面描画処理 */
					for (y = 0; y < TATE_BAT; y++)
					{
						printf("%s\n", &batbg4[y][0]);

					}
					break;
				}
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("                                                                               \n");
				printf("    1 「シフトブレイク」                                      LV%d           　\n", player->LV);
				printf("                                                                               \n");
				printf("    2  「ファイヤー」                                         HP%d             \n", player->HP);
				printf("                                                                               \n");
				printf("                                                              MP%d             \n", player->MP);
				printf("行動選択－＞");
				scanf("%d", &com);

				switch (com)
				{
				case 1:
					enemy->HP = enemy->HP - player->SATK1;
					player->MP = player->MP - player->s1MP;
					if (player->MP <= 0)
					{
						player->MP = 0;
					
					}

					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}

					system("cls");

					switch (player->LV)
					{
					case 1:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg[y][0]);

						}
						break;

					case 2:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg1[y][0]);

						}
						break;

					case 3:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg2[y][0]);

						}
						break;

					case 4:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg3[y][0]);

						}
						break;

					default:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg4[y][0]);

						}
						break;
					}
					printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
					printf("*******************************************************************************\n");
					printf("%9sがじゅもん「シフトブレイク」を発動した！                                    \n", &player->name[0]);
					printf("%9sは%7sに%dのダメージ！                       LV%d           　\n", &player->name[0], &enemy->name[0], player->SATK1, player->LV);
					printf("                                                                            　 \n");
					printf("                                                              HP%d             \n", player->HP);
					printf("                                                                               \n");
					printf("                                                              MP%d             \n", player->MP);
					printf("行動選択－＞PressEnter");
					/*scanf("%d", &com); */           //プレイヤーの攻撃が０の時の表示


					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}

					//キー入力待ち
					rewind(stdin);
					_getch();

					//エネミーが死んだかの確認の処理
					if (enemy->HP <= 0)
					{
						//画面クリア
						system("cls");

						player->EXP = rand() % (100 + 1);           //プレイヤーの取得経験値
																	/* 画面描画処理 */
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%9sは%sを倒した！                                                             \n", &player->name[0], &enemy->name[0]);
						printf("%9sは経験値%3dを手に入れた             　             LV%d           　\n", &player->name[0], player->EXP, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//レベルアップ処理
						if (player->EXP >= player->LVEXP)
						{

							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}

							player->LV++;                           //レベルアップ

																	//ステータス上昇処理
							player->MAXHP = player->MAXHP + 100;
							player->MAXMP = player->MAXMP + 50;
							player->MAXATK = player->MAXATK + 50;
							player->MAXDEF = player->MAXDEF + 50;

							player->HP = player->MAXHP;
							player->ATK = player->MAXATK;
							player->MP = player->MAXMP;
							player->DEF = player->MAXDEF;


							if (player->LV == 3)
							{
								printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
								printf("*******************************************************************************\n");
								printf("LV UP!!                                                                       \n");
								printf("       LV:%d -> %d        じゅもん「ファイヤー」を覚えた！      　\n", player->BEFLV, player->LV);
								printf("                                                                           　 \n");
								printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
								printf("                                                                              \n");
								printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
								printf("                                                                              \n");
								printf("                                                                              \n");
								printf("行動選択－＞Press Enter");
								return;
							}
							else if (player->LV == 4)
							{
								printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
								printf("*******************************************************************************\n");
								printf("LV UP!!                                                                       \n");
								printf("       LV:%d -> %d        じゅもん「サンダー」を覚えた！      　\n", player->BEFLV, player->LV);
								printf("                                                                           　 \n");
								printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
								printf("                                                                              \n");
								printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
								printf("                                                                              \n");
								printf("                                                                              \n");
								printf("行動選択－＞Press Enter");
								return;
							}
							else (player->LV > 4);
							{
								printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
								printf("*******************************************************************************\n");
								printf("LV UP!!                                                                       \n");
								printf("       LV:%d -> %d                                                          　\n", player->BEFLV, player->LV);
								printf("                                                                           　 \n");
								printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
								printf("                                                                              \n");
								printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
								printf("                                                                              \n");
								printf("                                                                              \n");
								printf("行動選択－＞Press Enter");
								return;
							}


							//キー入力待ち
							rewind(stdin);
							_getch();

							//enemy++;												//enemyのインクリメント

							return;
						}

					


					}



					//エネミーの攻撃処理
					enemy->ATK = rand() % (atk1 + 1);								//enemy->ATK=エネミーの攻撃力に基づくダメージ
					player->HP = player->HP - enemy->ATK;							//プレイヤーの残りHP表示


					rewind(stdin);
					_getch();

					//エネミーの攻撃力が０の時の処理
					if ((enemy->ATK == 0) && (&enemy[0]))
					{

						system("cls");
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%sは攻撃を外した！                                 LV%d           　\n", &enemy->name[0], player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞PressEnter");

						//キー入力待ち
						rewind(stdin);
						_getch();

					}
					else
					{

						system("cls");

						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}

						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%9sに%3dのダメージ！                                   LV%d           　\n", &player->name[0], enemy->ATK, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//プレイヤーが死んだかの確認処理
						if (player->HP <= 0)
						{
							player->HP = 0;

							//画面クリア
							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("%9sは%7sに倒された                                                       \n", &player->name[0], &enemy->name[0]);
							printf("                                                             LV%d           　\n", player->LV);
							printf("                                                                           　 \n");
							printf("                                                             HP%d             \n", player->HP);
							printf("                                                                              \n");
							printf("                                                             MP%d             \n", player->MP);
							printf("行動選択－＞Press Enter");

							//キー入力待ち
							rewind(stdin);
							_getch();

							return;
						}

					}
					break;

				case 2:
					enemy->HP = enemy->HP - player->SATK2;
					player->MP = player->MP - player->s2MP;

					if (player->MP < 0)
					{
						player->MP = 0;
						
					}

					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}
					system("cls");

					switch (player->LV)
					{
					case 1:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg[y][0]);

						}
						break;

					case 2:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg1[y][0]);

						}
						break;

					case 3:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg2[y][0]);

						}
						break;

					case 4:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg3[y][0]);

						}
						break;

					default:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg4[y][0]);

						}
						break;
					}
					printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
					printf("*******************************************************************************\n");
					printf("%9sがじゅもん「ファイヤー」を発動した！                                    \n", &player->name[0]);
					printf("%9sは%7sに%dのダメージ！                                       LV%d           　\n", &player->name[0], &enemy->name[0], player->SATK2, player->LV);
					printf("                                                                            　 \n");
					printf("                                                              HP%d             \n", player->HP);
					printf("                                                                               \n");
					printf("                                                              MP%d             \n", player->MP);
					printf("行動選択－＞PressEnter");
					/*scanf("%d", &com); */           //プレイヤーの攻撃が０の時の表示

					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}
					//キー入力待ち
					rewind(stdin);
					_getch();

					//エネミーが死んだかの確認の処理
					if (enemy->HP <= 0)
					{
						//画面クリア
						system("cls");

						player->EXP = rand() % (100 + 1);           //プレイヤーの取得経験値
																	/* 画面描画処理 */
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%9sは%sを倒した！                                                             \n", &player->name[0], &enemy->name[0]);
						printf("%9sは経験値%3dを手に入れた             　             LV%d           　\n", &player->name[0], player->EXP, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//enemy++;									//エネミーのアドレスをインクリメント

						//レベルアップ処理
						if (player->EXP >= player->LVEXP)
						{
							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}

							player->LV++;                           //レベルアップ

																	//ステータス上昇処理
							player->MAXHP = player->MAXHP + 100;
							player->MAXMP = player->MAXMP + 50;
							player->MAXATK = player->MAXATK + 50;
							player->MAXDEF = player->MAXDEF + 50;

							player->HP = player->MAXHP;
							player->ATK = player->MAXATK;
							player->MP = player->MAXMP;
							player->DEF = player->MAXDEF;

						if (player->LV == 4)
						{
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("LV UP!!                                                                       \n");
							printf("       LV:%d -> %d        じゅもん「サンダー」を覚えた！      　\n", player->BEFLV, player->LV);
							printf("                                                                           　 \n");
							printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
							printf("                                                                              \n");
							printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
							printf("                                                                              \n");
							printf("                                                                              \n");
							printf("行動選択－＞Press Enter");
							return;
						}
						else (player->LV > 4);
						{
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("LV UP!!                                                                       \n");
							printf("       LV:%d -> %d                                                          　\n", player->BEFLV, player->LV);
							printf("                                                                           　 \n");
							printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
							printf("                                                                              \n");
							printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
							printf("                                                                              \n");
							printf("                                                                              \n");
							printf("行動選択－＞Press Enter");
							return;
						}



							//キー入力待ち
							rewind(stdin);
							_getch();

							//enemy++;												//enemyのインクリメント

							return;
						}


					}



					//エネミーの攻撃処理
					enemy->ATK = rand() % (atk1 + 1);								//enemy->ATK=エネミーの攻撃力に基づくダメージ
					player->HP = player->HP - enemy->ATK;							//プレイヤーの残りHP表示



																					//キー入力待ち
					rewind(stdin);
					_getch();

					//エネミーの攻撃力が０の時の処理
					if ((enemy->ATK == 0) && (&enemy[0]))
					{

						system("cls");
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%sは攻撃を外した！                                 LV%d           　\n", &enemy->name[0], player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞PressEnter");

						//キー入力待ち
						rewind(stdin);
						_getch();

					}
					else
					{

						system("cls");

						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%9sに%3dのダメージ！                                   LV%d           　\n", &player->name[0], enemy->ATK, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//プレイヤーが死んだかの確認処理
						if (player->HP <= 0)
						{
							player->HP = 0;

							//画面クリア
							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("%9sは%7sに倒された                                                       \n", &player->name[0], &enemy->name[0]);
							printf("                                                             LV%d           　\n", player->LV);
							printf("                                                                           　 \n");
							printf("                                                             HP%d             \n", player->HP);
							printf("                                                                              \n");
							printf("                                                             MP%d             \n", player->MP);
							printf("行動選択－＞Press Enter");

							//キー入力待ち
							rewind(stdin);
							_getch();

							return;
						}

					}
					break;
				}
				
			}
			else if (player->LV >= 4)
			{
				printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
				printf("*******************************************************************************\n");
				printf("                                                                               \n");
				printf("    1 「シフトブレイク」                                      LV%d           　\n", player->LV);
				printf("                                                                               \n");
				printf("    2 「ファイヤー」                                          HP%d             \n", player->HP);
				printf("                                                                               \n");
				printf("    3 「サンダー」                                            MP%d             \n", player->MP);
				printf("行動選択－＞");
				scanf("%d", &com);

				switch (com)
				{
				case 1:
					enemy->HP = enemy->HP - player->SATK1;
					player->MP = player->MP - player->s1MP;

					if (player->MP<=0)
					{
						player->MP = 0;
						
					}

					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}

					system("cls");

					switch (player->LV)
					{
					case 1:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg[y][0]);

						}
						break;

					case 2:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg1[y][0]);

						}
						break;

					case 3:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg2[y][0]);

						}
						break;

					case 4:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg3[y][0]);

						}
						break;

					default:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg4[y][0]);

						}
						break;
					}
					printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
					printf("*******************************************************************************\n");
					printf("%9sがじゅもん「シフトブレイク」を発動した！                                    \n", &player->name[0]);
					printf("%9sは%7sに%dのダメージ！                       LV%d           　\n", &player->name[0], &enemy->name[0], player->SATK1, player->LV);
					printf("                                                                            　 \n");
					printf("                                                              HP%d             \n", player->HP);
					printf("                                                                               \n");
					printf("                                                              MP%d             \n", player->MP);
					printf("行動選択－＞PressEnter");
					/*scanf("%d", &com); */           //プレイヤーの攻撃が０の時の表示


					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}

					//キー入力待ち
					rewind(stdin);
					_getch();

					//エネミーが死んだかの確認の処理
					if (enemy->HP <= 0)
					{
						//画面クリア
						system("cls");

						player->EXP = rand() % (100 + 1);           //プレイヤーの取得経験値
																	/* 画面描画処理 */
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%9sは%sを倒した！                                                             \n", &player->name[0], &enemy->name[0]);
						printf("%9sは経験値%3dを手に入れた             　             LV%d           　\n", &player->name[0], player->EXP, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//レベルアップ処理
						if (player->EXP >= player->LVEXP)
						{

							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}

							player->LV++;                           //レベルアップ

																	//ステータス上昇処理
							player->MAXHP = player->MAXHP + 100;
							player->MAXMP = player->MAXMP + 50;
							player->MAXATK = player->MAXATK + 50;
							player->MAXDEF = player->MAXDEF + 50;

							player->HP = player->MAXHP;
							player->ATK = player->MAXATK;
							player->MP = player->MAXMP;
							player->DEF = player->MAXDEF;


							if (player->LV == 3)
							{
								printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
								printf("*******************************************************************************\n");
								printf("LV UP!!                                                                       \n");
								printf("       LV:%d -> %d        じゅもん「ファイヤー」を覚えた！      　\n", player->BEFLV, player->LV);
								printf("                                                                           　 \n");
								printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
								printf("                                                                              \n");
								printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
								printf("                                                                              \n");
								printf("                                                                              \n");
								printf("行動選択－＞Press Enter");
								return;
							}
							else if (player->LV == 4)
							{
								printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
								printf("*******************************************************************************\n");
								printf("LV UP!!                                                                       \n");
								printf("       LV:%d -> %d        じゅもん「サンダー」を覚えた！      　\n", player->BEFLV, player->LV);
								printf("                                                                           　 \n");
								printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
								printf("                                                                              \n");
								printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
								printf("                                                                              \n");
								printf("                                                                              \n");
								printf("行動選択－＞Press Enter");
								return;
							}
							else (player->LV >= 4);
							{
								printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
								printf("*******************************************************************************\n");
								printf("LV UP!!                                                                       \n");
								printf("       LV:%d -> %d                                                          　\n", player->BEFLV, player->LV);
								printf("                                                                           　 \n");
								printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
								printf("                                                                              \n");
								printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
								printf("                                                                              \n");
								printf("                                                                              \n");
								printf("行動選択－＞Press Enter");
								return;
							}


							//キー入力待ち
							rewind(stdin);
							_getch();

							//enemy++;												//enemyのインクリメント

							return;
						}


					}



					//エネミーの攻撃処理
					enemy->ATK = rand() % (atk1 + 1);								//enemy->ATK=エネミーの攻撃力に基づくダメージ
					player->HP = player->HP - enemy->ATK;							//プレイヤーの残りHP表示


					rewind(stdin);
					_getch();

					//エネミーの攻撃力が０の時の処理
					if ((enemy->ATK == 0) && (&enemy[0]))
					{

						system("cls");
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%sは攻撃を外した！                                 LV%d           　\n", &enemy->name[0], player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞PressEnter");

						//キー入力待ち
						rewind(stdin);
						_getch();

					}
					else
					{

						system("cls");

						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}

						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%9sに%3dのダメージ！                                   LV%d           　\n", &player->name[0], enemy->ATK, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//プレイヤーが死んだかの確認処理
						if (player->HP <= 0)
						{
							player->HP = 0;

							//画面クリア
							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("%9sは%7sに倒された                                                       \n", &player->name[0], &enemy->name[0]);
							printf("                                                             LV%d           　\n", player->LV);
							printf("                                                                           　 \n");
							printf("                                                             HP%d             \n", player->HP);
							printf("                                                                              \n");
							printf("                                                             MP%d             \n", player->MP);
							printf("行動選択－＞Press Enter");

							//キー入力待ち
							rewind(stdin);
							_getch();

							return;
						}

					}
					break;

				case 2:
					enemy->HP = enemy->HP - player->SATK2;					//スキル攻撃処理
					player->MP = player->MP - player->s2MP;					//MP処理

					if (player->MP<=0)
					{
						player->MP = 0;
						
					}

					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}

					system("cls");

					switch (player->LV)
					{
					case 1:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg[y][0]);

						}
						break;

					case 2:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg1[y][0]);

						}
						break;

					case 3:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg2[y][0]);

						}
						break;

					case 4:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg3[y][0]);

						}
						break;

					default:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg4[y][0]);

						}
						break;
					}
					printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
					printf("*******************************************************************************\n");
					printf("%9sがじゅもん「ファイヤー」を発動した！                                    \n", &player->name[0]);
					printf("%9sは%7sに%dのダメージ！                                       LV%d           　\n", &player->name[0], &enemy->name[0], player->SATK2, player->LV);
					printf("                                                                            　 \n");
					printf("                                                              HP%d             \n", player->HP);
					printf("                                                                               \n");
					printf("                                                              MP%d             \n", player->MP);
					printf("行動選択－＞PressEnter");
					/*scanf("%d", &com); */           //プレイヤーの攻撃が０の時の表示

					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}
					//キー入力待ち
					rewind(stdin);
					_getch();

					//エネミーが死んだかの確認の処理
					if (enemy->HP <= 0)
					{
						//画面クリア
						system("cls");

						player->EXP = rand() % (100 + 1);           //プレイヤーの取得経験値
																	/* 画面描画処理 */
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%9sは%sを倒した！                                                             \n", &player->name[0], &enemy->name[0]);
						printf("%9sは経験値%3dを手に入れた             　             LV%d           　\n", &player->name[0], player->EXP, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//enemy++;									//エネミーのアドレスをインクリメント

						//レベルアップ処理
						if (player->EXP >= player->LVEXP)
						{
							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}

							player->LV++;                           //レベルアップ

																	//ステータス上昇処理
							player->MAXHP = player->MAXHP + 100;
							player->MAXMP = player->MAXMP + 50;
							player->MAXATK = player->MAXATK + 50;
							player->MAXDEF = player->MAXDEF + 50;

							player->HP = player->MAXHP;
							player->ATK = player->MAXATK;
							player->MP = player->MAXMP;
							player->DEF = player->MAXDEF;

						if (player->LV == 4)
						{
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("LV UP!!                                                                       \n");
							printf("       LV:%d -> %d        じゅもん「サンダー」を覚えた！      　\n", player->BEFLV, player->LV);
							printf("                                                                           　 \n");
							printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
							printf("                                                                              \n");
							printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
							printf("                                                                              \n");
							printf("                                                                              \n");
							printf("行動選択－＞Press Enter");
							return;
						}
						else (player->LV > 4);
						{
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("LV UP!!                                                                       \n");
							printf("       LV:%d -> %d                                                          　\n", player->BEFLV, player->LV);
							printf("                                                                           　 \n");
							printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
							printf("                                                                              \n");
							printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
							printf("                                                                              \n");
							printf("                                                                              \n");
							printf("行動選択－＞Press Enter");
							return;
						}



							//キー入力待ち
							rewind(stdin);
							_getch();

							//enemy++;												//enemyのインクリメント

							return;
						}


					}



					//エネミーの攻撃処理
					enemy->ATK = rand() % (atk1 + 1);								//enemy->ATK=エネミーの攻撃力に基づくダメージ
					player->HP = player->HP - enemy->ATK;							//プレイヤーの残りHP表示



																					//キー入力待ち
					rewind(stdin);
					_getch();

					//エネミーの攻撃力が０の時の処理
					if ((enemy->ATK == 0) && (&enemy[0]))
					{

						system("cls");
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%sは攻撃を外した！                                 LV%d           　\n", &enemy->name[0], player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞PressEnter");

						//キー入力待ち
						rewind(stdin);
						_getch();

					}
					else
					{

						system("cls");

						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%9sに%3dのダメージ！                                   LV%d           　\n", &player->name[0], enemy->ATK, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//プレイヤーが死んだかの確認処理
						if (player->HP <= 0)
						{
							player->HP = 0;

							//画面クリア
							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("%9sは%7sに倒された                                                       \n", &player->name[0], &enemy->name[0]);
							printf("                                                             LV%d           　\n", player->LV);
							printf("                                                                           　 \n");
							printf("                                                             HP%d             \n", player->HP);
							printf("                                                                              \n");
							printf("                                                             MP%d             \n", player->MP);
							printf("行動選択－＞Press Enter");

							//キー入力待ち
							rewind(stdin);
							_getch();

							return;
						}

					}
					break;
				case 3:
					enemy->HP = enemy->HP - player->SATK3;
					player->MP = player->MP - player->s3MP;

					if (player->MP <= 0)
					{
						player->MP = 0;
					
					}

					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}

					system("cls");

					switch (player->LV)
					{
					case 1:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg[y][0]);

						}
						break;

					case 2:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg1[y][0]);

						}
						break;

					case 3:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg2[y][0]);

						}
						break;

					case 4:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg3[y][0]);

						}
						break;

					default:
						/* 画面描画処理 */
						for (y = 0; y < TATE_BAT; y++)
						{
							printf("%s\n", &batbg4[y][0]);

						}
						break;
					}
					printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
					printf("*******************************************************************************\n");
					printf("%9sがじゅもん「サンダー」を発動した！                                    \n", &player->name[0]);
					printf("%9sは%7sに%dのダメージ！                                       LV%d           　\n", &player->name[0], &enemy->name[0], player->SATK3, player->LV);
					printf("                                                                            　 \n");
					printf("                                                              HP%d             \n", player->HP);
					printf("                                                                               \n");
					printf("                                                              MP%d             \n", player->MP);
					printf("行動選択－＞PressEnter");
					/*scanf("%d", &com); */           //プレイヤーの攻撃が０の時の表示

					if (enemy->HP <= 0)
					{
						enemy->HP = 0;
					}

					//キー入力待ち
					rewind(stdin);
					_getch();


					//エネミーが死んだかの確認の処理
					if (enemy->HP <= 0)
					{
						//画面クリア
						system("cls");

						player->EXP = rand() % (100 + 1);           //プレイヤーの取得経験値
																	/* 画面描画処理 */
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%9sは%sを倒した！                                                             \n", &player->name[0], &enemy->name[0]);
						printf("%9sは経験値%3dを手に入れた             　             LV%d           　\n", &player->name[0], player->EXP, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//enemy++;									//エネミーのアドレスをインクリメント

						//レベルアップ処理
						if (player->EXP >= player->LVEXP)
						{

							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}


							player->LV++;                           //レベルアップ

																	//ステータス上昇処理
							player->MAXHP = player->MAXHP + 100;
							player->MAXMP = player->MAXMP + 50;
							player->MAXATK = player->MAXATK + 50;
							player->MAXDEF = player->MAXDEF + 50;

							player->HP = player->MAXHP;
							player->ATK = player->MAXATK;
							player->MP = player->MAXMP;
							player->DEF = player->MAXDEF;

							printf("*******************************************************************************\n");
							printf("LV UP!!                                                                       \n");
							printf("       LV:%d -> %d                                                          　\n", player->BEFLV, player->LV);
							printf("                                                                           　 \n");
							printf("       HP:%d -> %d                                                            \n", player->BEFHP, player->HP);
							printf("                                                                              \n");
							printf("       MP:%d -> %d                                                            \n", player->BEFMP, player->MP);
							printf("                                                                              \n");
							printf("                                                                              \n");
							printf("行動選択－＞Press Enter");



							//キー入力待ち
							rewind(stdin);
							_getch();

							//enemy++;												//enemyのインクリメント

							return;
						}


					}



					//エネミーの攻撃処理
					enemy->ATK = rand() % (atk1 + 1);								//enemy->ATK=エネミーの攻撃力に基づくダメージ
					player->HP = player->HP - enemy->ATK;							//プレイヤーの残りHP表示


																					//キー入力待ち
					rewind(stdin);
					_getch();

					//エネミーの攻撃力が０の時の処理
					if ((enemy->ATK == 0) && (&enemy[0]))
					{

						system("cls");
						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%sは攻撃を外した！                                 LV%d           　\n", &enemy->name[0], player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞PressEnter");

						//キー入力待ち
						rewind(stdin);
						_getch();

					}
					else
					{

						system("cls");

						switch (player->LV)
						{
						case 1:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg[y][0]);

							}
							break;

						case 2:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg1[y][0]);

							}
							break;

						case 3:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg2[y][0]);

							}
							break;

						case 4:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg3[y][0]);

							}
							break;

						default:
							/* 画面描画処理 */
							for (y = 0; y < TATE_BAT; y++)
							{
								printf("%s\n", &batbg4[y][0]);

							}
							break;
						}
						printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
						printf("*******************************************************************************\n");
						printf("%7sが%9sを攻撃！                                                               \n", &enemy->name[0], &player->name[0]);
						printf("%9sに%3dのダメージ！                                   LV%d           　\n", &player->name[0], enemy->ATK, player->LV);
						printf("                                                                           　 \n");
						printf("                                                             HP%d             \n", player->HP);
						printf("                                                                              \n");
						printf("                                                             MP%d             \n", player->MP);
						printf("行動選択－＞Press Enter");
						/*scanf("%d", &com);*/

						//キー入力待ち
						rewind(stdin);
						_getch();

						//プレイヤーが死んだかの確認処理
						if (player->HP <= 0)
						{
							player->HP = 0;

							//画面クリア
							system("cls");

							switch (player->LV)
							{
							case 1:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg[y][0]);

								}
								break;

							case 2:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg1[y][0]);

								}
								break;

							case 3:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg2[y][0]);

								}
								break;

							case 4:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg3[y][0]);

								}
								break;

							default:
								/* 画面描画処理 */
								for (y = 0; y < TATE_BAT; y++)
								{
									printf("%s\n", &batbg4[y][0]);

								}
								break;
							}
							printf("*                           %7s      HP %4d                             *\n", &enemy->name[0], enemy->HP);
							printf("*******************************************************************************\n");
							printf("%9sは%7sに倒された                                                       \n", &player->name[0], &enemy->name[0]);
							printf("                                                             LV%d           　\n", player->LV);
							printf("                                                                           　 \n");
							printf("                                                             HP%d             \n", player->HP);
							printf("                                                                              \n");
							printf("                                                             MP%d             \n", player->MP);
							printf("行動選択－＞Press Enter");

							//キー入力待ち
							rewind(stdin);
							_getch();

							return;
						}

					}
					break;
				}
				
				
				//キー入力待ち
				rewind(stdin);
				_getch();
			}
		}

	}

	
	
	
	
}



/*******************************************************************************
関数名:	char *GetMapAdr( void )
引数:	int y : Y座標
int x : X座標
戻り値:	char *
説明:	フィールドのアドレスを取得する
*******************************************************************************/
char *GetBattlebgAdr(int y, int x)
{
	return &batbg[y][x];
}
