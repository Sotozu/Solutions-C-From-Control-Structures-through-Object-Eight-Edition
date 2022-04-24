#pragma once
#include "09 Abstract File Filter.h"

class FileEncryption09 : public AbstractFileFilter09 {

private:
	int num_key;
protected:
	virtual char transform(char ch);

public:

	FileEncryption09(int);

	virtual void doFilter(std::ifstream& in, std::ofstream& out);

};