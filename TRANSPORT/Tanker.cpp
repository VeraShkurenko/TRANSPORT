#include "Tanker.h"
#include <iostream>

Tanker::Tanker(const string& n, int spd, float wgt, const string& cap, const string& mdl, const string& cargo): WaterTransport(n, spd, wgt, cap), model(mdl), cargoType(cargo) {}

void Tanker::LoadCargo() 
{
    cout << model << " is loading cargo: " << cargoType << "." << endl;
}

void Tanker::UnloadCargo() 
{
    cout << model << " is unloading cargo: " << cargoType << "." << endl;
}
