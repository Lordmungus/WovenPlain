#include <iostream>
#include <string>
#include <sstream>
#include "Game.h"
#include "NameException.h"
#include "AgeException.h"

using namespace std;

int main()
{
	Game * game = new Game();
	Player * player = new Player();

	cout << "What is your name? " << endl;
	
	try {
		player->setName(std::cin);
	} catch (NameException e) {
		cout << e.getException();
	}

	cout << endl << "What is your age? " << endl;
	try {
		player->setAge(std::cin);
	} catch (AgeException e) {
		cout << e.getException();
	}
	

	City * city = new City();
	game->setPlayer(player);
	game->setCity(city);

	return 0;
}