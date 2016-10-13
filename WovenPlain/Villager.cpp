#include "Villager.h"
#include <iostream>
#include <string>
using namespace std;

Villager::Villager():
name("unnamed"), age(20), profession(unemployed)
{
}

Villager::Villager(string _name, unsigned int _age, professions _profession):
	name(_name), age(_age), profession(_profession)
{
}

Villager::~Villager()
{
}

void Villager::setName(string _name)
{
	name = _name;
}

istream& Villager::setName(istream& cin)
{
	getline(cin, name);
	return cin;
}

string Villager::getName() const
{
	return name;
}

void Villager::incrementAge()
{
	age++;
}

unsigned int Villager::getAge() const
{
	return age;
}

void Villager::setProfession(professions _profession)
{
	profession = _profession;
}

Professions::professions Villager::getProfession() const
{
	return profession;
}

void Villager::setAge(unsigned int _age)
{
	age = _age;
}