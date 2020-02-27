#ifndef IMESSAGE_WRITER_H_
#define IMESSAGE_WRITER_H_

#include "IUncopyable.h"

namespace arecibo_message {
namespace message_writer {

/// <summary>
/// メッセージ出力インターフェイス
/// </summary>
class IMessageWriter : private IUncopyable {
public:
	/// <summary>
	/// メッセージを書き出す
	/// </summary>
	virtual void Write() = 0;

	virtual ~IMessageWriter() {}
};

} // namespace message_writer
} // namespace arecibo_message

#endif // !IMESSAGE_WRITER_H_
