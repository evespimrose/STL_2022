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
#include <compare>
#include <list>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

template<class T>
long long dist(T b, T e)
{
    // 만일 T가 랜덤반복자라면
    //         e-b가 거리이다.
    // 그렇지 않다면
    //         b부터 몇 번 이동했는지 세야한다.
    // 
    if (is_base_of_v< input_iterator_tag, typename iterator_traits<T>::iterator_category>)
    {
        if constexpr (is_same_v<random_access_iterator_tag, typename iterator_traits<T>::iterator_category>)       // type_traits_ 랜덤반복자 태그
   //if (is_same_v<typename iterator_traits<T>::iterator_category, input_iterator_tag>)       // type_traits_ 입력반복자 태그
   //if (is_base_of_v< input_iterator_tag, typename iterator_traits<T>::iterator_category>)       // type_traits_ 입력반복자 태그
            return e - b;
        // 랜덤반복자가 아닌 경우에더 e-b 문장이 생성되어 컴파일 오류 발생
        // - 이전 해결 방법 : tag dispatching
        // c++17부터는 constexpr if로 선택적 컴파일 가능
        else
            return 100;
    }
}

int main()
{
    vector<int> v{ 1,2,3,4,5 };
    list<int> ist{ 1,2,3 };

    dist(v.begin(), v.end());
    dist(ist.begin(), ist.end());

    //save("소스.cpp");
}