#include "AgeException.h"
#include "Exception.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Villager.h"
using namespace std;

AgeException::AgeException(const string& e):
	Exception(e)
{
}


AgeException::~AgeException()
{
}

string AgeException::AgeErrorMessage()
{
	ostringstream oss;
	oss << MIN_AGE;
	string min = oss.str();
	oss.flush();
	oss << MAX_AGE;
	string max = oss.str();
	oss.flush();
	return min + " and " + max;
}