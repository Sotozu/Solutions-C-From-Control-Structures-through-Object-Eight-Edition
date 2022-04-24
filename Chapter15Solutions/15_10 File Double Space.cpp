#include "10 File Double Space.h"

FileDoubleSpace10::FileDoubleSpace10() {
	FileDoubleSpace10::text_line = " ";
}

void FileDoubleSpace10::doFilter(std::ifstream& in, std::ofstream& out) {
	std::string changed_line;
	while (getline(in, text_line)) {
		changed_line = transform(text_line);
		out << changed_line;

	}

}


std::string FileDoubleSpace10::transform(std::string line) {
	std::string updated_sentence;
	for (int i = 0; i < line.size(); i++) {	
		std::cout << line.size() << std::endl;
		if (line[i] == ' ') { 
			line.insert(i, 1, ' ');
			i++;
		}
		std::cout << i << std::endl;
	}
	line.append("\n");
	return line;
}

