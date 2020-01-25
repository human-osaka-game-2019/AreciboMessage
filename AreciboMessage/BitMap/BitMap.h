#ifndef BITMAP_H_
#define BITMAP_H_

#include <fstream>
#include <string>
#include <Windows.h>

#include "../Utility/Singleton.h"

using std::ofstream;
using std::string;

using USHORT = unsigned short;
using ULONG = unsigned long;
using UINT = unsigned int;

class BitMap {
public:
	BitMap(string file, int width, int height) {
		ofstream ofs(file, std::ios::binary);
		Write(ofs, CreateFileHeader(), CreateInfoHeader(width, height));

		ofs.close();
	}

	~BitMap() = default;

private:
	BitMap& operator=(const BitMap&) = delete;
	BitMap&& operator=(BitMap&&) = delete;

	BITMAPFILEHEADER& CreateFileHeader();
	BITMAPINFOHEADER& CreateInfoHeader(int width, int height);

	

	void Write(ofstream& ofs, BITMAPFILEHEADER& file_header, BITMAPINFOHEADER& info_header) const;
};

#endif //BITMAP_H_
