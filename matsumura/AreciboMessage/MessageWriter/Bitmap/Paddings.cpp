#include "Paddings.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

// ========================================================================================
// Constructor
// ========================================================================================
Paddings::Paddings(Size sizeWithoutPaddings) {
	// まず端数を求める
	auto remainder = sizeWithoutPaddings % 4;

	if (remainder != 0) {
		// 4の倍数になるよう、0でパディングする
		// パディングするサイズは4から端数を引いた数
		auto size = 4 - remainder;
		paddings.resize(size, BYTE(0));
	}
}

// ========================================================================================
// Public Methods
// ========================================================================================
void Paddings::Write(std::ostream& stream) const {
	for (auto&& padding : paddings) {
		stream << padding;
	}
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
