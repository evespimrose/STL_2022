//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 31일 목요일
// 수78목23 (5주 1일)
//
// RVO(Return value optimization), Copy Ellision
// 
// 컨테이너 -> Containers are objects that store other objects
// 
// 컨테이너
// Sequence container
//		array				- 유일하게 원소 갯수가 고정됨.
//		vector				- 
//		deque
//		foward_list
//		list
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] 키보드에서 입력하는 단어를 모두 읽어라. 입력이 끝나면 오름차순으로 정렬해서 출력해라.

int main()
{
	vector<string> v;

	string s;

	while (cin >> s)
	{
		v.push_back(s);
	}

	// 내림차순 정렬한다.  (lexicorgraphical comparison)
	sort(v.begin(), v.end(), [](const string& a, const string& b) {return a > b; });

	for (string s : v)
		cout << s << '\t';

	//save("소스.cpp");
}