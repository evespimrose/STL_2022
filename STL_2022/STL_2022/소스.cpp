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
#include <list>
#include <ranges>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// v�� �������� �����ϰ� ����϶�.
//

// ranges�� �˰���� iterator�� Ȯ���Ű�� �Ϲ�ȭ��Ų ��
// ranges ���̺귯���� range view��� �ϴ� �淮 ������Ʈ�� ����� �����Ѵ�.
// 
// 
//

int main()
{
    vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };

    //ranges::sort(v);
    ranges::sort(v, greater<int>{});

    for (int i : v)
        cout << i << " ";
    cout << endl;

    //save("�ҽ�.cpp");
}