#ifndef BITMAP_H
#define BITMAP_H

#include <fstream>
#include <iostream>
#include <string>
 
/**
  Bitmapの吐きだし関連の処理を保持したクラス
*/
class BitMap
{
private:
	//! 保存用の配列の最大数
	static const int MaxArray = 1000000;

	//! Bitmpに書き込む内容を保存する配列
	char FileContent[MaxArray] = { 0 };

	//! 実データ開始部分
	int DataStart = 54;

public:

	/**
	 * Bitmap形式の画像を吐き出す関数
	 * @brief 要約説明
	 * @param height 吐くBitmapの高さ
	 * @param width 吐くBitmapの幅
	 * @param array[] 吐くBitMapの配列
	 */
	void CreateFile(int height, int width, char array[]);

	/**
	 * Bitmap形式の画像の拡大率を設定して吐き出す関数
	 * @brief 要約説明
	 * @param height 吐くBitmapの高さ
	 * @param width 吐くBitmapの幅
	 * @param array[] 吐くBitMapの配列
	 * @param scale 拡大率
	 */
	void CreateFileScaling(int height, int width, char array[],int scale);

};



#endif