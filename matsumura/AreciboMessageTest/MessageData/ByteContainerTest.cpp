#include "pch.h"

#include <MessageData/BitContainer.h>

namespace arecibo_message {
namespace message_data {

TEST(ByteContainer_OpArraySubscript, CanGetEachByte) {
	// Arrange
	MessageSource source = { 0x12345678, 0x90123456 };
	ByteContainer target(source);

	// Act
	U8s results;
	Size loopCount = source.size() * sizeof(std::uint32_t);
	for (Size i = 0; i < loopCount; i++) {
		results.push_back(target[i]);
	}

	// Assert
	EXPECT_EQ(0x12, results[0]);
	EXPECT_EQ(0x34, results[1]);
	EXPECT_EQ(0x56, results[2]);
	EXPECT_EQ(0x78, results[3]);
	EXPECT_EQ(0x90, results[4]);
	EXPECT_EQ(0x12, results[5]);
	EXPECT_EQ(0x34, results[6]);
	EXPECT_EQ(0x56, results[7]);
}

} // namespace message_data
} // namespace arecibo_message
