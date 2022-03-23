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
#include <fstream>
#include <algorithm>
#include "save.h"

using namespace std;

// [문제] 이 "소스.cpp" 파일의 
// 숫자를 *로 바꿔라.
// "소스 대문자.cpp"로 저장하라.

int main()
{


	ifstream in("소스.cpp");
	ofstream out("소스 대문자.cpp");

	in >> noskipws;

	if(false) {
		// c 함수 사용 방식
		char c;
		while (in >> c)
		{
			if (islower(c))
				c = toupper(c);
			out << c;
		}
	}
	{
		// STL 사용 방식
		//transform(어디부터, 어디까지를, 저기에 저장, 이렇게 바꿔서)
		//transform(istreambuf_iterator<char>{in}, {}, ostreambuf_iterator{ out }, toupper);
		transform(istreambuf_iterator<char>{in}, {}, ostreambuf_iterator{ cout }, [](char c) {
			if (isdigit(c))
				c = '*';
			return c; 
			});

	}
	save("소스.cpp");
}