#include "Taxi.h"

Taxi::Taxi()
{
    number = 0;
    brand = "undefined";
    driver = "undefined";
    onCall = false;
}

Taxi::Taxi(int number, string brand, string driver, bool onCall)
{
    this->number = number;
    this->brand = brand;
    this->driver = driver;
    this->onCall = onCall;
}

void Taxi::setNumber(int number){ this->number = number; }

void Taxi::setBrand(string brand){ this->brand = brand; }

void Taxi::setDriver(string driver){ this->driver = driver; }

void Taxi::setOnCall(bool onCall){ this->onCall = onCall; }

int Taxi::getNumber() const{ return number; }

string Taxi::getBrand() const{ return brand; }

string Taxi::getDriver() const{ return driver; }

bool Taxi::getOnCall() const{ return onCall; }

void Taxi::showInfo() const
{
    cout << "Number: " << number << endl;
    cout << "Car brand: " << brand << endl;
    cout << "Driver name: " << driver << endl;
    cout << "Status: " << (onCall ? "on call" : "free") << endl;
}
