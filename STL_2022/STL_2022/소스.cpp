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
#include "save.h"

using namespace std;

// [문제] 
// 호출가능(Callable) 타입
// 호출가능한 타입은 어떤 것들이 있나?
// 1. 함수 - CODE 세그먼트에 기록된 명령어 집합의 시작번지
// 2. 람다 - 이름 없는 함수
//

class Cat {};

auto x2 = []() {
	cout << "안녕! 난 람다야! 하위!" << endl;
};

int main()
{
	class Dog {};




	//lambda
	auto x = []() {
		cout << "안녕! 난 람다야! 하위!" << endl;
	};

	auto x1 = []() {
		cout << "안녕! 난 람다야! 하위!" << endl;
	};

	cout << typeid(Dog).name() << endl;
	// class `int __cdecl main(void)'::`2'::Dog
	cout << typeid(Cat).name() << endl;
	// class Cat
	cout << typeid(x).name() << endl;
	//class `int __cdecl main(void)'::`2'::<lambda_1>
	cout << typeid(x1).name() << endl;
	//class `int __cdecl main(void)'::`2'::<lambda_2>
	cout << typeid(x2).name() << endl;
	//class x2::<lambda>

	// 람다함수는 클래스로 구현되어 있음.


	//save("소스.cpp");
}