#pragma once
#include <iostream>
using namespace std;

class Resource
{
public :
	Resource();
	void Share(Resource& other);
	~Resource();
};

