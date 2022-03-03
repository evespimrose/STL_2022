//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 3�� �����
// ��78��23 (1�� 2��)
// 
// 
// ���� - ���� �ڵ��� save �Լ��� save.cpp�� �и��� �� ����ǵ��� ����
// 
// &�� �ǹ̸� ����
// class�� ����
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
	// Ŭ������ ����� ��, operator=�� �ڵ����� �����ȴ�. 
	// a.operator=(b);
	a = b;
	b = tmp;
}

// [����] main()�� �����ϸ� �ȵȴ�.
// �����ϸ� a�� b�� ���� ���� �ٲ��� �Ѵ�.

int main()
{
	Dog a{ 1 };
	Dog b{ 2 };

	change(a, b);

	cout << a << ", " << b << endl;

	save("�ҽ�.cpp");
}

