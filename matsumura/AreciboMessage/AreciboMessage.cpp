#include "AreciboMessage.h"

#include <tchar.h>
#include "MessageData/BitContainer.h"
#include "MessageWriter/MessageWriterFactory.h"

namespace arecibo_message {
using message_data::BitContainer;

namespace {
UniquePtr<BitContainer> pBitContainer;
}

// ========================================================================================
// Constructor
// ========================================================================================
AreciboMessage::AreciboMessage(const UInt32Collection& message) {
#if _DEBUG
	// メモリリーク検知開始
	utility::StartDetectingMemoryLeaks();
#endif

	// 32ビットのデータ列を8ビットのデータ列に変換して保持しておく
	pBitContainer = std::make_unique<BitContainer>(message);
}

// ========================================================================================
// Destructor
// ========================================================================================
AreciboMessage::~AreciboMessage() {}

// ========================================================================================
// Public Methods
// ========================================================================================
void AreciboMessage::Output() const {
	// MessageWriterのインスタンスを生成して、書き出し先にメッセージを出力する
	using Factory = message_writer::MessageWriterFactory;
	auto pWriter = Factory::Instance().CreateWriter(*pBitContainer);
	pWriter->Write();
}

} // namespace arecibo_message 
