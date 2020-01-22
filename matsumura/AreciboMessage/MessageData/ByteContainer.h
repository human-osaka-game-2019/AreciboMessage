#ifndef BYTE_CONTAINER_H_
#define BYTE_CONTAINER_H_

#include "IUncopyable.h"

namespace arecibo_message {
namespace message_data {

/// <summary>
/// バイトデータの集合クラス
/// </summary>
class ByteContainer : private IUncopyable {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="source">32ビットのデータの集合</param>
	explicit ByteContainer(const MessageSource& source);

	/// <summary>
	/// 添字演算子
	/// </summary>
	/// <param name="index">先頭からのバイト数</param>
	/// <returns>指定された位置のデータ</returns>
	const U8& operator[](Size index) const { return bytes[index]; }

private:
	U8s bytes;

	void SaveAsUint8s(BigEndian32 data);
	U8 GetByteData(BigEndian32 data, Size index) const;
};

} // namespace message_data
} // namespace arecibo_message

#endif // !BYTE_CONTAINER_H_
