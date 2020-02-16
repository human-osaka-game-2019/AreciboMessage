#include "Bitmap.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

// ========================================================================================
// Unnamed Namespace
// ========================================================================================
namespace {
UInt8VectorPtr EmptyData(Size size) {
	auto pContainer = std::make_unique<UInt8Vector>(size, UInt8(0));

	return pContainer;
}

template<class T>
void Concatenate(UInt8Vector* first, const T& second) {
	first->insert(first->end(), second.begin(), second.end());
}
} // namespace

// ========================================================================================
// Constructor
// ========================================================================================
Bitmap::Bitmap(Size width, Size height)
	: header(width, height), bitmapData(width * height, Color::Black()) {}

// ========================================================================================
// Public Methods
// ========================================================================================
void Bitmap::GetData(UInt8Vector* pData) const {
	pData->reserve(header.FileSize());

	// ビットマップヘッダのデータを格納
	Concatenate(pData, *header.GetData());

	// 各行のデータを格納
	for (Index row = 0; row < header.Height(); row++) {
		auto startIndex = row * header.Width();
		GetLineData(startIndex, pData);
	}
}

// ========================================================================================
// Private Methods
// ========================================================================================
void Bitmap::GetLineData(Index startIndex, UInt8Vector* pData) const {
	// 渡されたコレクションに、1行ぶんのRGB値を詰める
	for (Index col = 0; col < header.Width(); col++) {
		auto& rgb = bitmapData[startIndex + col].Value();
		Concatenate(pData, rgb);
	}

	// 1行のデータサイズが4の倍数になるようパディング
	auto pPaddings = EmptyData(header.PaddingSize());
	Concatenate(pData, *pPaddings);
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
