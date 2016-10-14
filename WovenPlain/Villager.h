#ifndef VILLAGER_H
#define VILLAGER_H
#include "Professions.h"
#include <string>
using namespace std;

#define DEFAULT_AGE 20
#define MIN_AGE 0
#define MAX_AGE 120

class Villager : public Professions
{
public:
	Villager();
	Villager(std::string, unsigned int, professions);
	virtual ~Villager();

	virtual void checkName(string);

	virtual istream& setName(istream&);
	virtual void incrementAge();
	virtual void checkAge(unsigned int _age);
	virtual istream& setAge(istream&);
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
