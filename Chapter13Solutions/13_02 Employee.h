#pragma once
#include <string>

class Employee {

private:
	 
	std::string name;
	int idNumber;
	std::string department;
	std::string position;

public:
	//Constructors
	Employee() {
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}
	Employee(std::string n, int id, std::string dep, std::string pos) {
		name = n;
		idNumber = id;
		department = dep;
		position = pos;

	}
	Employee(std::string n, int id) {
		name = n;
		idNumber = id;
		department = "";
		position = "";
	}

	//Mutators
	void setName(std::string n) {
		name = n;
	}
	void setID(int id) {
		idNumber = id;
	}
	void setDepartment(std::string dep) {
		department = dep;
	}
	void setPosition(std::string pos) {
		position = pos;
	}

	//Accessors
	std::string getName() const {
		return name;
	}
	int getID() const {
		return idNumber;
	}
	std::string getDepartment() const {
		return department;
	}
	std::string getPosition() const {
		return position;
	}
};