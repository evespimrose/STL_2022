//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 4�� 13�� ������
// ��78��23 (6�� 2��)
//
// RVO(Return value optimization), Copy Ellision
// 
// �����̳� -> Containers are objects that store other objects
// 
// �����̳�
// Sequence container		- ������ ��ġ�� ������ ���� �а� ���ų� �߰��� �� �ִ�.
//		array				- �����ϰ� ���� ������ ������.
//		vector				- ��� �˾ƺ� ��ġ�� �ִ� �����̳�
//		deque
//		foward_list
//		list
// 
// ���� - �߰����� 4.20(��) (7�� 2��)
// ����ð� 70�� 1745~
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����] vector�� �߰��� ���Ҹ� �߰��Ѵ�.
// "4444" �տ� "333"�� �����־��.

int main()
{
	vector<STRING> v{ "1", "22", "4444", "55555" };

	//auto p = find_if(v.begin(), v.end(), [](vector<STRING>::iterator i) {
	//	return *i == static_cast <STRING>("4444");
	//	});

	// random access iterator

	v.insert(++++v.cbegin(), STRING{ "333" });

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}

	//save("�ҽ�.cpp");
}