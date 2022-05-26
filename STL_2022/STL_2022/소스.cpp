//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 25일 수요일
// 수78목23 (12주 1일)
// 
// 5/30 ~ 6/20 지도교수 신청일
// 
// 알고리즘 - 분리/정렬관련 함수들
//		partition
//		nth_element
//		partial_sort
//		sort
//		stable_sort
// 
// 시험 - 15주 1일 : 6월 15일 수요일
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <deque>
#include <concepts>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

template<contiguous_iterator T>
void f(T b, T e)
{
    cout << "contiguous 반복자가 맞다" << endl;
}

// [문제]
// contiguous iterator일때만 작동되는 함수 f를 만들고 싶다.
//

int main()
{
    vector<int> v;
    f(v.begin(), v.end());

    deque<int> d;
    //f(d.begin(), d.end());          // d는 랜덤이지 contiguous가 아니다.

    save("소스.cpp");
}