#include <iostream>
#include <stack>
#include <queue>

using namespace std;


int main()
{
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


	return 0;
}