//----------------------------------------------------------------------------------------
// SAVE.CPP
// 
// 이 함수를 호출하면 "2022.1학기 STL 수78목23 강의저장.txt"에
// 전달된 이름의 파일을 읽어 덧붙인다.
// 2022. 3. 3								BY JHT
//----------------------------------------------------------------------------------------

#include <iostream>
#include <filesystem>
#include <chrono>
#include <fstream>
#include <vector>
#include <algorithm>

#include "save.h"

//void save(const char*)
//void save(const string&)
void save(std::string_view fname)
{

	// 읽을 파일을 연다 - RALL
	std::ifstream in{ fname.data() };


	// 쓸 파일을 연다.
	std::ofstream out{ "2022.1학기 STL 수78목23 강의저장.txt" , std::ios::app };

	// 저장할 파일 이름과 크기(C++17)를 출력한다.
	out << std::endl << std::endl << "===================================================================" << std::endl;
	out << "파일 이름 : " << fname << std::endl;
	out << "파일크기 : " << std::filesystem::file_size(fname) << std::endl;

	// 현재 날짜와 시간(C++20)을 출력한다.
	auto time = floor<std::chrono::seconds>(std::chrono::system_clock::now());
	out << "저장 시간 : " << std::chrono::zoned_time("Asia/Seoul", time) << std::endl;

	// 읽은 파일을 강의저장 파일에 덧붙인다.

	// 1. 벡터에 파일을 읽어온다. - 컨테이너
	//vector<char> v{ istream_iterator<char>{in},{} };
	std::vector<char> v{ std::istreambuf_iterator<char>{in},{} };

	// 2. copy 알고리즘을 이용해 벡터에 있는 글자를 강의저장파일로 복사한다,
	copy(v.begin(), v.end(), std::ostream_iterator<char>{out});
}