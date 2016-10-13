#ifndef PLAYER_H
#define PLAYER_H
#define PLAYER_HEALTH_MIN 0
#define PLAYER_HEALTH_MAX 100

#include "Villager.h"
using namespace std;

class Player : public Villager
{
public:
	enum alive { __alive, __dead };
	Player();
	Player(unsigned int, unsigned int, Player::alive);
	Player(const Player*);
	virtual ~Player();

	void incrementMoney();
	void decrementMoney();
	void incrementHealth();
	void decrementHealth();
	void setPlayerState(alive);

	unsigned int getMoney() const;
	unsigned int getHealth() const;
	alive getPlayerState() const;
	
private:
	unsigned int money;
	unsigned int health;
	alive _alive;
	// alive is enum type, _alive is class member and __alive is player state
};
#endif
