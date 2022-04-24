#include <iostream>
#include <string>
#include <iostream>

using namespace std;

struct Student {

	string stu_name;
	int stu_id;
	//double** ptr_testscores;
	double* ptr_testscores;
	double average;
	char course_grade;

};

void inputData(Student*, int, int, int);
void outPutData(Student&, int, int);

int main() {

	Student* student = nullptr;
	int student_num, test_num;
	cout << "How many students: ";
	cin >> student_num;

	int* int_ptr = nullptr;
	int_ptr = new int[45];
	int_ptr[0] = 0;

	student = new Student[student_num]; // Dynamically allocates 'student_num' Structures

	cout << "How many tests: ";
	cin >> test_num;




	for (int i = 0; i < student_num; i++) {
		cin.ignore();
		cout << endl;
		inputData(&student[i], student_num, test_num, i); //Passes the address of the dynamically allocated structure
		cout << endl;
	}

	for (int i = 0; i < student_num; i++) {
		cout << endl;
		outPutData(student[i], test_num, i);
		cout << endl;
	}

	return 0;
}

void inputData(Student* student, int student_num, int test_num, int stu_num) {
	double total_test_points = 0;

	double* dyn_test_scores = new double[test_num]; //dynamic array of size [test_num]

	student->ptr_testscores = dyn_test_scores;
	cout << "Student [" << stu_num + 1 << "] Name: ";
	getline(cin, student->stu_name);
	cout << "Student ID: ";
	cin >> student->stu_id;
	cin.ignore();
	cout << endl;

	//student->ptr_testscores = new double* [test_num];
	cout << "---ENTER STUDENT TEST SCORES---" << endl;

	for (int i = 0; i < test_num; i++) {

		do {
			cout << "TEST GRADE " << i + 1 << ": ";
			cin >> student->ptr_testscores[i];


			if (student->ptr_testscores[i] < 0 || student->ptr_testscores[i] > 100) {
				cout << "ERROR: Please enter a valid grade (0-100).\n";
			}
			else {
				total_test_points += student->ptr_testscores[i];
			}

		} while (student->ptr_testscores[i] < 0 || student->ptr_testscores[i] > 100);
	}
	delete[] student->ptr_testscores;


	student->average = total_test_points / test_num;

	if (student->average >= 91) {
		student->course_grade = 'A';
	}
	else if (student->average >= 81) {
		student->course_grade = 'B';
	}
	else if (student->average >= 71) {
		student->course_grade = 'C';
	}
	else if (student->average >= 61) {
		student->course_grade = 'D';
	}
	else {
		student->course_grade = 'F';
	}

}
void outPutData(Student& student, int test_num, int stu_num) {
	cout << "-----STUDENT INFO-----" << endl;
	cout << "Student Name: " << student.stu_name << endl;
	cout << "Student ID: " << student.stu_id << endl;
	cout << showpoint << setprecision(2) << fixed << endl;
	cout << "Average Test Score: " << student.average << endl;
	cout << "Course Grade: " << student.course_grade << endl;
}
