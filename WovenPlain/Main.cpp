#include <iostream>
#include <string>
#include <sstream>
#include "Game.h"

using namespace std;

int main()
{
	Game * game = new Game();
	Player * player = new Player();

	cout << "Enter your character's name: " << endl;
	player->setName(std::cin);

	/*
	int age;
	cout << endl << "What is your age? ";
	cin >> age;
	if (age < 20 || _age > 120)
	{
		cout << endl << "Age undefined.";
		setAge();
	}

	age = _age;
	*/

	City * city = new City();
	game->setPlayer(player);
	game->setCity(city);
	return 0;
}