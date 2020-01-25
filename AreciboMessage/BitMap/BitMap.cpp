#include "BitMap.h"

BITMAPFILEHEADER& BitMap::CreateFileHeader() {
	BITMAPFILEHEADER header;
	header.bfType = 0x4d42;
	header.bfSize = ;
	header.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);

	return header;
}

BITMAPINFOHEADER& BitMap::CreateInfoHeader(int width, int height) {

}

void BitMap::Write(ofstream& ofs, BITMAPFILEHEADER& file_header, BITMAPINFOHEADER& info_header) const {
	ofs.write(reinterpret_cast<char *>(&file_header), sizeof(file_header));
	ofs.write(reinterpret_cast<char*>(&info_header), sizeof(info_header));
}
