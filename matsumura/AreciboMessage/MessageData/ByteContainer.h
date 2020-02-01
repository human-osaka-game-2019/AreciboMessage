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
	explicit ByteContainer(const UInt32Collection& source);

	/// <summary>
	/// 添字演算子
	/// </summary>
	/// <param name="index">先頭からのバイト数</param>
	/// <returns>指定された位置のデータ</returns>
	const UInt8& operator[](Index index) const { return bytes[index]; }

private:
	UInt8Collection bytes;

	void SaveAsUint8s(UInt32 data);
	UInt8 GetByteData(UInt32 data, Index index) const;
};

} // namespace message_data
} // namespace arecibo_message

#endif // !BYTE_CONTAINER_H_
