#ifndef PIXEL_INDICES_H_
#define PIXEL_INDICES_H_

#include "IUncopyable.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

/// <summary>
/// 左上を(0, 0)とした行と列を基に、ビットマップ内のピクセル番号を算出するクラス
/// </summary>
class PixelIndices : private IUncopyable {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="cellRow">アレシボ・メッセージ内の行</param>
	/// <param name="cellCol">アレシボ・メッセージ内の列</param>
	/// <param name="scale">拡大率</param>
	PixelIndices(Index cellRow, Index cellCol, Size scale);

	/// <summary>
	/// 算出した全てのピクセルに処理を適用する
	/// </summary>
	/// <param name="func">適用する処理</param>
	void ApplyToAll(Function<void(Index*)> func);

private:
	Vector<Index> indices;
	Size scale;

	void Create(Index cellRow, Index cellCol);
	void AddIndices(Index pixelRow, Index startCol);
};

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message

#endif // !PIXEL_INDICES_H_
