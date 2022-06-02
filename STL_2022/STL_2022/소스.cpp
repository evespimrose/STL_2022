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
#include <vector>
#include <deque>
#include <forward_list>
#include <list>
#include <concepts>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 함수 f는 반복자만 인자로 받아들인다.
// 인자로 전달된 반복자의 category를 출력한다.
//

template<input_iterator Iter>
void f(Iter iter)
{
    if (contiguous_iterator<Iter>)
        cout << "contiguous 반복자입니다." << endl;
    else if (random_access_iterator<Iter>)
        cout << "random_access 반복자입니다." << endl;
    else if (bidirectional_iterator<Iter>)
        cout << "bidirectional 반복자입니다." << endl;
    else if (forward_iterator<Iter>)
        cout << "forward 반복자입니다." << endl;
    else
        cout << "반복자이긴 하다" << endl;
    cout << "==================================" << endl << endl;
}

// 템플릿에 클래스라 쓰면 아무거나 전달되도 상관업음
// 반복자만 인자로 받기 위해
// 문법적으로 구조적으로 구분할 방법이 생김
// 제약조건이 틀리면 돌아가지 않음

int main()
{
    //f(1);           // 제약조건 충족 안됨
    f(vector<char>::iterator{});
    f(deque<int>::iterator{});
    f(list<float>::const_iterator{});
    f(forward_list<double>::iterator{});


    save("소스.cpp");
}