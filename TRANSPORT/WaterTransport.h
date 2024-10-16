#pragma once
#include "Transport.h"

using namespace std;

class WaterTransport : public Transport
{
protected:
    string capacity;

public:
    WaterTransport(const string& n, int spd, float wgt, const string& cap);
    virtual void Sail();
    virtual void Dock();
};
