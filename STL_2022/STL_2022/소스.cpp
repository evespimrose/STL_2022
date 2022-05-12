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
	map<string, int> m{};
	
	for (string s : v)
		m[s]++;

	cout << "���� �� �ܾ� - " << *max_element(v.begin(), v.end(), [](string a, string b) {return a.length() < b.length(); }) << endl;

	//save("�ҽ�.cpp");
}