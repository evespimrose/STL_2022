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
#include <list>
#include <concepts>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

template<input_iterator Iter>                     // concept ����
long long dist(Iter b, Iter e)
{
    if constexpr (is_same_v<random_access_iterator_tag, typename iterator_traits<Iter>::iterator_category>)
        return e - b;
    // �������� ����.
    long long step{};
    while (b != e)
    {
        ++step;
        ++b;
    }
    return step;

}

// [����]
// ǥ�� distance�� ���� dist�� �����϶�.
//

int main()
{
    vector<int> v;
    cout << dist(v.begin(), v.end()) << endl;

    list<int> ist{ 1,2,3 };
    cout << dist(ist.begin(), ist.end()) << endl;

    save("�ҽ�.cpp");
}