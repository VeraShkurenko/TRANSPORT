#pragma once
#include <iostream>
#include <string>

using namespace std;

class Transport 
{
protected:
    string name;
    int speed;
    float weight;

public:
    Transport(const string& n, int spd, float wgt);
    virtual ~Transport() = default;

    virtual void Move();
    virtual void Stop();
};
