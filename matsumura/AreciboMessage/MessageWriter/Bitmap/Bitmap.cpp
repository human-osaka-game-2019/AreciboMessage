#include "Bitmap.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

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
void Bitmap::Write(std::ostream& stream) const {
	UInt8Collection headerData;
	header.GetData(&headerData);
	for (auto& i : headerData) {
		stream << i;
	}

	for (int row = 0; row < header.Height(); row++) {
		WriteLine(stream, row);
	}
}

// ========================================================================================
// Private Methods
// ========================================================================================
void Bitmap::WriteLine(std::ostream& stream, Index row) const {
	auto startIndex = row * header.Width();

	// 1行ぶんのRGB値を出力
	for (int col = 0; col < header.Width(); col++) {
		bitmapData[startIndex + col].Write(stream);
	}

	// 1行のデータサイズが4の倍数になるようパディング
	for (Size i = 0; i < header.PaddingSize(); i++) {
		stream << UInt8(0);
	}
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
