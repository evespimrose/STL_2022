//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 4�� 07�� �����
// ��78��23 (6�� 1��)
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

// [����] 

int main()
{
	���� = true;

	vector<STRING> v;

	v.reserve(10);

	v.emplace_back( "1234567" );

	v.emplace_back("1234567890");

	// ��ü ���� �� �ӽð�ü�� ������ �� vector���� size() = 1, capacity() = 1, 
	// sizeof(STRING)�� �� �޸𸮸� heap�� Ȯ���� �� new�� ���� �ӽð�ü�� �������(deep_copy)�� �߰��Ѵ�.

	//save("�ҽ�.cpp");
}