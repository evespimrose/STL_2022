//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 17�� �����
// ��78��23 (3�� 1��)
// 
// - ���� �ð� ��� �� - ������ int[100] ��ſ� -> array<int,100> �������
// - ���� �˾ƺ� �� - ������ int* ��ſ� -> unique_ptr<int> �������
//					- int*�� new int[100] ��ſ� -> unique_ptr<int[]> ������� 
//----------------------------------------------------------------------------------------

#include <iostream>
#include "save.h"

using namespace std;

// �޸� ������ �ʹ̴� Dog�� ������

struct Dog
{
	Dog() { cout << "Dog ������ ȣ��" << endl; }
	~Dog() { cout << "Dog �Ҹ��� ȣ��" << endl; }
};

// [����] 
// 
// 

void f()
{
	throw 1;
}

int main()
{
	save("�ҽ�.cpp");

	/*for (int i = 0; i < 3; ++i)
	{
		Dog* p = new Dog;
		delete p;
	}*/
	unique_ptr<Dog[]>p{new Dog[3]};

	// ���⼭ ������ ����
	try
	{
		f();		// ���ܸ� ������
	}
	catch (...)		// ... elipses
	{
		cout << "���ܸ� ��Ҵ�" << endl;
		return 0;
	}
}