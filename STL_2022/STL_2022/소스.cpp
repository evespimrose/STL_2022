//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 4�� 13�� ������
// ��78��23 (6�� 2��)
// 
// �����̳�					- �ٸ� ��ü�� �����ϴ� ��ü
// Sequence container		- ������ ��ġ�� ������ ���� �а� ���ų� �߰��� �� �ִ�.
// 
// �ݺ���					- �����͸� �߻�ȭ�� ��
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

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
	cout << "�ݺ��� Ÿ�� : " << typeid(Iter).name() << endl;
	//cout << "�ݺ����� ���� : " << typename(iterator_traits<Iter>::iterator_category()).name() << endl;
}

// [����]
// �ݺ����� ����(category) �� �����ϰ� �˾ƺ���.
// �ݺ��ڸ� �μ��� �޴� �Լ��� ����� � ������ �ݺ������� ����ϵ��� ����.
//

int main()
{
	save("�ҽ�.cpp");
	save("STRING.h");
	save("STRING.cpp");

	STRING s;

	cin >> s;

	// [����] s�� � ���ڰ� �� ��°���� �������.

	while (true) {
		cout << "ã������ ���ڴ�? ";
		char c;
		cin >> c;

		auto p = my_find(s.begin(), s.end(), c);
		if (p != s.end()) {
			cout << distance(s.begin(), p) + 1 << "��° �����Դϴ�" << endl;
		}
		else
			cout << c << "�� �����ϴ�" << endl;
	}
	//save("�ҽ�.cpp");
}