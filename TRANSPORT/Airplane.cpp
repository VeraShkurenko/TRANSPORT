#include "Airplane.h"
#include <iostream>

Airplane::Airplane(const string& n, int spd, float wgt, float rng, float alt, const string& engType, float ws): AirTransport(n, spd, wgt, rng, alt), engineType(engType), wingSpan(ws) {}

void Airplane::Cruise() 
{
    cout << name << " is cruising with a wingspan of " << wingSpan << " meters." << endl;
}

void Airplane::Refuel() 
{
    cout << name << " is refueled." << endl;
}
