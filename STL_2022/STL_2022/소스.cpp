//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 6�� 2�� �����
// ��78��23 (13�� 2��)
// 
// 5/30 ~ 6/20 �������� ��û��
// 
// C++20 ��� 4���� �ٽ� ��ȭ
// concepts
// range / view
// coroutine
// module
// 
// ���� - 15�� 1�� : 6�� 15�� ������
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ranges>
#include <random>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// v�� �̸� ������������ �����ϰ� ����϶�.
//

// ranges�� �˰���� iterator�� Ȯ���Ű�� �Ϲ�ȭ��Ų ��
// ranges ���̺귯���� range view��� �ϴ� �淮 ������Ʈ�� ����� �����Ѵ�.
// 
// 
//

default_random_engine dre;
uniform_int_distribution<> uidNum{ 1,1000 };
uniform_int_distribution<> uidName{ 'a', 'z' };

class Dog
{
    string name;
    int num;
    
public:
    Dog()
    {
        for (int i = 0; i < 10; ++i)
            name += uidName(dre);
        num = uidNum(dre);
    }

    string getName() const { return name; }

    int getNum() const { return num; }

    void show() const { cout << name << " - " << num << endl; }
};

int main()
{
    vector<Dog> v(100);

    //ranges::sort(v, {}, &Dog::getName);
    ranges::sort(v, less<int>(), &Dog::getNum);
    //ranges::sort(v, less<string>(), &Dog::getName);           // name ���� ��������
    //ranges::sort(v, greater<string>(), &Dog::getName);        // name ���� ��������

    for (const Dog& dog : v)
        dog.show();

    //save("�ҽ�.cpp");
}