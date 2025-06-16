#pragma once
#include "Paint.h"



class Brush : public Paint
{
protected:

public:
	virtual void Draw() override
	{
		cout << "Drawing with a brush..." << endl;
	}
	virtual ~Brush() override
	{
		cout << "Release Brush" << endl;
	}
};

