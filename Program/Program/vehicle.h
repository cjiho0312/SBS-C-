#pragma once
#include <iostream>

using namespace std;

class vehicle
{
protected:
	int speed;


public:
	vehicle();
	virtual ~vehicle();
	void Move();


};

