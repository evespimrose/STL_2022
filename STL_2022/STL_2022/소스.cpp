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
#include <iterator>
#include <deque>
#include <concepts>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

template<contiguous_iterator T>
void f(T b, T e)
{
    cout << "contiguous �ݺ��ڰ� �´�" << endl;
}

// [����]
// contiguous iterator�϶��� �۵��Ǵ� �Լ� f�� ����� �ʹ�.
//

int main()
{
    vector<int> v;
    f(v.begin(), v.end());

    deque<int> d;
    //f(d.begin(), d.end());          // d�� �������� contiguous�� �ƴϴ�.

    save("�ҽ�.cpp");
}