//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 4월 07일 목요일
// 수78목23 (6주 1일)
//
// RVO(Return value optimization), Copy Ellision
// 
// 컨테이너 -> Containers are objects that store other objects
// 
// 컨테이너
// Sequence container		- 임의의 위치에 원소의 값을 읽고 쓰거나 추가할 수 있다.
//		array				- 유일하게 원소 갯수가 고정됨.
//		vector				- 
//		deque
//		foward_list
//		list
// 
// 예정 - 중간시험 4.27(수) (8주 2일)
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] "소스.cpp"를 읽어 영문자갯수를 세서 다음 형식과 같이 출력
// [a] - 10

int main()
{
	ifstream in{ "소스.cpp" };

	char c;
	int cnt[26]{};

	while (in >> noskipws >> c)
	{
		if (isalpha(c) != 0)
		{
			for (int i = 0; i < 26; ++i)
			{
				if (c == i + 'a')
				{
					cnt[i]++;
				}
			}
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		cout << (char)(i + 'a') << "의 개수 : " << cnt[i] << endl;
	}

	//save("소스.cpp");
}