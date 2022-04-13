//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 4월 13일 수요일
// 수78목23 (6주 2일)
//
// RVO(Return value optimization), Copy Ellision
// 
// 컨테이너 -> Containers are objects that store other objects
// 
// 컨테이너
// Sequence container		- 임의의 위치에 원소의 값을 읽고 쓰거나 추가할 수 있다.
//		array				- 유일하게 원소 갯수가 고정됨.
//		vector				- 깊게 알아볼 가치가 있는 컨테이너
//		deque
//		foward_list
//		list
// 
// 예정 - 중간시험 4.20(수) (7주 2일)
// 시험시간 70분 1745~
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <array>

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
	array<int, 26> arr{};

	// 내 풀이
	{
		/*while (in >> c)
		{
			c = tolower(c);

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
		}*/
	}
	
	//교수님 풀이
	
	while (in >> c)
		if (isalpha(c))
			arr[tolower(c) - 'a']++;

	for (int i = 0; i < arr.size(); ++i)
	{
		cout << "[" << static_cast<char>(i + 'a') << "] - " << arr[i] << endl;
	}

	//save("소스.cpp");
}