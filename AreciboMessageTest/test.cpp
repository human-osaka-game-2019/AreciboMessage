#include "pch.h"
#include "../AreciboMessage/Utility/Byte.h"

TEST(ByteSwapTest, Test1) {
	UINT32 a = 0x12345678;
	EXPECT_EQ(BYTE::Swap32(a), 0x78563412);
}