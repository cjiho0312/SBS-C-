#include <iostream>
#include "../Program/Scooter.h"
#include "../Program/Boat.h"
#include "../Program/Bicycle.h"

using namespace std;

/*
class Monster
{
protected:
	int health;
	int defence;
};

class Goblin : public Monster
{
private:
	int attack;

public:
	Goblin()
	{
		attack = 30;
		health = 100;
		defence = 5;
	}

	void Stats()
	{
		cout << "Attack : " << attack << endl;
		cout << "Health : " << health << endl;
		cout << "Defence : " << defence << endl;
		cout << endl;
	}

};

class Golem : public Monster
{
private:
	int attack;

public:
	Golem()
	{
		attack = 55;
		health = 200;
		defence = 10;
	}

	void Stats()
	{
		cout << "Attack : " << attack << endl;
		cout << "Health : " << health << endl;
		cout << "Defence : " << defence << endl;
		cout << endl;
	}
};

class Slime : public Monster
{
public:
	Slime()
	{
		health = 50;
		defence = 1;
	}

	void Stats()
	{
		cout << "Health : " << health << endl;
		cout << "Defence : " << defence << endl;
		cout << endl;
	}
};
*/

int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정해주는 기능입니다.

	/*
	Slime slime;
	Goblin goblin;
	Golem golem;

	slime.Stats();
	goblin.Stats();
	golem.Stats();

	cout << "Slime의 크기 : " << sizeof(slime) << endl;
	cout << "Goblin의 크기 : " << sizeof(goblin) << endl;
	cout << "Golem의 크기 : " << sizeof(golem) << endl;
	*/

	Scooter scooter;
	Boat boat;
	Bicycle bicycle;

	scooter.Move();
	boat.Move();
	bicycle.Move();

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
	// 속성을 사용할 수 없으며, 하위 클래스틑 상위 클래스의
	// 메모리를 포함한 상태로 메모리의 크기가 할당됩니다.
#pragma endregion

	return 0;
}