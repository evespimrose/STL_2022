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
#include <algorithm>
#include <ranges>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 
//

int main()
{
    int a[]{ 1,2,3,4,5,6,7,8,9,10 };

    auto v = views::all(a);

    cout << "a의 크기 " << sizeof(a) << endl;

    cout << "a의 모든 원소로 구성된 view의 크기" << sizeof(v) << endl;

    cout << "v의 타입 : " << typeid(v).name() << endl;

    *v.begin() = 200;

    for (int n : a)
        cout << n << " ";
    cout << endl;

    //save("소스.cpp");
}