#include <string>
#include <iostream>
#include <vector>

using namespace std;

string replaceSubstring(string, string, string);

int main() {

	string string1, string2, string3, result;


	string1 = "The cow jumped over the moon. The cow loves the moon!";
	string2 = "cow";
	string3 = "sheep";


	result = replaceSubstring(string1, string2, string3);
	cout << string1 << endl;
	cout << result << endl;
	return 0;
}

string replaceSubstring(string string1, string string2, string string3) {

	string result, string4;

	vector<int> position;

	string4 = string1;

	int found_at = 0;
	do {
		found_at = string4.find(string2, found_at); //
		if (found_at != -1) {
			string4.erase(found_at, string2.size());
			string4.insert(found_at, string3);
			found_at++;
		}
	} while (found_at != -1);

	result = string4;

	return result;
}