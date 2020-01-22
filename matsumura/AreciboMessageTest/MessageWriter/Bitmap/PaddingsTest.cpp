#include "pch.h"

#include <random>
#include <MessageWriter/Bitmap/Paddings.h>

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

class PaddingsTest : public ::testing::Test {
protected:
    void SetUp() override {
        mt.seed(rnd());
    }

    void SetSize() {
        while (true) {
            sizeWithoutPaddings = mt();

            if (sizeWithoutPaddings % 4 == remainder) return;
        }
    }

    std::mt19937 mt;
    std::random_device rnd;

    Size remainder;
    Size sizeWithoutPaddings;
};
 
TEST_F(PaddingsTest, SizeEq0) {
    // Arrange
    remainder = 0;
    SetSize();

    // Act
    Paddings target(sizeWithoutPaddings);

    // Assert
    EXPECT_EQ(0, target.GetSize());
}

TEST_F(PaddingsTest, SizeEq1) {
    // Arrange
    remainder = 3;
    SetSize();

    // Act
    Paddings target(sizeWithoutPaddings);

    // Assert
    EXPECT_EQ(1, target.GetSize());
}

TEST_F(PaddingsTest, SizeEq2) {
    // Arrange
    remainder = 2;
    SetSize();

    // Act
    Paddings target(sizeWithoutPaddings);

    // Assert
    EXPECT_EQ(2, target.GetSize());
}

TEST_F(PaddingsTest, SizeEq3) {
    // Arrange
    remainder = 1;
    SetSize();

    // Act
    Paddings target(sizeWithoutPaddings);

    // Assert
    EXPECT_EQ(3, target.GetSize());
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
