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

	array<int, 10> a{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	cout << sizeof(a) << endl;		// int[10]�� �����ϴ� �޸𸮿� ����.

	a.fill(333);

	// ���Ҹ� ����Ͻÿ� - �ݺ��� ����
	{
		for (array<int, 10>::iterator p = a.begin(); p != a.end(); ++p)		//for (auto p = a.begin(); p != a.end(); ++p)
		{
			cout << *p << " ";
		}
		cout << endl;
	}


	//save("�ҽ�.cpp");
}