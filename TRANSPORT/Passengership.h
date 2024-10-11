#pragma once
#include "WaterTransport.h"

class Passengership : public WaterTransport
{
private:
    int numberOfDecks;
    int engineType;

public:
    Passengership(string n, int spd, float wgt, string cap, int decks, int engType);
    void BoardPassengers();
    void DisembarkPassengers();
};