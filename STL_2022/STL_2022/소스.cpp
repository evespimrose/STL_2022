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

	array<int, 10> a{ 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

	cout << a.max_size() << endl;

	save("소스.cpp");
}