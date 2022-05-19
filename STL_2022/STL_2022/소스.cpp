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

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// v�� STRING�� �ִµ� ù���ڰ� �� �빮���ΰ�?
//

template<class InputIt, class Undefined>
bool allof(InputIt begin, InputIt end, Undefined un)
{
	//return find_if_not(begin, end, un) == end;
	while (begin != end)
	{
		if (!un(*begin))
			retrun false;
		begin++;
	}
	return true;
}

int main()
{
	vector<STRING> v{ "Standard", "Template", "Library" };

	bool res = all_of(v.cbegin(), v.cend(), [](const STRING& str) {return isupper(*str.begin()); });

	if (res)
		cout << "ù ���� �� �빮��" << endl;
	else
		cout << "�ҹ��ڷ� �����ϴ� �ܾ �ִ�" << endl;

	//save("�ҽ�.cpp");
}