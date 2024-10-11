#pragma once
#include "WaterTransport.h"

using namespace std;

class Tanker : public WaterTransport 
{
private:
    string model;
    string cargoType;

public:
    Tanker(const string& n, int spd, float wgt, const string& cap, const string& mdl, const string& cargo);
    void LoadCargo();
    void UnloadCargo();
};
