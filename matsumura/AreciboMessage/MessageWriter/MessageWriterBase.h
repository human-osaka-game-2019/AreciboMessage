#ifndef MESSAGE_WRITER_BASE_H_
#define MESSAGE_WRITER_BASE_H_

#include <functional>

#include "MessageData/BitContainer.h"
#include "MessageWriter/Constants.h"
#include "MessageWriter/IMessageWriter.h"

namespace arecibo_message {
namespace message_writer {

/// <summary>
/// メッセージ出力基底クラス
/// </summary>
template <class OutputType>
class MessageWriterBase : public IMessageWriter {
public:
	using BitContainer = message_data::BitContainer;
	using ValueGenerator = std::function<OutputType(bool)>;

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="messageBits">メッセージデータ</param>
	/// <param name="valueGenerator">出力する値を生成する関数オブジェクト</param>
	MessageWriterBase(const BitContainer& messageBits, ValueGenerator valueGenerator)
		: messageBits(messageBits), valueGenerator(valueGenerator) {}

	/// <summary>
	/// メッセージを書き出す
	/// </summary>
	void Write() override {
		// Template Methodパターン
		for (Index row = 0; row < MESSAGE_HEIGHT; row++) {
			// 1行書き出す
			WriteLine(row);

			// 次の行に移動
			MoveToNextLine();
		}

		// 仕上げ処理
		Finalize();
	}

protected:
	/// <summary>
	/// アレシボメッセージの1マスを書き出す
	/// </summary>
	/// <param name="row">行番号(0～72)</param>
	/// <param name="col">列番号(0～22)</param>
	/// <param name="value">そのセルの値</param>
	/// <remarks>メッセージデータの左上を(0, 0)として扱う</remarks>
	virtual void WriteCell(Index row, Index col, OutputType value) = 0;

	/// <summary>
	/// 次の行に移動する
	/// </summary>
	virtual void MoveToNextLine() {}

	/// <summary>
	/// 仕上げ処理
	/// </summary>
	virtual void Finalize() {}

private:
	const BitContainer& messageBits;
	ValueGenerator valueGenerator;

	void WriteLine(Index row) {
		auto startIndex = row * MESSAGE_WIDTH;
		for (Index col = 0; col < MESSAGE_WIDTH; col++) {
			bool bit = messageBits[startIndex + col];
			WriteCell(row, col, valueGenerator(bit));
		}
	}
};

} // namespace message_writer
} // namespace arecibo_message

#endif // !MESSAGE_WRITER_BASE_H_
