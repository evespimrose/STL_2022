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

// [����] v���� ¦���� �����϶�.
// ����� ����Ͻÿ�.

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };

	for (int i : v)
		cout << i << " ";
	cout << endl;

	v.erase(remove_if(v.begin(), v.end(), [](int num) {return !(num & 1); }), v.end());

	for (int i : v)
		cout << i << " ";
	cout << endl;

	//save("�ҽ�.cpp");
}