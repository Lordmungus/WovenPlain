#include "Villager.h"
#include <iostream>
#include <string>
using namespace std;

Villager::Villager():
name("unnamed"), age(20), profession(unemployed)
{
	cout << "Villager initialised with " << endl << "Name: " << "unnamed" << endl << "Age: " << 20 << endl << "Profession: " << getNameProfession(unemployed) << endl;
}

Villager::Villager(string _name, unsigned int _age, professions _profession):
	name(_name), age(_age), profession(_profession)
{
	cout << "Villager initialised with " << endl << "Name: " << _name << endl << "Age: " << _age << endl << "Profession: " << getNameProfession(_profession) << endl;
}

Villager::~Villager()
{
}
