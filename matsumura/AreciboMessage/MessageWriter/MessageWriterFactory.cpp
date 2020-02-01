#include "MessageWriterFactory.h"

#include <stdexcept>

#include "Bitmap/BitmapWriter.h"
#include "Console/ConsoleWriter.h"
#include "Utility/Settings.h"

namespace arecibo_message {
namespace message_writer {

namespace {
/// <summary>
/// メッセージの出力先
/// </summary>
enum class Target {
	CONSOLE,
	BITMAP,
};
} // namespace

// ========================================================================================
// Public Methods
// ========================================================================================
UniquePtr<IMessageWriter> MessageWriterFactory::CreateWriter(const message_data::BitContainer& messageBits) {
	// ファイルの書き出し先を設定情報から取得する
	auto& settings = utility::Settings::Instance();
	auto targetInt = settings.GetIntValue(TEXT("Target"), TEXT("Target"));
	auto target = static_cast<Target>(targetInt);

	switch (target) {
	case Target::CONSOLE:
		return std::make_unique<console::ConsoleWriter>(messageBits);

	case Target::BITMAP:
		return std::make_unique<bitmap::BitmapWriter>(messageBits);

	default:
		throw std::invalid_argument("Invalid writer type!!");
	}
}

} // namespace message_writer
} // namespace arecibo_message
