//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 16일 수요일
// 수78목23 (2주 2일)
// 
// 
// 템플릿 - 자료형에 관계없는 함수와 클래스를 만드는 C++ 핵심 keyword
//		  - 이러한 방식의 코딩을 generic 
// 
// 많은 데이터를 다루는 연습 - 파일
// 숙제 - 파일입출력 알아보기
// 다음시간 질문 - int 1000개를 저장하려면 몇 바이트가 필요할까?
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <algorithm>
#include <format>		// c++20
#include <cmath>
#include <array>
#include "save.h"

using namespace std;

// [문제] 
// 랜덤 값 int 1000개를 파일에 메모리 그대로 기록하라. 
// 이 때, 바이너리 모드로 기록하면 쓸데없는 변환을 안하도록 할 수 있다.
// random int 1000s.txt 파일에 binary 모드와 write 함수를 사용하여 기록되었다.
// 읽어서 가장 큰 값을 찾아 화면에 출력하라.

int main()
{
	ifstream in{ "random int 1000s.txt", ios::binary };
	

	{
		/*int num;
		int max{ numeric_limits<int>::min() };

		for (int i = 0; i < 1000; ++i)
		{
			in.read((char*)&num, sizeof(num));
			max = std::max(num, max);
		}
		cout << max << endl;*/
	}

	{
		int num[1'000];
		in.read((char*)num, sizeof(int) * 1'000);
		{
			/*for (int num : num)
				cout << num << "\t";
			cout << endl;*/
		}
		{
			for (int num : num)
				cout << format("{:20}", num);
		}
		cout << endl;
		cout << *max_element(begin(num), end(num)) << endl;
	}
	{
		//int num[1'000];
		array<int, 1000> num;

		in.read((char*)num.data(), sizeof(int) * 1'000);
		{
			/*for (int num : num)
				cout << num << "\t";
			cout << endl;*/
		}
		{
			for (int num : num)
				cout << format("{:20}", num);
		}
		cout << endl;
		cout << *max_element(begin(num), end(num)) << endl;
	}

	//save("소스.cpp");
}

