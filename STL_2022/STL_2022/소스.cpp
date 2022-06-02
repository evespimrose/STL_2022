//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 6월 2일 목요일
// 수78목23 (13주 2일)
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
#include <vector>
#include <algorithm>
#include <list>
#include <ranges>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// v를 내림차순 정렬하고 출력하라.
//

// ranges는 알고리즘과 iterator를 확장시키고 일반화시킨 것
// ranges 라이브러리는 range view라고 하는 경량 오브젝트를 만들고 조작한다.
// 
// 
//

int main()
{
    vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };

    //ranges::sort(v);
    ranges::sort(v, greater<int>{});

    for (int i : v)
        cout << i << " ";
    cout << endl;

    //save("소스.cpp");
}