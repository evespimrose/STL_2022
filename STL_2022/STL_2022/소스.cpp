//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 10일 목요일
// 수78목23 (2주 1일)
// 
// 
// 템플릿 - 자료형에 관계없는 함수와 클래스를 만드는 C++ 핵심 keyword
//		  - 이러한 방식의 코딩을 generic 
// 
// 많은 데이터를 다루는 연습 - 파일
// 
//----------------------------------------------------------------------------------------

#include <iostream>

#include "save.h"

using namespace std;

// [문제] int의 최대값을 찍어라.

int main()
{
	cout << "int의 최댓값 : ";

	//1
	cout << numeric_limits<int>::max() << endl;

	//save("소스.cpp");
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
//	//save("소스.cpp");
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
//	//save("소스.cpp");
//}

