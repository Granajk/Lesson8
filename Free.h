#pragma once
#include "Software.h"
class Free : public Software
{
public:
	Free();
	Free(string name, string company);

	virtual void showInfo()const override;
	virtual bool isAvailable()const override;
	void load(ifstream& file) override {
		getline(file, name);
		getline(file, company);
	}
};

