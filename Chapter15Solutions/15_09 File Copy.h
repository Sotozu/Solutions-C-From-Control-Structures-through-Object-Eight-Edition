#pragma once
#include "09 Abstract File Filter.h"

class FileCopy09 : public AbstractFileFilter09 {

private:

protected:
	virtual char transform(char ch);

public:

	virtual void doFilter(std::ifstream& in, std::ofstream& out);

};
