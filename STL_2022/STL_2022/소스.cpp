//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 6�� 9�� �����
// ��78��23 (14�� 2��)
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
#include <string>
#include <ranges>

#include "save.h"
#include "STRING.h"

// [����] ���Ͱ� �ܾ���� �����ϵ��� �Ѵ�.
// first�� �����ϰ� second�� ���� �ܾ �����Ѵ�.
// v�� ����� WP�� ����غ���.
// �ܾ �Է¹޾� anagram�� ����϶�.
//

using namespace std;

extern bool ����;

struct WP : public pair<string, string>
{
    WP(const string& s) : pair<string, string>{ s,s } 
    {
        sort(first.begin(), first.end());
    }
};

int main()
{
    ifstream in{ "�ܾ��.txt" };
    //save("�ҽ�.cpp");
    
    vector<WP> v{ istream_iterator<string>{in},{} };

    //sort(v.begin(), v.end(), [](const WP& w, const WP& p) {return w.first < p.first; });
    ranges::sort(v, {}, &WP::first);

    /*for (WP wp : v | views::drop(30000) | views::take(200))
        cout << wp.first << " - " << wp.second << endl;
        */
    while (true)
    {
        string word;
        cout << "ã�� �ܾ��?";
        cin >> word;

        string w{ word };
        ranges::sort(w, {});
        WP wp{ word };
        auto [����, ����] = equal_range(v.begin(), v.end(), wp, [](const WP& a, const WP& b) {return a.first < b.first; });

        if (���� == ����)
        {
            cout << word << "�� �����ϴ�" << endl;
            continue;
        }
        else if( ���� - ���� == 1)
        {
            cout << word << "�� �ֳʱ׷��� �����ϴ�" << endl;
            continue;
        }
        cout << word << "�� �ֳʱ׷� : " << word << " ";
        for (auto p = ����; p != ����; ++p)
            cout << p->second << " ";
        cout << endl;
        /*if (!ranges::binary_search(v, w, {}, &WP::first))
        {
            cout << word << "�� �����ϴ�" << endl;
            continue;
        }*/
        // �ֳʱ׷��� ã�� ���
        // word�� �� ������ �ܾ��txt�� �ֳ� Ȯ���ϸ� ��
        // ���� word�� �����Ѵ�.
    }
}