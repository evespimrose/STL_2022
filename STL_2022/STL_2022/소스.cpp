//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 12일 목요일
// 수78목23 (11주 1일)
// 
// 5월 25일 졸작 설명회(수 56교시)
// 5/30 ~ 6/20 지도교수 신청일
// 
// Sequential Cntainer - array, vector, deque, fowardlist, list
// Associative Container - set, multi_set, map, multi_map
//	map<key, value, key_compare>
//		- 연관배열(associative array)로 사용할 수 있다.
// PHP?
// 
// unordered Associative Container - u_set, u_multiset, u_map, u_multimap
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <map>
#include <fstream>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 소설에 사용된 알파벳의 빈도수를 출력하라.
//

int main()
{
	// 이름과 전화번호 
	map<string, string> m;

	m.insert(pair("홍길동", "01012345678"));

	m["마우스"] = "12345678";				// 연관배열로 사용하는 것이 이해하기 편함. 집어 넣는데에 사용되기도 하고 읽을때 사용하기도 함.

	for (auto [이름, 번호] : m)
		cout << 이름 << " - " << 번호 << endl;

	save("소스.cpp");
}