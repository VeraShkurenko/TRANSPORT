#include "Car.h"
#include "Railway.h"
#include "HorseDrawn.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "Tanker.h"
#include "Boat.h"
#include "Passengership.h"
#include "Airship.h"

int main() {
    Car myCar("Toyota", 120, 1.5, "asphalt", "Corolla", "Gasoline");
    myCar.Move();
    myCar.Refuel();

    Railway myTrain("Express", 150, 500, "railway", "Electric", 10);
    myTrain.Move();
    myTrain.CoupleWagons();

    HorseDrawn myHorseCart("Horse Cart", 15, 300, "dirt", "Horse", 5);
    myHorseCart.Move();
    myHorseCart.Harness();

    Airplane myPlane("Boeing 747", 900, 80000, 6000, 35000, "Jet", 68);
    myPlane.Move();
    myPlane.Cruise();

    Helicopter myHelicopter("Apache", 300, 5000, 1500, 5000, 14, 30);
    myHelicopter.Move();
    myHelicopter.Hover();

    Tanker myTanker("Oil Tanker", 40, 100000, "water", "Tanker", "Oil");
    myTanker.Move();
    myTanker.LoadCargo();

    Boat myBoat("Sailboat", 15, 3000, "water", true, "Diesel");
    myBoat.Move();
    myBoat.Row();

    Passengership myShip("Cruise Ship", 30, 200000, "water", 5, 1);
    myShip.Move();
    myShip.BoardPassengers();

    Airship myAirship("Zeppelin", 50, 50000, 3000, 5000, "Helium", 10000);
    myAirship.Move();
    myAirship.Inflate();

    return 0;
}
