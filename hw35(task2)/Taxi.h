#pragma once

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;


class Taxi
{
	int number;
	string brand;
	string driver;
	bool onCall;
public:
	Taxi();
	Taxi(int number, string brand, string driver, bool onCall);

	void setNumber(int number);
	void setBrand(string brand);
	void setDriver(string driver);
	void setOnCall(bool onCall);

	int getNumber()const;
	string getBrand()const;
	string getDriver()const;
	bool getOnCall()const;

	void showInfo()const;
};

