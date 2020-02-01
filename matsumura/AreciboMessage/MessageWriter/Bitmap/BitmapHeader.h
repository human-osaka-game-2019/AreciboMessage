#ifndef BITMAP_HEADER_H_
#define BITMAP_HEADER_H_

#include <Windows.h>

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

/// <summary>
/// ビットマップヘッダークラス
/// </summary>
class BitmapHeader {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="width">ビットマップファイルの幅</param>
	/// <param name="height">ビットマップファイルの高さ</param>
	BitmapHeader(Size width, Size height);

	/// <summary>
	/// ビットマップファイルのサイズを取得する
	/// </summary>
	/// <returns>ファイルサイズ</returns>
	Size GetFileSize() const { return fileHeader.bfSize; }

	/// <summary>
	/// ビットマップファイルのヘッダ部のデータを取得する
	/// </summary>
	/// <param name="pData">データの格納先</param>
	void GetData(UInt8Collection* pData) const;

	/// <summary>
	/// ビットマップファイルの幅を取得する
	/// </summary>
	/// <returns>幅(ピクセル数)</returns>
	Size Width() const { return infoHeader.biWidth; }

	/// <summary>
	/// ビットマップファイルの高さを取得する
	/// </summary>
	/// <returns>高さ(ピクセル数)</returns>
	Size Height() const { return infoHeader.biHeight; }

	/// <summary>
	/// 各行のパディングサイズを取得する
	/// </summary>
	/// <returns>パディングサイズ</returns>
	Size PaddingSize() const { return paddingSize; }

private:
	// TODO:Windowsの型に依存すべきではない
	BITMAPFILEHEADER fileHeader;
	BITMAPINFOHEADER infoHeader;

	Size paddingSize;

	void CreateFileHeader(Size width, Size height);
	void CreateInfoHeader(Size width, Size height);
	Size CalcBytesPerLine(Size width);
	Size CalcPaddingSize(Size sizeWithoutPaddings);
};

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message

#endif // !BITMAP_HEADER_H_
