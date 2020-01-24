#ifndef BYTE_H_
#define BYTE_H_

#include <stdint.h>

using UINT16 = uint16_t;
using UINT32 = uint32_t;

namespace BYTE {
	inline UINT16 Swap16(UINT16 value) {
		UINT16 ret;
		ret = value << 8;
		ret |= value >> 8;
		return ret;
	}

	//example
	//value = 0x12345678(0001 0010 0011 0100 0101 0110 0111 1000‬)
	inline UINT32 Swap32(UINT32 value) {
		UINT32 ret;
		ret = value << 24;
		// value << 24 -> 0111 1000 0000 0000 0000 0000 0000 0000
		//  0x0000FF00 -> 0000 0000 0000 0000 1111 1111 0000 0000
		// value&0x0000FF00 = 0000 0000 0000 0000 0101 0110 0000 0000
		// value&0x0000FF00 << 8 -> 0000 0000 0101 0110 0000 0000 0000 0000
		// ret = ret | (value&0x0000FF00) << 8
		ret |= (value&0x0000FF00) << 8;
		// 0111 1000 0101 0110 0000 0000 0000 0000
		// 0x00FF0000 -> 0000 0000 1111 1111 0000 0000 0000 0000
		// value&0x00FF0000 -> 0000 0000 0011 0100 0000 0000 0000 0000
		// value&0x00FF0000 >> 8 -> 0000 0000 0000 0000 0011 0100 0000 0000
		// ret = ret | (value&0x00FF0000) >> 8
		ret |= (value&0x00FF0000) >> 8;
		// 0111 1000 0101 0110 0011 0100 0000 0000
		// value >> 24 = 0000 0000 0000 0000 0000 0000 0001 0010
		ret |= value >> 24;
		// 0111 1000 0101 0110 0011 0100 0001 0010
		return ret;
	}
}

#endif
