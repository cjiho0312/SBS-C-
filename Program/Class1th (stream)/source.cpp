#include <iostream>

using namespace std;

int packet = 20;

namespace Module
{
	float time = 5.0f;

	void Function()
	{
		cout << "Module Function" << endl;
	}
}

namespace Library
{
	const char* manual = "manual";

	void Function()
	{
		cout << "Library Function" << endl;
	}
}

using namespace Library;

int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

	/*
	int count = 0; // 변수 count 정의

	std::cin >> count; // count 입력 받기

	for (int i = 1; i <= count; i++) // count 값만큼 반복
	{
		std::cout << "Play Station" << i << std::endl;
	}
	*/

	// 스트림은 운영체제에 의해 생성되며, 스트림 자체에
	// 버퍼라는 임시 메모리 공간이 존재합니다.
#pragma endregion


#pragma region 범위 지정 연산자
	// 여러 범위에서 사용하는 식별자를 구분하는 데 사용하는 연산자입니다.

	/*
	int packet = 10;

	std::cout << "packet 지역 변수의 값 : " << packet << std::endl;
	std::cout << "packet 전역 변수의 값 : " << ::packet << std::endl;
	*/

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가
	// 선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을 사용하는
	// 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않습니다.

	// 변수 앞에 "::"를 붙여 사용합니다.
#pragma endregion


#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

	/*
	Module::Function();
	::Function();
	*/

#pragma endregion

#pragma region 동적 할당

	/*
	int* pointer = new int;

	*pointer = 100;

	cout << "pointer가 가리키는 값 : " << *pointer << endl << endl;

	delete pointer;



	pointer = new int[5];

	*pointer = 10;

	for (int i = 0; i < 5; i++)
	{
		pointer[i] = (i + 1) * 10;
		cout << "pointer [" << i << "] = " << pointer[i] << endl;

	}

	delete [ ] pointer;
	*/


#pragma endregion

#pragma region 시퀀스 포인트
	// 앞의 연산이 모두 끝난 뒤, 다음 연산이 시작되는 지점입니다.

	// 세미콜론(;) : 문장의 끝을 나타내며, 이전 문장이 완료된 후 다음 문장이 시작됨니다.
	// 함수 호출 : 함수가 호출되면, 함수 내부의 연산이 완료된 후 다음 코드가 실행됩니다.
	// 조건문 : if문이나 switch문 등에서 조건이 평가된 후, 해당 블록의 코디가 실행됩니다.
	// 반복문 : for, while 등의 반복문에서 각 반복이 끝난 후 다음 반복이 시작됩니다.
	// 논리 AND(&&) : 왼쪽 피연산자가 참인 경우에만 오른쪽 피연산자를 평가합니다.
	// 논리 QR(||) : 왼쪽 피연산자가 거짓인 경우에만 오른쪽 피연산자를 평가합니다.
	// 조건 연산자(? :) : 조건이 참인 경우 왼쪽 피연산자를, 거짓인 경우 오른쪽 피연산자를 평가합니다.
	// 쉽표(,) 연산자 : 왼쪽 피연산자를 먼저 평가한 후, 오른쪽 피연산자를 평가합니다.

	// 시퀀스 포인트는 프로그램의 실행 순서를 정의하고,
	// 변수의 값을 안전하게 읽고 쓸 수 있는 지점을 제공합니다.
#pragma endregion



}