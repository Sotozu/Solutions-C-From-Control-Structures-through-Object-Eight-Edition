#pragma once
#include <fstream>
#include <iostream>

class AbstractFileFilter10 {
private:

protected:
	virtual std::string transform(std::string line) = 0;
public:
	virtual void doFilter(std::ifstream& in, std::ofstream& out) = 0;
};