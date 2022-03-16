//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 16일 수요일
// 수78목23 (2주 2일)
// 
// 
// 템플릿 - 자료형에 관계없는 함수와 클래스를 만드는 C++ 핵심 keyword
//		  - 이러한 방식의 코딩을 generic 
// 
// 많은 데이터를 다루는 연습 - 파일
// 숙제 - 파일입출력 알아보기
// 다음시간 질문 - int 1000개를 저장하려면 몇 바이트가 필요할까?
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include "save.h"

using namespace std;

// [문제] 엔진과 분포를 이용하여 임의의 값을 갖는 int 1000개를 화면에 출력하라.
// 가장 큰 값을 찾아 화면에 출력해보자.

int main()
{
	ifstream in{ "random int 1000s.txt" };

	if (!in)
	{
		cout << "파일을 열 수 없습니다." << endl;
		return 0;
	}

	// 교수님
	{
		int num;
		int max{ numeric_limits<int>::min() };

		for (int i{}; i < 1000; ++i)
		{
			in >> num;
			if (max < num) max = num;
		}

		cout << max << endl;
	}

	// 교수님 2

	cout << *max_element(istream_iterator<int>{in}, {}) << endl;

	//1
	{
		int num;
		int M = 0;
		for (int i = 0; i < 1000; ++i)
		{
			in >> num;
			M = std::max(M, num);
		}
		cout << M << endl;
	}
	//2
	{
		int num;
		int M = 0;
		for (int i = 0; i < 1000; ++i)
		{
			in >> num;
			if (M < num) M = num;
		}

		cout << M << endl;
	}

	// ?? 왜다르지?
	// 2147255967
	// 1515792703

	save("소스.cpp");
}

