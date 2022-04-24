#include "09 File Copy.h"

void FileCopy09::doFilter(std::ifstream& in, std::ofstream& out) {
	char c;
	while (in.get(c)) {
		out << c;
	}
}

//needs to be defined because its a virtual function
char FileCopy09::transform(char ch) {
	return '0';
}