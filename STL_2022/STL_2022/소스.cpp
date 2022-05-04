//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 4�� 13�� ������
// ��78��23 (6�� 2��)
// 
// �����̳�					- �ٸ� ��ü�� �����ϴ� ��ü
// Sequence container		- ������ ��ġ�� ������ ���� �а� ���ų� �߰��� �� �ִ�.
// 
// �ݺ���					- �����͸� �߻�ȭ�� ��
// 
// �ݺ��ڸ� �����Ѵٸ� ���׸� �Լ��� ����� �� �� �ְڴ�.
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

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
	cout << "�ݺ��� Ÿ�� : " << typeid(Iter).name() << endl;
	//cout << "�ݺ����� ���� : " << typename(iterator_traits<Iter>::iterator_category()).name() << endl;
}

// [����]
// STRING���� �빮�ڰ� �� ��°���� ����϶�. ������ ���ٰ� ����϶�.
//

int main()
{
	//save("�ҽ�.cpp");

	STRING s;			// ���� ����ȭ. ���� �ȿ��� ����Ǽ� �Ź� �ʱ�ȭ�Ǵ� ������ ���� ������ ��� �Ű��ִ� �����Ϸ��� ����. loop optimization

	while (true)
	{
		cout << "�ܾ �Է��ϼ��� : ";

		cin >> s;

		auto p = my_find_if(s.begin(), s.end(), [](char c) {
			return isupper(c);
			});

		if (p == s.end())
			cout << "�빮�� ����" << endl;
		else
			cout << distance(s.begin(), p) + 1 << " ��ġ���� �߰�" << endl;
	}


}