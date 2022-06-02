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
#include <vector>
#include <deque>
#include <forward_list>
#include <list>
#include <concepts>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// �Լ� f�� �ݺ��ڸ� ���ڷ� �޾Ƶ��δ�.
// ���ڷ� ���޵� �ݺ����� category�� ����Ѵ�.
//

template<input_iterator Iter>
void f(Iter iter)
{
    if (contiguous_iterator<Iter>)
        cout << "contiguous �ݺ����Դϴ�." << endl;
    else if (random_access_iterator<Iter>)
        cout << "random_access �ݺ����Դϴ�." << endl;
    else if (bidirectional_iterator<Iter>)
        cout << "bidirectional �ݺ����Դϴ�." << endl;
    else if (forward_iterator<Iter>)
        cout << "forward �ݺ����Դϴ�." << endl;
    else
        cout << "�ݺ����̱� �ϴ�" << endl;
    cout << "==================================" << endl << endl;
}

// ���ø��� Ŭ������ ���� �ƹ��ų� ���޵ǵ� �������
// �ݺ��ڸ� ���ڷ� �ޱ� ����
// ���������� ���������� ������ ����� ����
// ���������� Ʋ���� ���ư��� ����

int main()
{
    //f(1);           // �������� ���� �ȵ�
    f(vector<char>::iterator{});
    f(deque<int>::iterator{});
    f(list<float>::const_iterator{});
    f(forward_list<double>::iterator{});


    save("�ҽ�.cpp");
}