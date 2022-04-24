#include "04 Time.h"

//Constructors
Time04::Time04() {
    hour = 0; 
    min = 0; 
    sec = 0; 

}
Time04::Time04(int h, int m, int s) {
    hour = h; 
    min = m; 
    sec = s;
}

//Accessors
int Time04::getHour() const {
    std::cout << "In Time04 Object" << std::endl;

    return hour;
}
int Time04::getMin() const {
    return min;
}
int Time04::getSec() const {
    return sec;
}