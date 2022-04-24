#include <iostream>
#include <string>

using namespace std;

struct MovieData {
	string title;
	string director;
	int year_r;
	int run_t;
	int production_c;
	int first_y_p;

};
void outPut(const MovieData);
int main() {
	const int SIZE = 2;

	MovieData myfav[SIZE];

	//movie 1

	myfav[0].title = "alex THE MOVIE!";
	myfav[0].director = "alex";
	myfav[0].year_r = 1;
	myfav[0].run_t = 99;
	myfav[0].first_y_p = 1000000;
	myfav[0].production_c = 999999;

	myfav[1].title = "ALEXANDER THE MOVIE!";
	myfav[1].director = "ALEXANDER";
	myfav[1].year_r = 2;
	myfav[1].run_t = 1;
	myfav[1].first_y_p = 999999;
	myfav[1].production_c = 1000000;

	for (int i = 0; i < SIZE; i++) {
		outPut(myfav[i]);
		cout << endl;
	}


	return 0;
}
void outPut(const MovieData myfav) {
	cout << "Title: " << myfav.title << endl;
	cout << "Director: " << myfav.director << endl;
	cout << "Year Released: " << myfav.year_r << endl;
	cout << "Run Time: " << myfav.run_t << endl;
	cout << "First Year Profit/Loss: $" << myfav.first_y_p - myfav.production_c << endl;
}