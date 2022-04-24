#pragma once

#include <iostream>
#include <string>
#include <memory>
#include <time.h>
#include <vector>

const int ANSWERS = 4;
const int QUESTIONS = 10;

class Trivia19
{
private:

	std::string* question;
	std::string** answer;
	int correct_an[10];
	void storeCorrectAnswerIndex(int c) {
		static int correct = 0;
		correct_an[correct] = c;
		correct++;
	}


public:
	//Constructor
	Trivia19() {

		question = new std::string[QUESTIONS];
		answer = new std::string * [QUESTIONS];

		for (int i = 0; i < QUESTIONS; i++) {
			answer[i] = new std::string[ANSWERS];
		}
		for (int i = 0; i < ANSWERS; i++) {
			//answer[i] = "";
		}

		for (int i = 0; i < QUESTIONS; i++) {
			correct_an[i] = -1;
		}

		question[0] = "What year was Covid-19 discovered?"; //2019
		question[1] = "When did Alex decide to start computer programming?"; //August 2019
		question[2] = "What is the capital of the US state of Delaware?"; //Dover
		question[3] = "What US National Park is known for its geysers?"; //Yellowstone
		question[4] = "What is the only country that begins with the letter \"O\" ?"; //Oman
		question[5] = "What 4 seas are named for colors?"; //Red, white, yellow, and black
		question[6] = "In what city would you find the most famous street named \"Bourbon Street\"?"; //New Orleans
		question[7] = "Which is the rainiest US state?"; //Hawaii
		question[8] = "What city is the capital of New York State?"; //Albany
		question[9] = "In France, what would you buy in a Boulangerie?"; //Bread

		//Answers+
		answer[0][0] = "2019";
		answer[1][0] = "Summer 2019";
		answer[2][0] = "Dover";
		answer[3][0] = "Yellowstone";
		answer[4][0] = "Oman";
		answer[5][0] = "Red, white, yellow and black";
		answer[6][0] = "New Orleans";
		answer[7][0] = "Hawaii";
		answer[8][0] = "Albany";
		answer[9][0] = "Bread";

		//Possible Questions 1
		answer[0][1] = "2020";
		answer[1][1] = "Spring 2020";
		answer[2][1] = "Townsville";
		answer[3][1] = "Yosemeti";
		answer[4][1] = "Oswan";
		answer[5][1] = "Red, blue, green and black";
		answer[6][1] = "Batan Rouge";
		answer[7][1] = "Florida";
		answer[8][1] = "New York";
		answer[9][1] = "Wine";

		//Possible Questions 2
		answer[0][2] = "2018";
		answer[1][2] = "Fall 2019";
		answer[2][2] = "Ontolo";
		answer[3][2] = "Rocky Mountain";
		answer[4][2] = "Otah";
		answer[5][2] = "Red, blue, yellow and black";
		answer[6][2] = "Lafayette";
		answer[7][2] = "Washington";
		answer[8][2] = "Buffalo";
		answer[9][2] = "Cheese";

		//Possible Questions 3
		answer[0][3] = "2017";
		answer[1][3] = "Spring 2019";
		answer[2][3] = "Brighton";
		answer[3][3] = "Olympic";
		answer[4][3] = "Ontario";
		answer[5][3] = "Silver, white, yellow and black";
		answer[6][3] = "Bossier City";
		answer[7][3] = "Arizona";
		answer[8][3] = "Rochester";
		answer[9][3] = "Meat";

	}

	//Mutator
	//void setQuestion(std::string);
	//Accessor
	void playGame(int x) {


		int num;  //num will contain either 0, 1, 2, 3
		std::vector<int> check_q;
		bool logic_gate1 = false, logic_gate2 = false, logic_gate3 = false;
		int correct_num;
		int check = 0;

		std::cout << "Question " << x + 1 << ": " << question[x] << std::endl;


		for (int j = 0; j < ANSWERS; j++) {
			if (logic_gate1 == true) {
				do {
					logic_gate2 = false;
					num = rand() % 4 + 0;

					for (int i = 0; i < check_q.size(); i++) {
						if (num == check_q[i]) {
							logic_gate2 = true; //found an already used number! MAKE THE PROGRAM RUN AGAIN
						}
					}


				} while (logic_gate2 == true); //RUN AGAIN IF LOGIC_GATE = TRUE

				std::cout << j + 1 << ": " << answer[x][num] << std::endl;
				check_q.push_back(num);
				if (num == 0) {
					//std::cout << "CORRECT ANSWER " << j + 1 << std::endl;
					storeCorrectAnswerIndex(j + 1);
				}

			}
			else {

				num = rand() % 3;
				std::cout << j + 1 << ": " << answer[x][num] << std::endl;
				check_q.push_back(num);
				if (num == 0) {
					//std::cout << "CORRECT ANSWER "<< j + 1 << std::endl;
					storeCorrectAnswerIndex(j + 1);
				}

			}
			logic_gate1 = true;
			std::cout << std::endl;
		}

		std::cout << std::endl;

	}
	//Destructor

	//Member Function
	bool isCorrect(int user_choice, int question) const {
		//std::cout << "Question number: " << question << std::endl;
		//std::cout << "isCorrect function: " << correct_an[question] << std::endl;
		if (user_choice == correct_an[question]) {

			return true;
		}
		return false;
	};
	
	//Destructor
	~Trivia19() {
		for (int i = 0; i < QUESTIONS; ++i) {
			delete[] answer[i];
		}
		//Free the array of pointers
		delete[] answer;

		delete[] question;
	}

};

