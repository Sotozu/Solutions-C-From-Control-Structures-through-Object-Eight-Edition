#include "07 PersonData.h"

//Default Constructor
PersonData07::PersonData07() {
	lastName = "";
	firstName = "";
	address = "";
	city = "";
	state = "";
	zip = 0;
	phone = 0;
}

//Constructor
PersonData07::PersonData07(std::string ln, std::string fn, std::string add, std::string cit, std::string sta, int z, int pho) {
	lastName = ln;
	firstName = fn;
	address = add;
	city = cit;
	state = sta;
	zip = z;
	phone = pho;
}

//Accessor
std::string PersonData07::getLastName() const {
	return lastName;
}
std::string PersonData07::getFirstName() const {
	return firstName;
}
std::string PersonData07::getAddress() const {
	return address;
}
std::string PersonData07::getCity() const {
	return city;
}
std::string PersonData07::getState() const {
	return state;
}
int PersonData07::getZip() const {
	return zip;
}
int PersonData07::getPhone() const {
	return phone;
}

//Mutators
void PersonData07::setLastName(std::string ln) {
	lastName = ln;
}
void PersonData07::setFirstName(std::string fn) {
	firstName = fn;
}
void PersonData07::setAddress(std::string add) {
	address = add;
}
void PersonData07::setCity(std::string cit) {
	city = cit;
}
void PersonData07::setState(std::string sta) {
	state = sta;
}
void PersonData07::setZip(int z) {
	zip = z;
}
void PersonData07::setPhone(int pho) {
	phone = pho;
}


//overloads
std::ostream& operator << (std::ostream& strm, const PersonData07& obj) {
	strm << obj.firstName << " " << obj.lastName << std::endl;
	strm << obj.address << " " << obj.city << " " << obj.state << " " << obj.zip << std::endl;

	return strm;
}

//Member Functions
