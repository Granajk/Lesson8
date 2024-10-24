#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Software
{
protected:
	string name;
	string company;

public:
	Software();
	Software(string name,
		string company);

	virtual ~Software();

	string getName()const;
	string getCompany()const;

	void setName(string name);
	void setCompany(string company);

	virtual void showInfo()const = 0;
	virtual bool isAvailable()const = 0;
	virtual void load(ifstream& file) = 0;
};

