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
	vector v{ 1,2,3 };

	cout << "������ ���� �� : " << v.size() << endl << "������ ��ġ : " << v.data() << endl << "���Ҵ� ���� �ʰ� ���� �� �ִ� ������ ��(�뷮) : " << v.capacity() << endl;

	save("�ҽ�.cpp");
}