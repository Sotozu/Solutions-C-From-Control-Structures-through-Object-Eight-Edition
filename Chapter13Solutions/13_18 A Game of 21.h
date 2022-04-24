#pragma once
#include <string>
class Game21
{
private:
	int compScore;
	int userScore;
public:
	//Constructor
	Game21() {
		compScore = 0;
		userScore = 0;

	}
	//Mutator
	void addCompScore(int c) {
		compScore += c;
	}
	void addUserScore(int u) {
		userScore += u;
	}

	//Accessor
	int getCompScore() {
		return compScore;
	}
	int getUserScore() {
		return userScore;
	}

	//Member Functions
	std::string Win() {
		if (compScore < userScore) {
			return "You Win!";
		}
		else if (compScore > 21) {
			return "You Win!";
		}
		else if (compScore > userScore && compScore <= 21) {
			return "Computer Wins!";
		}
	}
	
};

