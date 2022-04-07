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

// [문제] v에서 짝수만 제거하라.
// 결과를 출력하시오.

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };

	for (int i : v)
		cout << i << " ";
	cout << endl;

	v.erase(remove_if(v.begin(), v.end(), [](int num) {return !(num & 1); }), v.end());

	for (int i : v)
		cout << i << " ";
	cout << endl;

	//save("소스.cpp");
}