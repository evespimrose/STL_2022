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
#include <thread>
#include "save.h"

using namespace std;

// [문제] 

void jump()
{
	cout << "짬푸!" << endl;
}

void slide()
{
	cout << "슬라이드!" << endl;
}

int main()
{
	void(*f)(void) = jump;
	int cnt{};

	// 3초에 한 번씩 점프와 슬라이드가 바뀌게
	while (true)
	{
		f();
		// 3초가 지나면 바꾼다
		this_thread::sleep_for(1s);
		if ((++cnt % 3) == 0)
		{
			if (f == jump)
				f = slide;
			else
				f = jump;
		}
	}

	//save("소스.cpp");
}