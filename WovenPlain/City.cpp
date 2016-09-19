#include "City.h"
#include <string>
#include <iostream>

City::City()
{
}

City::City(size __size, string _name, unsigned int _population) :
	_size(__size), name(_name), population(_population)
{
}

City::~City()
{
}

void City::incrementPopulation()
{
	population++;
}

void City::decrementPopulation()
{
	population--;
}

void City::setName(string _name)
{
	name = _name;
}

string City::getName()
{
	return name;
}

void City::updateSize()
{
	if( population >= 0 && population < 100 )
	{
		_size = hamlet;
	}
	else if(population >= 100 && population < 500)
	{
		_size = village;
	}
	else if(population >= 500 && population < 1000)
	{
		_size = town;
	}
	else if(population >= 1000)
	{
		_size = city;
	}
	else
	{
		std::cout << "Error: " << getName() << "'s population is incorrect. Size of city cannot be determined!" << std::endl;
	}
}