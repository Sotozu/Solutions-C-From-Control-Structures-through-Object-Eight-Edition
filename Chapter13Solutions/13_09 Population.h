#pragma once
class Population
{

private:
	int birth_num;
	int population;
	int death_num;

public:
	//Constructors
	Population() {

		birth_num = 0;
		population = 0;
		death_num = 0;
	}
	Population(int b, int p, int d) {
		birth_num = b;
		population = p;
		death_num = d;
	}

	//Mutators
	void setBirthNum(int b) {
		birth_num = b;
	}

	void setDeathNum(int d) {
		death_num = d;
	}
	void setPopulation(int p) {
		population = p;
	}
	
	//Accessors
	float getBirthRate() const {
		return birth_num / static_cast<float>(population);
	}
	float getDeathRate() const {
		return death_num / static_cast<float>(population);
	}
	
};

