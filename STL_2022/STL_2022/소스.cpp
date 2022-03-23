//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 23�� ������
// ��78��23 (3�� 2��)
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

int main()
{
	void(*f)(void) = jump;
	int cnt{};

	// 3�ʿ� �� ���� ������ �����̵尡 �ٲ��
	while (true)
	{
		f();
		// 3�ʰ� ������ �ٲ۴�
		this_thread::sleep_for(1s);
		if ((++cnt % 3) == 0)
		{
			if (f == jump)
				f = slide;
			else
				f = jump;
		}
	}

	//save("�ҽ�.cpp");
}