#pragma once
#include "AirTransport.h"

class Airship : public AirTransport 
{
private:
    string gasType;
    float balloonVolume;

public:
    Airship(string n, int spd, float wgt, float rng, float alt, string gType, float vol);
    void Inflate();
    void Deflate();
};