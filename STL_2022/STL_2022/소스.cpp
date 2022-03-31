//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 31�� �����
// ��78��23 (5�� 1��)
//
// RVO(Return value optimization), Copy Ellision
// 
// �����̳� -> Containers are objects that store other objects
// 
// �����̳�
// Sequence container
//		array				- �����ϰ� ���� ������ ������.
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

extern bool ����;

// [����] Ű���忡�� �Է��ϴ� �ܾ ��� �о��. �Է��� ������ ������������ �����ؼ� ����ض�.

int main()
{
	vector<string> v;

	string s;

	while (cin >> s)
	{
		v.push_back(s);
	}

	// �������� �����Ѵ�.  (lexicorgraphical comparison)
	sort(v.begin(), v.end(), [](const string& a, const string& b) {return a > b; });

	for (string s : v)
		cout << s << '\t';

	//save("�ҽ�.cpp");
}