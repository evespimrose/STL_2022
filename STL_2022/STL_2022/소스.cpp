//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 30�� ������
// ��78��23 (4�� 2��)
//
// �ڿ��� �����ϴ� Ŭ������ ����� �����ϸ鼭 - �����̳� / �ݺ��� / �˰���
// RVO(Return value optimization), Copy Ellision
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <functional>
#include <string>

#include "save.h"
#include "STRING.h"

using namespace std;

// [����] main()�� �������� ����ǵ��� class STRING�� �ڵ��϶�.
// special �Լ��� ������ �����ϵ��� cout���� �޸𸮿� ������ �ڵ��Ѵ�.
// ��ü ���� �� ������ȣ�� ������ �Ѵ�.

int main()
{	
	���� = true;
	STRING a{ "2022 1�б� " };
	STRING b{ "STL" };
	STRING c = a + b;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	//save("�ҽ�.cpp");
}