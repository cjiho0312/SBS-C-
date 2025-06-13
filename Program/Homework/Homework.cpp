#include <iostream>

using namespace std;

class Jump
{
public:
    void jump() {
        cout << "점프!" << endl;
    }
};

class Punch
{
public:
    void punch() {
        cout << "주먹 공격!" << endl;
    }
};

class Player : public Jump, public Punch
{
public:
    void Action()
    {
        cout << "액션 실행 중..." << endl;
        jump();   // Jump 클래스 기능
        punch(); // Punch 클래스 기능
    }
};


int main()
{
#pragma region 다중 상속
    // 하나의 클래스가 둘 이상의 부모 클래스로부터 상속을 받는 것을 다중 상속이라고 합니다.

    Player player;
    player.Action();

    // 여러 클래스의 기능을 하나의 클래스에서 통합할 수 있어 유연성은 높지만, 충돌 가능성이 있습니다.

#pragma region 다중 상속의 문제점
    // 1. 이름 충돌

    // 두 부모 클래스에 같은 이름의 함수나 멤버 변수가 있으면, 어떤 것을 쓸지 모호해집니다.
    // 범위 지정 연산자를 사용하면 이를 해결할 수 있습니다.

    // 2. 다이아몬드 상속

    // 같은 기반 클래스(Base class)를 여러 경로를 통해 중복 상속받는 구조입니다.
    // 하위 클래스에 같은 기반 클래스의 멤버가 두 번 상속되어 모호성이 발생하게 됩니다.
    // "virtual" 키워드를 사용한 가상 상속을 통해 문제를 해결할 수 있습니다.
#pragma endregion
#pragma endregion

    return 0;
}