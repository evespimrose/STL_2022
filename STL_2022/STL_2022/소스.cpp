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
#include <cmath>
#include "save.h"

using namespace std;

// [����] ������ ������ �̿��Ͽ� ������ ���� ���� int 1000���� ȭ�鿡 ����϶�.
// ���� ū ���� ã�� ȭ�鿡 ����غ���.

int main()
{
	ifstream in{ "random int 1000s.txt" };

	if (!in)
	{
		cout << "������ �� �� �����ϴ�." << endl;
		return 0;
	}

	// ������
	{
		int num;
		int max{ numeric_limits<int>::min() };

		for (int i{}; i < 1000; ++i)
		{
			in >> num;
			if (max < num) max = num;
		}

		cout << max << endl;
	}

	// ������ 2

	cout << *max_element(istream_iterator<int>{in}, {}) << endl;

	//1
	{
		int num;
		int M = 0;
		for (int i = 0; i < 1000; ++i)
		{
			in >> num;
			M = std::max(M, num);
		}
		cout << M << endl;
	}
	//2
	{
		int num;
		int M = 0;
		for (int i = 0; i < 1000; ++i)
		{
			in >> num;
			if (M < num) M = num;
		}

		cout << M << endl;
	}

	// ?? �ִٸ���?
	// 2147255967
	// 1515792703

	save("�ҽ�.cpp");
}

