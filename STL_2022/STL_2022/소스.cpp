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
#include <array>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����] 

int main()
{	

	array<int, 10> a{ 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

	cout << a.max_size() << endl;

	save("�ҽ�.cpp");
}