//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 16�� ������
// ��78��23 (2�� 2��)
// 
// 
// ���ø� - �ڷ����� ������� �Լ��� Ŭ������ ����� C++ �ٽ� keyword
//		  - �̷��� ����� �ڵ��� generic 
// 
// ���� �����͸� �ٷ�� ���� - ����
// ���� - ��������� �˾ƺ���
// �����ð� ���� - int 1000���� �����Ϸ��� �� ����Ʈ�� �ʿ��ұ�?
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <algorithm>
#include <format>		// c++20
#include <cmath>
#include <array>
#include "save.h"

using namespace std;

// [����] 
// ���� �� int 1000���� ���Ͽ� �޸� �״�� ����϶�. 
// �� ��, ���̳ʸ� ���� ����ϸ� �������� ��ȯ�� ���ϵ��� �� �� �ִ�.
// random int 1000s.txt ���Ͽ� binary ���� write �Լ��� ����Ͽ� ��ϵǾ���.
// �о ���� ū ���� ã�� ȭ�鿡 ����϶�.

int main()
{
	ifstream in{ "random int 1000s.txt", ios::binary };
	

	{
		/*int num;
		int max{ numeric_limits<int>::min() };

		for (int i = 0; i < 1000; ++i)
		{
			in.read((char*)&num, sizeof(num));
			max = std::max(num, max);
		}
		cout << max << endl;*/
	}

	{
		int num[1'000];
		in.read((char*)num, sizeof(int) * 1'000);
		{
			/*for (int num : num)
				cout << num << "\t";
			cout << endl;*/
		}
		{
			for (int num : num)
				cout << format("{:20}", num);
		}
		cout << endl;
		cout << *max_element(begin(num), end(num)) << endl;
	}
	{
		//int num[1'000];
		array<int, 1000> num;

		in.read((char*)num.data(), sizeof(int) * 1'000);
		{
			/*for (int num : num)
				cout << num << "\t";
			cout << endl;*/
		}
		{
			for (int num : num)
				cout << format("{:20}", num);
		}
		cout << endl;
		cout << *max_element(begin(num), end(num)) << endl;
	}

	//save("�ҽ�.cpp");
}

