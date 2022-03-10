//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 10�� �����
// ��78��23 (2�� 1��)
// 
// 
// ���ø� - �ڷ����� ������� �Լ��� Ŭ������ ����� C++ �ٽ� keyword
//		  - �̷��� ����� �ڵ��� generic 
// 
// ���� �����͸� �ٷ�� ���� - ����
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include "save.h"

using namespace std;

// [����] int�� �ִ� ���

int main()
{
	

	//1
	cout << "int�� �ִ� : " << numeric_limits<int>::max() << endl;
	cout << "unsigned int�� �ִ� : " << numeric_limits<unsigned int>::max() << endl;

	//2
	int num = 0x7F'FF'FF'FF;
	cout << "int�� �ִ� : " << num << endl;

	//3
	cout << "int�� �ִ� : " << INT_MAX << endl;

	save("�ҽ�.cpp");
}

//int main()
//{
//
//	srand(time(NULL));
//
//	int a[1000]{};
//
//	for (int i : a)
//	{
//		i = rand();
//		cout << i << "\t";
//	}
//
//	//save("�ҽ�.cpp");
//}

//int main()
//{
//	std::random_device rd;
//	std::mt19937 gen(rd());
//	std::uniform_int_distribution<int> dis(0, 10000000);
//
//	int a[1000]{};
//
//	for (int i : a)
//	{
//		i = dis(gen);
//		cout << i << "\t";
//	}
//
//	//save("�ҽ�.cpp");
//}

