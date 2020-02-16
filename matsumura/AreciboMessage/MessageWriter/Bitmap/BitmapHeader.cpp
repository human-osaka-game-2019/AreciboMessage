#include "BitmapHeader.h"

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
	for (Index i = 0; i < FILE_HEADER_SIZE; i++) {
		pData->push_back(*(pFileHeader++));
	}

	auto pInfoHeader = reinterpret_cast<const char*>(&infoHeader);
	for (Index i = 0; i < INFO_HEADER_SIZE; i++) {
		pData->push_back(*(pInfoHeader++));
	}
}

// ========================================================================================
// Private Methods
// ========================================================================================
void BitmapHeader::CreateFileHeader(Size width, Size height) {
	fileHeader.bfType = 'B' | ('M' << 8);

	auto headerSize = FILE_HEADER_SIZE + INFO_HEADER_SIZE;
	fileHeader.bfOffBits = static_cast<DWORD>(headerSize);

	CalcBytesPerLine(width);
	auto dataSize = bytesPerLine * height;
	fileHeader.bfSize = static_cast<DWORD>(headerSize + dataSize);
}

void BitmapHeader::CalcBytesPerLine(Size width) {
	// パディング抜きのサイズは「1行のピクセル数 × 3Byte(RGB)」
	auto sizeWithoutPaddings = width * 3;

	// パディングサイズを保存
	paddingSize = CalcPaddingSize(sizeWithoutPaddings);

	// パディングぶんを加えた値を「1行あたりのバイト数」として保存
	bytesPerLine =  sizeWithoutPaddings + paddingSize;
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
