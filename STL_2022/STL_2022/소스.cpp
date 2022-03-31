//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 31�� �����
// ��78��23 (5�� 1��)
//
// RVO(Return value optimization), Copy Ellision
// 
// �����̳� -> Containers are objects that store other objects
// 
// �����̳�
// Sequence container
//		array				- �����ϰ� ���� ������ ������.
//		vector				- 
//		deque
//		foward_list
//		list
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <array>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

//template<class T, int N>
//class Array 
//{
//	T data[N];
//public:
//	begin() { return &data[0]; }
//};

// [����] 

int main()
{	

	array<int, 10> a{ 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

	// int a[10];�� �� ���� ���ƾ� �ұ�?
	/*int a[10] {};
	for (int i = 1; i <= 10; ++i)
	{
		cout << a[i] << endl;
	} �̷��� ������ ���Ұ� �����Ⱚ�� ���´�.
	*/

	while (true)
	{
		int num{};
		cout << "�� ��° ���� ã���ó���? : ";
		cin >> num;

		try 
		{
			cout << num << " - " << a.at(num) << endl;
		}
		catch (exception& e)
		{
			cout << e.what() << endl;		// 10 - invalid array<T, N> subscript
			cout << "��ȿ������ 0���� 9���� �Դϴ�" << endl;
		}
	}

	//save("�ҽ�.cpp");
}