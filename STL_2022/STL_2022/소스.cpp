//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 23일 수요일
// 수78목23 (3주 2일)
// 
// 지난 시간 : RAII / stack unwinding
// 
// 이번 시간 : 호출가능(Callable) 타입 -  예제는 정렬(sort)
// 자원을 관리하는 클래스를 만들어 관찰하면서 - 컨테이너 / 반복자 / 알고리즘
// String 클래스를 만들어 나가면서 STL을 이해해본다.
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <array>
#include <format>
#include <random>
#include <algorithm>
#include "save.h"

using namespace std;

// [문제] 랜덤값을 갖는 int 100개를 생성하라.
// 오름차순으로 정렬하라.
// 화면에 정렬된 int 100개를 출력하라.

default_random_engine dre;

int main()
{
	std::uniform_int_distribution uid(0,100);

	array<int, 100> ai;

	{
		/*for (int i = 0; i < ai.size(); ++i)
		{
			ai[i] = uid(dre);
		}*/
		for (int& random_number : ai)
		{
			random_number = uid(dre);
		}
		cout << "정렬 전 데이터" << endl;
		for (int num : ai)
		{
			cout << format("{:4}", num);
		}
		cout << endl << "정렬 후 데이터" << endl;
		sort(ai.begin(), ai.end());
		for (int num : ai)
		{
			cout << format("{:4}", num);
		}
	}

	{
		//vector<int> vi;

		/*for (int i = 0; i < 100; ++i)
		{
			vi.push_back(uid(dre));
		}

		sort(vi.begin(), vi.end());

		for (int i : vi)
			cout << i << endl;*/
	}
	//save("소스.cpp");
}