#ifndef CONSOLE_WRITER_H_
#define CONSOLE_WRITER_H_

#include <iostream>

#include "MessageWriter/MessageWriterBase.h"

namespace arecibo_message {
namespace message_writer {
namespace console {

using OutputType = const char*;

/// <summary>
/// コンソール出力クラス
/// </summary>
class ConsoleWriter : public MessageWriterBase<OutputType> {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="message">メッセージデータ</param>
	/// <remarks>bitが0なら■、1なら□を出力する</remarks>
	ConsoleWriter(const MessageBits& message)
		: MessageWriterBase(message, [](bool bit) { return bit ? "■" : "□"; }) {}

protected:
	/// <summary>
	/// アレシボメッセージの1マスをコンソールに書き出す
	/// </summary>
	/// <param name="row">行(0～72)</param>
	/// <param name="col">列(0～22)</param>
	/// <param name="value">そのセルの値</param>
	void WriteCell(Size row, Size col, OutputType value) override {
		std::cout << value;
	}

	/// <summary>
	/// 次の行に移動する
	/// </summary>
	/// <remarks>改行するだけ</remarks>
	void MoveToNextLine() override {
		std::cout << std::endl;
	}
};

} // namespace console
} // namespace message_writer
} // namespace arecibo_message

#endif // !CONSOLE_WRITER_H_
