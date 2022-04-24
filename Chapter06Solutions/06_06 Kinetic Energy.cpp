#include <iostream>
#include <iomanip>

using namespace std;

// 6. Kinetic Energy

double kineticEnergy(double, double);

int main() {
	double mass, velocity, kinetic_energy;

	cout << "Please enter the mass of the object.\n";
	cout << "MASS(lb): ";
	cin >> mass;

	cout << "Please enter the velocity of the object.\n";
	cout << "VELOCITY(m/s): ";
	cin >> velocity;


	kinetic_energy =kineticEnergy(mass, velocity);
	cout << showpoint << setprecision(2) << fixed;
	cout << "Given mass is " << mass << " and velocity is " << velocity << " the kinetic energy is...\n";
	cout << "KINETIC ENERGY: " << kinetic_energy;

	return 0;
}

double kineticEnergy(double mass, double velocity) {

	double kinetic_energy;

	kinetic_energy = 0.5 * mass * pow(velocity, 2);

	return kinetic_energy;
}