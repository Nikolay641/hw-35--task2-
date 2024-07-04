#include "TaxiList.h"

void TaxiList::showAllTaxi() const
{
	for (auto item : taxiList) {
		item->showInfo();
		cout << endl;
	}
}

void TaxiList::showByStatus(bool status) const
{
	for (auto item : taxiList) {
		if (item->getOnCall() == status) {
			item->showInfo();
		}
	}
}

void TaxiList::pushFront(Taxi* taxi)
{
	taxiList.push_front(taxi);
}

void TaxiList::pushBefore(Taxi* taxi, int beforeNum)
{
	for (auto item = taxiList.begin(); item != taxiList.end(); item++) {
		if ((*item)->getNumber() == beforeNum) {
			taxiList.insert(item, taxi);
			return;
		}
	}
}

void TaxiList::deleteTaxi(int number)
{
	for (auto item = taxiList.begin(); item != taxiList.end(); item++) {
		if ((*item)->getNumber() == number) {
			delete* item;
			taxiList.erase(item);
			return;
		}
	}
}

void TaxiList::setTaxiOnCall(int number)
{
	for (auto item : taxiList) {
		if (item->getNumber() == number) {
			item->setOnCall(true);
		}
	}
}

void TaxiList::setTaxiFree(int number)
{
	for (auto item : taxiList) {
		if (item->getNumber() == number) {
			item->setOnCall(false);
		}
	}
}
