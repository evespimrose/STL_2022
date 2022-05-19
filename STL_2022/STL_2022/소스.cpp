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
// v에 STRING이 있는데 첫글자가 다 대문자인가?
//

template<class InputIt, class Undefined>
bool allof(InputIt begin, InputIt end, Undefined un)
{
	//return find_if_not(begin, end, un) == end;
	while (begin != end)
	{
		if (!un(*begin))
			retrun false;
		begin++;
	}
	return true;
}

int main()
{
	vector<STRING> v{ "Standard", "Template", "Library" };

	bool res = all_of(v.cbegin(), v.cend(), [](const STRING& str) {return isupper(*str.begin()); });

	if (res)
		cout << "첫 글자 다 대문자" << endl;
	else
		cout << "소문자로 시작하는 단어도 있다" << endl;

	//save("소스.cpp");
}