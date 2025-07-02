#include <iostream>
#include "Packet.h"
#include "Resource.h"

using namespace std;


int main()
{
#pragma region 메모리 소유권
	/*
	int* ptr2;

	{
		int* ptr1 = new int; // 동적 할당

		ptr2 = ptr1; // 메모리를 ptr2에게 넘겨줌
	} // ptr1 삭제됨
	
	*ptr2 = 100;

	delete ptr2;
	*/
#pragma endregion

#pragma region Smart Pointer
	
#pragma region unique_pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록 되어있는 포인터입니다.

	/*
	unique_ptr<Packet> ptr = make_unique<Packet>(); // 동적 할당

	ptr->Receive();

	unique_ptr<Packet> reference = std::move(ptr); // 이동시키기 위해 move 사용
	
	ptr->Receive();
	*/

#pragma endregion

#pragma region shared_pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 자원 객체를 필요로 하지 않을 때
	// 자원 객체를 해제하도록 설계되어있는 포인터입니다.

	shared_ptr<Resource> oil = make_shared<Resource>();
	shared_ptr<Resource> mineral = make_shared<Resource>();

	oil->Share(*mineral);
	mineral->Share(*oil);

	cout << "oil의 reference count : " << oil.use_count() << endl;
	cout << "mineral의 reference count : " << mineral.use_count() << endl;

#pragma endregion


#pragma endregion


	return 0;
}