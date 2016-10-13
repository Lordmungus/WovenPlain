#include "Player.h"
#include "Professions.h"
#include <iostream>
using namespace std;

Player::Player():
	money(PLAYER_HEALTH_MIN), health(PLAYER_HEALTH_MAX), _alive(__alive)
{
}

Player::Player(unsigned int _money, unsigned int _health, Player::alive __alive):
	money(PLAYER_HEALTH_MIN), health(PLAYER_HEALTH_MAX), _alive(__alive)
{
}

Player::Player(const Player * player) :
	money(player->getMoney()), health(player->getHealth()), _alive(player->getPlayerState())
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
	if (health == PLAYER_HEALTH_MIN)
		setPlayerState(__alive);

	if (health < PLAYER_HEALTH_MAX)
		health++;
	else
		cout << "Player is at maximum health." << endl;
}

void Player::decrementHealth()
{
	if (health > PLAYER_HEALTH_MIN)
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

