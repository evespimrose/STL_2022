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

// [����] "�ܾ��.txt"�� �ִ� �ܾ �а� ���� �� �ܾ ȭ���� ����϶�.
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

    
    vector<string> v{ istream_iterator<string>{in},{} };

    auto p = max_element(v.begin(), v.end(), [](string l, string r) {return l.size() < r.size(); });
    
    cout << *p << " - " << p->size() << endl;

    //save("�ҽ�.cpp");
}