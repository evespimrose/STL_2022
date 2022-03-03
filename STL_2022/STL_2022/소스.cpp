//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 3일 목요일
// 수78목23 (1주 2일)
// 
// 
// 할일 - 어제 코딩한 save 함수를 save.cpp로 분리한 후 실행되도록 수정
// 
// &의 의미를 복습
// class를 복습
// 
//----------------------------------------------------------------------------------------

#include <iostream>

#include "save.h"

using namespace std;

class Dog
{
	int a;
public:
	Dog() {};
	//Dog(int i) { a = i; };
	Dog(int i) : a{ i } {};

	friend ostream& operator<<(ostream&, const Dog& );
};

ostream& operator<<(ostream& os, const Dog& d)
{
	os << d.a;
	return os;
}

template<typename T>
void change(T& a, T& b)
{
	T tmp{};
	tmp = a;
	// 클래스가 선언될 때, operator=은 자동으로 생성된다. 
	// a.operator=(b);
	a = b;
	b = tmp;
}

// [문제] main()을 변경하면 안된다.
// 실행하면 a와 b의 값이 서로 바껴야 한다.

int main()
{
	Dog a{ 1 };
	Dog b{ 2 };

	change(a, b);

	cout << a << ", " << b << endl;

	save("소스.cpp");
}

