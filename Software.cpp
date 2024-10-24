#include "Software.h"

Software::Software()
{
	name = "undefined";
	company = "undefined";
}

Software::Software(string name, string company)
{
	this->name = name;
	this->company = company;
}

Software::~Software()
{
}

string Software::getName() const
{
	return name;
}

string Software::getCompany() const
{
	return company;
}

void Software::setName(string name)
{
	this->name = name;
}

void Software::setCompany(string company)
{
	this->company = company;
}
