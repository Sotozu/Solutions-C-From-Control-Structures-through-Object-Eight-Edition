#pragma once
#include <string>
#include <fstream>
#include "10 Abstract File Filter.h"


class FileDoubleSpace10 : public AbstractFileFilter10 {
private:
	std::string text_line;
protected:
	virtual std::string transform(std::string line);
public:
	FileDoubleSpace10();
	virtual void doFilter(std::ifstream& in, std::ofstream& out);
};