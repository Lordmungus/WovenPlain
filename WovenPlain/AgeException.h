#ifndef AGE_EXCEPTION_H
#define AGE_EXCEPTION_H
#include "Exception.h"
#include <string>

class AgeException :
	public Exception
{
public:
	AgeException(const string&);
	virtual ~AgeException();

	static string AgeErrorMessage();
};


#endif