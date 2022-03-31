//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 31일 목요일
// 수78목23 (5주 1일)
//
// RVO(Return value optimization), Copy Ellision
// 
// 컨테이너 -> Containers are objects that store other objects
// 
// 컨테이너
// Sequence container
//		array				- 유일하게 원소 갯수가 고정됨.
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

extern bool 관찰;

//template<class T, int N>
//class Array 
//{
//	T data[N];
//public:
//	begin() { return &data[0]; }
//};

// [문제] 

int main()
{	

	array<int, 10> a{ 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

	// int a[10];을 왜 쓰지 말아야 할까?
	/*int a[10] {};
	for (int i = 1; i <= 10; ++i)
	{
		cout << a[i] << endl;
	} 이러면 마지막 원소가 쓰레기값이 나온다.
	*/

	while (true)
	{
		int num{};
		cout << "몇 번째 값을 찾으시나요? : ";
		cin >> num;

		try 
		{
			cout << num << " - " << a.at(num) << endl;
		}
		catch (exception& e)
		{
			cout << e.what() << endl;		// 10 - invalid array<T, N> subscript
			cout << "유효범위는 0부터 9까지 입니다" << endl;
		}
	}

	//save("소스.cpp");
}