//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 04일 수요일
// 수78목23 (9주 2일)
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

template <class Input, class Output>
void my_copy(Input b, Input e, Output f)
{
	while (b != e) {
		*f = *b;
		++b;
		++f;
	}
}

// [문제]
// 키보드에서 입력한 문자를 그대로 화면에 출력하라.
//

int main()
{
	//save("소스.cpp");

	vector<char> v;
	v.reserve(100);

	my_copy(istream_iterator<char>{cin}, {}, back_inserter(v));

	// back_inserter operator=  => container->push_back(_STD move(_Val));

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " - ";
	cout << endl;
}