#include <iostream>
#pragma once
using namespace std;

class Paint
{
protected:
	int thickness;

public:
	virtual void Draw() = 0; // ���� ���� �Լ�

	virtual ~Paint();

};

