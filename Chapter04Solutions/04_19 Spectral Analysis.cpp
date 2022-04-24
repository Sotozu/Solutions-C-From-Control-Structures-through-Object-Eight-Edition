#include <iostream>
using namespace std;

//19. Spectral Analysis

int main() {
	double wavelength;

	cout << "This program will classify an electromagnetic wave raidiation given it's wavelength in meeters.\n";
	cout << "Note that these waves are very small. Enter small numbers (i.e. '.0001').\n";

	for (int i = 0; i < 5; i++) {

		cout << "Please enter the wavelength in meters(m): ";
		cin >> wavelength;

		if (wavelength >= 1e-2) {
			cout << " The wavelength is a 'Radio Wave'.";
		}
		else if (wavelength < 1e-2 && wavelength >= 1e-3) {
			cout << " The wavelength is a 'Microwave'.";
		}
		else if (wavelength < 1e-3 && wavelength >= 7e-7) {
			cout << " The wavelength is a 'Infrared'.";
		}
		else if (wavelength < 7e-7 && wavelength >= 4e-7) {
			cout << " The wavelength is a 'Visible Light'.";
		}
		else if (wavelength < 4e-7 && wavelength >= 1e-8) {
			cout << " The wavelength is a 'Ultraviolet'.";
		}
		else if (wavelength < 1e-8 && wavelength >= 1e-11) {
			cout << " The wavelength is a 'X Rays'.";
		}
		else if (wavelength < 1e-11) {
			cout << " The wavelength is a 'Gamma Rays'.";
		}
		cout << endl;
	}

	return 0;
}