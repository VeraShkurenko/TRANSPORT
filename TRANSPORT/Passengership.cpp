#include "Passengership.h"

Passengership::Passengership(string n, int spd, float wgt, string cap, int decks, int engType): WaterTransport(n, spd, wgt, cap), numberOfDecks(decks), engineType(engType) {}

void Passengership::BoardPassengers() 
{
    cout << "Boarding passengers on the passengership " << name << endl;
}

void Passengership::DisembarkPassengers() 
{
    cout << "Disembarking passengers from the passengership " << name << endl;
}
