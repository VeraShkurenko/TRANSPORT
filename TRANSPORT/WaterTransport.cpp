#include "WaterTransport.h"
#include <iostream>

WaterTransport::WaterTransport(const string& n, int spd, float wgt, const string& cap): Transport(n, spd, wgt), capacity(cap) {}

void WaterTransport::Sail() 
{
    cout << name << " is sailing." << endl;
}

void WaterTransport::Dock() 
{
    cout << name << " is docking." << endl;
}
