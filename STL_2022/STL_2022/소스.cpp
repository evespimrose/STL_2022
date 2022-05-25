//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 25일 수요일
// 수78목23 (12주 1일)
// 
// 5월 25일 졸작 설명회(수 56교시)
// 5/30 ~ 6/20 지도교수 신청일
// 
// 알고리즘
//  - non-modifying sequence operation(원소를 수정하지 않는 알고리즘)
// 
// 시험 - 15주 1일 : 6월 15일 수요일
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// copy는 왜 mutating 알고리즘인가?
//

int main()
{
	vector v{ 1,2,3,4,5 };
	// 목적지가 자기 자신이 될 수 있기 때문에 mutating 알고리즘이다.

	copy(v.begin(), v.end(), inserter(v, v.begin() + 1));

	for (int i : v)
		cout << i << " ";
	cout << endl;

	//save("소스.cpp");
}