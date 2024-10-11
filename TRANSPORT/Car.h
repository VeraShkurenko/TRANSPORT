#pragma once
#include "GroundTransport.h"

using namespace std;

class Car : public GroundTransport 
{
private:
    string model;
    string fuelType;

public:
    Car(const string& n, int spd, float wgt, const string& terrain, const string& mdl, const string& fuel);
    void Refuel();
};
