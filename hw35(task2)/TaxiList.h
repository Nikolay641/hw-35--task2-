#pragma once
#include "Taxi.h"
#include <list>
using std::list;

class TaxiList
{
	list<Taxi*> taxiList;
public:
	void showAllTaxi()const;
	void showByStatus(bool status)const;
	void pushFront(Taxi* taxi);
	void pushBefore(Taxi* taxi, int beforeNum);
	void deleteTaxi(int number);
	void setTaxiOnCall(int number);
	void setTaxiFree(int number);
};

