#pragma once
class Professions
{
public:
	enum professions { alchemist, armourer, bandit, blacksmith, councillor, dockworker, farmer, guard, herbalist, hunter, innkeeper, mayor, merchant, priest, smuggler, unemployed };
	Professions();
	virtual ~Professions();
	char* getNameProfession(professions);
};

