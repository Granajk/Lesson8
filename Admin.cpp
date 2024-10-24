#include "Admin.h"

Admin::Admin()
{

}

Admin::~Admin()
{
	for (int i = 0; i < admin.size(); i++) {
		delete admin[i];
	}
}

void Admin::addSoft(Software* obj)
{
	if (obj != nullptr)
	{
		admin.push_back(obj);
	}
}

void Admin::showList() const
{
	for (int i = 0; i < admin.size(); i++){
		cout << "#" << i + 1;
		admin[i]->showInfo();
		cout << endl;}
}
