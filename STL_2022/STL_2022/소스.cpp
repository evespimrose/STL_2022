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
#include <fstream>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����] vector�� "�ҽ�.cpp" ������ �о�鿩�� ����϶�.

int main()
{	
	ifstream in("�ҽ�.cpp");


	vector<char> v;
	char c;
	while (in >> noskipws >> c)
		v.push_back(c);

	for (char c : v)
		cout << c;
	cout << endl;

	//save("�ҽ�.cpp");
}