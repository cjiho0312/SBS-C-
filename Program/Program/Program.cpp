#include <iostream>

using namespace std;

template <typename T> // 템플릿
bool Same(T left, T right) 
{
	// bool 자료형은 불리언(boolean) 값을 저장하는 데 사용되며,
	// true (참) 또는 false (거짓) 중 하나의 값을 가질 수 있습니다.
	
	cout << "left 의 값 : " << left << "\nright 의 값 : " << right << endl << endl;

	return left == right;

	// true는 1로, false는 0으로 대체될 수 있습니다.
}

template <> // 템플릿 특수화
bool Same(const char* left, const char* right)
{
	cout << "left 의 값 : " << left << "\nright 의 값 : " << right << endl << endl;

	return strlen(left) == strlen(right);
}

#define SIZE 5

template <typename T> // 클래스 템플릿
class Container
{
protected:
	int index;
	
	T list[SIZE];

public:
	Container()
	{ 
		index = 0;

		for (int i = 0; i < SIZE; i++)
		{
			list[i] = NULL;
		}
	}

	void Add(T data)
	{
		if (index <= SIZE)
		{
			list[index++] = data;
		}
		else
		{
			cout << "Out of range" << endl;
		}
	}

	const T& operator [] (int count)
	{
		return list[count];
	}
};

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 형식을
	// 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수 있는 기능입니다.
	
	/*
	cout << Same(3, 2) << endl << endl;

	cout << Same(2.5, 2.5) << endl << endl;

	cout << Same('A', 'B') << endl << endl;
	*/

	// template <typename T> 형식으로 작동합니다.
	// bool Same (T left, T right)
#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우
	// 특정한 자료형만 다른 형식으로 동작시키는 기능입니다.

	// cout << Same("ABC", "DEF") << endl << endl; // true

	// cout << Same("ABC", "DE") << endl << endl; // false

#pragma endregion

#pragma region 클래스 템플릿

	Container<int> container;

	container.Add(10);
	container.Add(20);
	container.Add(30);
	container.Add(40);
	container.Add(50);
	



#pragma endregion


	return 0;
}