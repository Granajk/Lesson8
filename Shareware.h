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
	void load(ifstream& file) override {
		getline(file, name);
		getline(file, company);

		int d = 0, m = 0, y = 0;

		file >> d >> m >> y;
		install.setYear(y);
		install.setMonth(m);
		install.setDay(d);
		file >> days;
	}
};

