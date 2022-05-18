//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 18�� ������
// ��78��23 (11�� 2��)
// 
// 5�� 25�� ���� ����ȸ(�� 56����)
// 5/30 ~ 6/20 �������� ��û��
// 
// Sequential Cntainer - array, vector, deque, fowardlist, list
// Associative Container - set, multi_set, map, multi_map
// 
// Unordered Associative Container - u_set, u_multiset, u_map, u_multimap
//  - ��� �޸𸮰� �����Ǿ� �ֳ�? - �׸����� �˾ƺ���.
//  - ���� ���� STRING�� ���ҷ� �������� set�� ���Ұ� �Ƿ���?
// 
// �����̳��� ã�� �Ƿ� ���� - vector / set / unordered_set
// 
//----------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"
#include "STRING.h"
#include <unordered_set>
#include <unordered_map>

using namespace std;

extern bool ����;

// [����]
// ������������ ��¥ �������Ѱ�?
// ����� ����ؼ� �˾ƺ���.
//

int main()
{		
	//save("�ҽ�.cpp");

	unordered_set<int> us{ 1,2,3,4 };

	while (true)
	{
		// �޸� ���� ���
		for (int i{}; i < us.bucket_count(); ++i)
		{
			cout << "[" << i << "] ";
			for (auto p = us.begin(i); p != us.end(i); ++p)
				cout << "-> " << *p;
			cout << endl;
		}
		cout << endl;

		// ���ο� ���� �߰�
		cout << "�߰��� int��? : ";
		int num;
		cin >> num;
		us.insert(num);

	}

}