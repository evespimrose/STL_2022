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
	STRING s{ "1234567890" };

	for (char c : s)
		cout << c << " * " << endl;
	cout << endl;

	/*for (auto i = s.begin(); i != s.end(); ++i)
		cout << *i << " ? ";
	cout << endl;*/

	//save("�ҽ�.cpp");
}