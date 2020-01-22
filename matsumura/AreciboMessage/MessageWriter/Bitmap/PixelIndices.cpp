#include "PixelIndices.h"

#include "MessageWriter/Constants.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

// ========================================================================================
// Constructor
// ========================================================================================
PixelIndices::PixelIndices(Size cellRow, Size cellCol, Size scale) : scale(scale) {
	Create(cellRow, cellCol);
}

// ========================================================================================
// Public Methods
// ========================================================================================
void PixelIndices::ApplyToAll(std::function<void(Size&)> func) {
	for (auto& index : indices) {
		func(index);
	}
}

// ========================================================================================
// Private Methods
// ========================================================================================
void PixelIndices::Create(Size cellRow, Size cellCol) {
	// Bitmapは左下が(0, 0)なので、行番号は上下反転する
	Size invertedRow = MESSAGE_HEIGHT - (cellRow + 1);

	// 以下のpixelを開始位置とし、対象となるpixelを算出する
	Size startRow = invertedRow * scale;
	Size startCol = cellCol * scale;

	RepaetScaleTimes([=](Size i) { AddIndices(startRow + i, startCol); });
}

void PixelIndices::AddIndices(Size pixelRow, Size startCol) {
	Size pixelWidth = MESSAGE_WIDTH * scale;
	Size startIndex = pixelRow * pixelWidth + startCol;

	RepaetScaleTimes([=](Size i) { indices.push_back(startIndex + i); });
}

void PixelIndices::RepaetScaleTimes(std::function<void(Size)> func) const {
	for (Size i = 0; i < scale; i++) {
		func(i);
	}
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
