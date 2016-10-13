#include "Game.h"
#include <iostream>
using namespace std;


Game::Game()
{
}

Game::Game(Player * _player, City * _city):
	player(_player), city(_city)
{
}

Game::~Game()
{
	delete(player);
	delete(city);
}

void Game::saveGame()
{
}

void Game::exitGame()
{
	Game::~Game();
}

Player& Game::getPlayer() const
{
	return *player;
}

City& Game::getCity() const
{
	return *city;
}

void Game::setCity(const City * _city)
{
	city = new City(_city);
}

void Game::setPlayer(const Player * _player)
{
	player = new Player(_player);
}
