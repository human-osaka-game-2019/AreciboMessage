#ifndef ARECIBO_MESSAGE_H_
#define ARECIBO_MESSAGE_H_

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

using UINT = unsigned int;

class Message :public Singleton<Message> {
public:

	inline void SetData(vector<UINT> in_data) {
		Data = in_data;
	}

	//void Convert();

protected:

private:
	friend class Singleton;
	Message& operator=(const Message&) = delete;
	Message&& operator=(const Message&&) = delete;
	vector<UINT> Data;
	Message() = default;
};

#endif //ARECIBO_MASSEGE_H_
