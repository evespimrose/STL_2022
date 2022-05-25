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
#include <numeric>
#include <random>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

random_device rd;
default_random_engine dre{ rd() };

// [����]
// ������ �� n���� ȭ�鿡 ���
//

int main()
{
	//vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// sample : �ζ� ��ȣ�̴� �˰���

	vector<int> v(45);		// int{}�� 45�� ȣ��

	iota(v.begin(), v.end(), 1);

	//for (int i : v)
	//	cout << i << " ";
	//cout << endl;

	sample(v.begin(), v.end(), ostream_iterator<int>{cout, " "}, 6, dre);

	//save("�ҽ�.cpp");
}