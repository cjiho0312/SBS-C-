#pragma once
#include <iostream>
using namespace std;


class Vector2D
{
protected:
	int x;
	int y;

public:
	Vector2D(int x, int y);

	void Position() const
	{
		cout << "x의 값 : " << x << endl;
		cout << "y의 값 : " << y << endl;
	}

	const Vector2D& operator + (const Vector2D& vector2D)
	{
		Vector2D clone(this->x + vector2D.x, this->y + vector2D.y);
		
		return clone;
	}

	void print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

