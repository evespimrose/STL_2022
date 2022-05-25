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
#include <vector>
#include <algorithm>
#include <numeric>
#include <random>
#include <format>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

random_device rd;
default_random_engine dre{ rd() };

template<class Iter>
void print(Iter b, Iter e)
{
    while (b != e)
    {
        cout << format("{:4d}", *b);
        ++b;
    }
    cout << endl;
}

int main()
{
    vector<int> v(100);

    iota(v.begin(), v.end(), 1);

    cout << "vector<int>�� ��" << endl;
    print(v.begin(), v.end());
    cout << endl;

    {
        // ���ؿ� ���� �и�
        shuffle(v.begin(), v.end(), dre);
        cout << "partition ����" << endl;
        print(v.begin(), v.end());

        // Ȧ���� ¦���� �и��� �� ���
        auto p = partition(v.begin(), v.end(), [](int n) {return n % 2; });
        cout << "partition ����" << endl;
        cout << "Ȧ��" << endl;
        print(v.begin(), p);
        cout << "¦��" << endl;
        print(p, v.end());
    }
    {
        // ������ 20������� ��� -   1����� 20����� ������ �߿����� �ʴ�.
        //cout << "nth_element ����" << endl;
        //print(v.begin(), v.end());

        // 20������� ���
        cout << "nth_element ����" << endl;
        nth_element(v.begin(), v.begin() + 20, v.end());

        cout << "20�� �̳�" << endl;
        print(v.begin(), v.begin() + 20);
        cout << "������" << endl;
        print(v.begin() + 20, v.end());
    }

    {
        // ������ 50������� ���� �� ���, �������� �׳� ���
        shuffle(v.begin(), v.end(), dre);
        //cout << "partial_sort ����" << endl;
        //print(v.begin(), v.end());

        partial_sort(v.begin(), v.begin() + 50, v.end(), [](int a, int b) {return a < b; });
        cout << "partial_sort ����" << endl;
        cout << "50�� �̳�" << endl;
        print(v.begin(), v.begin() + 50);
        cout << "������" << endl;
        print(v.begin() + 50, v.end());
    }

    {
        // ��ü ����
        shuffle(v.begin(), v.end(), dre);
        cout << "sort ����" << endl;
        print(v.begin(), v.end());

        sort(v.begin(), v.end());
        cout << "sort ����" << endl;
        print(v.begin(), v.end());

    }

    //save("�ҽ�.cpp");
}