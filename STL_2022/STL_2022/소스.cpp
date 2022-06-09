//-----------------------------------------------------------------------------
// 2022. 1학기 STL
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

extern bool 관찰;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; ++i)
        if ((n % i) == 0)
            return false;
    return true;
}

// 벡터가 단어쌍을 저장하도록 한다
// first는 정렬하고 second는 원래 단어를 저장한다

struct WP : public pair<string, string>
{
    WP(const string& s) : pair < string, string>{ s, s }
    {
        sort(first.begin(), first.end());
    }
};

int main()
{
    save("소스.cpp");

    // [문제] "단어들.txt"에 있는 단어를 읽고 갯수를 출력하라

    ifstream in{ "단어들.txt" };

    vector<WP> v{ istream_iterator<string>{ in },{} };
    cout << "단어의 개수 - " << v.size() << endl;

    // v를 first 기준 오름차순으로 정렬한다.
    //sort(v.begin(), v.end(), [](const WP& w, const WP& p) {return w.first < p.first;});
    ranges::sort(v, {}, &WP::first);

    // [문제] 모든 anagram을 저장하라
    ofstream out{ "애너그램들.txt" };

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

        // [i, j) 는 애너그램 구간이다
        list<string> cont;
        for (auto p = i; p < j; ++p)
            cont.push_back(p->second);
        vv.push_back(cont);
        b = j;
    }

    // vv를 list의 갯수 순으로 내림차순 정렬
    sort(vv.begin(), vv.end(), [](const list<string>& a, const list<string>& b)
        {
            return a.size() > b.size();
        });

    cout << "애너그램 많은 수 - " << vv.begin()->size() << endl;
    for (const list<string>& cont : vv | views::take(10))
    {
        for (const string& s : cont)
        {
            cout << s << " ";
        }
        cout << endl;
    }
}