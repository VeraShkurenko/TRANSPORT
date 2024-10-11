#include "Railway.h"
#include <iostream>

Railway::Railway(const string& n, int spd, float wgt, const string& terrain, const string& locoType, int wagons): GroundTransport(n, spd, wgt, terrain), locomotiveType(locoType), numOfWagons(wagons) {}

void Railway::CoupleWagons() 
{
    cout << locomotiveType << " has coupled " << numOfWagons << " wagons." << endl;
}

void Railway::UncoupleWagons() 
{
    cout << locomotiveType << " has uncoupled all wagons." << endl;
}
