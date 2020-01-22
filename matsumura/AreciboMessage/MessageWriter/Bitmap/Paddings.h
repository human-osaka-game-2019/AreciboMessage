#ifndef PADDINGS_H_
#define PADDINGS_H_

#include <ostream>
#include <vector>

#include <Windows.h>

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

/// <summary>
/// ビットマップファイルのパディングクラス
/// </summary>
/// <remarks>
/// ビットマップファイルの一行のデータサイズサイズが4の倍数となるよう端数をパディングする
/// </remarks>
class Paddings {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="sizeWithoutPaddings">パディング抜きのデータサイズ</param>
	Paddings(Size sizeWithoutPaddings);

	/// <summary>
	/// パディングサイズを取得する
	/// </summary>
	/// <returns>サイズ</returns>
	Size GetSize() const { return paddings.size(); }

	/// <summary>
	/// パディングバイトを書き出す
	/// </summary>
	/// <param name="stream">出力ストリーム</param>
	void Write(std::ostream& stream) const;

private:
	std::vector<BYTE> paddings;
};

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message

#endif // !PADDINGS_H_
