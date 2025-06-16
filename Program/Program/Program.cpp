#include <iostream>
#include "Pencil.h"
#include "Brush.h"
#include "Vector2D.h"

using namespace std;

int main()
{
#pragma region 추상 클래스
	// 함수에 특정한 내용이 구현되어있지 않고
	// 선언만 되어있는 클래스입니다.

	/*
	Paint* paint = new Pencil;
	paint->Draw();
	delete paint;

	paint = new Brush;
	paint->Draw();
	delete paint;
	*/

	// 추상 클래스는 정의되어있지 않은 함수가 있으므로,
	// 객체를 생성할 수 없습니다.
#pragma endregion

#pragma region 연산자 오버로딩

	Vector2D point1D(3, 4);
	Vector2D point2D(1, 2);

	Vector2D direction = point1D + point2D;

	direction.Position();

#pragma endregion


	return 0;
}