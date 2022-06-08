//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 6�� 8�� ������
// ��78��23 (14�� 1��)
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
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>

#include "save.h"
#include "STRING.h"

// [����] "�ܾ��.txt"�� �ִ� �ܾ �а� ������ ����϶�.
//

using namespace std;

extern bool ����;

int main()
{
    ifstream in{ "�ܾ��.txt" };

    /* {
        long long cnt{};
        string s{};

        while (in >> s)
            ++cnt;
        cout << cnt;
    }*/

    
    vector<string> vs{ istream_iterator<string>{in},{} };
    cout << vs.size() << endl;
    

    // ���ĵǾ� �ִ��� Ȯ���غ���.

    cout << "����? " << boolalpha << is_sorted(vs.begin(), vs.end(), less<string>{}) << endl;

    // �ߺ��� �ܾ �ֳ� üũ�غ���
    /* {
        auto it = unique(vs.begin(), vs.end());
        if (it == vs.end())
            cout << "�ߺ����� ����" << endl;
    }*/

    set<string> s{ vs.begin(),vs.end() };

    if (s.size() == vs.size())
        cout << "�ߺ� ����" << endl;

    //save("�ҽ�.cpp");
}