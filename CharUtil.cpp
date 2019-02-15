
#include <string>
#include <cctype>
#include "CharUtil.h"
namespace charutil {
	char lower(char c) {
		return std::tolower(static_cast<unsigned char>(c));
	}

	bool isVowel(char letter) {
		return std::string("aeiouy").find(lower(letter)) != std::string::npos;
	}
	char upper(char c)
	{
		return std::toupper(static_cast<unsigned char>(c));
	}
}