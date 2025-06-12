#include "vehicle.h"

vehicle::vehicle()
{
	cout << "Created Vehicle\n" << endl;
}

void vehicle::Move()
{
	cout << "Vehicle Move..." << endl;
}

vehicle::~vehicle()
{
	cout << "Destroy vehicle" << endl;
}