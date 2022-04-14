//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 4�� 13�� ������
// ��78��23 (6�� 2��)
//
// RVO(Return value optimization), Copy Ellision
// 
// �����̳� -> Containers are objects that store other objects
// 
// �����̳�
// Sequence container		- ������ ��ġ�� ������ ���� �а� ���ų� �߰��� �� �ִ�.
//		array				- �����ϰ� ���� ������ ������.
//		vector				- ��� �˾ƺ� ��ġ�� �ִ� �����̳�
//							- ���Ҹ� ������ ��ġ�� �߰��ϴ� �� Ưȭ�Ǿ� �ִ� (O(1))
//		deque				- contigous �����̳ʰ� �ƴ�.
//		foward_list
//		list
// 
// ���� - �߰����� 4.20(��) (7�� 2��)
// ����ð� 70�� 1745~
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����] "�����̳�.txt"�� �ܾ�(string)�� list�� �о���ÿ�.
// �������� �����Ͻÿ�. 
// space��� �ܾ�� �� ��° �ܾ��ΰ�?
// ����� ����Ͻÿ�.
// 

int main()
{
	ifstream in{ "�����̳�.txt" };

	list<string> l;


	string s;

	while (in >> s)
	{
		l.push_back(s);
	}

	l.sort();

	for (auto i = l.crbegin(); i != next(l.crbegin(), 10); ++i)
		cout << *i << endl;

	save("�ҽ�.cpp");
}