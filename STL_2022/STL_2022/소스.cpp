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

// [문제] 사용자가 입력한 단어가 "단어들.txt"에 있는 단어인지 확인한다. 
// 있다면 anagram을 찾아 화면에 출력하라.
//

using namespace std;

extern bool 관찰;

int main()
{
    ifstream in{ "단어들.txt" };
    //save("소스.cpp");

    /* {
        long long cnt{};
        string s{};

        while (in >> s)
            ++cnt;
        cout << cnt;
    }*/

    
    vector<string> v{ istream_iterator<string>{in},{} };

    while (true)
    {
        string word;
        cout << "찾을 단어는?";
        cin >> word;

        if (!binary_search(v.begin(), v.end(), word))
        {
            cout << word << "는 없습니다" << endl;
            continue;
        }
        // 애너그램을 찾아 출력
        // word의 각 순열이 단어들txt에 있나 확인하면 끝
        // 먼저 word를 정렬한다
        sort(word.begin(), word.end());
        do {
            if (binary_search(v.begin(), v.end(), word))
                cout << word << " ";
        } while (next_permutation(word.begin(), word.end()));
        cout << endl;
    }

}