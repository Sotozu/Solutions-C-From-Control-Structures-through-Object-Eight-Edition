#include <iostream>
#include <iomanip>
using namespace std;

//6. Ingredient Adjuster

int main() {

	
	int numberOfCookies;
	int cookieBatch48 = 48;


	float sugarAmount1Cookie, butterAmount1Cookie, flourAmount1Cookie; //this will store how much of each ingredient is required for each cookie
	float sugar = 1.5, butter = 1.00, flour = 2.75; //current required amount of ingredients to bake 48 cookies

	sugarAmount1Cookie = sugar / cookieBatch48;
	butterAmount1Cookie = butter / cookieBatch48;
	flourAmount1Cookie = flour / cookieBatch48;

	cout << setprecision(2) << fixed;

	cout << "This program determines the amount of ingredients needed if a certian amount if cookies are to be baked!\n";
	cout << "In order to make 48 cookies the recipe calls for:\n"
		<< "\t"<<sugar<<" cup(s) of sugar\n"
		<< "\t"<<butter<<" cup(s) of butter\n"
		<< "\t"<<flour<<" cup(s) of flour\n\n";
	cout << "Please enter the amount of cookies you would like to make: ";

	cin >> numberOfCookies;

	cout << "The amount of ingredents required to make " << numberOfCookies << " cookies is:\n"
		<<"\t"<<sugarAmount1Cookie * numberOfCookies << " cup(s) of suger\n"
		<<"\t"<< butterAmount1Cookie * numberOfCookies << " cup(s) of butter\n"
		<<"\t"<< flourAmount1Cookie * numberOfCookies << " cup(s) of flour\n\n";

	cout << "Happy Baking!" << endl;

	cout << endl << "Alex" << endl;
	
	return 0;
}