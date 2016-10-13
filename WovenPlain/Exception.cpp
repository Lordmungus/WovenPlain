#include "Exception.h"
#include <string>
using namespace std;

Exception::Exception(const string& e):
	exception(e)
{
}

Exception::~Exception()
{
}

string Exception::getException() const
{
	return exception;
}
