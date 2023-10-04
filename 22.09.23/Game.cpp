#include "Game.h"

Game::Game() {
	letter = ' ';
	arrIndex = 0;
}

Game::Game(int, string, int) {
	this->randNum = randNum;
	this->letter = letter;
	this->arrIndex = arrIndex;
}

void Game::randWord() {
	

	if (randNum == 1) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("G");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("N");

		trueArrWordsSymbol.push_back("G");
		trueArrWordsSymbol.push_back("R");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("N");

		// Word - "GREEN";

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}
		arrIndex = 1;

	}
	else if (randNum == 2) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("F");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("K");

		trueArrWordsSymbol.push_back("F");
		trueArrWordsSymbol.push_back("A");
		trueArrWordsSymbol.push_back("B");
		trueArrWordsSymbol.push_back("R");
		trueArrWordsSymbol.push_back("I");
		trueArrWordsSymbol.push_back("C");

		// Word - "FABRIC";

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}

		arrIndex = 2;
	}
	else if (randNum == 3) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("T");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("E");

		trueArrWordsSymbol.push_back("T");
		trueArrWordsSymbol.push_back("A");
		trueArrWordsSymbol.push_back("B");
		trueArrWordsSymbol.push_back("L");
		trueArrWordsSymbol.push_back("E");

		// Word - "TABLE"

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}

		arrIndex = 3;
	}
	else if (randNum == 4) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("T");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("E");

		trueArrWordsSymbol.push_back("T");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("L");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("P");
		trueArrWordsSymbol.push_back("H");
		trueArrWordsSymbol.push_back("O");
		trueArrWordsSymbol.push_back("N");

		// Word - "TELEPHONE"

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}

		arrIndex = 4;

	}
	
}

void Game::InputLetter(string letter) {

	for (int i = 0; i < arrWordsSymbol.size(); i++) {

		if (letter == trueArrWordsSymbol[i]) {
			arrWordsSymbol[i] = letter;
			cout << "Letter is in the letter!" << endl;
			
		}
		else {

		}
	}	

	cout << "There is no such letter in the word!" << endl;

}

void Game::displayGallows() {

	 string stages[] = {
        " _________     ",
        "|         |    ",
        "|         0    ",
        "|        /|\\  ",
        "|        / \\  ",
        "|              "
    };

    int max_attempts = sizeof(stages) / sizeof(stages[0]);

  
    for (int i = 0; i < max_attempts; i++) {
        for (int j = 0; j < i; j++) {
            cout << stages[j] << endl;
        }
        cout << stages[i] << endl;
        cout << "===================" << endl;

        
    }

}
void Game::initializationWord() {

	if (randNum == 1) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("G");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("N");

		trueArrWordsSymbol.push_back("G");
		trueArrWordsSymbol.push_back("R");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("N");

		// Word - "GREEN";


	}
	else if (arrIndex == 2) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("F");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("K");

		trueArrWordsSymbol.push_back("F");
		trueArrWordsSymbol.push_back("A");
		trueArrWordsSymbol.push_back("B");
		trueArrWordsSymbol.push_back("R");
		trueArrWordsSymbol.push_back("I");
		trueArrWordsSymbol.push_back("C");

		// Word - "FABRIC";

		
	}
	else if (arrIndex == 3) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("T");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("E");

		trueArrWordsSymbol.push_back("T");
		trueArrWordsSymbol.push_back("A");
		trueArrWordsSymbol.push_back("B");
		trueArrWordsSymbol.push_back("L");
		trueArrWordsSymbol.push_back("E");

		// Word - "TABLE"
		
	}
	else if (arrIndex == 4) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("T");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("E");

		trueArrWordsSymbol.push_back("T");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("L");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("P");
		trueArrWordsSymbol.push_back("H");
		trueArrWordsSymbol.push_back("O");
		trueArrWordsSymbol.push_back("N");

		// Word - "TELEPHONE"

	}
}

void Game::displayArr() {

	for (int i = 0; i < arrWordsSymbol.size(); i++) {
		cout << arrWordsSymbol[i] << " ";
	}
}