//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 4월 06일 요일
// 수78목23 (5주 2일)
//
// RVO(Return value optimization), Copy Ellision
// 
// 컨테이너 -> Containers are objects that store other objects
// 
// 컨테이너
// Sequence container		- 임의의 위치에 원소의 값을 읽고 쓰거나 추가할 수 있다.
//		array				- 유일하게 원소 갯수가 고정됨.
//		vector				- 
//		deque
//		foward_list
//		list
// 
// 예정 - 중간시험 4.27(수) (8주 2일)
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] 

int main()
{
	관찰 = true;
	
	unique_ptr<STRING> p{ new STRING { "12345" } };
	STRING s{ "12345" };		// 생성위치가 다르다.

	//save("소스.cpp");
}