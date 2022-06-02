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
#include <string>
#include <ranges>
#include <random>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// v를 이름 오름차순으로 정렬하고 출력하라.
//

// ranges는 알고리즘과 iterator를 확장시키고 일반화시킨 것
// ranges 라이브러리는 range view라고 하는 경량 오브젝트를 만들고 조작한다.
// 
// 
//

default_random_engine dre;
uniform_int_distribution<> uidNum{ 1,1000 };
uniform_int_distribution<> uidName{ 'a', 'z' };

class Dog
{
    string name;
    int num;
    
public:
    Dog()
    {
        for (int i = 0; i < 10; ++i)
            name += uidName(dre);
        num = uidNum(dre);
    }

    string getName() const { return name; }

    int getNum() const { return num; }

    void show() const { cout << name << " - " << num << endl; }
};

int main()
{
    vector<Dog> v(100);

    //ranges::sort(v, {}, &Dog::getName);
    ranges::sort(v, less<int>(), &Dog::getNum);
    //ranges::sort(v, less<string>(), &Dog::getName);           // name 기준 오름차순
    //ranges::sort(v, greater<string>(), &Dog::getName);        // name 기준 내림차순

    for (const Dog& dog : v)
        dog.show();

    //save("소스.cpp");
}