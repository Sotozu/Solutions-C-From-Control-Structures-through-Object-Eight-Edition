#pragma once
class FBPoint
{

private:
	float temperature;
public:
	//Constructor
	FBPoint() {
		temperature = 0;
	}

	FBPoint(float t) {
		temperature = t;
	}

	//Mutator;
	void changeTemp(float t) {
		temperature = t;
	}

	//Accessor
	float getTemp() {
		return temperature;
	}

	//Memeber Functions
	bool isEthylFreezing() {
		if (temperature <= -173) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isEthylBoiling() {
		if (temperature >= 172) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isOxygenFreezing() {
		if (temperature <= -362) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isOxygenBoiling() {
		if (temperature >= -306) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isWaterFreezing() {
		if (temperature <= 32) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isWaterBoiling() {
		if (temperature >= 212) {
			return true;
		}
		else {
			return false;
		}
	}

};

