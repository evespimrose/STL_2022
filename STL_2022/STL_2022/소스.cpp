//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 18일 수요일
// 수78목23 (11주 2일)
// 
// 5월 25일 졸작 설명회(수 56교시)
// 5/30 ~ 6/20 지도교수 신청일
// 
// Sequential Cntainer - array, vector, deque, fowardlist, list
// Associative Container - set, multi_set, map, multi_map
// 
// Unordered Associative Container - u_set, u_multiset, u_map, u_multimap
//  - 어떻게 메모리가 구성되어 있나? - 그림으로 알아본다.
//  - 내가 만든 STRING을 원소로 순서없는 set의 원소가 되려면?
// 
// 컨테이너의 찾기 실력 검증 - vector / set / unordered_set
// 
//----------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"
#include "STRING.h"
#include <unordered_set>
#include <unordered_map>

using namespace std;

extern bool 관찰;

// [문제]
// 유니폼분포가 진짜 유니폼한가?
// 결과를 출력해서 알아본다.
//

int main()
{		
	//save("소스.cpp");

	unordered_set<int> us{ 1,2,3,4 };

	while (true)
	{
		// 메모리 내용 출력
		for (int i{}; i < us.bucket_count(); ++i)
		{
			cout << "[" << i << "] ";
			for (auto p = us.begin(i); p != us.end(i); ++p)
				cout << "-> " << *p;
			cout << endl;
		}
		cout << endl;

		// 새로운 원소 추가
		cout << "추가할 int는? : ";
		int num;
		cin >> num;
		us.insert(num);

	}

}