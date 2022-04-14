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
#include <deque>
#include <fstream>
#include <string>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] "컨테이너.txt"의 단어(string)를 deque에 읽어오시오.
// deque에 저장된 각 단어를 오름차순으로 정렬하시오.
// deque의 단어를 길이 오름차순 정렬하시오.
// 결과를 출력하시오.
// 

int main()
{
	ifstream in{ "컨테이너.txt" };

	// 덱에 읽어온다
	deque<string> d{ istream_iterator<string>{in},{} };

	// space란 단어는 몇 번째 단어인가?
	// 참고로 library는 3번째 단어이다.
	
	// 값 == 값으로 찾을 때에는 find함수가 더 유리함.

	auto p = find(d.begin(), d.end(), "library");

	cout << "단어" << *p << "는 : " << p - d.begin() + 1 << "번 째 단어입니다." << endl;

	save("소스.cpp");
}