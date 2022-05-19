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
#include <string>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 앞이 T인 원소가 몇 개인가?
//

int main()
{
	string s1{ "abcdefghij" };
	string s2{ "abcdfghijklll" };

	auto [첫인자, 끝인자] = mismatch(s1.begin(), s1.end(), s2.begin(), s2.end());

	string s3{ 첫인자, s1.end()};

	string s4{ 끝인자, s2.end() };

	cout << "결과 - " << s3 << ", " << s4 << endl;

	//save("소스.cpp");
}