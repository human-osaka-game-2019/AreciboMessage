#include "Settings.h"

#include <stdexcept>

namespace arecibo_message {
namespace utility {

UINT Settings::GetIntValue(LPCTSTR section, LPCTSTR key) {
	UINT value = ::GetPrivateProfileInt(section, key, UINT_MAX, TEXT(".\\config.ini"));
	if (value == UINT_MAX) {
		throw std::invalid_argument("Invalid section or key name!!");
	}

	return value;
}

} // namespace utility
} // namespace arecibo_message
