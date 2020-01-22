#ifndef COLOR_H_
#define COLOR_H_

#include <ostream>

#include <Windows.h>

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

/// <summary>
/// 色情報
/// </summary>
/// <remarks>現状、黒と白しか指定できない</remarks>
struct Color {
public:
	static Color Black() { return Color(0x00, 0x00, 0x00); }
	static Color White() { return Color(0xFF, 0xFF, 0xFF); }

	/// <summary>
	/// RGB値を書き出す
	/// </summary>
	/// <param name="stream">出力ストリーム</param>
	void Write(std::ostream& stream) const {
		stream << red;
		stream << green;
		stream << blue;
	}

	BYTE red;
	BYTE green;
	BYTE blue;

private:
	Color(BYTE red, BYTE green, BYTE blue) : red(red), green(green), blue(blue) {}
};

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message

#endif // !COLOR_H_
