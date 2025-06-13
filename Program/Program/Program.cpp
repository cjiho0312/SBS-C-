#include <iostream>
#include "Potion.h"
#include "Bandage.h"
#include "Lantern.h"

using namespace std;


void Square(int x)
{
	cout << x * x << endl;
	cout << "x의 크기 : " << sizeof(x) << endl;
}

void Square(double x)
{
	cout << x * x << endl;
	cout << "x의 크기 : " << sizeof(x) << endl;
}


int main()
{
#pragma region 다형성
	// 서로 다른 객체가 동일한 기능을 서로 다른 방법으로
	// 처리할 수 있는 작업입니다.

#pragma region 함수의 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의 수로 구분하여
	// 여러 개를 선언할 수 있는 기능입니다.

	/*
	Square(4); // x가 정수일 경우 위의 Square 함수로 이동.
	Square(2.5); // x가 실수인 경우 아래 Square 함수로 이동.
	*/

	// 함수의 오버로딩의 경우 함수의 매개변수에 전달하는 인수의 형태를 보고
	// 호출하므로, 반환형으로 함수의 오버로딩은 생성할 수 없습니다.

#pragma endregion

#pragma region 함수의 오버라이딩
	// 상위 클래스에 있는 함수를 하위 클래스에서 재정의하여 사용하는 기능입니다.

	/*
	Potion potion;
	Bandage bandage;
	Lantern lantern;

	expendables* inventory[3];

	inventory[0] = &potion;
	inventory[1] = &bandage;
	inventory[2] = &lantern;

	for (int i = 0; i < 3; i++)
	{
		inventory[i]->Use();
	}

	cout << "\nPotion 객체의 크기 : " << sizeof(potion) << endl;
	cout << "bandage 객체의 크기 : " << sizeof(bandage) << endl;
	cout << "lantern 객체의 크기 : " << sizeof(lantern) << endl;
	*/

	// 함수의 오버라이딩은 상속 관계에서만 이루어지며,
	// 하위 클래스에서 함수를 재정의할 때 상위 클래스의 함수 형태와 일치해야 합니다.
#pragma endregion

#pragma region 가상 함수
// 가상 함수 테이블을 사용하여 실행 시간에 호출되는 함수를 결정하며,
// 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때 가상 함수를 가리키는 포인터가 추가됩니다.

	
	expendables* inventory[3];

	int num = 0;

	for (int i = 0; i < 5; i++)
	{
	cout << "1-3 중의 숫자를 입력하세요." << endl;
	cin >> num;

	if (num == 1) // potion 생성 및 사용
	{
		Potion potion;

		inventory[0] = &potion;
		inventory[0]->Use();
		delete[] inventory;
	}

	if (num == 2)
	{
		Bandage bandage;

		inventory[1] = &bandage;
		inventory[1]->Use();
		delete[] inventory;

	}

	if (num == 3)
	{
		Lantern lantern;

		inventory[2] = &lantern;
		inventory[2]->Use();
		delete[] inventory;

	}
	
	if (num < 1 || num > 3)
	{
		cout << "올바른 숫자를 입력하세요." << endl;
		i = i - 1;
	}

	}

// 가상 함수는 실행 시간에 상위 클래스에 대한 참조로 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
// "virtual" 키워드를 사용합니다.
#pragma endregion

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을 하지 않고,
	// 실행 시간에 함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.
#pragma endregion



	return 0;
}