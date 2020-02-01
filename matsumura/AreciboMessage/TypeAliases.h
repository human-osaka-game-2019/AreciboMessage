#ifndef TYPE_ALIASES_H_
#define TYPE_ALIASES_H_

#include <cstddef>
#include <cstdint>
#include <vector>
#include <memory>

namespace arecibo_message {

using UInt32 = std::uint32_t;
using UInt8 = std::uint8_t;

template<class T>
using Vector = std::vector<T>;

using UInt32Collection = Vector<UInt32>;
using UInt8Collection = Vector<UInt8>;

using Size = std::size_t;
using Index = std::size_t;

template<class T>
using UniquePtr = std::unique_ptr<T>;

} // namespace arecibo_message

#endif // !TYPE_ALIASES_H_
