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
uniform_int_distribution uid{ 1,9 };

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

class Dog
{
public:
    int num1;
    int num2;

    Dog()
    {
        num1 = uid(dre);
        num2 = uid(dre);
    }
};

int main()
{
    vector<Dog> dogs(20);

    sort(dogs.begin(), dogs.end(), [](Dog a, Dog b) {return a.num1 < b.num1; });
    
    sort(dogs.begin(), dogs.end(), [](Dog a, Dog b) {return a.num2 < b.num2; });

    for (Dog& dog : dogs)
        cout << dog.num1 << " - " << dog.num2 << endl;

    //save("소스.cpp");
}