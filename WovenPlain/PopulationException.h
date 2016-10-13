#ifndef POPULATION_EXCEPTION_H
#define POPULATION_EXCEPTION_H
#include <string>
#include "Exception.h"
using namespace std;

class PopulationException : public Exception
{
public:
	PopulationException(const string &);
	virtual ~PopulationException();
};

#endif