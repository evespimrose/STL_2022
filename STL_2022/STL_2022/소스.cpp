//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 11일 수요일
// 수78목23 (10주 2일)
// 
// 5월 25일 졸작 설명회(수 56교시)
// 5/30 ~ 6/20 지도교수 신청일
// 
// Associative Container - set, multi_set, map, multi_map
// set - 언제나 key를 compare로 정렬하고 있다. 찾기/추가/삭제 O(log N)
//      - set의 주요 동작을 알아본다. (빨리 찾기 위한 컨테이너)
//      - 내가 만든 자료형(class Dog)을 set에 넣어 관리
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <set>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 키보드 입력한 단어를 set<STRING>에 넣어라
// set<STRING>의 정렬기준은 단어길이 오름차순이다
// set을 화면에 출력하라
//

class 길이순
{
public:
	bool operator()(const STRING& a, const STRING& b) const
	{
		return a.getNum() < b.getNum();
	}
};

int main()
{
	save("소스.cpp");

	set<STRING, 길이순> s{ istream_iterator<STRING>{cin}, {} };
	
	for (const STRING& word : s)
		cout << word << endl;

}