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
#include <fstream>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// �����˽�Ÿ��.txt�� ��� �� ���� unique�� word�� �̷������?
//

int main()
{
	ifstream in{ "Frankenstein.txt" };

	vector<string> v{ istream_iterator<string>{in},{} };

	cout << "�ߺ� �ܾ� ���� �� - " << v.size() << endl;

	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()),v.end());

	cout << "�ߺ� �ܾ� ���� �� - " << v.size() << endl;

	//save("�ҽ�.cpp");
}