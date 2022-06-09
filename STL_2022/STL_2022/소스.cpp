//-----------------------------------------------------------------------------
// 2022. 1�б� STL
// 
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <ranges>
#include <list>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; ++i)
        if ((n % i) == 0)
            return false;
    return true;
}

// ���Ͱ� �ܾ���� �����ϵ��� �Ѵ�
// first�� �����ϰ� second�� ���� �ܾ �����Ѵ�

struct WP : public pair<string, string>
{
    WP(const string& s) : pair < string, string>{ s, s }
    {
        sort(first.begin(), first.end());
    }
};

int main()
{
    save("�ҽ�.cpp");

    // [����] "�ܾ��.txt"�� �ִ� �ܾ �а� ������ ����϶�

    ifstream in{ "�ܾ��.txt" };

    vector<WP> v{ istream_iterator<string>{ in },{} };
    cout << "�ܾ��� ���� - " << v.size() << endl;

    // v�� first ���� ������������ �����Ѵ�.
    //sort(v.begin(), v.end(), [](const WP& w, const WP& p) {return w.first < p.first;});
    ranges::sort(v, {}, &WP::first);

    // [����] ��� anagram�� �����϶�
    ofstream out{ "�ֳʱ׷���.txt" };

    auto b = v.begin();

    int cnt{ 1 };

    vector<list<string>> vv;
    vv.reserve(31000);

    while (true)
    {
        auto i = adjacent_find(b, v.end(), [](const WP& a, const WP& b)
            {
                return a.first == b.first;
            });

        if (i == v.end())
            break;

        auto j = find_if_not(i + 1, v.end(), [i](const WP& a)
            {
                return a.first == i->first;
            });

        // [i, j) �� �ֳʱ׷� �����̴�
        list<string> cont;
        for (auto p = i; p < j; ++p)
            cont.push_back(p->second);
        vv.push_back(cont);
        b = j;
    }

    // vv�� list�� ���� ������ �������� ����
    sort(vv.begin(), vv.end(), [](const list<string>& a, const list<string>& b)
        {
            return a.size() > b.size();
        });

    cout << "�ֳʱ׷� ���� �� - " << vv.begin()->size() << endl;
    for (const list<string>& cont : vv | views::take(10))
    {
        for (const string& s : cont)
        {
            cout << s << " ";
        }
        cout << endl;
    }
}