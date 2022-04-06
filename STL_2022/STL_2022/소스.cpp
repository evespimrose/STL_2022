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

// [����] 

int main()
{
	//save("�ҽ�.cpp");

	vector<int> v;
	int i = 0;

	v.reserve(10);			// 10ĭ ����

	size_t old_capacity = v.capacity();

	while (true)
	{
		v.push_back(++i);

		if (v.size() -1 == old_capacity)
		{
			cout << "������ ���� �� : " << v.size() << endl << "������ ��ġ : " << v.data() << endl << "���Ҵ� ���� �ʰ� ���� �� �ִ� ������ ��(�뷮) : " << v.capacity() << endl << endl;
			old_capacity = v.capacity();
		}

	}
	
	
}