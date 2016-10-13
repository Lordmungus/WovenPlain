#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <string>
using namespace std;

class Exception
{
public:
	Exception(const string&);
	virtual ~Exception();

	virtual string getException() const;
private:
	string exception;
};

#endif