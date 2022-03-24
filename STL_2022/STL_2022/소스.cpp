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
#include <algorithm>
#include <array>

#include "save.h"

using namespace std;

// [문제] 
// 호출가능(Callable) 타입
// 호출가능한 타입은 어떤 것들이 있나?
// 1. 함수 - CODE 세그먼트에 기록된 명령어 집합의 시작번지
// 2. 람다 - 이름 없는 함수
// 3. 클래스 객체 - fuchtion call operator ()을 오버로딩한 클래스
//

class Dog {
public:
	bool operator()(int a, int b) {
		cout << "Dog 호출" << endl;
		cout << a << " 비교 " << b << endl;
		return a > b;
	}
};

int main()
{
	array<int, 5> arr{1,3,5,2,4};

	sort(arr.begin(), arr.end(), Dog());
	for (int i : arr)
	{
		cout << i << " ";
	}
	cout << endl;

	//save("소스.cpp");
}