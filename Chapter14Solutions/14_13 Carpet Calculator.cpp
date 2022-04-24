#include <iostream>
#include <iomanip>
#include "13 Carpet Calculator.h"

int main() {

	RoomCarpet13 my_room;
	std::cin >> my_room;
	std::cout << std::endl;
	std::cout << my_room;
	std::cout << std::fixed << std::setprecision(2) << std::showpoint;
	std::cout << "Total Cost: $" <<my_room.getTotalCost();
	return 0;
}
