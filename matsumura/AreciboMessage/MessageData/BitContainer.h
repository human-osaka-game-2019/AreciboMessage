#ifndef BIT_CONTAINER_H_
#define BIT_CONTAINER_H_

#include <bitset>

#include "IUncopyable.h"

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
	/// <param name="messageBits">32ビットのデータの集合</param>
	explicit BitContainer(const UInt32Collection& message);

	/// <summary>
	/// 添字演算子
	/// </summary>
	/// <param name="offset">先頭からのビット数</param>
	/// <returns>指定されたビットが立っていればtrue</returns>
	bool operator[](Index offset) const;

private:
	static constexpr Size UINT32_BIT_WIDTH = 32;
	std::vector<std::bitset<UINT32_BIT_WIDTH>> messageBits;
};

} // namespace message_data
} // namespace arecibo_message

#endif // !BIT_CONTAINER_H_
