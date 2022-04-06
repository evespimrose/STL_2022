//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 4�� 06�� ����
// ��78��23 (5�� 2��)
//
// RVO(Return value optimization), Copy Ellision
// 
// �����̳� -> Containers are objects that store other objects
// 
// �����̳�
// Sequence container		- ������ ��ġ�� ������ ���� �а� ���ų� �߰��� �� �ִ�.
//		array				- �����ϰ� ���� ������ ������.
//		vector				- 
//		deque
//		foward_list
//		list
// 
// ���� - �߰����� 4.27(��) (8�� 2��)
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����] Ű���忡�� int�� �Է¹޾ƶ�.
// �հ�� ����� ȭ�鿡 ����϶�.

int main()
{
	save("�ҽ�.cpp");

	vector<int> iv{};

	int i;

	while (cin >> i)
		iv.push_back(i);

	long long sum{};

	for (auto i = iv.begin(); i != iv.end(); ++i)
	{
		sum += *i;
	}

	cout << "�հ� : " << sum << endl << "��� : " << sum / iv.size() << endl;

}