//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 25�� ������
// ��78��23 (12�� 1��)
// 
// 5�� 25�� ���� ����ȸ(�� 56����)
// 5/30 ~ 6/20 �������� ��û��
// 
// �˰���
//  - non-modifying sequence operation(���Ҹ� �������� �ʴ� �˰���)
// 
// ���� - 15�� 1�� : 6�� 15�� ������
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// 
//

int main()
{
	vector<int> v{ 1, 2, 3, 3, 3, 5, 3 };

	v.erase(unique(v.begin(), v.end()),v.end());

	for (int i : v)
		cout << i << " ";
	cout << endl;

	//save("�ҽ�.cpp");
}