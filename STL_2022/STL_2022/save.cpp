//----------------------------------------------------------------------------------------
// SAVE.CPP
// 
// �� �Լ��� ȣ���ϸ� "2022.1�б� STL ��78��23 ��������.txt"��
// ���޵� �̸��� ������ �о� �����δ�.
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

	// ���� ������ ���� - RALL
	std::ifstream in{ fname.data() };


	// �� ������ ����.
	std::ofstream out{ "2022.1�б� STL ��78��23 ��������.txt" , std::ios::app };

	// ������ ���� �̸��� ũ��(C++17)�� ����Ѵ�.
	out << std::endl << std::endl << "===================================================================" << std::endl;
	out << "���� �̸� : " << fname << std::endl;
	out << "����ũ�� : " << std::filesystem::file_size(fname) << std::endl;

	// ���� ��¥�� �ð�(C++20)�� ����Ѵ�.
	auto time = floor<std::chrono::seconds>(std::chrono::system_clock::now());
	out << "���� �ð� : " << std::chrono::zoned_time("Asia/Seoul", time) << std::endl;

	// ���� ������ �������� ���Ͽ� �����δ�.

	// 1. ���Ϳ� ������ �о�´�. - �����̳�
	//vector<char> v{ istream_iterator<char>{in},{} };
	std::vector<char> v{ std::istreambuf_iterator<char>{in},{} };

	// 2. copy �˰����� �̿��� ���Ϳ� �ִ� ���ڸ� �����������Ϸ� �����Ѵ�,
	copy(v.begin(), v.end(), std::ostream_iterator<char>{out});
}