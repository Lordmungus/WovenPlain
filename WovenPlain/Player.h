#pragma once
#include "Villager.h"

class Player : public Villager
{
public:
	enum alive { __alive, __dead };
	Player();
	Player(string, unsigned int, professions, unsigned int, unsigned int, Player::alive);
	virtual ~Player();
	void incrementMoney();
	void decrementMoney();
	unsigned int getMoney();
	void incrementHealth();
	void decrementHealth();
	unsigned int getHealth();
	void setPlayerState(alive);
	alive getPlayerState();
private:
	std::string name;
	unsigned age;
	professions profession;
	unsigned int money;
	unsigned int health;
	alive _alive;
	// alive is enum type, _alive is class member and __alive is player state
};

