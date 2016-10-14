#include "Villager.h"
#include <iostream>
#include <string>
#include "NameException.h"
#include "AgeException.h"
using namespace std;

Villager::Villager():
name("unnamed"), age(DEFAULT_AGE), profession(unemployed)
{
}

Villager::Villager(string _name, unsigned int _age, professions _profession):
	name(_name), age(_age), profession(_profession)
{
}

Villager::~Villager()
{
}

void Villager::checkName(string _name)
{
	int i = 0;
	while (_name[i])
	{
		if (!isalpha(_name[i])) throw NameException("Invalid characters. Please choose [A-Z][a-z].");
		i++;
	}
	name = _name;
}

istream& Villager::setName(istream& in)
{
	string temp;
	in >> temp;
	checkName(temp);
	return in;
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

void Villager::checkAge(unsigned int _age)
{
	if (_age < MIN_AGE || _age > MAX_AGE) throw AgeException("Age is out of bounds. Pick an age between " + AgeException::AgeErrorMessage());
	age = _age;
}

istream& Villager::setAge(istream & in)
{
	unsigned int temp;
	in >> temp;
	checkAge(temp);
	return in;
}
