/*******************************************************************************
* タイトル:		ファイルヘッダー
* プログラム名:	file.h
* 作成者:		gp11b341 11 kurosawa yuta
* 作成日:		2018/06/15
*******************************************************************************/
#ifndef FILE_H
#define FILE_H

/*******************************************************************************
* インクルードファイル****
*******************************************************************************/


/*******************************************************************************
* マクロ定義
*******************************************************************************/



/*******************************************************************************
* 構造体定義
*******************************************************************************/
typedef struct					// セーブデータの構造体
{
	// プレイヤーデータを保存
	PLAYER player[PLAYER_MAX];	// プレイヤーのMAX人数分セーブする

								// 保管も何かあればここに追加してみよう


} SAVEDATA;



/*******************************************************************************
* プロトタイプ宣言
*******************************************************************************/
void SaveData(void);
void LoadData(void);


#endif
