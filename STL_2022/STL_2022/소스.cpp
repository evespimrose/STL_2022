//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 30일 수요일
// 수78목23 (4주 2일)
//
// 자원을 관리하는 클래스를 만들어 관찰하면서 - 컨테이너 / 반복자 / 알고리즘
// RVO(Return value optimization), Copy Ellision
// 
// 컨테이너 -> Containers are objects that store other objects
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <array>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] 

int main()
{	
	// 복사생성자 최소화
	//관찰 = true;

	array<STRING, 3> a{ "2022년", "3월", "30일" };

	// a를 글자수 기준 오름차순으로 정렬한 후 출력

	sort(a.begin(), a.end(), [](STRING l, STRING r) {return l.getNum() < r.getNum(); });

	//sort(a.begin(), a.end(), [](STRING l, STRING r) {return l < r; });

	
	/*for (STRING& x : a)
	{
		cout << x << endl;
	}*/

	for (int i{}; i < a.size(); ++i)
	{
		cout << a[i] << endl;
	}

	//save("소스.cpp");
}