//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 25�� ������
// ��78��23 (12�� 1��)
// 
// 5/30 ~ 6/20 �������� ��û��
// 
// �˰��� - �и�/���İ��� �Լ���
//		partition
//		nth_element
//		partial_sort
//		sort
//		stable_sort
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

template<class Iter>
//vector<int>::difference_type dist(vector<int>::iterator b, vector<int>::iterator e)
long long dist(Iter b, Iter e)
{
    return e - b;
}

int main()
{
    vector<int> v{ 1,2,3,4,5 };

    cout << "�ݺ��� ���� �Ÿ� - " << dist(v.begin(), v.end()) << endl;

    save("�ҽ�.cpp");
}