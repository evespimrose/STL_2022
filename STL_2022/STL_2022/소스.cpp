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
#include "save.h"

using namespace std;

// [����] 
// ȣ�Ⱑ��(Callable) Ÿ��
// ȣ�Ⱑ���� Ÿ���� � �͵��� �ֳ�?
// 1. �Լ� - CODE ���׸�Ʈ�� ��ϵ� ��ɾ� ������ ���۹���
// 2. ���� - �̸� ���� �Լ�
//

class Cat {};

auto x2 = []() {
	cout << "�ȳ�! �� ���پ�! ����!" << endl;
};

int main()
{
	class Dog {};




	//lambda
	auto x = []() {
		cout << "�ȳ�! �� ���پ�! ����!" << endl;
	};

	auto x1 = []() {
		cout << "�ȳ�! �� ���پ�! ����!" << endl;
	};

	cout << typeid(Dog).name() << endl;
	// class `int __cdecl main(void)'::`2'::Dog
	cout << typeid(Cat).name() << endl;
	// class Cat
	cout << typeid(x).name() << endl;
	//class `int __cdecl main(void)'::`2'::<lambda_1>
	cout << typeid(x1).name() << endl;
	//class `int __cdecl main(void)'::`2'::<lambda_2>
	cout << typeid(x2).name() << endl;
	//class x2::<lambda>

	// �����Լ��� Ŭ������ �����Ǿ� ����.


	//save("�ҽ�.cpp");
}