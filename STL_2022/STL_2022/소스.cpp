//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 11일 수요일
// 수78목23 (10주 2일)
// 
// 5월 25일 졸작 설명회
// 5/30 ~ 6/20 지도교수 신청일
// 
// Associative Container - set, multi_set, map, multi_map
// set - 언제나 key를 compare로 정렬하고 있다. 찾기/추가/삭제 O(log N)
//      - set의 주요 동작을 알아본다. (빨리 찾기 위한 컨테이너)
//      - 내가 만든 자료형(class Dog)을 set에 넣어 관리
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <set>
#include <string>
#include <list>
#include <random>

#include "save.h"
#include "STRING.h"

using namespace std;

default_random_engine dre;
uniform_int_distribution<int> uid{ 'a','z' };
uniform_int_distribution<int> uidN{ 1, 10000 };

class Dog
{
	string name;
	int n;

public:
	Dog()
	{
		for (int i = 0; i < 10; ++i)
			name += uid(dre);

		n = uidN(dre);
	}

	bool operator<(const Dog& rhs) const
	{
		return n < rhs.n;
	}

	string getName() const { return name; }

	int getN() const { return n; }

	void show() const
	{
		cout << name << " - " << n << endl;
	}

};
extern bool 관찰;

// [문제]
// set에다가 내가 만든 자료형 Dog을 넣고싶다.
// 정렬 기준n오름차순으로 항상 정렬하는 set을 만들고 싶다.
//

auto 정렬기준 = [](const Dog& a, const Dog& b)
{
	return a.getN() < b.getN();
};

int main()
{
	//save("소스.cpp");

	multiset<Dog, decltype(정렬기준)> s;

	for (int i = 0; i < 1000; ++i)
	{
		s.emplace( );
	}

	cout << "셋의 원소 수 - " << s.size() << endl;

	for (const Dog& dog : s)
		dog.show();

	// 기준이 없어요?
	// 1. less<Dog>가 있나 살펴본다.
	// 2. class Dog이 < 연산자를 제공하고 있는지 살펴본다.
	//   - 2.1 멤버 - 코딩가능하면 멤버로 만든다.
	//	 - 2.2 전역
	// 3. 기준을 직접 템플릿 인자로 제공한다.
	//

}