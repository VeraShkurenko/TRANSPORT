#pragma once
#include "GroundTransport.h"

using namespace std;

class HorseDrawn : public GroundTransport 
{
private:
    string animal;
    int age;

public:
    HorseDrawn(const string& n, int spd, float wgt, const string& terrain, const string& anim, int a);
    void Harness();
};
