//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 4�� 07�� �����
// ��78��23 (6�� 1��)
//
// RVO(Return value optimization), Copy Ellision
// 
// �����̳� -> Containers are objects that store other objects
// 
// �����̳�
// Sequence container		- ������ ��ġ�� ������ ���� �а� ���ų� �߰��� �� �ִ�.
//		array				- �����ϰ� ���� ������ ������.
//		vector				- 
//		deque
//		foward_list
//		list
// 
// ���� - �߰����� 4.27(��) (8�� 2��)
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����] "�ҽ�.cpp"�� �о� �����ڰ����� ���� ���� ���İ� ���� ���
// [a] - 10

int main()
{
	ifstream in{ "�ҽ�.cpp" };

	char c;
	int cnt[26]{};

	while (in >> noskipws >> c)
	{
		if (isalpha(c) != 0)
		{
			for (int i = 0; i < 26; ++i)
			{
				if (c == i + 'a')
				{
					cnt[i]++;
				}
			}
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		cout << (char)(i + 'a') << "�� ���� : " << cnt[i] << endl;
	}

	//save("�ҽ�.cpp");
}