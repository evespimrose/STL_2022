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

	

	my_copy(istream_iterator<char>{cin}, {}, ostream_iterator<char>{cout, " - "});
}