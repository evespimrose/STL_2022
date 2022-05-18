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
#include <unordered_set>
#include <unordered_map>
#include <string>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// Ŭ���� Ư��ȭ, class specialization. Ŭ���� �Ϲ�ȭ�� class generalization
template<>
class hash<STRING>
{
public:
	size_t operator()(const STRING& str) const 
	{
		auto val = hash<string>()({ str.begin(),str.end() });
		cout << "�ؼ��� ��� - " << val << ", �޸��� ��ġ - " << val % 8 << endl;
		return val;
	}
};

// [����]
// ������������ ��¥ �������Ѱ�?
// ����� ����ؼ� �˾ƺ���.
//

int main()
{
	//save("�ҽ�.cpp");

	unordered_set<STRING> us{ "Standard", "Template", "Library" };

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
		cout << "�߰��� STRING��? : ";
		STRING str;
		cin >> str;
		us.insert(str);

	}

}