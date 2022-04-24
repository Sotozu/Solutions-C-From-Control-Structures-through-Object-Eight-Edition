#include <iostream>
#include <iomanip>
using namespace std;

//13. Currency

int main() {


const float YEN_PER_DOLLAR = 98.93;
const float EUROS_PER_DOLLAR = 0.74;

float usdollar;
float yen, euro;

cout << "This program converts US dollars into Yen and Euros.\n\n";
cout << "Please enter the number of US dollars you would like converted: ";

cin >> usdollar;

yen = usdollar * YEN_PER_DOLLAR;
euro = usdollar * EUROS_PER_DOLLAR;

cout <<setprecision(2)<<fixed<<showpoint<< "\n$" << usdollar << " US dollars is " << yen << " Yen OR " << euro << " Euros.\n\n";

cout << endl << "Alex" << endl;
	return 0;
}