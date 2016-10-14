#include <string>
#include <iostream>

#include "City.h"
#include "PopulationException.h"

City::City()
{
}

City::City(size __size, string _name, unsigned int _population) :
	_size(__size), name(_name), population(_population)
{
}

City::City(const City * city):
	_size(city->getSize()), name(city->getName()), population(city->getPopulation())
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

unsigned int City::getPopulation() const
{
	return population;
}

void City::setName(string _name)
{
	name = _name;
}

void City::setName(istream& in)
{
	string input;
	getline(in, input);
	setName(input);
}

string City::getName() const
{
	return name;
}

City::size City::getSize() const
{
	return _size;
}

void City::updateSize()
{
	if( population >= LOWER_BOUND && population < HAMLET_BOUND )
	{
		_size = hamlet;
	}
	else if(population >= HAMLET_BOUND && population < VILLAGE_BOUND)
	{
		_size = village;
	}
	else if(population >= VILLAGE_BOUND && population < TOWN_BOUND)
	{
		_size = town;
	}
	else if(population >= TOWN_BOUND)
	{
		_size = city;
	}
	else
	{
		throw PopulationException("Error: " + getName() + "'s population is incorrect. Size of city cannot be determined!");
	}
	
}