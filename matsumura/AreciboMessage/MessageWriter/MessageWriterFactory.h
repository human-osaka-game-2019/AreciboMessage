#ifndef MESSAGE_WRITER_FACTORY_H_
#define MESSAGE_WRITER_FACTORY_H_

#include "MessageWriter/IMessageWriter.h"
#include "Utility/Singleton.h"

namespace arecibo_message {
namespace message_writer {

/// <summary>
/// MessageWriterのファクトリークラス
/// </summary>
class MessageWriterFactory : public utility::Singleton<MessageWriterFactory> {
public:
	/// <summary>
	/// MessageWriterを生成する
	/// </summary>
	/// <param name="message">32ビットのデータの集合</param>
	/// <returns>MessageWriterのインスタンス</returns>
	UniquePtr<IMessageWriter> CreateWriter(const MessageBits& message);

private:
	friend utility::Singleton<MessageWriterFactory>;

	MessageWriterFactory() {}
};

} // namespace message_writer
} // namespace arecibo_message

#endif // !MESSAGE_WRITER_FACTORY_H_
