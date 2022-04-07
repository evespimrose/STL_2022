//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 4월 07일 목요일
// 수78목23 (6주 1일)
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
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] 

int main()
{
	관찰 = true;

	vector<STRING> v;

	v.reserve(10);

	v.emplace_back( "1234567" );

	v.emplace_back("1234567890");

	// 객체 생성 시 임시객체를 생성한 후 vector에서 size() = 1, capacity() = 1, 
	// sizeof(STRING)이 들어갈 메모리를 heap에 확보한 후 new로 만든 임시객체를 복사생성(deep_copy)해 추가한다.

	//save("소스.cpp");
}