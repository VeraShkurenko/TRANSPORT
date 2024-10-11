#include "AirTransport.h"
#include <iostream>

AirTransport::AirTransport(const string& n, int spd, float wgt, float rng, float alt): Transport(n, spd, wgt), range(rng), maxAltitude(alt) {}

void AirTransport::TakeOff() 
{
    cout << name << " is taking off." << endl;
}

void AirTransport::Land() 
{
    cout << name << " is landing." << endl;
}
