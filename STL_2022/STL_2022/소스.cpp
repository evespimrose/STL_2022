//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 18�� ������
// ��78��23 (11�� 2��)
// 
// 5�� 25�� ���� ����ȸ(�� 56����)
// 5/30 ~ 6/20 �������� ��û��
// 
// Sequential Cntainer - array, vector, deque, fowardlist, list
// Associative Container - set, multi_set, map, multi_map
// 
// Unordered Associative Container - u_set, u_multiset, u_map, u_multimap
//  - ��� �޸𸮰� �����Ǿ� �ֳ�? - �׸����� �˾ƺ���.
//  - ���� ���� STRING�� ���ҷ� �������� set�� ���Ұ� �Ƿ���?
// 
// �����̳��� ã�� �Ƿ� ���� - vector / set / unordered_set
// int 
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <array>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <random>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// ���� 1000���� ������ �޸�
//
array<int, 1000'0000> numbers;

// �����̳ʿ� �ֳ� ã�ƺ� int ����
array<int, 10'000> toFind;

default_random_engine dre;
uniform_int_distribution uid{ 1,1'0000'0000 };

int main()
{
	//save("�ҽ�.cpp");

	// õ���� ��������
	for (int& n : numbers)
		n = uid(dre);
	// õ�� ��������
	for (int& n : toFind)
		n = uid(dre);

	{
		auto time = clock();

		int cnt{};
		// ������ ã��Ƿ��� �˾ƺ���.
		vector<int> v{ numbers.begin(),numbers.end() };

		cout << "������ ���� ���� - " << v.size() << endl;
		cout << "�ɸ� �ð� - " << (double)(clock() - time) / CLOCKS_PER_SEC << "��" << endl << endl;

		time = clock();

		for (int n : toFind)
		{
			auto p = find(v.begin(), v.end(), n);
			if (p != v.end())
				cnt++;
		}
		cout << "ã�ƾ� �� int ���� - " << toFind.size() << endl;
		cout << "���Ϳ��� ã�� ���� - " << cnt << endl << endl;
		cout << "�ɸ� �ð� (O(n)) - " << (double)(clock() - time) / CLOCKS_PER_SEC << "��" << endl << endl;
	}
	{
		auto time = clock();
		int cnt{};
		// ���� ã��Ƿ��� �˾ƺ���.
		set<int> s{ numbers.begin(),numbers.end() };

		cout << "���� ���� ���� - " << s.size() << endl;
		cout << "�ɸ� �ð� - " << (double)(clock() - time) / CLOCKS_PER_SEC << "��" << endl << endl;

		time = clock();

		for (int n : toFind)
		{
			if (s.contains(n))
				cnt++;
		}
		cout << "ã�ƾ� �� int ���� - " << toFind.size() << endl;
		cout << "�¿��� ã�� ���� - " << cnt << endl << endl;
		cout << "�ɸ� �ð� (O(log n)) - " << (double)(clock() - time) / CLOCKS_PER_SEC << "��" << endl << endl;
	}
	{
		auto time = clock();
		int cnt{};
		// ���������� ã��Ƿ��� �˾ƺ���.
		unordered_set<int> us{ numbers.begin(),numbers.end() };

		cout << "���������� ���� ���� - " << us.size() << endl;
		cout << "�ɸ� �ð� - " << (double)(clock() - time) / CLOCKS_PER_SEC << "��" << endl << endl;

		time = clock();

		for (int n : toFind)
		{
			if (us.contains(n))
				cnt++;
		}
		cout << "ã�ƾ� �� int ���� - " << toFind.size() << endl;
		cout << "�������¿��� ã�� ���� - " << cnt << endl << endl;
		cout << "�ɸ� �ð� (O(1)) - " << (double)(clock() - time) / CLOCKS_PER_SEC << "��" << endl << endl;
	}

	{
		auto time = clock();

		int cnt{};
		// ���ĵ� ������ ã��Ƿ��� �˾ƺ���.
		vector<int> v{ numbers.begin(),numbers.end() };
		sort(v.begin(), v.end());

		cout << "���ĵ� ������ ���� ���� - " << v.size() << endl;
		cout << "�ɸ� �ð� - " << (double)(clock() - time) / CLOCKS_PER_SEC << "��" << endl << endl;

		time = clock();

		for (int n : toFind)
		{
			if (binary_search(v.begin(), v.end(), n))
				cnt++;
		}
		cout << "ã�ƾ� �� int ���� - " << toFind.size() << endl;
		cout << "���ĵ� ���Ϳ��� ã�� ���� - " << cnt << endl << endl;
		cout << "�ɸ� �ð� (O(log n)) - " << (double)(clock() - time) / CLOCKS_PER_SEC << "��" << endl << endl;
	}

}