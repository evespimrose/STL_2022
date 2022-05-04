//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 04�� ������
// ��78��23 (9�� 2��)
// 
// �����̳�					- �ٸ� ��ü�� �����ϴ� ��ü
// Sequence container		- ������ ��ġ�� ������ ���� �а� ���ų� �߰��� �� �ִ�.
// 
// C++20 span - contiguous �����̳ʿ� ����� view�� ����.
//				�迭�� ���ڷ� ���޵� �� size()�� �� �� ���� ������ �ذ�.
//				[], array, vector, string, STRING
//				-> �̰͵��� �ϰ��ǰ� ����Ϸ��� ���� view.
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <span>
#include <deque>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

void print(span<int>);

void print(span<int> a)			// �迭�� ���ڷ� ���޵Ǹ� �����Ͱ� �ȴ�(type decay)
{
	cout << "��ü �޸� ũ�� : " << a.size_bytes() << endl;
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << " - ";
	cout << endl;
}

// [����]
// print �Լ��� a�� ���ڷ� �޾� ��ü ���Ҹ� ����Ѵ�.
// �����ϰ� �����϶�.
//

int main()
{
	int a[10]{ 1,2,3,4,5 };

	print(a);

	//save("�ҽ�.cpp");
}