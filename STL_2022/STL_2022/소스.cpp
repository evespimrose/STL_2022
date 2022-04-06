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
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] 

int main()
{
	//save("소스.cpp");

	vector<int> v;
	int i = 0;

	v.reserve(10);			// 10칸 예약

	size_t old_capacity = v.capacity();

	while (true)
	{
		v.push_back(++i);

		if (v.size() -1 == old_capacity)
		{
			cout << "벡터의 원소 수 : " << v.size() << endl << "원소의 위치 : " << v.data() << endl << "재할당 하지 않고 담을 수 있는 원소의 수(용량) : " << v.capacity() << endl << endl;
			old_capacity = v.capacity();
		}

	}
	
	
}