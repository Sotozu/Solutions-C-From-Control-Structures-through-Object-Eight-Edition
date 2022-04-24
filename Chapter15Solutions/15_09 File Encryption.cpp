#include "09 File Encryption.h"

//Constructor
FileEncryption09::FileEncryption09(int key) {
	num_key = key;
}


char FileEncryption09::transform(char ch) {
	if (ch != '\n' && ch != ' ') {
		ch = ch + num_key;
	}
	return ch;
}


//Pure virtual function
void FileEncryption09::doFilter(std::ifstream& in, std::ofstream& out) {
	char c;
	while (in.get(c)) {
		c = transform(c);
		out << c;
	}

}