#pragma once
#include <iostream>

class Time05 {
protected:
    int hour;
    int min;
    int sec;
public:
    // Default constructor 
    Time05();

    // Constructor 
    Time05(int h, int m, int s);

    // Accessor functions 
    virtual int getHour() const;


    int getMin() const;

    int getSec() const;

};