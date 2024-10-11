#pragma once
#include "WaterTransport.h"

class Boat : public WaterTransport 
{
private:
    bool hasMotor;
    string motorType;

public:
    Boat(string n, int spd, float wgt, string cap, bool motor, string mType);
    void Row();
    void StartMotor();
};