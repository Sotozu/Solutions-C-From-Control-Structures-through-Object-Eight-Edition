#include "03 TeamLeader.h"

//Constructors
TeamLeader03::TeamLeader03() : ProductionWorker03() {
	fixedBonus = 0.0;
	hoursTrained = 0.0;
}
TeamLeader03::TeamLeader03(double fB, double hT, int shift, double hourly, std::string name, std::string number, std::string hireD) :
	ProductionWorker03(shift, hourly, name, number, hireD) {
	fixedBonus = fB;
	hoursTrained = hT;
}

//Mutators
void TeamLeader03::setFixedBonus(double fB) {
	fixedBonus = fB;
}
void TeamLeader03::setHoursTrained(double hT) {
	hoursTrained = hT;
}

//Accessors
double TeamLeader03::getFixedBonus() {
	return fixedBonus;
}
double TeamLeader03::getHoursTrained() {
	return hoursTrained;
}
const double TeamLeader03::getRequiredHours() {
	return hoursRequired;
}

//Overloads friends
std::ostream& operator << (std::ostream& strm, TeamLeader03& obj) {
	strm << std::setprecision(2) << std::showpoint << std::fixed;
	strm << "Team Leader Info" << std::endl << std::endl;
	strm << "Name: " << obj.getName() << std::endl;
	strm << "Number: " << obj.getNumber() << std::endl;
	strm << "Hire Date (MM/DD/YYYY): " << obj.getHireD() << std::endl;
	strm << "Shift (1 = Day | 2 = Night): " << obj.getShift() << std::endl;
	strm << "Hourly Rate: $" << obj.getHourly() << std::endl;
	strm << "Fixed Bonus: $" << obj.getFixedBonus() << std::endl;
	strm << "Trainig Hours Required: " << obj.getRequiredHours() << std::endl;
	strm << "Hours Trained: " << obj.getHoursTrained() << std::endl;

	return strm;
}

bool TeamLeader03::isTeamLeaderFullyTrained(){
	if (hoursTrained >= hoursRequired) {
		return true;
	}
	else {
		return false;
	}
}

double TeamLeader03::hoursRequired = 20;