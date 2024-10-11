#include "GroundTransport.h"
#include <iostream>

GroundTransport::GroundTransport(const string& n, int spd, float wgt, const string& terrain) : Transport(n, spd, wgt), terrainType(terrain) {}

void GroundTransport::DriveOnTerrain()
{
    cout << name << " is driving on " << terrainType << " terrain." << endl;
}
