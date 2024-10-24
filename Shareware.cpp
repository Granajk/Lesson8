#include "Shareware.h"

Shareware::Shareware()
{
    name = "undefined";
    company = "undefined";
    days = 3;
}

Shareware::Shareware(string name, string company, Date install, 
    int days) : Software(name,company)
{
    this->install = install;
    this->days = days;
}

Date Shareware::getInstall() const
{
    return install;
}

int Shareware::getDays() const
{
    return days;
}

void Shareware::setInstall(Date install)
{
    this->install = install;
}

void Shareware::setDays(int days)
{
    this->days = days;
}

void Shareware::showInfo() const
{
    cout << "\t ShareWare SoftWare \n";
    cout << "Name: " << name << endl;
    cout << "Company: " << company << endl;
    cout << "Install date: " << install << endl;
    cout << "Free tern: " << days << endl;
    cout << "Available: " << (isAvailable() ? "YES" : "NO") << endl;
}

bool Shareware::isAvailable() const
{
    return Date() <= install + days;
}
