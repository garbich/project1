#include <iostream>
#include <ctime>
#include "Game.h"

using namespace std;

int main()
{
	srand(time(NULL));

	int start;
	cout << "Do you want to start the game?(1-yes; 2-no)" << endl;
	cin >> start;

	Game* game = new Game();

	if (start == 1) {
		cout << "";

		

		cout << "the word needs to be guessed: " << endl;
		cout << " ";
		game->randWord();
		cout << endl << endl << endl;
	}
	else {
		return 0;
	}

	int change;
	cout << "Do you want change the word?(1-yes; 2-no)" << endl;
	cin >> change;

	int stop = 0;

	if (change == 1) {

		while (stop != 1) {
			

			cout << "the word needs to be guessed: " << endl;
			cout << " ";
			game->randWord();
			cout << endl << endl << endl;

			cout << "This word suits you?(1-yes; 2-no)" << endl;
			cin >> stop;
			system("cls");

		}
	}
	


	game->initializationWord();

	string letter;
	cout << "Try to input the letter: ";
	cin >> letter;

	game->InputLetter(letter);

	game->displayArr();
	
}
