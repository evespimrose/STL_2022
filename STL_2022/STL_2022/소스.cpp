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

// ���� random access�� O(1)����, �ݺ��� ��ȿȭ ������ �ٽ� Ư¡
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

	auto p = find(l.begin(), l.end(), "space");
	if (p == l.end())
		cout << "�׷��� �����" << endl;
	else
	{
		cout << *p << "�� " << distance(l.begin(), p) + 1 << "�� ° �ܾ��Դϴ�." << endl;
		/*int step{};
		auto b = l.begin();
		cout << *p << "�� ";
		while (true)
		{
			if (p == b){
				cout << step + 1 << "�� ° �ܾ��Դϴ�." << endl;
				break;
			}
			else
			{
				step++;
				b++;
			}
		}distance�� ��ɰ� ����
		*/
	}


	//save("�ҽ�.cpp");
}