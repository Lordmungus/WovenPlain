#ifndef PROFESSIONS_H
#define PROFESSIONS_H
#include <string>

class Professions
{
public:
	enum professions { alchemist, armourer, bandit, blacksmith, councillor, dockworker, farmer, guard, herbalist, hunter, innkeeper, mayor, merchant, priest, smuggler, unemployed };
	Professions();
	virtual ~Professions();
	std::string getNameProfession(professions);
};
#endif
