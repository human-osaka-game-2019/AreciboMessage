#include "AreciboMessage.h"

#include "../Utility/Byte.h"

using BYTE::Swap32;

void Message::Convert() {

}

void Message::ByteSwap() {
	for (const auto& e : Data) {
		Swap32(Data[e]);
	}
}

void Message::ToBinary() {

}
