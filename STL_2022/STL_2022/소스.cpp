//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 23�� ������
// ��78��23 (3�� 2��)
// 
// ���� �ð� : RAII / stack unwinding
// 
// �̹� �ð� : ȣ�Ⱑ��(Callable) Ÿ�� -  ������ ����(sort)
// �ڿ��� �����ϴ� Ŭ������ ����� �����ϸ鼭 - �����̳� / �ݺ��� / �˰���
// String Ŭ������ ����� �����鼭 STL�� �����غ���.
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <array>
#include <format>
#include <random>
#include <algorithm>
#include "save.h"

using namespace std;

// [����] �������� ���� int 100���� �����϶�.
// ������������ �����϶�.
// ȭ�鿡 ���ĵ� int 100���� ����϶�.

default_random_engine dre;

int main()
{
	std::uniform_int_distribution uid(0,100);

	array<int, 100> ai;

	{
		/*for (int i = 0; i < ai.size(); ++i)
		{
			ai[i] = uid(dre);
		}*/
		for (int& random_number : ai)
		{
			random_number = uid(dre);
		}
		cout << "���� �� ������" << endl;
		for (int num : ai)
		{
			cout << format("{:4}", num);
		}
		cout << endl << "���� �� ������" << endl;
		sort(ai.begin(), ai.end());
		for (int num : ai)
		{
			cout << format("{:4}", num);
		}
	}

	{
		//vector<int> vi;

		/*for (int i = 0; i < 100; ++i)
		{
			vi.push_back(uid(dre));
		}

		sort(vi.begin(), vi.end());

		for (int i : vi)
			cout << i << endl;*/
	}
	//save("�ҽ�.cpp");
}