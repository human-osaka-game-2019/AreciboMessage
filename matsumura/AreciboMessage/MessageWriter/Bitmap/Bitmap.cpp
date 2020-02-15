#include "Bitmap.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

// ========================================================================================
// Unnamed Namespace
// ========================================================================================
namespace {
void AddColorData(UInt8Collection* pData, const Color::RGB& rgb) {
	for (auto&& i : rgb) {
		pData->push_back(i);
	}
}
} // namespace

// ========================================================================================
// Constructor
// ========================================================================================
Bitmap::Bitmap(Size width, Size height) : header(width, height) {
	auto pixelCount = width * height;
	bitmapData.resize(pixelCount, Color::Black());
}

// ========================================================================================
// Public Methods
// ========================================================================================
void Bitmap::GetData(UInt8Collection* pData) const {
	pData->reserve(header.GetFileSize());

	header.GetData(pData);

	for (int row = 0; row < header.Height(); row++) {
		auto startIndex = row * header.Width();
		GetLineData(startIndex, pData);
	}
}

// ========================================================================================
// Private Methods
// ========================================================================================
void Bitmap::GetLineData(Index startIndex, UInt8Collection* pData) const {
	// 渡されたコレクションに、1行ぶんのRGB値を詰める
	for (Size col = 0; col < header.Width(); col++) {
		auto& rgb = bitmapData[startIndex + col].GetRGB();
		AddColorData(pData, rgb);
	}

	// 1行のデータサイズが4の倍数になるようパディング
	for (Size i = 0; i < header.PaddingSize(); i++) {
		pData->push_back(UInt8(0));
	}
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
