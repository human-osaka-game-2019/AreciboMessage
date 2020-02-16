#ifndef COLOR_H_
#define COLOR_H_

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

/// <summary>
/// 色情報
/// </summary>
/// <remarks>現状、黒と白しか指定できない</remarks>
struct Color {
public:
	using RGB = UInt8Array<3>;

	static constexpr Color Black() { return Color(0x00, 0x00, 0x00); }
	static constexpr Color White() { return Color(0xFF, 0xFF, 0xFF); }

	/// <summary>
	/// RGB値を取得する
	/// </summary>
	/// <returns>RGB値</returns>
	const RGB& GetRGB() const { return rgb; }

private:
	constexpr Color(UInt8 red, UInt8 green, UInt8 blue) : rgb({ red, green, blue }) {}

	RGB rgb;
};

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message

#endif // !COLOR_H_
