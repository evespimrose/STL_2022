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
#include <compare>
#include <list>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

template<class T>
long long dist(T b, T e)
{
    // ���� T�� �����ݺ��ڶ��
    //         e-b�� �Ÿ��̴�.
    // �׷��� �ʴٸ�
    //         b���� �� �� �̵��ߴ��� �����Ѵ�.
    // 
    if (is_base_of_v< input_iterator_tag, typename iterator_traits<T>::iterator_category>)
    {
        if constexpr (is_same_v<random_access_iterator_tag, typename iterator_traits<T>::iterator_category>)       // type_traits_ �����ݺ��� �±�
   //if (is_same_v<typename iterator_traits<T>::iterator_category, input_iterator_tag>)       // type_traits_ �Է¹ݺ��� �±�
   //if (is_base_of_v< input_iterator_tag, typename iterator_traits<T>::iterator_category>)       // type_traits_ �Է¹ݺ��� �±�
            return e - b;
        // �����ݺ��ڰ� �ƴ� ��쿡�� e-b ������ �����Ǿ� ������ ���� �߻�
        // - ���� �ذ� ��� : tag dispatching
        // c++17���ʹ� constexpr if�� ������ ������ ����
        else
            return 100;
    }
}

int main()
{
    vector<int> v{ 1,2,3,4,5 };
    list<int> ist{ 1,2,3 };

    dist(v.begin(), v.end());
    dist(ist.begin(), ist.end());

    //save("�ҽ�.cpp");
}