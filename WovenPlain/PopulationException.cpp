#include "PopulationException.h"
#include "Exception.h"
#include <string>
using namespace std;

PopulationException::PopulationException(const string & e):
	Exception(e)
{
}

PopulationException::~PopulationException()
{
}
