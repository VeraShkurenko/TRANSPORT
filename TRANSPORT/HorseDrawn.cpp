#include "HorseDrawn.h"
#include <iostream>

HorseDrawn::HorseDrawn(const string& n, int spd, float wgt, const string& terrain, const string& anim, int a): GroundTransport(n, spd, wgt, terrain), animal(anim), age(a) {}

void HorseDrawn::Harness() 
{
    cout << animal << " aged " << age << " is harnessed." << endl;
}
