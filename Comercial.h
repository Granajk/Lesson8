#pragma once
#include "Shareware.h"
class Comercial : public Shareware
{
protected:
	float price;
public:
	Comercial();
	Comercial(string name,
		string company,
		Date install,
		int days,float price);

	float getPrice()const;
	void setPrice(float price);

	virtual void showInfo()const override;
};

