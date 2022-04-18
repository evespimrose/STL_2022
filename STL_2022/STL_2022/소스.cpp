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
//							- 원소를 마지막 위치에 추가하는 데 특화되어 있다 (O(1))
//		deque				- contigous 컨테이너가 아님.
//		foward_list
//		list
// 
// 예정 - 중간시험 4.20(수) (7주 2일)
// 시험시간 70분 1745~
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] "컨테이너.txt"의 단어(string)를 list에 읽어오시오.
// 오름차순 정렬하시오. 
// space라는 단어는 몇 번째 단어인가?
// 결과를 출력하시오.
// 

// 덱은 random access가 O(1)동작, 반복자 무효화 없음이 핵심 특징
//

int main()
{
	ifstream in{ "컨테이너.txt" };

	list<string> l;


	string s;

	while (in >> s)
	{
		l.push_back(s);
	}

	auto p = find(l.begin(), l.end(), "space");
	if (p == l.end())
		cout << "그런거 없어요" << endl;
	else
	{
		cout << *p << "는 " << distance(l.begin(), p) + 1 << "번 째 단어입니다." << endl;
		/*int step{};
		auto b = l.begin();
		cout << *p << "는 ";
		while (true)
		{
			if (p == b){
				cout << step + 1 << "번 째 단어입니다." << endl;
				break;
			}
			else
			{
				step++;
				b++;
			}
		}distance의 기능과 같음
		*/
	}


	//save("소스.cpp");
}