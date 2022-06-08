//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 6월 8일 수요일
// 수78목23 (14주 1일)
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
#include <set>

#include "save.h"
#include "STRING.h"

// [문제] "단어들.txt"에 있는 단어를 읽고 갯수를 출력하라.
//

using namespace std;

extern bool 관찰;

int main()
{
    ifstream in{ "단어들.txt" };

    /* {
        long long cnt{};
        string s{};

        while (in >> s)
            ++cnt;
        cout << cnt;
    }*/

    
    vector<string> vs{ istream_iterator<string>{in},{} };
    cout << vs.size() << endl;
    

    // 정렬되어 있는지 확인해보자.

    cout << "정렬? " << boolalpha << is_sorted(vs.begin(), vs.end(), less<string>{}) << endl;

    // 중복된 단어가 있나 체크해보자
    /* {
        auto it = unique(vs.begin(), vs.end());
        if (it == vs.end())
            cout << "중복되지 않음" << endl;
    }*/

    set<string> s{ vs.begin(),vs.end() };

    if (s.size() == vs.size())
        cout << "중복 없음" << endl;

    //save("소스.cpp");
}