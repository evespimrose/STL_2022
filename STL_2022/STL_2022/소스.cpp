//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 17일 목요일
// 수78목23 (3주 1일)
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include "save.h"

using namespace std;

// [문제] 
// 사용자 입력을 받아 원하는 만큼 int를 저장할 메모리를 확보하고 1부터 증가하는 정수로 메모리를 채워라.
// 전체 합계를 출력하라.

int main()
{
	//save("소스.cpp");

	while(true) 
	{
		int num;
		cout << "몇 개를 원하십니까? : ";
		cin >> num;

		int* p{ new int[num] };

		for (int i = 0; i < num; ++i)
		{
			p[i] = i + 1;
		}

		long long sum{};

		for (int i = 0; i < num; ++i)
		{
			sum += p[i];
		}

		cout << "1 부터" << num << "까지의 합계 : " << sum << endl << endl;

		delete[] p;
	}
}

