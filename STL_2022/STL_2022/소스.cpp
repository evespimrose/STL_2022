//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 6월 9일 목요일
// 수78목23 (14주 2일)
// 
// 5/30 ~ 6/20 지도교수 신청일
// 
// C++20 언어 4가지 핵심 변화
// concepts
// range / view
// coroutine
// module
// 
// 시험 - 15주 1일 : 6월 15일 수요일
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

// [문제] 벡터가 단어쌍을 저장하도록 한다.
// first는 정렬하고 second는 원래 단어를 저장한다.
// v에 저장된 WP를 출력해본다.
// 단어를 입력받아 anagram을 출력하라.
//

using namespace std;

extern bool 관찰;

struct WP : public pair<string, string>
{
    WP(const string& s) : pair<string, string>{ s,s } 
    {
        sort(first.begin(), first.end());
    }
};

int main()
{
    ifstream in{ "단어들.txt" };
    ofstream out{ "애너그램들.txt" };
    //save("소스.cpp");
    
    vector<WP> v{ istream_iterator<string>{in},{} };
    ranges::sort(v, {}, &WP::first);

    auto b = v.begin();
    int cnt{ 1 };
    while (true)
    {
        auto i = adjacent_find(b, v.end(), [](const WP& a, const WP& b) {return a.first == b.first; });
        auto j = find_if_not(i + 1, v.end(), [&i](const WP& a) {return a.first == i->first; });
        // [i,j)는 애너그램 구간이다.
        out << "[" << cnt << "] - ";
        for (auto p = i; p < j; ++p)
            out << p->second << " ";
        out << endl;
        ++cnt;
    }
}