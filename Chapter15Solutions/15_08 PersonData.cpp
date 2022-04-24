#include "08 PersonData.h"

//Default Constructor
PersonData08::PersonData08() {
	lastName = "";
	firstName = "";
	address = "";
	city = "";
	state = "";
	zip = 0;
	phone = 0;
}

//Constructor
PersonData08::PersonData08(std::string ln, std::string fn, std::string add, std::string cit, std::string sta, int z, int pho) {
	lastName = ln;
	firstName = fn;
	address = add;
	city = cit;
	state = sta;
	zip = z;
	phone = pho;
}

//Accessor
std::string PersonData08::getLastName() const {
	return lastName;
}
std::string PersonData08::getFirstName() const {
	return firstName;
}
std::string PersonData08::getAddress() const {
	return address;
}
std::string PersonData08::getCity() const {
	return city;
}
std::string PersonData08::getState() const {
	return state;
}
int PersonData08::getZip() const {
	return zip;
}
int PersonData08::getPhone() const {
	return phone;
}

//Mutators
void PersonData08::setLastName(std::string ln) {
	lastName = ln;
}
void PersonData08::setFirstName(std::string fn) {
	firstName = fn;
}
void PersonData08::setAddress(std::string add) {
	address = add;
}
void PersonData08::setCity(std::string cit) {
	city = cit;
}
void PersonData08::setState(std::string sta) {
	state = sta;
}
void PersonData08::setZip(int z) {
	zip = z;
}
void PersonData08::setPhone(int pho) {
	phone = pho;
}


//overloads
std::ostream& operator << (std::ostream& strm, const PersonData08& obj) {
	strm << obj.firstName << " " << obj.lastName << std::endl;
	strm << obj.address << " " << obj.city << " " << obj.state << " " << obj.zip << std::endl;

	return strm;
}

//Member Functions
