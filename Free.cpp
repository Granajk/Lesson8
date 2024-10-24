#include "Free.h"

Free::Free()
{
    name = "undefined";
    company = "undefined";
}

Free::Free(string name, string company)
{
    this->name = name;
    this->company = company;
}

void Free::showInfo() const
{
    cout << "\t Free SoftWare \n";
    cout << "Name: " << name << endl;
    cout << "Company: " << company << endl;
    cout << "Available: " << (isAvailable() ? "YES" : "NO") << endl;
}

bool Free::isAvailable() const
{
    return true;
}
