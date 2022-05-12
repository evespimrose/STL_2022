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
#include <map>
#include <fstream>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// �Ҽ��� ���� ���ĺ��� �󵵼��� ����϶�.
//

int main()
{
	// �̸��� ��ȭ��ȣ 
	map<string, string> m;

	m.insert(pair("ȫ�浿", "01012345678"));

	m["���콺"] = "12345678";				// �����迭�� ����ϴ� ���� �����ϱ� ����. ���� �ִµ��� ���Ǳ⵵ �ϰ� ������ ����ϱ⵵ ��.

	for (auto [�̸�, ��ȣ] : m)
		cout << �̸� << " - " << ��ȣ << endl;

	save("�ҽ�.cpp");
}