#pragma once
#include "Transport.h"

using namespace std;

class AirTransport : public Transport 
{
protected:
    float range;
    float maxAltitude;

public:
    AirTransport(const string& n, int spd, float wgt, float rng, float alt);
    virtual void TakeOff();
    virtual void Land();
};
