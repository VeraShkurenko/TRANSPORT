#include "Transport.h"
#include <iostream>

Transport::Transport(const string& n, int spd, float wgt): name(n), speed(spd), weight(wgt) {}

void Transport::Move() 
{
    cout << name << " is moving at speed " << speed << " km/h." << endl;
}

void Transport::Stop() 
{
    cout << name << " has stopped." << endl;
}
