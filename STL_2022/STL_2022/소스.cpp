//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 19�� �����
// ��78��23 (12�� 1��)
// 
// 5�� 25�� ���� ����ȸ(�� 56����)
// 5/30 ~ 6/20 �������� ��û��
// 
// �˰���
//  - non-modifying sequence operation(���Ҹ� �������� �ʴ� �˰���)
// 
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <thread>
#include <format>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// ������ó�� �귯���� ����.
//

int main()
{
	//save("�ҽ�.cpp");

	string str{ "[South Korea and Japan just don't get along. ]" };

	for (int i = 0; i < 12; ++i)
		cout << endl;

	while (true)
	{
		rotate(str.begin() + 1, str.begin() + 2, str.end() - 1);
		cout << format("{:^70}",str) << "\r";
		this_thread::sleep_for(100ms);
	}

}