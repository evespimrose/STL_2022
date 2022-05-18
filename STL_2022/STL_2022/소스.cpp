//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 18일 수요일
// 수78목23 (11주 2일)
// 
// 5월 25일 졸작 설명회(수 56교시)
// 5/30 ~ 6/20 지도교수 신청일
// 
// Sequential Cntainer - array, vector, deque, fowardlist, list
// Associative Container - set, multi_set, map, multi_map
// 
// Unordered Associative Container - u_set, u_multiset, u_map, u_multimap
//  - 어떻게 메모리가 구성되어 있나? - 그림으로 알아본다.
//  - 내가 만든 STRING을 원소로 순서없는 set의 원소가 되려면?
// 
// 컨테이너의 찾기 실력 검증 - vector / set / unordered_set
// int 
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <array>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <random>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 정수 1000만개 저장할 메모리
//
array<int, 1000'0000> numbers;

// 컨테이너에 있나 찾아볼 int 값들
array<int, 10'000> toFind;

default_random_engine dre;
uniform_int_distribution uid{ 1,1'0000'0000 };

int main()
{
	//save("소스.cpp");

	// 천만개 랜덤생성
	for (int& n : numbers)
		n = uid(dre);
	// 천개 랜덤생성
	for (int& n : toFind)
		n = uid(dre);

	{
		auto time = clock();

		int cnt{};
		// 벡터의 찾기실력을 알아본다.
		vector<int> v{ numbers.begin(),numbers.end() };

		cout << "벡터의 원소 개수 - " << v.size() << endl;
		cout << "걸린 시간 - " << (double)(clock() - time) / CLOCKS_PER_SEC << "초" << endl << endl;

		time = clock();

		for (int n : toFind)
		{
			auto p = find(v.begin(), v.end(), n);
			if (p != v.end())
				cnt++;
		}
		cout << "찾아야 할 int 개수 - " << toFind.size() << endl;
		cout << "벡터에서 찾은 개수 - " << cnt << endl << endl;
		cout << "걸린 시간 (O(n)) - " << (double)(clock() - time) / CLOCKS_PER_SEC << "초" << endl << endl;
	}
	{
		auto time = clock();
		int cnt{};
		// 셋의 찾기실력을 알아본다.
		set<int> s{ numbers.begin(),numbers.end() };

		cout << "셋의 원소 개수 - " << s.size() << endl;
		cout << "걸린 시간 - " << (double)(clock() - time) / CLOCKS_PER_SEC << "초" << endl << endl;

		time = clock();

		for (int n : toFind)
		{
			if (s.contains(n))
				cnt++;
		}
		cout << "찾아야 할 int 개수 - " << toFind.size() << endl;
		cout << "셋에서 찾은 개수 - " << cnt << endl << endl;
		cout << "걸린 시간 (O(log n)) - " << (double)(clock() - time) / CLOCKS_PER_SEC << "초" << endl << endl;
	}
	{
		auto time = clock();
		int cnt{};
		// 언오더드셋의 찾기실력을 알아본다.
		unordered_set<int> us{ numbers.begin(),numbers.end() };

		cout << "언오더드셋의 원소 개수 - " << us.size() << endl;
		cout << "걸린 시간 - " << (double)(clock() - time) / CLOCKS_PER_SEC << "초" << endl << endl;

		time = clock();

		for (int n : toFind)
		{
			if (us.contains(n))
				cnt++;
		}
		cout << "찾아야 할 int 개수 - " << toFind.size() << endl;
		cout << "언오더드셋에서 찾은 개수 - " << cnt << endl << endl;
		cout << "걸린 시간 (O(1)) - " << (double)(clock() - time) / CLOCKS_PER_SEC << "초" << endl << endl;
	}

	{
		auto time = clock();

		int cnt{};
		// 정렬된 벡터의 찾기실력을 알아본다.
		vector<int> v{ numbers.begin(),numbers.end() };
		sort(v.begin(), v.end());

		cout << "정렬된 벡터의 원소 개수 - " << v.size() << endl;
		cout << "걸린 시간 - " << (double)(clock() - time) / CLOCKS_PER_SEC << "초" << endl << endl;

		time = clock();

		for (int n : toFind)
		{
			if (binary_search(v.begin(), v.end(), n))
				cnt++;
		}
		cout << "찾아야 할 int 개수 - " << toFind.size() << endl;
		cout << "정렬된 벡터에서 찾은 개수 - " << cnt << endl << endl;
		cout << "걸린 시간 (O(log n)) - " << (double)(clock() - time) / CLOCKS_PER_SEC << "초" << endl << endl;
	}

}