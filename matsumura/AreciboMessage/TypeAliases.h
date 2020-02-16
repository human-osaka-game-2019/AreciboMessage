#ifndef TYPE_ALIASES_H_
#define TYPE_ALIASES_H_

#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <vector>

namespace arecibo_message {

using UInt32 = std::uint32_t;
using UInt8 = std::uint8_t;

using Size = std::size_t;
using Index = std::size_t;

template<class T>
using Vector = std::vector<T>;

using UInt32Vector = Vector<UInt32>;
using UInt8Vector = Vector<UInt8>;

template<Size size>
using UInt8Array = std::array<UInt8, size>;

template<class T>
using UniquePtr = std::unique_ptr<T>;

using UInt8VectorPtr = UniquePtr<UInt8Vector>;

} // namespace arecibo_message

#endif // !TYPE_ALIASES_H_
