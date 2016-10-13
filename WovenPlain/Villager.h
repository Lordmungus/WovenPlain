#ifndef VILLAGER_H
#define VILLAGER_H
#include "Professions.h"
#include <string>
using namespace std;

class Villager : public Professions
{
public:
	Villager();
	Villager(std::string, unsigned int, professions);
	virtual ~Villager();

	virtual void setName(string);
	virtual istream& setName(istream&);
	virtual void incrementAge();
	virtual void setAge(unsigned int _age);
	virtual void setProfession(professions);

	virtual string getName() const;
	virtual unsigned int getAge() const;
	virtual professions getProfession() const;
	
private:
	string name;
	unsigned int age;
	professions profession;
    // test
};
#endif
