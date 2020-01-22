#include "ByteContainer.h"

namespace arecibo_message {
namespace message_data {

// ========================================================================================
// Constructor
// ========================================================================================
ByteContainer::ByteContainer(const MessageSource& source) {
	// 32bitのデータ群を8bitのデータ群に変換して保存する
	for (auto&& data : source) {
		SaveAsUint8s(data);
	}
}

// ========================================================================================
// Private Methods
// ========================================================================================
void ByteContainer::SaveAsUint8s(BigEndian32 data) {
	// 渡された32bitのデータから1バイトずつ取り出してbytesに追加する
	for (Size index = 0; index < sizeof(data); index++) {
		bytes.push_back(GetByteData(data, index));
	}
}

U8 ByteContainer::GetByteData(BigEndian32 data, Size index) const {
	// dataの上位indexバイト目のデータのみを抽出する
	auto shiftAmount = (sizeof(data) - (index + 1)) * 8;
	return (data >> shiftAmount) & 0x000000FF;
}

} // namespace message_data
} // namespace arecibo_message
