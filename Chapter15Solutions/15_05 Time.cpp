#include "05 Time.h"

//Constructors
Time05::Time05() {
    hour = 0;
    min = 0;
    sec = 0;

}
Time05::Time05(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
}

//Accessors
int Time05::getHour() const {
    std::cout << "In Time05 Object" << std::endl;

    return hour;
}
int Time05::getMin() const {
    return min;
}
int Time05::getSec() const {
    return sec;
}