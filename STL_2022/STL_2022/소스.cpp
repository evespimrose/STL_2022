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
#include <numeric>
#include <random>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

random_device rd;
default_random_engine dre{ rd() };

// [문제]
// 랜덤한 수 n개를 화면에 출력
//

int main()
{
	//vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// sample : 로또 번호뽑는 알고리즘

	vector<int> v(45);		// int{}를 45번 호출

	iota(v.begin(), v.end(), 1);

	//for (int i : v)
	//	cout << i << " ";
	//cout << endl;

	sample(v.begin(), v.end(), ostream_iterator<int>{cout, " "}, 6, dre);

	//save("소스.cpp");
}