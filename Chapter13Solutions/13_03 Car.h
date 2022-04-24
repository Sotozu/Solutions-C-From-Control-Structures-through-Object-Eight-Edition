#pragma once
#include <string>
class Car {

private:

	int yearModel;
	std::string make;
	int speed;

public:
	//Constructor
	Car(int y, std::string m) {
		yearModel = y;
		make = m;
		speed = 0;
	}
	//Accesor
	int getModel() const {
		return yearModel;
	}
	std::string getMake() const {
		return make;
	}
	int getSpeed() const {
		return speed;
	}
	//Mutator
	void accelerate() {
		speed += 5;
	}
	void brake() {
		if (speed - 5 < 0) {
			std::cout << "ERROR:";
			exit(EXIT_FAILURE);
		}
		speed -= 5;
	}
};

