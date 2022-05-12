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
#include <vector>
#include <map>
#include <fstream>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 이 소설에서 각 소문자의 빈도를 세라.
//

int main()
{
	ifstream in{ "Frankenstein.txt" };
	vector<string> v{ istream_iterator<string>{in},{} };
	map<string, int> m{};
	
	for (string s : v)
		m[s]++;

	cout << "가장 긴 단어 - " << *max_element(v.begin(), v.end(), [](string a, string b) {return a.length() < b.length(); }) << endl;

	//save("소스.cpp");
}