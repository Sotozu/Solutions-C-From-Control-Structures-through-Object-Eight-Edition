#include "02 Time.h"

//Constructors
Time02::Time02() {
	hour = 0;
	min = 0;
	sec = 0;

}
Time02::Time02(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
}

//Accessors
int Time02::getHour() const {
	std::cout << "In Time02 Object" << std::endl;

	return hour;
}
int Time02::getMin() const {
	return min;
}
int Time02::getSec() const {
	return sec;
}