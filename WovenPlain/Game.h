#ifndef NEWGAME_H
#define NEWGAME_H
#include "City.h"
#include "Player.h"

class Game
{
public:
	Game();
	Game(Player * _player, City * _city);
	virtual ~Game();

	virtual void saveGame();
	virtual void exitGame();

	virtual Player & getPlayer() const;
	virtual City & getCity() const;

	virtual void setCity(const City*);
	virtual void setPlayer(const Player*);
private:
	City * city;
	Player * player;
};

#endif