#include "BitMap.h"

void BitMap::CreateFile(int height,int width,char array[])
{
	std::ofstream outputfile("test.bmp");

	// ファイル形式
	FileContent[0] = 0x42;
	FileContent[1] = 0x4D;

	// ファイルサイズ
	FileContent[2] = 0xBE;
	FileContent[3] = 0x14;
	FileContent[4] = 0x00;
	FileContent[5] = 0x00;
	
	// 予約領域(常に[ 0 ])
	FileContent[6] = 0x00;
	FileContent[7] = 0x00;
	
	// 予約領域(常に[ 0 ])
	FileContent[8] = 0x00;
	FileContent[9] = 0x00;

	// オフセット
	FileContent[10] = 0x36;
	FileContent[11] = 0x00;
	FileContent[12] = 0x00;
	FileContent[13] = 0x00;

	// 情報ヘッダサイズ
	FileContent[14] = 0x28;
	FileContent[15] = 0x00;
	FileContent[16] = 0x00;
	FileContent[17] = 0x00;

	// 幅
	FileContent[18] = 0x17;
	FileContent[19] = 0x00;
    FileContent[20] = 0x00;
	FileContent[21] = 0x00;

	// 高さ
	FileContent[22] = 0x49;
	FileContent[23] = 0x00;
    FileContent[24] = 0x00;
	FileContent[25] = 0x00;

	// プレーン数(常に[ 1 ])
	FileContent[26] = 0x01;
	FileContent[27] = 0x00;

	// 色ビット数
	FileContent[28] = 0x18;
	FileContent[29] = 0x00;

	// 圧縮形式
	FileContent[30] = 0x00;
	FileContent[31] = 0x00;
	FileContent[32] = 0x00;
	FileContent[33] = 0x00;
	

	// 画像データサイズ
	FileContent[34] = 0x88;
	FileContent[35] = 0x14;
	FileContent[36] = 0x00;
	FileContent[37] = 0x00;

	// 水平解像度
	FileContent[38] = 0x00;
	FileContent[39] = 0x00;
	FileContent[40] = 0x00;
	FileContent[41] = 0x00;

	// 垂直解像度
	FileContent[42] = 0x00;
	FileContent[43] = 0x00;
	FileContent[44] = 0x00;
	FileContent[45] = 0x00;

	// 格納パレット数
	FileContent[46] = 0x00;
	FileContent[47] = 0x00;
	FileContent[48] = 0x00;
	FileContent[49] = 0x00;

	// 重要色数
	FileContent[50] = 0x00;
	FileContent[51] = 0x00;
	FileContent[52] = 0x00;
	FileContent[53] = 0x00;

	int c = 0;
	int ArrayNumber = 1679;

	int pading = 4 - ((width * 3) % 4);

	// 画像データ(高さ)
	for (int a = 0; a < height; a++)
	{
		ArrayNumber -= width;
		// 画像データ(幅)
		for (int b = 0; b < width; b++)
		{
			for (int d = 0; d < 3; d++)
			{
				switch (array[ArrayNumber + b])
				{
				case 0:
					FileContent[DataStart] = 0xFF;
					break;
				case 1:
					FileContent[DataStart] = 0x00;
					break;
				default:
					break;
				}


				DataStart++;
			}

			
		}
		for (int pad = 0; pad < pading; pad++)
		{
			FileContent[DataStart] = 0x00;
			DataStart++;
		}
		c = DataStart;
	}



	for (int a = 0; a < c; a++)
	{
		outputfile << FileContent[a];
	}

	outputfile.close();

}

void BitMap::CreateFile_x10(int height, int width, char array[],int scale)
{
	std::ofstream outputfile("test.bmp");

	// ファイル形式
	FileContent[0] = 0x42;
	FileContent[1] = 0x4D;

	int Height = height * scale;
	int Width = width * scale;
	int FileSize = Height * Width * 3;

	//for (int i = 0; i < 4; i++)
	//{
	//	FileContent[i + 2] = (FileSize >> (24 - (8 * i))) & 0x000000FF;
	//}

	//ファイルサイズ
	FileContent[2] = 0x7E;
	FileContent[3] = 0xB5;
	FileContent[4] = 0x07;
	FileContent[5] = 0x00;

	// 予約領域(常に[ 0 ])
	FileContent[6] = 0x00;
	FileContent[7] = 0x00;

	// 予約領域(常に[ 0 ])
	FileContent[8] = 0x00;
	FileContent[9] = 0x00;

	// オフセット
	FileContent[10] = 0x36;
	FileContent[11] = 0x00;
	FileContent[12] = 0x00;
	FileContent[13] = 0x00;

	// 情報ヘッダサイズ
	FileContent[14] = 0x28;
	FileContent[15] = 0x00;
	FileContent[16] = 0x00;
	FileContent[17] = 0x00;

	// 幅
	FileContent[18] = 0xE6;
	FileContent[19] = 0x00;
	FileContent[20] = 0x00;
	FileContent[21] = 0x00;

	// 高さ
	FileContent[22] = 0xDA;
	FileContent[23] = 0x02;
	FileContent[24] = 0x00;
	FileContent[25] = 0x00;

	// プレーン数(常に[ 1 ])
	FileContent[26] = 0x01;
	FileContent[27] = 0x00;

	// 色ビット数
	FileContent[28] = 0x18;
	FileContent[29] = 0x00;

	// 圧縮形式
	FileContent[30] = 0x00;
	FileContent[31] = 0x00;
	FileContent[32] = 0x00;
	FileContent[33] = 0x00;


	// 画像データサイズ
	FileContent[34] = 0x48;
	FileContent[35] = 0xB5;
	FileContent[36] = 0x07;
	FileContent[37] = 0x00;

	// 水平解像度
	FileContent[38] = 0x00;
	FileContent[39] = 0x00;
	FileContent[40] = 0x00;
	FileContent[41] = 0x00;

	// 垂直解像度
	FileContent[42] = 0x00;
	FileContent[43] = 0x00;
	FileContent[44] = 0x00;
	FileContent[45] = 0x00;

	// 格納パレット数
	FileContent[46] = 0x00;
	FileContent[47] = 0x00;
	FileContent[48] = 0x00;
	FileContent[49] = 0x00;

	// 重要色数
	FileContent[50] = 0x00;
	FileContent[51] = 0x00;
	FileContent[52] = 0x00;
	FileContent[53] = 0x00;



	int c = 0;
	int ArrayNumber = 1679;

	int pading = 4 - (((width* scale) * 3) % 4);

	
		// 画像データ(高さ)
	for (int a = 0; a < height; a++)
	{
		ArrayNumber -= width;
		
		for (int addheight = 0; addheight < scale; addheight++)
		{
			// 画像データ(幅)
			for (int b = 0; b < width; b++)
			{
				for (int addWidth = 0; addWidth < scale; addWidth++)
				{
					for (int d = 0; d < 3; d++)
					{
						switch (array[ArrayNumber + b])
						{
						case 0:
							FileContent[DataStart] = 0xFF;
							break;
						case 1:
							FileContent[DataStart] = 0x00;
							break;
						default:
							break;
						}


						DataStart++;
					}
				}


			}
			for (int pad = 0; pad < pading; pad++)
			{
				FileContent[DataStart] = 0x00;
				DataStart++;
			}
		}

		c = DataStart;
	}

	for (int a = 0; a < c; a++)
	{
		outputfile << FileContent[a];
	}

	outputfile.close();

}
