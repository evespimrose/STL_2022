//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 24�� �����
// ��78��23 (4�� 1��)
// 
// ���� �ð� : RAII / stack unwinding
// 
// �̹� �ð� : ȣ�Ⱑ��(Callable) Ÿ�� -  ������ ����(sort)
// �ڿ��� �����ϴ� Ŭ������ ����� �����ϸ鼭 - �����̳� / �ݺ��� / �˰���
// String Ŭ������ ����� �����鼭 STL�� �����غ���.
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <array>

#include "save.h"

using namespace std;

// [����] 
// ȣ�Ⱑ��(Callable) Ÿ��
// ȣ�Ⱑ���� Ÿ���� � �͵��� �ֳ�?
// 1. �Լ� - CODE ���׸�Ʈ�� ��ϵ� ��ɾ� ������ ���۹���
// 2. ���� - �̸� ���� �Լ�
// 3. Ŭ���� ��ü - fuchtion call operator ()�� �����ε��� Ŭ����
//

class Dog {
public:
	bool operator()(int a, int b) {
		cout << "Dog ȣ��" << endl;
		cout << a << " �� " << b << endl;
		return a > b;
	}
};

int main()
{
	array<int, 5> arr{1,3,5,2,4};

	sort(arr.begin(), arr.end(), Dog());
	for (int i : arr)
	{
		cout << i << " ";
	}
	cout << endl;

	//save("�ҽ�.cpp");
}