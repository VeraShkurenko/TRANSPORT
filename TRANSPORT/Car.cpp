#include "Car.h"
#include <iostream>

Car::Car(const string& n, int spd, float wgt, const string& terrain, const string& mdl, const string& fuel): GroundTransport(n, spd, wgt, terrain), model(mdl), fuelType(fuel) {}

void Car::Refuel() 
{
    cout << model << " is refueled with " << fuelType << "." << endl;
}
