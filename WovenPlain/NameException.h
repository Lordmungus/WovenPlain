#pragma once
#include "Exception.h"
class NameException :
	public Exception
{
public:
	NameException(const string&);
	virtual ~NameException();
};

