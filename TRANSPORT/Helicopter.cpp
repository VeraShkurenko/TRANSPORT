#include "Helicopter.h"
#include <iostream>

Helicopter::Helicopter(const string& n, int spd, float wgt, float rng, float alt, float rotorDiam, int hoverTime)
    : AirTransport(n, spd, wgt, rng, alt), rotorDiameter(rotorDiam), maxHoverTime(hoverTime) {}

void Helicopter::Hover() {
    cout << name << " is hovering for " << maxHoverTime << " minutes." << endl;
}
