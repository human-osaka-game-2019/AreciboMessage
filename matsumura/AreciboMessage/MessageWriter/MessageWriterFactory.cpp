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
IMessageWriter& MessageWriterFactory::CreateWriter(const MessageBits& message) {
	// ファイルの書き出し先を設定情報から取得する
	auto& settings = utility::Settings::Instance();
	auto targetInt = settings.GetIntValue(TEXT("Target"), TEXT("Target"));
	auto target = static_cast<Target>(targetInt);

	switch (target) {
	case Target::CONSOLE:
		pWriter = std::make_unique<console::ConsoleWriter>(message);
		break;

	case Target::BITMAP:
		pWriter = std::make_unique<bitmap::BitmapWriter>(message);
		break;

	default:
		throw std::invalid_argument("Invalid writer type!!");
	}

	return *pWriter;
}

} // namespace message_writer
} // namespace arecibo_message
