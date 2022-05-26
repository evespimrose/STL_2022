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
uniform_int_distribution uid{ 1,9 };

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

class Dog
{
public:
    int num1;
    int num2;

    Dog()
    {
        num1 = uid(dre);
        num2 = uid(dre);
    }
};

int main()
{
    vector<Dog> dogs(20);

    sort(dogs.begin(), dogs.end(), [](Dog a, Dog b) {return a.num1 < b.num1; });
    
    sort(dogs.begin(), dogs.end(), [](Dog a, Dog b) {return a.num2 < b.num2; });

    for (Dog& dog : dogs)
        cout << dog.num1 << " - " << dog.num2 << endl;

    //save("�ҽ�.cpp");
}