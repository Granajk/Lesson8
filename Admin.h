#pragma once
#include "Free.h"
#include "Shareware.h"
#include "Comercial.h"
#include <vector>
#include <algorithm>
class Admin
{
	vector<Software*> admin;
public:
	Admin();
	~Admin();

	void addSoft(Software* obj);
	void showList()const;
};

