#include "AreciboMessage.h"

#include <tchar.h>
#include "MessageData/BitContainer.h"
#include "MessageWriter/MessageWriterFactory.h"

namespace arecibo_message {

using BitContainer = message_data::BitContainer;

// ========================================================================================
// Unnamed Namespace
// ========================================================================================
namespace {
UniquePtr<BitContainer> pMessageBits;
} // namespace

// ========================================================================================
// Constructor
// ========================================================================================
AreciboMessage::AreciboMessage(const UInt32Vector& message) {
	// メモリリーク検知開始
	utility::StartDetectingMemoryLeaks();

	// 32ビットのデータ列を8ビットのデータ列に変換して保持しておく
	pMessageBits = std::make_unique<BitContainer>(message);
}

// ========================================================================================
// Public Methods
// ========================================================================================
void AreciboMessage::Output() const {
	// MessageWriterのインスタンスを生成して、書き出し先にメッセージを出力する
	using Factory = message_writer::MessageWriterFactory;
	auto pWriter = Factory::Instance().CreateWriter(*pMessageBits);
	pWriter->Write();
}

} // namespace arecibo_message
