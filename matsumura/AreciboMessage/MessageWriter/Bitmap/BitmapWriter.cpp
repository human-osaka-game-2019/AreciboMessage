#include "BitmapWriter.h"

#include <fstream>

#include <shellapi.h>
#include <Windows.h>
#include "MessageWriter/Constants.h"
#include "PixelIndices.h"
#include "Utility/Settings.h"

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

// ========================================================================================
// Constructor
// ========================================================================================
BitmapWriter::BitmapWriter(const BitContainer& messageBits)
	: MessageWriterBase(messageBits, [](bool bit) { return bit ? Color::White() : Color::Black(); }) {
	// 設定情報から拡大率を取得する
	auto& settings = utility::Settings::Instance();
	scale = settings.GetIntValue(TEXT("Bitmap"), TEXT("Scale"));

	pBitmap = std::make_unique<Bitmap>(MESSAGE_WIDTH * scale, MESSAGE_HEIGHT * scale);
}

// ========================================================================================
// Overridden Protected Methods
// ========================================================================================
void BitmapWriter::WriteCell(Index row, Index col, OutputType value) {
	// メッセージの行と列に対応するビットマップのピクセル番号を算出する
	PixelIndices indices(row, col, scale);

	// 算出した各ピクセルに色を設定
	indices.ApplyToAll([=](Index* pIndex) { pBitmap->SetColor(*pIndex, value); });
}

void BitmapWriter::Finalize() {
	// ビットマップファイルのバイナリデータをUInt8のコレクションとして取得する
	UInt8Collection data;
	pBitmap->GetData(&data);

	// 1バイトずつファイルに書き出す
	std::ofstream stream("AreciboMessage.bmp", std::ios::binary);
	for (auto&& byte : data) {
		stream << byte;
	}

	stream.close();

	// 書き出したビットマップファイルを既定のアプリで開く
	ShellExecute(NULL, "open", TEXT("AreciboMessage.bmp"), NULL, NULL, SW_SHOWNORMAL);
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
