#include"Wav.h"

#include"BitMap.h"

#include <stdio.h>

int main()
{
	int BaseData[53] =
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

	char SubdivisionBaseData[53][4];
	char Aresibo[1696]; 
	
	int AresiboNumber = 0;

	for (int i = 0; i < 53; i ++)
	{
		for (int j = 0; j < 4; j++)
		{
			SubdivisionBaseData[i][j] = (BaseData[i] >> ( 8 *( 4 -( j + 1))) & 0x000000FF);

			for (int k = 0; k < 8; k++)
			{
				Aresibo[AresiboNumber] = (SubdivisionBaseData[i][j] >> ( 7 - k )) & 0x00000001;
				AresiboNumber++;
			}
		}
	}

	int Number = 0;

	for (int i = 0; i < 73; i++)
	{
		for (int j = 0; j < 23; j++)
		{
			switch (Aresibo[Number])
			{
			case 0:
				printf("　");
				break;
			case 1:
				printf("■");
			default:
				break;
			}
			
			Number++;
		}
		printf("\n");
	}

	

	BitMap bitmap;

	bitmap.CreateFileScaling(73, 23, Aresibo,12);



}