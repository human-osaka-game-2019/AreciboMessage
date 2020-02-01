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
	/// 添字演算子
	/// </summary>
	/// <param name="index">何ピクセル目か</param>
	/// <returns>指定されたピクセルのRGB値</returns>
	/// <remarks>BMPファイルのフォーマット同様、画像の左下のピクセルを先頭(0)として扱う</remarks>
	Color& operator[](Index index) { return bitmapData[index]; }

	/// <summary>
	/// ビットマップファイル形式で書き出す
	/// </summary>
	/// <param name="stream">出力用ストリーム</param>
	void Write(std::ostream& stream) const;

private:
	Vector<Color> bitmapData;
	BitmapHeader header;

	void WriteLine(std::ostream& file, Index row) const;
};

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message

#endif // !BITMAP_H_
