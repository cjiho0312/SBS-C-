#include <iostream>

using namespace std;

/* 과제 1
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
*/

/* 과제 2
class Player
{
private:
    static int playerCount; // 정적 멤버 변수: 전체 플레이어 수

public:
    Player()
    {
        playerCount++;
    }

    ~Player()
    {
        playerCount--;
    }


    static int GetPlayerCount() // 정적 멤버 함수: 전체 플레이어 수 반환
    {
        return playerCount;
    }
};

int Player::playerCount = 0; // 정적 멤버 변수 정의. 클래스 외부에서만 가능.


#pragma region 정적 멤버 함수
    // static 키워드로 선언된 클래스의 함수이며,
    // 객체를 생성하지 않아도 클래스 이름으로 직접 호출이 가능합니다.
    
    // 이 함수는 객체가 없기 때문에 함수 내부에서 일반 멤버 변수/함수를 직접 사용할 수 없지만,
    // 정적 멤버 변수는 사용할 수 있습니다.
    
    // private 인 멤버 변수들은 멤버 함수들에서만 접근이 가능하지만,
    // static 멤버 함수를 통해서 private한 static 멤버 변수에
    // 간접 접근할 수 있도록 구현할 수 있습니다.

    // 객체를 생성하지 않으므로, this 포인터를 가지지 않습니다.

int main()
{
    cout << "현재 플레이어 수: " << Player::GetPlayerCount() << endl;

    Player p1;
    Player p2;

    cout << "현재 플레이어 수: " << Player::GetPlayerCount() << endl;

    {
        Player p3;
        cout << "현재 플레이어 수: " << Player::GetPlayerCount() << endl;
    } // p3 소멸됨

    cout << "현재 플레이어 수: " << Player::GetPlayerCount() << endl;

    return 0;
}


#pragma endregion
*/


/*
class Player
{
private:
    int hp;
    int mp;

public:
    // 생성자에서 이니셜라이저 리스트 사용
    Player(int h, int m) : hp(h), mp(m)
    {
        cout << "Player 생성됨! HP: " << hp << ", MP: " << mp << endl;
    }

    void printStatus()
    {
        cout << "현재 상태 - HP: " << hp << ", MP: " << mp << endl;
    }
};

int main()
{
#pragma region 멤버 이니셜 라이저
    // 객체의 멤버 변수를 초기화하는 데 사용되는 특별한 구문입니다.
    
    // 이니셜라이저는 생성자 함수의 몸체 부분에 진입하기 전에 멤버 변수를 초기화합니다.
    // 객체가 생성되는 동시에 멤버 변수가 초기화되므로,
    // 생성자 내에서 멤버 변수를 초기화하는 것보다 효율적입니다.

    Player p1(100, 50);
    p1.printStatus();

    // 멤버 이니셜라이저는 생성자의 선언과 정의 사이에 콜론(:)을 사용하여 작성합니다.
    // 각 멤버 변수는 콜론 다음에 멤버 변수의 이름과 초기화 값으로 구성됩니다.

    // 간단한 멤버 변수 초기화를 할 때,
    // const 변수나 참조 변수 초기화할 때,
    // 부모 클래스 생성자 호출할 때 사용합니다.

    return 0;
#pragma endregion
}
*/


int main()
{
#pragma region 단항 연산자, 이항 연산자
    // 단항 연산자.. 다양한 연산자 예제

#pragma endregion



}
