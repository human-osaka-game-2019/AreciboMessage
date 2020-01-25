﻿#include "Main.h"

#include "BitMap/BitMap.h"
#include "Utility/Singleton.h"
#include "Message/AreciboMessage.h"

#define TheMessage Singleton<Message>::GetInstance()

int main() {
	TheMessage.SetData({0x02A80050, 0x50122225, 0x95555240, 0x00000001, 0x80000D00,
						0x001A0000, 0x540000F8, 0x00000006, 0x1C618800, 0x321A3186,
						0xBEFBEF80, 0x00001000, 0x04000000, 0x20000FC0, 0x01F00000,
						0x1861C620, 0x20086863, 0x9AFBEFBE, 0x00000040, 0xC0100180,
						0x0083003F, 0x0607C00C, 0x00100804, 0x10301018, 0x60400C43,
						0x00019800, 0x310C0186, 0x04040804, 0x10180440, 0x30088020,
						0x20808080, 0x800600C0, 0x30047580, 0x08080010, 0x7C002174,
						0xB604E4FE, 0xE1C1B802, 0x83B20507, 0xE40A0C08, 0x36000000,
						0x00382000, 0x751554E0, 0x0AA00014, 0x000F8000, 0x7FC00380,
						0xE00C0060, 0x340160CC, 0x06611414, 0x42244880, 0x45100084,
						0x20010040, 0x00940079, 0xF4F00000 });

	BitMap bitmap("AreciboMessage.bmp", WIDTH, HEIGHT);

	return 0;
}
