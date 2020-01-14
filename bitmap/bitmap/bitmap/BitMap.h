#ifndef BITMAP_H
#define BITMAP_H

#include <fstream>
#include <iostream>
#include <string>

class BitMap
{
private:
	static const int MaxArray = 4000;
	int WhileCount = 0;

	char FileContent[MaxArray] = { 0 };

	int DataStart = 54;

public:

	void CreateFile();

	




};



#endif