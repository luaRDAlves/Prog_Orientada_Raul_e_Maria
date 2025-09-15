#include <iostream>
#include "dicegame.h"

using namespace std;

int main (int argc, char* argv[]) {
	cout << "Hello dicegame !" << endl;

	DiceGame game;

	unsigned int times = 100;
	unsigned int wins = 0;

	for(int i = 0; i < times; i++){
		if(game.play()){
			cout << "You won !" << endl;
			wins++;
		} else {
			cout << "You lose !" << endl;
		}
	}

	cout << "Win percentage = " << (wins/(double)times)*100 << "%" << endl;


	return 0;
}
