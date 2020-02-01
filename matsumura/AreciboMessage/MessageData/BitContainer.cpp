#include "BitContainer.h"

namespace arecibo_message {
namespace message_data {

// ========================================================================================
// Constructor
// ========================================================================================
BitContainer::BitContainer(const UInt32Collection& message) {
	messageBits.reserve(message.size());

	for (auto&& uint32Data : message) {
		messageBits.emplace_back(uint32Data);
	}
}

// ========================================================================================
// Public Methods
// ========================================================================================
bool BitContainer::operator[](Index offset) const {
	// 指定されたビットは32ビットデータのMSB(最上位ビット)から何ビット目か
	auto bitIndex = offset % UINT32_BIT_WIDTH;

	// std::bitsetはLSB(最下位ビット)のインデックスを0として扱うので、
	// bitIndexをLSBからのオフセットに変換する
	bitIndex = UINT32_BIT_WIDTH - (bitIndex + 1);

	// 指定されたビットが格納されているのは何個目の32bitデータか
	auto dataIndex = offset / UINT32_BIT_WIDTH;

	// 目的のビットが立っているかを返す
	return messageBits[dataIndex][bitIndex];
}

} // namespace message_data
} // namespace arecibo_message
