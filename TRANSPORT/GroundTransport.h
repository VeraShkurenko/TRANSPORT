#pragma once
#include "Transport.h"

using namespace std;

class GroundTransport : public Transport
{
protected:
    string terrainType;

public:
    GroundTransport(const string& n, int spd, float wgt, const string& terrain);
    virtual void DriveOnTerrain();
};
