//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 4월 13일 수요일
// 수78목23 (6주 2일)
//
// RVO(Return value optimization), Copy Ellision
// 
// 컨테이너 -> Containers are objects that store other objects
// 
// 컨테이너
// Sequence container		- 임의의 위치에 원소의 값을 읽고 쓰거나 추가할 수 있다.
//		array				- 유일하게 원소 갯수가 고정됨.
//		vector				- 깊게 알아볼 가치가 있는 컨테이너
//		deque
//		foward_list
//		list
// 
// 예정 - 중간시험 4.20(수) (7주 2일)
// 시험시간 70분 1745~
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] vector의 중간에 원소를 추가한다.
// "4444" 앞에 "333"을 끼워넣어라.

int main()
{
	vector<STRING> v{ "1", "22", "4444", "55555" };

	//auto p = find_if(v.begin(), v.end(), [](vector<STRING>::iterator i) {
	//	return *i == static_cast <STRING>("4444");
	//	});

	// random access iterator

	v.insert(++++v.cbegin(), STRING{ "333" });

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}

	//save("소스.cpp");
}