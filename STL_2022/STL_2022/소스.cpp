//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 31일 목요일
// 수78목23 (5주 1일)
//
// RVO(Return value optimization), Copy Ellision
// 
// 컨테이너 -> Containers are objects that store other objects
// 
// 컨테이너
// Sequence container
//		array				- 유일하게 원소 갯수가 고정됨.
//		vector				- 
//		deque
//		foward_list
//		list
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <array>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] 

int main()
{	

	array<int, 10> a{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	cout << sizeof(a) << endl;		// int[10]이 차지하는 메모리와 같다.

	a.fill(333);

	// 원소를 출력하시오 - 반복자 버전
	{
		for (array<int, 10>::iterator p = a.begin(); p != a.end(); ++p)		//for (auto p = a.begin(); p != a.end(); ++p)
		{
			cout << *p << " ";
		}
		cout << endl;
	}


	//save("소스.cpp");
}