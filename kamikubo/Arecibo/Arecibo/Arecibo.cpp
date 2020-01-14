#include"Arecibo.h"

void Arecibo::CreateArecibo()
{
	//ファイルタイプ
	arecibo_bitmap.push_back(0x42);
	arecibo_bitmap.push_back(0x4D);

	//ファイルサイズ
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);

	//予約領域
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);

	//予約領域
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);

	//データオフセット
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);

	//情報ヘッダサイズ
	arecibo_bitmap.push_back(0x0C);
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);
	arecibo_bitmap.push_back(0x00);

	//幅[px]
	arecibo_bitmap.push_back(((wight * magnification) & 0x00FF) >> 0);
	arecibo_bitmap.push_back(((wight * magnification) & 0xFF00) >> 8);

	//高さ[px]
	arecibo_bitmap.push_back(((height * magnification) & 0x00FF) >> 0);
	arecibo_bitmap.push_back(((height * magnification) & 0xFF00) >> 8);

	//プレーン数
	arecibo_bitmap.push_back(0x01);
	arecibo_bitmap.push_back(0x00);

	//色ビット数
	arecibo_bitmap.push_back(0x18);
	arecibo_bitmap.push_back(0x00);

	SetDate();

	SetFile();
}

void Arecibo::SetDate()
{
	for (int i = 0; i < arecibo_date.size(); i++)
	{
		bitmap.push_back((arecibo_date[i] & 0xFF000000) >> 24);
		bitmap.push_back((arecibo_date[i] & 0x00FF0000) >> 16);
		bitmap.push_back((arecibo_date[i] & 0x0000FF00) >> 8);
		bitmap.push_back((arecibo_date[i] & 0x000000FF) >> 0);
	}

	for (int i = 0; i < bitmap.size(); i++)
	{
		bitmap2.push_back((bitmap[i] >> 7) & 0x01);
		bitmap2.push_back((bitmap[i] >> 6) & 0x01);
		bitmap2.push_back((bitmap[i] >> 5) & 0x01);
		bitmap2.push_back((bitmap[i] >> 4) & 0x01);
		bitmap2.push_back((bitmap[i] >> 3) & 0x01);
		bitmap2.push_back((bitmap[i] >> 2) & 0x01);
		bitmap2.push_back((bitmap[i] >> 1) & 0x01);
		bitmap2.push_back((bitmap[i] >> 0) & 0x01);
	}

	for (int i = 0; i < 17; i++)
	{
		bitmap2.pop_back();
	}

	for (int j = 73; j > 0; j--)
	{
		for (int s = 0; s < magnification; s++)
		{

			for (int k = 23; k > 0; k--)
			{

				for (int l = 0; l < magnification; l++)
				{

					if (bitmap2[23 * j - k] == 0x01)
					{
						arecibo_bitmap.push_back(0xFF);
						arecibo_bitmap.push_back(0x00);
						arecibo_bitmap.push_back(0xFF);
					}
					else
					{
						arecibo_bitmap.push_back(0xFF);
						arecibo_bitmap.push_back(0x00);
						arecibo_bitmap.push_back(0x00);
					}

				}

			}

			for (int h = 4; h > (magnification % 4); h--)
			{
				arecibo_bitmap.push_back(0x00);
			}

		}
	}
}

void Arecibo::SetFile()
{

	std::ofstream file("arecibo.bmp");

	for (int i = 0; i < arecibo_bitmap.size(); i++)
	{
		file << arecibo_bitmap[i];
	}

	file.close();
}
