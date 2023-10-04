#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Game
{
private:
	int randNum = rand() % 4;
	string letter;
	int arrIndex;

	vector<string> arrWordsSymbol;
	vector<string> trueArrWordsSymbol;
	

public:
	Game();
	Game(int, string, int);

	void randWord();

	void InputLetter(string letter);

	void initializationWord();

	void displayGallows();
	void displayArr();
};

