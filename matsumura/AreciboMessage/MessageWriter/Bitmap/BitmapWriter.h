#ifndef BITMAP_WRITER_H_
#define BITMAP_WRITER_H_

#include "MessageWriter/Bitmap/Bitmap.h"
#include "MessageWriter/MessageWriterBase.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

using OutputType = Color;

/// <summary>
/// ビットマップファイル出力クラス
/// </summary>
class BitmapWriter : public MessageWriterBase<OutputType> {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="messageBits">メッセージデータ</param>
	explicit BitmapWriter(const BitContainer& messageBits);

protected:
	/// <summary>
	/// アレシボメッセージの1マスを書き出す
	/// </summary>
	/// <param name="row">行番号(0～72)</param>
	/// <param name="col">列番号(0～22)</param>
	/// <param name="value">そのセルの値</param>
	/// <remarks>
	/// メッセージの行・列と拡大率から、対象となるビットマップのピクセルを算出し色を設定する
	/// </remarks>
	void WriteCell(Index row, Index col, OutputType value) override;

	/// <summary>
	/// 仕上げ処理
	/// </summary>
	/// <remarks>本関数で実際にファイルに書き出す</remarks>
	void Finalize() override;

private:
	UniquePtr<Bitmap> pBitmap;
	Size scale;
};

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message

#endif // !BITMAP_WRITER_H_
