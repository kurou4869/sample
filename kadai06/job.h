/*******************************************************************************
* タイトル:		メインヘッダーファイル
* プログラム名:	main.h
* 作成者:		クラス記号 出席番号 氏名
* 作成日:		2018/04/16
*******************************************************************************/
#ifndef JOB_H
#define JOB_H


/*******************************************************************************
* マクロ定義
*******************************************************************************/


/*******************************************************************************
* 構造体定義
*******************************************************************************/
typedef struct 
{
	CHARACTER status;

}JOB;



/*******************************************************************************
* プロトタイプ宣言
*******************************************************************************/
JOB *GetJobAdr(int jno);

#endif
