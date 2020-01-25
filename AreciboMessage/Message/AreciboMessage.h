#ifndef ARECIBO_MESSAGE_H_
#define ARECIBO_MESSAGE_H_

#define WIDTH 23
#define HEIGHT 73

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "../Utility/Singleton.h"

using std::ifstream;
using std::string;
using std::vector;
using std::cout;
using std::endl;

using UINT32 = uint32_t;

class Message :public Singleton<Message> {

	friend class Singleton;
public:

	inline void SetData(vector<UINT32> in_data) {
		Data = in_data;
	}

	void Convert();

protected:

private:
	Message& operator=(const Message&) = delete;
	Message&& operator=(Message&&) = delete;

	vector<UINT32> Data;
	Message() = default;

	void ByteSwap();
	void ToBinary();
};

#endif //ARECIBO_MASSEGE_H_
