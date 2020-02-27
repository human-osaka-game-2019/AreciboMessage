﻿#ifndef BITMAP_HEADER_H_
#define BITMAP_HEADER_H_

#include <Windows.h>

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

/// <summary>
/// ビットマップヘッダークラス
/// </summary>
class BitmapHeader {
private:
	static const Size FILE_HEADER_SIZE = sizeof(BITMAPFILEHEADER);
	static const Size INFO_HEADER_SIZE = sizeof(BITMAPINFOHEADER);

public:
	using HeaderData = UInt8Array<FILE_HEADER_SIZE + INFO_HEADER_SIZE>;

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
	Size FileSize() const { return fileHeader.bfSize; }

	/// <summary>
	/// ビットマップファイルのヘッダ部のデータを取得する
	/// </summary>
	/// <returns>ヘッダ部のデータ</returns>
	UniquePtr<HeaderData> GetData() const;

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
	/// パディングを含む1行のサイズを取得する
	/// </summary>
	/// <returns>1行のサイズ</returns>
	constexpr Size BytesPerLine() const { return bytesPerLine; }

	/// <summary>
	/// 各行のパディングサイズを取得する
	/// </summary>
	/// <returns>パディングサイズ</returns>
	Size PaddingSize() const { return paddingSize; }

private:
	// TODO:Windowsの型に依存すべきではない
	BITMAPFILEHEADER fileHeader;
	BITMAPINFOHEADER infoHeader;

	Size bytesPerLine;
	Size paddingSize;

	void CreateFileHeader(Size width, Size height);
	void CreateInfoHeader(Size width, Size height);
	void CalcBytesPerLine(Size width);
	Size CalcPaddingSize(Size sizeWithoutPaddings);
};

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message

#endif // !BITMAP_HEADER_H_
