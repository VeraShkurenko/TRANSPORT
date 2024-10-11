#pragma once
#include "AirTransport.h"

#include <iostream>
using namespace std;

class Helicopter : public AirTransport 
{
private:
    float rotorDiameter;
    int maxHoverTime;

public:
    Helicopter(const string& n, int spd, float wgt, float rng, float alt, float rotorDiam, int hoverTime);
    void Hover();
};
