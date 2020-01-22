#ifndef TYPE_ALIASES_H_
#define TYPE_ALIASES_H_

#include <cstddef>
#include <cstdint>
#include <vector>

namespace arecibo_message {

using BigEndian32 = std::uint32_t;
using U8 = std::uint8_t;

using MessageSource = std::vector<BigEndian32>;
using U8s = std::vector<U8>;

using Size = std::size_t;

} // namespace arecibo_message

#endif // !TYPE_ALIASES_H_
