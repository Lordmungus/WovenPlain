#pragma once
#include "Professions.h"
#include <string>
class Villager : public Professions
{
public:
	Villager();
	Villager(std::string, unsigned int, professions);
	virtual ~Villager();
	void setName(string);
	string getName();
	void incrementAge();
	unsigned int getAge();
	void setProfession(professions);
	professions getProfession();
private:
	std::string name;
	unsigned int age;
	professions profession;
};

