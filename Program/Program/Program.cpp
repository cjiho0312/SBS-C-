#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>

using namespace std;


int main()
{
#pragma region 선형 컨테이너
	
#pragma region vector container
	// std::vector는 크기가 자동으로 조절되는 동적 배열로,
	// 요소를 순서대로 저장하고, 자동으로 메모리를 관리해주는 템플릿 클래스입니다.

	/*
	vector<int> vector;

	vector.reserve(10); // capacity(메모리)를 미리 확보해두어 불필요한 과정을 실행하지 않게 합니다.
	cout << "vector capacity : " << vector.capacity() << endl;

	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(50);

	// vector의 size는 줄어들지만 capacity는 변화하지 않습니다.
	// pop_back()은 단순히 마지막 요소를 제거하는 동작이며, 내부 메모리는 유지됩니다.

	vector.pop_back();
	vector.pop_back();

	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << endl;
	}
	*/
#pragma endregion

#pragma region list container
	// std::list는 이중 연결 리스트(doubly linked list)를 구현한 STL 컨테이너입니다.

	// 각 요소가 메모리 상에 연속적으로 저장되지 않고,
	// 각 요소가 이전 노드와 다음 노드를 가리키는 포인터(링크)를 갖고 연결된 구조입니다.

	// 빠른 삽입과 삭제가 가능하지만, 임의 위치 탐색은 느립니다.

	/*
	list<int> list;

	list.push_back(20);

	for (int element : list)
	{
		cout << element << " ";
	}
	cout << endl;


	list.push_back(30);

	for (int element : list)
	{
		cout << element << " ";
	}
	cout << endl;


	list.push_front(10);

	for (int element : list)
	{
		cout << element << " ";
	}
	cout << endl;


	list.pop_front();

	for (int element : list)
	{
		cout << element << " ";
	}
	cout << endl;


	list.assign(3, 10); 
	// 리스트의 모든 기존 요소를 제거하고, 3개의 요소를 새로 생성하여, 각각의 요소에 값 10을 할당합니다.

	for (int element : list)
	{
		cout << element << " ";
	}
	cout << endl << endl;


	cout << "list size : " << list.size() << endl;
	*/

#pragma endregion

#pragma region string
	// std::string은 문자열을 다루기 위한 클래스입니다.

	/*
	string content;

	cout << content.capacity() << endl; // 15의 메모리를 미리 잡아줌.

	content = "Battle Field 1";

	content.pop_back(); // 1 제거

	content.append("5"); // append 함수는 문자열 뒤에 다른 문자열이나 문자들을 덧붙이는 함수입니다.

	cout << content << endl;

	content = "League of Legend";

	cout << content.capacity() << endl; // 31

	cout << content << endl;
	*/

#pragma endregion

#pragma region 컨테이너 어댑터

#pragma region Stack
	// stack : 후입선출
	
	/*
	stack<int> stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	cout << "stack size : " << stack.size() << endl;

	while (stack.empty() == 0) // stack.empty() == false 와 같음.
	{
		cout << stack.top() << endl;
		stack.pop();
	}

	cout << "stack size : " << stack.size() << endl;
	*/

#pragma endregion

#pragma region Queue Container
	// queue : 선입선출

	/*
	queue<int> queue;

	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	queue.push(50);

	while (queue.empty() == 0)
	{
		cout << queue.front() << endl;
		queue.pop();
	}
	*/

#pragma endregion


#pragma endregion


#pragma endregion


	return 0;
}