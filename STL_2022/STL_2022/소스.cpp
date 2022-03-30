//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 30�� ������
// ��78��23 (4�� 2��)
//
// �ڿ��� �����ϴ� Ŭ������ ����� �����ϸ鼭 - �����̳� / �ݺ��� / �˰���
// RVO(Return value optimization), Copy Ellision
// 
// �����̳� -> Containers are objects that store other objects
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <array>
#include <algorithm>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����] 

int main()
{	
	// ��������� �ּ�ȭ
	//���� = true;

	array<STRING, 3> a{ "2022��", "3��", "30��" };

	// a�� ���ڼ� ���� ������������ ������ �� ���

	sort(a.begin(), a.end(), [](STRING l, STRING r) {return l.getNum() < r.getNum(); });

	//sort(a.begin(), a.end(), [](STRING l, STRING r) {return l < r; });

	
	/*for (STRING& x : a)
	{
		cout << x << endl;
	}*/

	for (int i{}; i < a.size(); ++i)
	{
		cout << a[i] << endl;
	}

	//save("�ҽ�.cpp");
}