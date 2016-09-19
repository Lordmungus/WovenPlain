#pragma once
#include "Professions.h"
#include <string>
class Villager : public Professions
{
public:
	Villager();
	Villager(std::string, unsigned int, professions);
	virtual ~Villager();
private:
	std::string name;
	unsigned age;
	professions profession;
};

