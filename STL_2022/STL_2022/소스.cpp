//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 24일 목요일
// 수78목23 (4주 1일)
// 
// 지난 시간 : RAII / stack unwinding
// 
// 이번 시간 : 호출가능(Callable) 타입 -  예제는 정렬(sort)
// 자원을 관리하는 클래스를 만들어 관찰하면서 - 컨테이너 / 반복자 / 알고리즘
// String 클래스를 만들어 나가면서 STL을 이해해본다.
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <thread>
#include "save.h"

using namespace std;

// [문제] 

void jump()
{
	cout << "짬푸!" << endl;
}

void slide()
{
	cout << "슬라이드!" << endl;
}

int g;

int main()
{
	// 확인 : 함수의 이름은 함수가 기록되어 있는 CODE 세그먼트의 시작번지이다.
	// 함수들은 유사한 메모리에 기록되어 있음을 알 수 있다.

	cout << "main : " << addressof(main) << endl;
	cout << "save : " << addressof(save) << endl;
	cout << "jump : " << addressof(jump) << endl;
	cout << "slide : " << addressof(slide) << endl;

	int n;
	cout << "STACK : " << addressof(n) << endl;
	cout << "DATA : " << addressof(g) << endl;

	save("소스.cpp");
}