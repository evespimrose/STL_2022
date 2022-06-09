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
    //save("소스.cpp");
    
    vector<WP> v{ istream_iterator<string>{in},{} };

    //sort(v.begin(), v.end(), [](const WP& w, const WP& p) {return w.first < p.first; });
    ranges::sort(v, {}, &WP::first);

    /*for (WP wp : v | views::drop(30000) | views::take(200))
        cout << wp.first << " - " << wp.second << endl;
        */
    while (true)
    {
        string word;
        cout << "찾을 단어는?";
        cin >> word;

        string w{ word };
        ranges::sort(w, {});
        WP wp{ word };
        auto [하한, 상한] = equal_range(v.begin(), v.end(), wp, [](const WP& a, const WP& b) {return a.first < b.first; });

        if (하한 == 상한)
        {
            cout << word << "는 없습니다" << endl;
            continue;
        }
        else if( 상한 - 하한 == 1)
        {
            cout << word << "의 애너그램은 없습니다" << endl;
            continue;
        }
        cout << word << "의 애너그램 : " << word << " ";
        for (auto p = 하한; p != 상한; ++p)
            cout << p->second << " ";
        cout << endl;
        /*if (!ranges::binary_search(v, w, {}, &WP::first))
        {
            cout << word << "는 없습니다" << endl;
            continue;
        }*/
        // 애너그램을 찾아 출력
        // word의 각 순열이 단어들txt에 있나 확인하면 끝
        // 먼저 word를 정렬한다.
    }
}