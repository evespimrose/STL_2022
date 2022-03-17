//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 17일 목요일
// 수78목23 (3주 1일)
// 
// - 지난 시간 배운 것 - 앞으로 int[100] 대신에 -> array<int,100> 사용하자
// - 오늘 알아본 것 - 앞으로 int* 대신에 -> unique_ptr<int> 사용하자
//					- int*가 new int[100] 대신에 -> unique_ptr<int[]> 사용하자 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include "save.h"

using namespace std;

// [문제] 이 "소스.cpp" 파일의 소문자를 전부 대문자로 바꿔
// "소스 대문자.cpp"로 저장하라.

int main()
{
	ifstream in("소스.cpp");
	ofstream out("소스 대문자.cpp");

	char c;
	while (in >> noskipws >> c)
	{
		c = toupper(c);
		out << c ;
	}

	save("소스.cpp");
}