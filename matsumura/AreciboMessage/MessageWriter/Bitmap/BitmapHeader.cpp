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
UniquePtr<BitmapHeader::HeaderData> BitmapHeader::GetData() const {
	auto pData = std::make_unique<HeaderData>();

	Index index = 0;
	auto pFileHeader = reinterpret_cast<const UInt8*>(&fileHeader);
	for (Index i = 0; i < FILE_HEADER_SIZE; i++) {
		(*pData)[index++] = pFileHeader[i];
	}

	auto pInfoHeader = reinterpret_cast<const char*>(&infoHeader);
	for (Index i = 0; i < INFO_HEADER_SIZE; i++) {
		(*pData)[index++] = pInfoHeader[i];
	}

	return pData;
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
	// 4の倍数になるようパディングする
	constexpr Size alignment = 4;

	// まず端数を求める
	auto remainder = sizeWithoutPaddings % alignment;

	// サイズは4から端数を引いた数だが、パディング不要の場合(remainder = 0)にも
	// 対応するため、さらに4で割って余りを計算する
	return (4 - remainder) % alignment;
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
