#include "Player.h"
#include "Professions.h"
#include <iostream>
using namespace std;


Player::Player() :
	name("Unnamed"), age(20), profession(unemployed), money(0), health(100), _alive(__alive)
{
}

Player::Player(string _name, unsigned int _age, Professions::professions _profession, unsigned int _money, unsigned int _health, Player::alive __alive):
	name("Unnamed"), age(20), profession(unemployed), money(0), health(100), _alive(__alive)
{
}

Player::~Player()
{
}

void Player::incrementMoney()
{
	money++;
}

void Player::decrementMoney()
{
	money--;
}

unsigned int Player::getMoney() const
{
	return money;
}

void Player::incrementHealth()
{
	if (health == 0)
		setPlayerState(__alive);

	if (health < 100)
		health++;
	else
		cout << "Player is at maximum health." << endl;
}

void Player::decrementHealth()
{
	if (health > 0)
		health--;
	else
		setPlayerState(__dead);
}

unsigned int Player::getHealth() const
{
	return 0;
}

void Player::setPlayerState(alive __alive)
{
	_alive = __alive;
}

Player::alive Player::getPlayerState() const
{
	return _alive;
}
