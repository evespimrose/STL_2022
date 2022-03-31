//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 31일 목요일
// 수78목23 (5주 1일)
//
// RVO(Return value optimization), Copy Ellision
// 
// 컨테이너 -> Containers are objects that store other objects
// 
// 컨테이너
// Sequence container
//		array				- 유일하게 원소 갯수가 고정됨.
//		vector				- 
//		deque
//		foward_list
//		list
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <fstream>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제] vector에 "소스.cpp" 파일을 읽어들여서 출력하라.

int main()
{	
	ifstream in("소스.cpp");


	vector<char> v;
	char c;
	while (in >> noskipws >> c)
		v.push_back(c);

	for (char c : v)
		cout << c;
	cout << endl;

	//save("소스.cpp");
}