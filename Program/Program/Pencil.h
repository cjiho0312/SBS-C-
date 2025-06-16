#pragma once
#include "Paint.h"


class Pencil : public Paint
{
protected:

public:
	virtual void Draw() override
	{
		cout << "Drawing with a pencil..." << endl;
	}
	virtual ~Pencil() override
	{
		cout << "Release Pencil" << endl;
	}

};

