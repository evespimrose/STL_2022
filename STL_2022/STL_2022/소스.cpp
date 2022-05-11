//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 11�� ������
// ��78��23 (10�� 2��)
// 
// 5�� 25�� ���� ����ȸ
// 5/30 ~ 6/20 �������� ��û��
// 
// Associative Container - set, multi_set, map, multi_map
// set - ������ key�� compare�� �����ϰ� �ִ�. ã��/�߰�/���� O(log N)
//      - set�� �ֿ� ������ �˾ƺ���. (���� ã�� ���� �����̳�)
//      - ���� ���� �ڷ���(class Dog)�� set�� �־� ����
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
extern bool ����;

// [����]
// set���ٰ� ���� ���� �ڷ��� Dog�� �ְ�ʹ�.
// ���� ����n������������ �׻� �����ϴ� set�� ����� �ʹ�.
//

auto ���ı��� = [](const Dog& a, const Dog& b)
{
	return a.getN() < b.getN();
};

int main()
{
	//save("�ҽ�.cpp");

	multiset<Dog, decltype(���ı���)> s;

	for (int i = 0; i < 1000; ++i)
	{
		s.emplace( );
	}

	cout << "���� ���� �� - " << s.size() << endl;

	for (const Dog& dog : s)
		dog.show();

	// ������ �����?
	// 1. less<Dog>�� �ֳ� ���캻��.
	// 2. class Dog�� < �����ڸ� �����ϰ� �ִ��� ���캻��.
	//   - 2.1 ��� - �ڵ������ϸ� ����� �����.
	//	 - 2.2 ����
	// 3. ������ ���� ���ø� ���ڷ� �����Ѵ�.
	//

}