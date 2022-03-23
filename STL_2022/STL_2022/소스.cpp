//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 23일 수요일
// 수78목23 (3주 2일)
// 
// 지난 시간 : RAII / stack unwinding
// 
// 이번 시간 : 호출가능(Callable) 타입 -  예제는 정렬(sort)
// 자원을 관리하는 클래스를 만들어 관찰하면서 - 컨테이너 / 반복자 / 알고리즘
// String 클래스를 만들어 나가면서 STL을 이해해본다.
// 
//----------------------------------------------------------------------------------------

#include <iostream>

#include "save.h"

using namespace std;

// [문제] 

void f()
{
	cout << "함수가 호출되었다" << endl;
}

int main()
{
	f();

	// f의 자료형을 출력하라.
	cout << typeid(f).name() << endl;
	cout << addressof(f) << endl;
	cout << addressof(main) << endl;

	//save("소스.cpp");
}