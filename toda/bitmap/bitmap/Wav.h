#ifndef WAV_H
#define WAV_H

#include <fstream>
#include <iostream>
#include <string>

class Wav
{
private:
	static const int MaxArray = 256;
	int WhileCount = 0;

	char str[MaxArray];
	char FileContent[MaxArray] = {0};

public:
	void OpenFail();
	void Information();

	void CreateFile();

};




#endif