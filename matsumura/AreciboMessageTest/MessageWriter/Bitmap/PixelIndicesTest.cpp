#include "pch.h"

#include <MessageWriter/Bitmap/PixelIndices.h>

namespace arecibo_message {
namespace message_writer {
namespace bitmap {

TEST(PixelIndices_Ctor, NumberOfIndices) {
    // Arrange
    Size scale = 5;

    // Act
    PixelIndices target(0, 0, scale);

    // Assert
    std::vector<Size> indices;
    target.ApplyToAll([&indices](Size& index) { indices.push_back(index); });

    EXPECT_EQ(5 * 5, indices.size());
}

} // namespace bitmap
} // namespace message_writer
} // namespace arecibo_message
