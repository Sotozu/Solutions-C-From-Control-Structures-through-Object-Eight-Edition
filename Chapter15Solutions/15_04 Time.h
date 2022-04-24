#pragma once
#include <iostream>

class Time04 {
protected:
    int hour;
    int min;
    int sec;
public:
    // Default constructor 
    Time04();

    // Constructor 
    Time04(int h, int m, int s);

    // Accessor functions 
    virtual int getHour() const;


    int getMin() const;

    int getSec() const;

};