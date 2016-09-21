#pragma once
#include "Professions.h"
#include <string>
using namespace std;

class Villager : public Professions
{
public:
	Villager();
	Villager(std::string, unsigned int, professions);
	virtual ~Villager();
	void setName(string);
	string getName() const;
	void incrementAge();
	unsigned int getAge() const;
	void setProfession(professions);
	professions getProfession() const;
private:
	string name;
	unsigned int age;
	professions profession;
};

