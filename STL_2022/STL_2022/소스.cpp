//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 3일 목요일
// 수78목23 (1주 2일)
// 
// 
// 할일 - 어제 코딩한 save 함수를 save.cpp로 분리한 후 실행되도록 수정
// 
//----------------------------------------------------------------------------------------

#include <iostream>

#include "save.h"

using namespace std;

int main()
{
	string a;
	string_view b;
	cout << "string의 크기 - " << sizeof(a) << endl << "string_view의 크기 - " << sizeof(b) << endl;

	save("소스.cpp");
}
