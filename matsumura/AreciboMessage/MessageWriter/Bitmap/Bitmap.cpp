#include "Bitmap.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

// ========================================================================================
// Unnamed Namespace
// ========================================================================================
namespace {
UInt8VectorPtr CreateDataBuffer(Size capacity) {
	auto pContainer = std::make_unique<UInt8Vector>();
	pContainer->reserve(capacity);

	return pContainer;
}

UInt8VectorPtr EmptyData(Size size) {
	auto pContainer = std::make_unique<UInt8Vector>(size, UInt8(0));

	return pContainer;
}

template<class T>
void Concatenate(UInt8VectorPtr& first, const T& second) {
	first->insert(first->end(), second->begin(), second->end());
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
UInt8VectorPtr Bitmap::GetData() const {
	auto pData = CreateDataBuffer(header.FileSize());

	// ビットマップヘッダのデータを格納
	Concatenate(pData, header.GetData());

	// 各行のデータを格納
	for (Index row = 0; row < header.Height(); row++) {
		auto startIndex = row * header.Width();
		Concatenate(pData, GetLineData(startIndex));
	}

	return pData;
}

// ========================================================================================
// Private Methods
// ========================================================================================
UInt8VectorPtr Bitmap::GetLineData(Index startIndex) const {
	auto pLineData = CreateDataBuffer(header.BytesPerLine());

	// 1行ぶんのRGBデータを作成
	for (Index col = 0; col < header.Width(); col++) {
		auto& rgb = bitmapData[startIndex + col].Value();
		Concatenate(pLineData, &rgb);
	}

	// 1行のデータサイズが4の倍数になるようパディング
	Concatenate(pLineData, EmptyData(header.PaddingSize()));

	return pLineData;
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
