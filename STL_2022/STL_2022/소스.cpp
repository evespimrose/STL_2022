//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 4월 13일 수요일
// 수78목23 (6주 2일)
// 
// 컨테이너					- 다른 객체를 저장하는 객체
// Sequence container		- 임의의 위치에 원소의 값을 읽고 쓰거나 추가할 수 있다.
// 
// 반복자					- 포인터를 추상화한 것
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

template <class Iter, class Val>
Iter my_find(Iter b, Iter e, Val v)
{
	while (b != e) {
		if (*b == v)
			return b;
		++b;
	}
	return e;
}

template<class Iter>
void show(Iter)
{
	cout << "반복자 타입 : " << typeid(Iter).name() << endl;
	//cout << "반복자의 종류 : " << typename(iterator_traits<Iter>::iterator_category()).name() << endl;
}

// [문제]
// 반복자의 종류(category) 를 구분하고 알아본다.
// 반복자를 인수로 받는 함수를 만들어 어떤 종류의 반복자인지 출력하도록 하자.
//

int main()
{
	save("소스.cpp");
	save("STRING.h");
	save("STRING.cpp");

	STRING s;

	cin >> s;

	// [문제] s에 어떤 문자가 몇 번째인지 출력하자.

	while (true) {
		cout << "찾으려는 문자는? ";
		char c;
		cin >> c;

		auto p = my_find(s.begin(), s.end(), c);
		if (p != s.end()) {
			cout << distance(s.begin(), p) + 1 << "번째 문자입니다" << endl;
		}
		else
			cout << c << "는 없습니다" << endl;
	}
	//save("소스.cpp");
}