#include "Wav.h"

void Wav::OpenFail()
{
	std::ifstream ifs("Beam.wav");
	
	if (ifs.fail()) {
		std::cerr << "読み込み失敗" << std::endl;
	}

	while (ifs.getline(str, MaxArray)) 
	{
	}

}

void Wav::Information()
{
	std::cout << "ファイル形式　:　" << str[0] << str[1] << str[2] << str[3] << std::endl;

}

void Wav::CreateFile()
{

	std::ofstream outputfile("test.wav");

	// RIFF識別子
	FileContent[0] = 0x52; // R
	FileContent[1] = 0x49; // I
	FileContent[2] = 0x46; // F
	FileContent[3] = 0x46; // F

	// チャンクサイズ
	FileContent[4] = 0xf8;
	FileContent[5] = 0x00;
	FileContent[6] = 0x00;
	FileContent[7] = 0x00;

	// フォーマット
	FileContent[8] = 0x57;  // W
	FileContent[9] = 0x41;  // A
	FileContent[10] = 0x56; // V
	FileContent[11] = 0x45; // E

	// fmt識別子
	FileContent[12] = 0x66; // f
	FileContent[13] = 0x6D; // m
	FileContent[14] = 0x74; // t
	FileContent[15] = 0x20; // .

	// fmt チャンク数
	FileContent[16] = 0x10;
	FileContent[17] = 0x00;
	FileContent[18] = 0x00;
	FileContent[19] = 0x00;

	// 音声フォーマット
	FileContent[20] = 0x10;
	FileContent[21] = 0x00;

	// チャンネル数
	FileContent[22] = 0x01;
	FileContent[23] = 0x00;

	// サンプリング周波数
	FileContent[24] = 0x44;
	FileContent[25] = 0xAC;
	FileContent[26] = 0x00;
	FileContent[27] = 0x00;

	// m/sバイト数
	FileContent[28] = 0x88;
	FileContent[29] = 0x58;
	FileContent[30] = 0x01;
	FileContent[31] = 0x00;

	// ブロックサイズ
	FileContent[32] = 0x04;
	FileContent[33] = 0x00;

	// ビット
	FileContent[34] = 0x10;
	FileContent[35] = 0x00;

	// サブチャンク 識別子
	FileContent[36] = 0x64;
	FileContent[37] = 0x61;
	FileContent[38] = 0x74;
	FileContent[39] = 0x61;

	// サブチャンク サイズ
	FileContent[40] = 0x00;
	FileContent[41] = 0x00;
	FileContent[42] = 0x00;
	FileContent[43] = 0x00;

	for (int a = 0; a < MaxArray; a++)
	{
		outputfile << FileContent[a];
	}

	outputfile.close();

	
	
}
