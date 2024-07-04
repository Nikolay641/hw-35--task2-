#include "TaxiList.h"

int main()
{
    TaxiList a;
    a.pushFront(new Taxi(1, "Toyota", "Mark", false));
    a.pushFront(new Taxi(2, "BMW", "Alex", true));
    a.pushFront(new Taxi(3, "Mercedes", "Bob", false));

    a.showAllTaxi();

    cout << "---------------------\n\n";
    
    a.pushBefore(new Taxi(4, "Honda", "Poul", false), 2);
    a.showAllTaxi();

    cout << "---------------------\n\n";

    a.deleteTaxi(3);
    a.showAllTaxi();

    cout << "---------------------\n\n";

    a.setTaxiFree(2);
    a.setTaxiOnCall(1);
    a.showAllTaxi();
}