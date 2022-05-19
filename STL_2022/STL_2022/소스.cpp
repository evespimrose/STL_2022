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
#include <thread>
#include <format>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 전광판처럼 흘러가게 찍어보자.
//

int main()
{
	//save("소스.cpp");

	string str{ "[South Korea and Japan just don't get along. ]" };

	for (int i = 0; i < 12; ++i)
		cout << endl;

	while (true)
	{
		rotate(str.begin() + 1, str.begin() + 2, str.end() - 1);
		cout << format("{:^70}",str) << "\r";
		this_thread::sleep_for(100ms);
	}

}