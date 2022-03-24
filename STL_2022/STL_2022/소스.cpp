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
#include <thread>
#include "save.h"

using namespace std;

// [����] 

void jump()
{
	cout << "«Ǫ!" << endl;
}

void slide()
{
	cout << "�����̵�!" << endl;
}

int g;

int main()
{
	// Ȯ�� : �Լ��� �̸��� �Լ��� ��ϵǾ� �ִ� CODE ���׸�Ʈ�� ���۹����̴�.
	// �Լ����� ������ �޸𸮿� ��ϵǾ� ������ �� �� �ִ�.

	cout << "main : " << addressof(main) << endl;
	cout << "save : " << addressof(save) << endl;
	cout << "jump : " << addressof(jump) << endl;
	cout << "slide : " << addressof(slide) << endl;

	int n;
	cout << "STACK : " << addressof(n) << endl;
	cout << "DATA : " << addressof(g) << endl;

	save("�ҽ�.cpp");
}