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
    // 이 코드는 반복자에서만 실행되었으면 좋겠다.
    // T는 정말로 반복자인가?
    // 템플릿 코드에서는 전달되는 자료형 T가 원하는 조건을 만족하는지 검사할 필요가 있다.
    // -> type traits를 사용하면 된다.
    // 
    // 랜덤반복자만 실행되게 할 수 있나?
    // 
    //if (is_same_v<typename iterator_traits<T>::iterator_category, random_access_iterator_tag>)       // type_traits_ 랜덤반복자 태그
    //if (is_same_v<typename iterator_traits<T>::iterator_category, input_iterator_tag>)       // type_traits_ 입력반복자 태그
    if (is_base_of_v< input_iterator_tag, typename iterator_traits<T>::iterator_category>)       // type_traits_ 입력반복자 태그
        cout << "반복자다" << endl;
    else
        cout << "반복자가 아니다" << endl;
    return 1;
}

int main()
{
    vector<int> v{ 1,2,3,4,5 };

    list<int> ist{ 1,2,3 };

    int arr[10];

    STRING s;

    dist(v.begin(), v.end());
    dist(ist.begin(), ist.end());
    dist(arr, arr + 10);
    dist(s.begin(), s.end());
    

    //save("소스.cpp");
}