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
#include <algorithm>
#include <ranges>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// 
//

int main()
{
    int a[]{ 1,2,3,4,5,6,7,8,9,10 };

    auto v = views::all(a);

    cout << "a�� ũ�� " << sizeof(a) << endl;

    cout << "a�� ��� ���ҷ� ������ view�� ũ��" << sizeof(v) << endl;

    cout << "v�� Ÿ�� : " << typeid(v).name() << endl;

    *v.begin() = 200;

    for (int n : a)
        cout << n << " ";
    cout << endl;

    //save("�ҽ�.cpp");
}