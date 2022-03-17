//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 17일 목요일
// 수78목23 (3주 1일)
// 
// - 지난 시간 배운 것 - 앞으로 int[100] 대신에 -> array<int,100> 사용하자
// - 오늘 알아본 것 - 앞으로 int* 대신에 -> unique_ptr<int> 사용하자
//					- int*가 new int[100] 대신에 -> unique_ptr<int[]> 사용하자 
//----------------------------------------------------------------------------------------

#include <iostream>
#include "save.h"

using namespace std;

// 메모리 관찰용 초미니 Dog를 만들자

struct Dog
{
	Dog() { cout << "Dog 생성자 호출" << endl; }
	~Dog() { cout << "Dog 소멸자 호출" << endl; }
};

// [문제] 
// 
// 

void f()
{
	throw 1;
}

int main()
{
	save("소스.cpp");

	/*for (int i = 0; i < 3; ++i)
	{
		Dog* p = new Dog;
		delete p;
	}*/
	unique_ptr<Dog[]>p{new Dog[3]};

	// 여기서 비정상 종료
	try
	{
		f();		// 예외를 던진다
	}
	catch (...)		// ... elipses
	{
		cout << "예외를 잡았다" << endl;
		return 0;
	}
}