//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 25일 수요일
// 수78목23 (12주 1일)
// 
// 5월 25일 졸작 설명회(수 56교시)
// 5/30 ~ 6/20 지도교수 신청일
// 
// 알고리즘
//  - non-modifying sequence operation(원소를 수정하지 않는 알고리즘)
// 
// 시험 - 15주 1일 : 6월 15일 수요일
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool 관찰;

// [문제]
// 벡터에서 짝수를 지워라.
//

int main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// erase-remove idiom : 둘이 세트로 자주 쓰인다는 뜻.
	// erase-remove idiom이 원칙이지만 c++20 부터는 지원되는 전역 erase 함수를 이용해도 해결 가능
	//v.erase(remove_if(v.begin(), v.end(), [](int i) {return i % 2 == 0; }), v.end());
	erase_if(v, [](int i) {return i % 2 == 0; });

	for (int i : v)
		cout << i << " ";
	cout << endl;

	//save("소스.cpp");
}