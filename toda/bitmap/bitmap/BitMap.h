#ifndef BITMAP_H
#define BITMAP_H

#include <fstream>
#include <iostream>
#include <string>

class BitMap
{
private:
	static const int MaxArray = 1000000;
	int WhileCount = 0;

	char FileContent[MaxArray] = { 0 };

	int DataStart = 54;

public:

	void CreateFile(int height, int width, char array[]);

	void CreateFile_x10(int height, int width, char array[],int scale);




};



#endif