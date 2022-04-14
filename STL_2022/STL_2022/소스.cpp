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
#include <deque>
#include <fstream>
#include <string>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����] "�ҽ�.cpp"�� �ܾ�(string)�� deque�� �о���ÿ�.
// �̰��� �������� �����Ͻÿ�.
// ����� ����Ͻÿ�.
// 

int main()
{
	ifstream in{ "�ҽ�.cpp" };

	string s;

	deque<string> sd;

	while (in >> s)
	{
		sd.push_back(s);
	}

	sort(sd.begin(), sd.end(), [](string l, string r) {return l < r; });

	for (const string& s : sd)
		cout << s << "\t";

	//save("�ҽ�.cpp");
}