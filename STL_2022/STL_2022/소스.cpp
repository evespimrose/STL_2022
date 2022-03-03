//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 2일 수요일
// 수78목23 (1주 1일)
// 
// - 강의 소개
// - cppreference.com
// - google coding convention을 참고
// - 프로젝트 환경설정 통일
// 
// 할일 - 한학기 코딩한 내용을 저장할 수 있게 save 기능 완성
// 내일 할일 - save 함수 save.h로 분리
//----------------------------------------------------------------------------------------

#include <iostream>
#include <string_view>
#include <filesystem>
#include <chrono>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

//void save(const char*)
//void save(const string&)
void save(string_view fname)
{

	// 읽을 파일을 연다
	// 쓸 파일을 연다.
	ifstream in{ fname.data() };
	ofstream out{ "2022.1학기 STL 수78목23 강의저장.txt" , ios::app };

	// 저장할 파일 이름과 크기를 출력한다.
	out << "===================================================================" << endl;
	out << "파일 이름 : " << fname << endl;
	out << "파일크기 : " << filesystem::file_size(fname) << endl;

	// 현재 날짜와 시간(C++20)을 출력한다.
	auto time = floor<chrono::seconds>(chrono::system_clock::now());
	out << "저장 시간 : " << chrono::zoned_time("Asia/Seoul", time) << endl;

	// 읽은 파일을 강의저장 파일에 덧붙인다.
	// 1. 벡터에 파일을 읽어온다.
	//vector<char> v{ istream_iterator<char>{in},{} };
	vector<char> v{ istreambuf_iterator<char>{in},{} };

	// 2. copy 알고리즘을 이용해 벡터에 있는 글자를 강의저장파일로 복사한다,
	copy(v.begin(), v.end(), ostream_iterator<char>{out});
}

int main()
{
	// string과 string_view의 크기 확인
	// 서로의 크기가 다른 이유?
	string a;
	string_view b;
	cout << "string의 크기 - " << sizeof(a) << endl << "string_view의 크기 - " << sizeof(b) << endl;
	save("소스.cpp");
}
