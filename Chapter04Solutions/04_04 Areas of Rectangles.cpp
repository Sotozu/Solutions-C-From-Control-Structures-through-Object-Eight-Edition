#include <iostream>
using namespace std;

//4. Areas of Rectangles

int main() {
	
	cout << "This program takes in the dimensions of two rectangles and then determines which has the larger surface area.\n\n";
	float length1, length2, width1, width2, area1, area2;
	int check = 0;

	cout << "Please enter the width followed by the length of the FIRST rectangle: ";
	cin >> length1 >> width1;

	cout << "\nPlease enter the width followed by the length of the SECOND rectangle: ";
	cin >> length2 >> width2;

	area1 = length1 * width1;
	area2 = length2 * width2;

	if (area1 > area2)
		check = 1;
	else if (area1 < area2)
		check = 2;

	switch (check) {
	case (1): cout << "\nThe FIRST rectangle is larger.\n";
		break;
	case (2): cout << "\nThe SECOND rectangle is larger.\n";
		break;
	default: cout << "\nBoth rectangles are the same.\n";
	}
	

	return 0;
}