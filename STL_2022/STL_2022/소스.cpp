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
//		deque
//		foward_list
//		list
// 
// ���� - �߰����� 4.20(��) (7�� 2��)
// ����ð� 70�� 1745~
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <array>

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
	array<int, 26> arr{};

	// �� Ǯ��
	{
		/*while (in >> c)
		{
			c = tolower(c);

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
		}*/
	}
	
	//������ Ǯ��
	
	while (in >> c)
		if (isalpha(c))
			arr[tolower(c) - 'a']++;

	for (int i = 0; i < arr.size(); ++i)
	{
		cout << "[" << static_cast<char>(i + 'a') << "] - " << arr[i] << endl;
	}

	//save("�ҽ�.cpp");
}