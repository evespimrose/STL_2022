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

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����] 

int main()
{
	���� = true;
	
	unique_ptr<STRING> p{ new STRING { "12345" } };
	STRING s{ "12345" };		// ������ġ�� �ٸ���.

	//save("�ҽ�.cpp");
}