//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 12�� �����
// ��78��23 (11�� 1��)
// 
// 5�� 25�� ���� ����ȸ(�� 56����)
// 5/30 ~ 6/20 �������� ��û��
// 
// Sequential Cntainer - array, vector, deque, fowardlist, list
// Associative Container - set, multi_set, map, multi_map
//	map<key, value, key_compare>
//		- �����迭(associative array)�� ����� �� �ִ�.
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

extern bool ����;

// [����]
// �� �Ҽ����� �� �ҹ����� �󵵸� ����.
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

	for (auto [�ҹ���, ����] : sv)
		cout << "[" << �ҹ��� << "] - " << ���� << endl;
	*/

	map<char, int, greater<int>> mcig{};

	for (auto [�ҹ���, ����] : mc)
		mcig[�ҹ���] = ����;

	for (auto [�ҹ���, ����] : mcig)
		cout << "[" << �ҹ��� << "] - " << ���� << endl;

	//save("�ҽ�.cpp");
}