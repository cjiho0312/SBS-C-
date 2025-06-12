#pragma once
#include "vehicle.h"

class Boat : public vehicle
{
private:
	float fuel;

public:
	Boat();
	virtual ~Boat();
};

