#ifndef CITY_H
#define CITY_H

#define LOWER_BOUND 0
#define HAMLET_BOUND 100
#define VILLAGE_BOUND 500
#define TOWN_BOUND 1000
#include <string>
using namespace std;

class City
{
public:
	enum size { hamlet, village, town, city };
	City();
	City(size _size, string _name, unsigned int);
	City(const City*);
	virtual ~City();

	virtual void incrementPopulation();
	virtual void decrementPopulation();

	virtual unsigned int getPopulation() const;
	virtual string getName() const;
	virtual size getSize() const;

	virtual void setName(string);
	virtual void setName(istream & cin);

	virtual void updateSize();
private:
	
	size _size;
	string name;
	unsigned int population;
};

#endif
