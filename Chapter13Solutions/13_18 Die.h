#pragma once

#include <cstdlib> 
#include <ctime>   

// Specification file for the Die class   2  #ifndef DIE_H 
class Die
{
private:
    int sides;   // Number of sides 
    int value;   // The die's value 
public:

    Die() {
        unsigned seed = time(0);
        sides = 6;
        roll();
    }

    Die(int numSides) {
        unsigned seed = time(0);
        sides = numSides;
        roll();
    }

    void roll()
    {

        const int MIN_VALUE = 1;
        value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;

    }

    int getSides()
    {
        return sides;
    }

    int getValue()
    {
        return value;
    }
};