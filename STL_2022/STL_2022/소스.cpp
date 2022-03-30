//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 30일 수요일
// 수78목23 (4주 2일)
//
// 자원을 관리하는 클래스를 만들어 관찰하면서 - 컨테이너 / 반복자 / 알고리즘
// RVO(Return value optimization), Copy Ellision
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
	관찰 = true;
	STRING a{ "2022 1학기 " };
	STRING b{ "STL" };
	STRING c = a + b;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	//save("소스.cpp");
}