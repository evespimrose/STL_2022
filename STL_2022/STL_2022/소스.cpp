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
// 가장 많이 사용된 단어 순으로 출력하라.
//

int main()
{
	ifstream in{ "Frankenstein.txt" };
	vector<string> v{ istream_iterator<string>{in},{} };
	map<char, int> mc{};
	
	for (string s : v)
	{
		for (char c : s)
		{
			if (islower(c))
				mc[c]++;
		}
	}

	/*
	vector<pair<char, int>> sv{ mc.begin(),mc.end() };

	sort(sv.begin(), sv.end(), [](const pair<char, int>& a, const pair<char, int>& b) {return a.second > b.second; });

	for (auto [소문자, 갯수] : sv)
		cout << "[" << 소문자 << "] - " << 갯수 << endl;
	*/

	/*map<char, int, greater<int>> mcig{};

	for (auto [소문자, 갯수] : mc)
		mcig[소문자] = 갯수;

	for (auto [소문자, 갯수] : mcig)
		cout << "[" << 소문자 << "] - " << 갯수 << endl;*/

	map<string, int> si{};

	for (const string& s : v)
		si[s]++;

	multimap<int, string, greater<int>> sis{};
	for (auto [단어, 갯수] : si)
		sis.emplace(make_pair(갯수, 단어));

	//// 앞에서부터 20개만

	//auto p = sis.begin();
	//for (int i = 0; i < 20; ++i, ++p)
	//	cout << p->second << " - " << p->first << endl;

	// 뒤에서부터 20개만

	auto p = sis.rbegin();
	for (int i = 0; i < 20; ++i, ++p)
		cout << p->second << " - " << p->first << endl;

	// 단어 갯수가 75041개인지 검증한다.
	int cnt{};
	for (auto [갯수, 단어] : sis)
		cnt += 갯수;
	cout << cnt << endl;

	//save("소스.cpp");
}