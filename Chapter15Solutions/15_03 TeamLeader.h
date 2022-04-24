#pragma once
#include "03 Production Worker.h"
#include <iostream>
#include <iomanip>
//Forward declaration
class TeamLeader03;

std::ostream & operator << (std::ostream&, const TeamLeader03&);


class TeamLeader03 : public ProductionWorker03 {

private:
	double fixedBonus;
	double hoursTrained;
	static double hoursRequired;

protected:

public:
	//Constructors
	TeamLeader03();
	TeamLeader03(double fB, double hT, int shift, double hourly, std::string name, std::string number, std::string hireD);

	//Mutators
	void setFixedBonus(double fB);
	void setHoursTrained(double hT);

	//Accessors
	double getFixedBonus();
	double getHoursTrained();
	const double getRequiredHours();

	//Overloads Friends

	friend std::ostream & operator << (std::ostream&, TeamLeader03&);

	//Member Functions
	bool isTeamLeaderFullyTrained();
};
