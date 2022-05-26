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
    // �� �ڵ�� �ݺ��ڿ����� ����Ǿ����� ���ڴ�.
    // T�� ������ �ݺ����ΰ�?
    // ���ø� �ڵ忡���� ���޵Ǵ� �ڷ��� T�� ���ϴ� ������ �����ϴ��� �˻��� �ʿ䰡 �ִ�.
    // -> type traits�� ����ϸ� �ȴ�.
    // 
    // �����ݺ��ڸ� ����ǰ� �� �� �ֳ�?
    // 
    //if (is_same_v<typename iterator_traits<T>::iterator_category, random_access_iterator_tag>)       // type_traits_ �����ݺ��� �±�
    //if (is_same_v<typename iterator_traits<T>::iterator_category, input_iterator_tag>)       // type_traits_ �Է¹ݺ��� �±�
    if (is_base_of_v< input_iterator_tag, typename iterator_traits<T>::iterator_category>)       // type_traits_ �Է¹ݺ��� �±�
        cout << "�ݺ��ڴ�" << endl;
    else
        cout << "�ݺ��ڰ� �ƴϴ�" << endl;
    return 1;
}

int main()
{
    vector<int> v{ 1,2,3,4,5 };

    list<int> ist{ 1,2,3 };

    int arr[10];

    STRING s;

    dist(v.begin(), v.end());
    dist(ist.begin(), ist.end());
    dist(arr, arr + 10);
    dist(s.begin(), s.end());
    

    //save("�ҽ�.cpp");
}