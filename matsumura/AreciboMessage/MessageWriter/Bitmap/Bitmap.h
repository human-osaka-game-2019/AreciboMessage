#ifndef BITMAP_H_
#define BITMAP_H_

#include <ostream>

#include "IUncopyable.h"
#include "MessageWriter/Bitmap/BitmapHeader.h"
#include "MessageWriter/Bitmap/Color.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

/// <summary>
/// ビットマップクラス
/// </summary>
class Bitmap : private IUncopyable {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="width">ビットマップ画像の幅</param>
	/// <param name="height">ビットマップ画像の高さ</param>
	/// <remarks>幅と高さはピクセル数で指定する</remarks>
	Bitmap(Size width, Size height);

	/// <summary>
	/// ピクセルの色情報を設定する
	/// </summary>
	/// <param name="index">何ピクセル目か</param>
	/// <param name="color">色情報</param>
	void SetColor(Index index, Color color) { bitmapData[index] = color; }

	/// <summary>
	/// ビットマップファイルのデータを取得する
	/// </summary>
	/// <returns>ビットマップファイルのデータ</returns>
	UInt8VectorPtr GetData() const;

private:
	Vector<Color> bitmapData;
	BitmapHeader header;

	UInt8VectorPtr GetLineData(Index startIndex) const;
};

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message

#endif // !BITMAP_H_
