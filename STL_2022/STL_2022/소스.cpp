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
#include <string>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// ���� T�� ���Ұ� �� ���ΰ�?
//

int main()
{
	string s1{ "abcdefghij" };
	string s2{ "abcdfghijklll" };

	auto [ù����, ������] = mismatch(s1.begin(), s1.end(), s2.begin(), s2.end());

	string s3{ ù����, s1.end()};

	string s4{ ������, s2.end() };

	cout << "��� - " << s3 << ", " << s4 << endl;

	//save("�ҽ�.cpp");
}