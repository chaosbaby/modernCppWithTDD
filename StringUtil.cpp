#include "StringUtil.h"
#include <cctype>

namespace stringutil {
	std::string zeroPad(const std::string & word, unsigned int toLength) {
		auto zerosNeeded = toLength - word.length();
		return word + std::string(zerosNeeded, '0');
	}

	std::string head(const std::string & word) {
		return word.substr(0, 1);
	}

	std::string tail(const std::string &word) {
		if (word.length() == 0) return "";
		return word.substr(1);
	}

	std::string upperFront(const std::string& string) {
		return std::string(1,
			std::toupper(static_cast<unsigned char>(string.front())));
	}
}
