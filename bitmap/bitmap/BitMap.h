#ifndef BITMAP_H
#define BITMAP_H

#include <fstream>
#include <iostream>
#include <string>

//よく使う
//MAX - (current + 1)


class BitMap
{
private:

	//色付きがtrueで拡縮可
	//白黒がfalseで拡縮不可・defaultはscall = 1
	bool BitmapColor = false;



	//RGBの数 = 3
	static const int color_number = 3;

	//画像のヘッダ部
	static const int header_section = 54;




	unsigned long long DataStart = header_section;

	


	int RGB = 0x000000;

	int data_start = 0;

	//COLOR用////////////////////////////////////////

	enum Color
	{
		Black = -1,
		Blue = 0,
		Green = 1,
		Red = 2,
		White,
		Yellow,
		Purple,
	};

	//画像を大きくする倍数
	//1から14まで
	static const int scall = 1;

	//画像の幅
	static const int picture_width = 23 *scall;

	//画像の高さ
	static const int picture_height = 73 *scall;

	static const int remainder = (picture_width * color_number % 4);

	static const int pading = ((picture_width * color_number / 4 + 1) * 4 - remainder) % 4;


	//画像データサイズの計算
	/*
	横のピクセル数 * 縦のピクセル数 * 3;
	*/
	//LitteleEndian
	//画像データサイズ
	static const int picture_data_size = (picture_width*color_number + pading) * picture_height;


	//FileSizeの計算
	/*
	横のピクセル数 * 縦のピクセル数 * 3 + 54;
	*/
	//LittleEndian
	//FileのSize
	static const int FileSize = picture_data_size + header_section;


	void ColorBitMap();
	Color ChangeColor(int j, int i);
	char FileContent[FileSize] = { 0 };

	//モノクロ用/////////////////////////////////////////////

	char array[1679] = {};
	char inverse_array[1679];
	char binary[53*4];

	unsigned int hex[53] =
	{
		0x02A80050, 0x50122225, 0x95555240, 0x00000001, 0x80000D00,
		0x001A0000, 0x540000F8, 0x00000006, 0x1C618800, 0x321A3186,
		0xBEFBEF80, 0x00001000, 0x04000000, 0x20000FC0, 0x01F00000,
		0x1861C620, 0x20086863, 0x9AFBEFBE, 0x00000040, 0xC0100180,
		0x0083003F, 0x0607C00C, 0x00100804, 0x10301018, 0x60400C43,
		0x00019800, 0x310C0186, 0x04040804, 0x10180440, 0x30088020,
		0x20808080, 0x800600C0, 0x30047580, 0x08080010, 0x7C002174,
		0xB604E4FE, 0xE1C1B802, 0x83B20507, 0xE40A0C08, 0x36000000,
		0x00382000, 0x751554E0, 0x0AA00014, 0x000F8000, 0x7FC00380,
		0xE00C0060, 0x340160CC, 0x06611414, 0x42244880, 0x45100084,
		0x20010040, 0x00940079, 0xF4F00000
	};

	void Monochrome();

	



public:

	void CreateFile();

};



#endif