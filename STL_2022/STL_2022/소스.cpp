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
#include <list>
#include <concepts>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

template<input_iterator Iter>                     // concept 문법
long long dist(Iter b, Iter e)
{
    if constexpr (is_same_v<random_access_iterator_tag, typename iterator_traits<Iter>::iterator_category>)
        return e - b;
    // 걸음수를 센다.
    long long step{};
    while (b != e)
    {
        ++step;
        ++b;
    }
    return step;

}

// [문제]
// 표준 distance와 같은 dist를 구현하라.
//

int main()
{
    vector<int> v;
    cout << dist(v.begin(), v.end()) << endl;

    list<int> ist{ 1,2,3 };
    cout << dist(ist.begin(), ist.end()) << endl;

    save("소스.cpp");
}