#include "NameException.h"
#include "Exception.h"


NameException::NameException(const string& e):
	Exception(e)
{
}


NameException::~NameException()
{
}
