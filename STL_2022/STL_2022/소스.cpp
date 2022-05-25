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
#include <vector>
#include <algorithm>
#include <numeric>
#include <random>
#include <format>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

random_device rd;
default_random_engine dre{ rd() };

template<class Iter>
void print(Iter b, Iter e)
{
    while (b != e)
    {
        cout << format("{:4d}", *b);
        ++b;
    }
    cout << endl;
}

int main()
{
    vector<int> v(100);

    iota(v.begin(), v.end(), 1);

    cout << "vector<int>의 값" << endl;
    print(v.begin(), v.end());
    cout << endl;

    {
        // 기준에 따라 분리
        shuffle(v.begin(), v.end(), dre);
        cout << "partition 이전" << endl;
        print(v.begin(), v.end());

        // 홀수와 짝수로 분리한 후 출력
        auto p = partition(v.begin(), v.end(), [](int n) {return n % 2; });
        cout << "partition 이후" << endl;
        cout << "홀수" << endl;
        print(v.begin(), p);
        cout << "짝수" << endl;
        print(p, v.end());
    }
    {
        // 선착순 20등까지만 통과 -   1등부터 20등까지 순서는 중요하지 않다.
        //cout << "nth_element 이전" << endl;
        //print(v.begin(), v.end());

        // 20등까지만 통과
        cout << "nth_element 이후" << endl;
        nth_element(v.begin(), v.begin() + 20, v.end());

        cout << "20등 이내" << endl;
        print(v.begin(), v.begin() + 20);
        cout << "나머지" << endl;
        print(v.begin() + 20, v.end());
    }

    {
        // 선착순 50등까지만 정렬 후 출력, 나머지는 그냥 출력
        shuffle(v.begin(), v.end(), dre);
        //cout << "partial_sort 이전" << endl;
        //print(v.begin(), v.end());

        partial_sort(v.begin(), v.begin() + 50, v.end(), [](int a, int b) {return a < b; });
        cout << "partial_sort 이후" << endl;
        cout << "50등 이내" << endl;
        print(v.begin(), v.begin() + 50);
        cout << "나머지" << endl;
        print(v.begin() + 50, v.end());
    }

    {
        // 전체 정렬
        shuffle(v.begin(), v.end(), dre);
        cout << "sort 이전" << endl;
        print(v.begin(), v.end());

        sort(v.begin(), v.end());
        cout << "sort 이후" << endl;
        print(v.begin(), v.end());

    }

    //save("소스.cpp");
}