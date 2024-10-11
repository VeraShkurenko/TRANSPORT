#include "Airship.h"

Airship::Airship(string n, int spd, float wgt, float rng, float alt, string gType, float vol) : AirTransport(n, spd, wgt, rng, alt), gasType(gType), balloonVolume(vol) {}

void Airship::Inflate() 
{
    cout << "inflating the airship with " << gasType << endl;
}

void Airship::Deflate() 
{
    cout << "deflating the airship" << endl;
}