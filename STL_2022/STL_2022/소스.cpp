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

// [문제] 키보드에서 int를 입력받아라.
// 합계와 평균을 화면에 출력하라.

int main()
{
	save("소스.cpp");

	vector<int> iv{};

	int i;

	while (cin >> i)
		iv.push_back(i);

	long long sum{};

	for (auto i = iv.begin(); i != iv.end(); ++i)
	{
		sum += *i;
	}

	cout << "합계 : " << sum << endl << "평균 : " << sum / iv.size() << endl;

}