//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 25�� ������
// ��78��23 (12�� 1��)
// 
// 5�� 25�� ���� ����ȸ(�� 56����)
// 5/30 ~ 6/20 �������� ��û��
// 
// �˰���
//  - non-modifying sequence operation(���Ҹ� �������� �ʴ� �˰���)
// 
// ���� - 15�� 1�� : 6�� 15�� ������
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// ���Ϳ��� ¦���� ������.
//

int main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// erase-remove idiom : ���� ��Ʈ�� ���� ���δٴ� ��.
	// erase-remove idiom�� ��Ģ������ c++20 ���ʹ� �����Ǵ� ���� erase �Լ��� �̿��ص� �ذ� ����
	//v.erase(remove_if(v.begin(), v.end(), [](int i) {return i % 2 == 0; }), v.end());
	erase_if(v, [](int i) {return i % 2 == 0; });

	for (int i : v)
		cout << i << " ";
	cout << endl;

	//save("�ҽ�.cpp");
}