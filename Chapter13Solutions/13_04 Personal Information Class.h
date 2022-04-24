#pragma once
#include <string>

class PersonalInformation
{
private:
	std::string name;
	std::string address;
	int age;
	std::string phone;

public:
	//Constructor
	PersonalInformation() {
		name = "";
		address = "";
		age = 0;
		phone = "";
	}
	PersonalInformation(std::string n, std::string add, int a, std::string p) {
		name = n;
		address = add;
		age = a;
		phone = p;
	}
	

	//Accessor
	std::string getName() const {
		return name;
	}
	std::string getAddress() const {
		return address;
	}
	int getAge() const {
		return age;
	}
	std::string getPhone() const {
		return phone;
	}

	//Mutators
	void setName(std::string n) {
		name = n;
	}
	void setAddress(std::string add) {
		address = add;
	}
	void setAge(int a) {
		age = a;
	}
	void setPhone(std::string p) {
		phone = p;
	}



};

