#ifndef BIT_CONTAINER_H_
#define BIT_CONTAINER_H_

#include "IUncopyable.h"
#include "MessageData/ByteContainer.h"

namespace arecibo_message {
namespace message_data {

/// <summary>
/// ビットデータの集合クラス
/// </summary>
class BitContainer : private IUncopyable {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="message">32ビットのデータの集合</param>
	explicit BitContainer(const UInt32Collection& message) : message(message) {}

	/// <summary>
	/// 添字演算子
	/// </summary>
	/// <param name="offset">先頭からのビット数</param>
	/// <returns>指定されたビットが立っていればtrue</returns>
	bool operator[](Index offset) const {
		// 指定されたビットが格納されているバイトデータを取り出す
		UInt8 byteData = message[offset / 8];

		// 指定されたビットはbyteDataバイト目の先頭から何ビット目か
		Index bitIndex = offset % 8;

		// 目的のビットが立っているかを返す
		return byteData & (0x80 >> bitIndex);
	}

private:
	ByteContainer message;
};

} // namespace message_data
} // namespace arecibo_message

#endif // !BIT_CONTAINER_H_
