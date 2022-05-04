//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 04�� ������
// ��78��23 (9�� 2��)
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

template <class Input, class Output>
void my_copy(Input b, Input e, Output f)
{
	while (b != e) {
		*f = *b;
		++b;
		++f;
	}
}

// [����]
// Ű���忡�� �Է��� ���ڸ� �״�� ȭ�鿡 ����϶�.
//

int main()
{
	//save("�ҽ�.cpp");

	vector<char> v;
	v.reserve(100);

	my_copy(istream_iterator<char>{cin}, {}, back_inserter(v));

	// back_inserter operator=  => container->push_back(_STD move(_Val));

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " - ";
	cout << endl;
}