//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 19�� �����
// ��78��23 (12�� 1��)
// 
// 5�� 25�� ���� ����ȸ(�� 56����)
// 5/30 ~ 6/20 �������� ��û��
// 
// �˰���
//  - non-modifying sequence operation(���Ҹ� �������� �ʴ� �˰���)
// 
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
// ���� T�� ���Ұ� �� ���ΰ�?
//

bool X(const STRING& str)
{
	if (*str.begin() == 'T')
		return true;
	return false;
}

int main()
{
	vector<STRING> v{ "Standard", "Template", "Library" };

	cout << count_if(v.begin(), v.end(), X) << endl;

	//save("�ҽ�.cpp");
}