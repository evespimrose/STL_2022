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
#include <fstream>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 프랑켄슈타인.txt는 모두 몇 개의 unique한 word로 이루어졌나?
//

int main()
{
	ifstream in{ "Frankenstein.txt" };

	vector<string> v{ istream_iterator<string>{in},{} };

	cout << "중복 단어 제거 전 - " << v.size() << endl;

	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()),v.end());

	cout << "중복 단어 제거 후 - " << v.size() << endl;

	//save("소스.cpp");
}