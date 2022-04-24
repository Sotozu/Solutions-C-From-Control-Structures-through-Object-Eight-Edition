#pragma once
#include <fstream>
#include <iostream>

class AbstractFileFilter09 {
private:

protected:
	virtual char transform(char ch) = 0;
public:
	virtual void doFilter(std::ifstream& in, std::ofstream& out) = 0;
};