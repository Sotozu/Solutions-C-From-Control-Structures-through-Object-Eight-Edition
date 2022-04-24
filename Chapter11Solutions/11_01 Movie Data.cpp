#include <iostream>
#include <string>

using namespace std;

struct MovieData {
	string title;
	string director;
	int year_r;
	int run_t;
};
void outPut(const MovieData, int);
int main() {
	const int SIZE = 2;

	MovieData myfav[SIZE];

	//movie 1

	myfav[0].title = "alex THE MOVIE!";
	myfav[0].director = "alex";
	myfav[0].year_r = 1;
	myfav[0].run_t = 99;

	myfav[1].title = "ALEXANDER THE MOVIE!";
	myfav[1].director = "ALEXANDER";
	myfav[1].year_r = 2;
	myfav[1].run_t = 1;

	for (int i = 0; i < SIZE; i++) {
		outPut(myfav[i], SIZE);
		cout << endl;
	}


	return 0;
}
void outPut(const MovieData myfav, int SIZE) {
	cout << "Title: " << myfav.title << endl;
	cout << "Director: " << myfav.director << endl;
	cout << "Year Released: " << myfav.year_r << endl;
	cout << "Run Time: " << myfav.run_t << endl;
}