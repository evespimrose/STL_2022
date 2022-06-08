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
#include <ranges>
#include <format>

#include "save.h"
#include "STRING.h"

// constrained algorithm : concept으로 coding
// span<T> : [], string, array, vector
// [문제] 소수(prime number)를 출력하라.
//

using namespace std;

extern bool 관찰;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    // [문제] 소수(prime number)를 100개만 출력하라.
    for (int n : views::iota(2) | views::filter(isPrime)|views::take(100)

        )
    {
        cout << format("{:8}", n);
    }


    //save("소스.cpp");
}