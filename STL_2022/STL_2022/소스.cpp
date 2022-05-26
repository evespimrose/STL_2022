//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 5월 25일 수요일
// 수78목23 (12주 1일)
// 
// 5/30 ~ 6/20 지도교수 신청일
// 
// 알고리즘 - 분리/정렬관련 함수들
//		partition
//		nth_element
//		partial_sort
//		sort
//		stable_sort
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

template<class Iter>
//vector<int>::difference_type dist(vector<int>::iterator b, vector<int>::iterator e)
long long dist(Iter b, Iter e)
{
    return e - b;
}

int main()
{
    vector<int> v{ 1,2,3,4,5 };

    cout << "반복자 간의 거리 - " << dist(v.begin(), v.end()) << endl;

    save("소스.cpp");
}