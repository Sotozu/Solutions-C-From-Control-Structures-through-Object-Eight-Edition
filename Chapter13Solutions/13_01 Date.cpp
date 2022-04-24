#include <iostream>
#include "01 Date.h"

using namespace std;

int main() {
	int d, m, y;
	Date mydate;

	cout << "Please enter the following date information.\n";
	do {
		cout << "Day(xx): "; cin >> d;
	} while (!mydate.validDay(d));
	do {
		cout << "Month(xx): "; cin >> m;
	} while (!mydate.validMonth(m));
	cout << "Year(xxxx): "; cin >> y;
	mydate.setDate(d, m, y);

	mydate.dateForm1();
	mydate.dateForm2();
	mydate.dateForm3();

	return 0;
}