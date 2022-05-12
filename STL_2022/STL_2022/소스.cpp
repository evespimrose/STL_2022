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
#include <random>
#include <array>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// ������������ ��¥ �������Ѱ�?
// ����� ����ؼ� �˾ƺ���.
//

array<int, 10000000> a;
default_random_engine dre;
uniform_int_distribution uid{ 1, 10000000 };

int main()
{
	for (int& n : a)
		n = uid(dre);

	// �̶� a�� ���� 10 �������� ������ ������ �� �� ����϶�.
	map<int, int> iim;
	
	for (int& n : a)
		iim[n / 1000000]++;

	for (auto [����, ����] : iim)
		cout << ���� << " - " << ���� << endl;
		
	//save("�ҽ�.cpp");
}