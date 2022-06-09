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
    ofstream out{ "�ֳʱ׷���.txt" };
    //save("�ҽ�.cpp");
    
    vector<WP> v{ istream_iterator<string>{in},{} };
    ranges::sort(v, {}, &WP::first);

    auto b = v.begin();
    int cnt{ 1 };
    while (true)
    {
        auto i = adjacent_find(b, v.end(), [](const WP& a, const WP& b) {return a.first == b.first; });
        auto j = find_if_not(i + 1, v.end(), [&i](const WP& a) {return a.first == i->first; });
        // [i,j)�� �ֳʱ׷� �����̴�.
        out << "[" << cnt << "] - ";
        for (auto p = i; p < j; ++p)
            out << p->second << " ";
        out << endl;
        ++cnt;
    }
}