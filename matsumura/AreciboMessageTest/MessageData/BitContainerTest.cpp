#include "pch.h"

#include <MessageData/BitContainer.h>

namespace arecibo_message {
namespace message_data {

TEST(BitContainer_OpArraySubscript, CanGetEachBit) {
	// Arrange
	UInt32Collection source = { 0x12345678 };
	BitContainer target(source);

	// Act
	UInt8Collection results;
	for (size_t i = 0; i < 32; i++) {
		results.push_back(target[i]);
	}

	// Assert
	EXPECT_FALSE(results[0]);
	EXPECT_FALSE(results[1]);
	EXPECT_FALSE(results[2]);
	EXPECT_TRUE(results[3]);

	EXPECT_FALSE(results[4]);
	EXPECT_FALSE(results[5]);
	EXPECT_TRUE(results[6]);
	EXPECT_FALSE(results[7]);

	EXPECT_FALSE(results[8]);
	EXPECT_FALSE(results[9]);
	EXPECT_TRUE(results[10]);
	EXPECT_TRUE(results[11]);

	EXPECT_FALSE(results[12]);
	EXPECT_TRUE(results[13]);
	EXPECT_FALSE(results[14]);
	EXPECT_FALSE(results[15]);

	EXPECT_FALSE(results[16]);
	EXPECT_TRUE(results[17]);
	EXPECT_FALSE(results[18]);
	EXPECT_TRUE(results[19]);

	EXPECT_FALSE(results[20]);
	EXPECT_TRUE(results[21]);
	EXPECT_TRUE(results[22]);
	EXPECT_FALSE(results[23]);

	EXPECT_FALSE(results[24]);
	EXPECT_TRUE(results[25]);
	EXPECT_TRUE(results[26]);
	EXPECT_TRUE(results[27]);

	EXPECT_TRUE(results[28]);
	EXPECT_FALSE(results[29]);
	EXPECT_FALSE(results[30]);
	EXPECT_FALSE(results[31]);
}

} // namespace message_data
} // namespace arecibo_message
