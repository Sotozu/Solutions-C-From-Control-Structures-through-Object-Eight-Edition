#include "09 File Uppercase.h"

void FileUppercase09::doFilter(std::ifstream& in, std::ofstream& out) {
	char c;
	while (in.get(c)) {
		c = transform(c);
		out << c;
	}

}


char FileUppercase09::transform(char ch) {
	if (ch != '\n' && ch != ' '){
		ch = toupper(ch);
	}
	return ch;

}

