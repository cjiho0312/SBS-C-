#include <iostream>

using namespace std;


void Swap(int& x, int& y)
{
	// call by reference 주소 값의 복사 -> 원래 값이 영향을 받음.
	// 오리지널 값을 유지하고 싶으면 const int & x 로 적으면 됨.
	int temp = x;
	x = y;
	y = temp;
}

class GameObject
{
#pragma region 접근 지정자
	// 클래스 내부에 포함되어있는 속성에 접근 범위를 제한하는 지정자입니다.

	// public : 클래스 내부와 자기가 상속하고 있는 클래스, 그리고 클래스 외부에서도 접근 허용.
	// protected : 클래스 내부와 자기가 상속하고 있는 클래스까지만 접근 허용.
	// private : 클래스 내부에서만 접근 허용.
#pragma endregion

private:
	int x = 0;
	int y = 0;
	int z = 0;

protected:
	static int count;
	
public:
	void SetX(int number)
	{
		if (number >= 100)
		{
			cout << "Exeception" << endl;
		}
		else
		{
			x = number;
		}
	} 
	void SetY(int number)
	{
		if (number >= 100)
		{
			cout << "Exeception" << endl;
		}
		else
		{
			y = number;
		}
	}
	void SetZ(int number)
	{
		if (number >= 100)
		{
			cout << "Exeception" << endl;
		}
		else
		{
			z = number;
		}
	}

	const int& GetX() // 반환 코드를 쓸 때에는 안정성을 위해 const를 붙여주는 것이 좋다.
	{
		return x;
	}
	const int& GetY() 
	{
		return y;
	}
	const int& GetZ() 
	{
		return z;
	}

	void Increase()
	{
		count = count + 1;
	}
};
int GameObject::count = 1;


int main()
{
#pragma region 참조자
	// 하나의 변수에 또 다른 이름을 지정하는 지정자입니다.

	/*
	int left = 10;
	int right = 20;

	Swap(left, right);

	cout << "left : " << left << endl;
	cout << "right : " << right << endl;
	*/

	// 참조자를 사용하면 복사 비용을 줄일 수 있어 유용합니다.
#pragma endregion


#pragma region 클래스
	// 사용자 정의 자료형으로 속성과 함수가 포함되어 있으며,
	// 클래스를 통해 객체를 생성하여 접근하고 사용하는 집합체입니다.

	/*
	GameObject gameObject1;

	gameObject1.SetX(10);
	gameObject1.SetY(20);
	gameObject1.SetZ(30);

	cout << "gameObject1.x : " << gameObject1.GetX() << endl;
	cout << "gameObject1.y : " << gameObject1.GetY() << endl;
	cout << "gameObject1.z : " << gameObject1.GetZ() << endl;
	*/

	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의 메모리 영역에 포함되지만,
	// 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않습니다.
#pragma endregion


	return 0;
}