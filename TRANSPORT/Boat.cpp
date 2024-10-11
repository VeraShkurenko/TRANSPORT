#include "Boat.h"

Boat::Boat(string n, int spd, float wgt, string cap, bool motor, string mType): WaterTransport(n, spd, wgt, cap), hasMotor(motor), motorType(mType) {}

void Boat::Row() 
{
    cout << "Rowing the boat " << name << endl;
}

void Boat::StartMotor() 
{
    if (hasMotor) {
        cout << "Starting the motor of the boat " << name << " (Type: " << motorType << ")" << endl;
    }
    else {
        cout << "This boat does not have a motor." << endl;
    }
}