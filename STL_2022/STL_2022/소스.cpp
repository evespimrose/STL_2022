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
#include <random>
#include <array>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 유니폼분포가 진짜 유니폼한가?
// 결과를 출력해서 알아본다.
//

array<int, 10000000> a;
default_random_engine dre;
uniform_int_distribution uid{ 1, 10000000 };

int main()
{
	for (int& n : a)
		n = uid(dre);

	// 이때 a의 값을 10 구간으로 나누어 갯수를 센 후 출력하라.
	map<int, int> iim;
	
	for (int& n : a)
		iim[n / 1000000]++;

	for (auto [구간, 갯수] : iim)
		cout << 구간 << " - " << 갯수 << endl;
		
	//save("소스.cpp");
}