#include "Bitmap.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

// ========================================================================================
// Constructor
// ========================================================================================
Bitmap::Bitmap(Size width, Size height) {
	CreateFileHeader(width, height);
	CreateInfoHeader(width, height);

	auto pixelCount = infoHeader.biWidth * infoHeader.biHeight;
	bitmapData.resize(pixelCount, Color::Black());
}

// ========================================================================================
// Public Methods
// ========================================================================================
void Bitmap::Write(std::ostream& stream) const {
	stream.write(reinterpret_cast<const char*>(&fileHeader), sizeof(BITMAPFILEHEADER));
	stream.write(reinterpret_cast<const char*>(&infoHeader), sizeof(BITMAPINFOHEADER));

	for (int row = 0; row < infoHeader.biHeight; row++) {
		WriteLine(stream, row);
	}
}

// ========================================================================================
// Private Methods
// ========================================================================================
void Bitmap::CreateFileHeader(Size width, Size height) {
	fileHeader.bfType = 'B' | ('M' << 8);

	auto headerSize = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
	fileHeader.bfOffBits = static_cast<DWORD>(headerSize);

	auto dataSize = CalcBytesPerLine(width) * height;
	fileHeader.bfSize = static_cast<DWORD>(headerSize + dataSize);
}

Size Bitmap::CalcBytesPerLine(Size width) {
	// パディング抜きのサイズは「1行のピクセル数 × 3Byte(RGB)」
	auto sizeWithoutPaddings = width * 3;

	// パディングぶんを加えた値を「1行あたりのバイト数」として返す
	pPaddings = std::make_unique<Paddings>(sizeWithoutPaddings);
	return sizeWithoutPaddings + pPaddings->GetSize();
}

void Bitmap::CreateInfoHeader(Size width, Size height) {
	infoHeader.biSize = sizeof(BITMAPINFOHEADER);
	infoHeader.biWidth = static_cast<LONG>(width);
	infoHeader.biHeight = static_cast<LONG>(height);
	infoHeader.biPlanes = 1;
	infoHeader.biBitCount = 24;
}

void Bitmap::WriteLine(std::ostream& stream, Index row) const {
	auto startIndex = row * infoHeader.biWidth;

	// 1行ぶんのRGB値を出力
	for (int col = 0; col < infoHeader.biWidth; col++) {
		bitmapData[startIndex + col].Write(stream);
	}

	// 1行のデータサイズが4の倍数になるようパディング
	pPaddings->Write(stream);
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
