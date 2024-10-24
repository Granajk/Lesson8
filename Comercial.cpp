#include "Comercial.h"

Comercial::Comercial()
{
    price = 0.0f;
}

Comercial::Comercial(string name, string company,
    Date install, int days, 
    float price) : Shareware(name,company,install,days)
{
    this->price = price;
}

float Comercial::getPrice() const
{
    return price;
}

void Comercial::setPrice(float price)
{
        this->price = price;
}

void Comercial::showInfo() const
{
    cout << "\t ShareWare SoftWare \n";
    cout << "Name: " << name << endl;
    cout << "Company: " << company << endl;
    cout << "Install date: " << install << endl;
    cout << "Free tern: " << days << endl;
    cout << "Price: " << price << endl;
    cout << "Available: " << (isAvailable() ? "YES" : "NO") << endl;
}
