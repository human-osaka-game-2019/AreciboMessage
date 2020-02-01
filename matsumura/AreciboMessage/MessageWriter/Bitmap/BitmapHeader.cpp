﻿#include "BitmapHeader.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

// ========================================================================================
// Constructor
// ========================================================================================
BitmapHeader::BitmapHeader(Size width, Size height) {
	CreateFileHeader(width, height);
	CreateInfoHeader(width, height);
}

// ========================================================================================
// Public Methods
// ========================================================================================
void BitmapHeader::GetData(UInt8Collection* pData) const {
	auto pFileHeader = reinterpret_cast<const char*>(&fileHeader);
	for (Size i = 0; i < sizeof(BITMAPFILEHEADER); i++) {
		pData->push_back(*(pFileHeader++));
	}

	auto pInfoHeader = reinterpret_cast<const char*>(&infoHeader);
	for (Size i = 0; i < sizeof(BITMAPINFOHEADER); i++) {
		pData->push_back(*(pInfoHeader++));
	}
}

// ========================================================================================
// Private Methods
// ========================================================================================
void BitmapHeader::CreateFileHeader(Size width, Size height) {
	fileHeader.bfType = 'B' | ('M' << 8);

	auto headerSize = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
	fileHeader.bfOffBits = static_cast<DWORD>(headerSize);

	auto dataSize = CalcBytesPerLine(width) * height;
	fileHeader.bfSize = static_cast<DWORD>(headerSize + dataSize);
}

Size BitmapHeader::CalcBytesPerLine(Size width) {
	// パディング抜きのサイズは「1行のピクセル数 × 3Byte(RGB)」
	auto sizeWithoutPaddings = width * 3;

	// パディングぶんを加えた値を「1行あたりのバイト数」として返す
	paddingSize = CalcPaddingSize(sizeWithoutPaddings);
	return sizeWithoutPaddings + paddingSize;
}

Size BitmapHeader::CalcPaddingSize(Size sizeWithoutPaddings) {
	// まず端数を求める
	auto remainder = sizeWithoutPaddings % 4;

	if (remainder == 0) return 0;

	// 4の倍数になるようパディングする
	// サイズは4から端数を引いた数
	return 4 - remainder;
}

void BitmapHeader::CreateInfoHeader(Size width, Size height) {
	infoHeader.biSize = sizeof(BITMAPINFOHEADER);
	infoHeader.biWidth = static_cast<LONG>(width);
	infoHeader.biHeight = static_cast<LONG>(height);
	infoHeader.biPlanes = 1;
	infoHeader.biBitCount = 24;
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
