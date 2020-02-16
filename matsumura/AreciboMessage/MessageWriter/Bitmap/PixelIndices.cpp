#include "PixelIndices.h"

#include "MessageWriter/Constants.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

// ========================================================================================
// Unnamed Namespace
// ========================================================================================
namespace {
void Repeat(Size loopCount, std::function<void(Index)> func) {
	for (Size i = 0; i < loopCount; i++) {
		func(i);
	}
}
} // namespace

// ========================================================================================
// Constructor
// ========================================================================================
PixelIndices::PixelIndices(Index cellRow, Index cellCol, Size scale) : scale(scale) {
	// 頂点数はこの時点で確定するのでcapacityを確保しておく
	indices.reserve(scale * scale);

	Create(cellRow, cellCol);
}

// ========================================================================================
// Public Methods
// ========================================================================================
void PixelIndices::ApplyToAll(std::function<void(Index*)> func) {
	for (auto&& index : indices) {
		func(&index);
	}
}

// ========================================================================================
// Private Methods
// ========================================================================================
void PixelIndices::Create(Index cellRow, Index cellCol) {
	// Bitmapは左下が(0, 0)なので、行番号は上下反転する
	auto invertedRow = MESSAGE_HEIGHT - (cellRow + 1);

	// 以下のpixelを開始位置とし、対象となるpixelを算出する
	auto startRow = invertedRow * scale;
	auto startCol = cellCol * scale;

	Repeat(scale, [=](auto i) { AddIndices(startRow + i, startCol); });
}

void PixelIndices::AddIndices(Index pixelRow, Index startCol) {
	auto pixelWidth = MESSAGE_WIDTH * scale;
	auto startIndex = pixelRow * pixelWidth + startCol;

	Repeat(scale, [=](auto i) { indices.push_back(startIndex + i); });
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
