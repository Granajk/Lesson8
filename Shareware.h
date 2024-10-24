#pragma once
#include "Software.h"
#include "Date.h"
class Shareware : public Software
{
protected:
	Date install;
	int days;
public:
	Shareware();
	Shareware(string name,
		string company,
		Date install,
		int days);

	Date getInstall()const;
	int getDays()const;

	void setInstall(Date install);
	void setDays(int days);

	virtual void showInfo()const override;
	virtual bool isAvailable()const override;
};

