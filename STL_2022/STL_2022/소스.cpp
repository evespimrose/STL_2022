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

// [문제] "단어들.txt"에 있는 단어를 읽고 가장 긴 단어를 화면이 출력하라.
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

    
    vector<string> v{ istream_iterator<string>{in},{} };

    auto p = max_element(v.begin(), v.end(), [](string l, string r) {return l.size() < r.size(); });
    
    cout << *p << " - " << p->size() << endl;

    //save("소스.cpp");
}