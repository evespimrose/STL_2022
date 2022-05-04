//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 4월 13일 수요일
// 수78목23 (6주 2일)
// 
// 컨테이너					- 다른 객체를 저장하는 객체
// Sequence container		- 임의의 위치에 원소의 값을 읽고 쓰거나 추가할 수 있다.
// 
// 반복자					- 포인터를 추상화한 것
// 
// 반복자를 이해한다면 제네릭 함수를 만들어 볼 수 있겠다.
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

template <class Iter, class Call>
Iter my_find_if(Iter b, Iter e, Call f)
{
	while (b != e) {
		if (f(*b))
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
// STRING에서 대문자가 몇 번째인지 출력하라. 없으면 없다고 출력하라.
//

int main()
{
	//save("소스.cpp");

	STRING s;			// 루프 최적화. 루프 안에서 선언되서 매번 초기화되는 변수를 루프 밖으로 들어 옮겨주는 컴파일러의 동작. loop optimization

	while (true)
	{
		cout << "단어를 입력하세요 : ";

		cin >> s;

		auto p = my_find_if(s.begin(), s.end(), [](char c) {
			return isupper(c);
			});

		if (p == s.end())
			cout << "대문자 없다" << endl;
		else
			cout << distance(s.begin(), p) + 1 << " 위치에서 발견" << endl;
	}


}