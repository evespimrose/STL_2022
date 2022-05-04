//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 04일 수요일
// 수78목23 (9주 2일)
// 
// 컨테이너					- 다른 객체를 저장하는 객체
// Sequence container		- 임의의 위치에 원소의 값을 읽고 쓰거나 추가할 수 있다.
// 
// C++20 span - contiguous 컨테이너와 연결된 view를 말함.
//				배열이 인자로 전달될 때 size()를 알 수 없는 문제를 해결.
//				[], array, vector, string, STRING
//				-> 이것들을 일관되게 취급하려고 만든 view.
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <span>
#include <deque>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

void print(span<int>);

void print(span<int> a)			// 배열은 인자로 전달되면 포인터가 된다(type decay)
{
	cout << "전체 메모리 크기 : " << a.size_bytes() << endl;
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << " - ";
	cout << endl;
}

// [문제]
// print 함수는 a를 인자로 받아 전체 원소를 출력한다.
// 선언하고 정의하라.
//

int main()
{
	int a[10]{ 1,2,3,4,5 };

	print(a);

	//save("소스.cpp");
}