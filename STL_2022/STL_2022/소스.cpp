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
#include <functional>
#include <string>

#include "save.h"
#include "STRING.h"

using namespace std;

// [문제] main()이 문제없이 실행되도록 class STRING을 코딩하라.
// special 함수는 동작을 관찰하도록 cout으로 메모리와 동작을 코딩한다.
// 객체 생성 시 고유번호를 갖도록 한다.

int main()
{
	string s;
	
	STRING a{ "2022 1학기" };
	STRING b{ "STL" };

	cout << a << endl;
	cout << b << endl;

	//save("소스.cpp");
}