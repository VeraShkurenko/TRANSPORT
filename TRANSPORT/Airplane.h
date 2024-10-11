#pragma once
#include "AirTransport.h"

using namespace std;

class Airplane : public AirTransport 
{
private:
    string engineType;
    float wingSpan;

public:
    Airplane(const string& n, int spd, float wgt, float rng, float alt, const string& engType, float ws);
    void Cruise();
    void Refuel();
};
