#include <iostream>

#include "03 TeamLeader.h"

int main() {

	TeamLeader03 tL(2000,20,1,32, "Alex Soto", "101010", "10/10/2021");

	std::cout << tL << std::endl;;

	if (tL.isTeamLeaderFullyTrained()) {
		std::cout << "Team leader is fully trained!" << std::endl;
	}
	else {
		std::cout << "Team leader is NOT fully trained!" << std::endl;
	}
	
	return 0;
}