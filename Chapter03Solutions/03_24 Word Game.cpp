#include <iostream>
#include <string>
using namespace std;

//24. Word Game

int main() {
	
	cout << "This program plays a word game with the user.\n\n";

	string name, age, cityTown, college, profession, animal, pet;

	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Please enter your age: ";
	getline(cin, age);
	cout << "Please enter your current city/town: ";
	getline(cin, cityTown);
	cout << "Please enter the name of a college: ";
	getline(cin, college);
	cout << "Please enter a profession: ";
	getline(cin, profession);
	cout << "Please enter a type of animal: ";
	getline(cin, animal);
	cout << "Please enter a pet's name: ";
	getline(cin, pet);

	cout << "\nPlease press \"Enter\" to continue.";
	cin.get();

	cout << "\nThere once was a person named " <<
	name <<
	" who lived in " <<
	cityTown <<
	".\nAt the age of " <<
	age <<
	", " <<
	name <<
	" went to college at " <<
	college <<
	".\n" <<
	name <<
	" graduated and went to work as a " <<
	profession <<
	".\nThen, " <<
	name <<
	" adopted a(n) " <<
	animal <<
	" named " <<
	pet <<
	".\nThey both lived happily ever after!\n\n";

	cout << endl << "Alex" << endl;

	return 0;
}