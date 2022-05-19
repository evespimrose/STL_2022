//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 19일 목요일
// 수78목23 (12주 1일)
// 
// 5월 25일 졸작 설명회(수 56교시)
// 5/30 ~ 6/20 지도교수 신청일
// 
// 알고리즘
//  - non-modifying sequence operation(원소를 수정하지 않는 알고리즘)
// 
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
// 앞이 T인 원소가 몇 개인가?
//

bool X(const STRING& str)
{
	if (*str.begin() == 'T')
		return true;
	return false;
}

int main()
{
	vector<STRING> v{ "Standard", "Template", "Library" };

	cout << count_if(v.begin(), v.end(), X) << endl;

	//save("소스.cpp");
}