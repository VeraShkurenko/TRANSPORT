#pragma once
#include "GroundTransport.h"

using namespace std;

class Railway : public GroundTransport 
{
private:
    string locomotiveType;
    int numOfWagons;

public:
    Railway(const string& n, int spd, float wgt, const string& terrain, const string& locoType, int wagons);
    void CoupleWagons();
    void UncoupleWagons();
};
