#pragma once
#include <time.h>
#include <cstdlib>
#include <string>
class Coin
{
private:
	bool heads;
	std::string side_up;
	void flip() {
		heads = rand() % 2;
		if (heads) {
			side_up = "Heads";
		}
		else {
			side_up = "Tails";
		}
	}
	
public:
	//Constructor
	Coin() {
		flip();
	}

	//Mutator;
	void Toss() {
		flip();
	}

	//Accessor
	std::string returnSideUp() const {
		return side_up;
	}
};

