//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 5�� 11�� ������
// ��78��23 (10�� 2��)
// 
// 5�� 25�� ���� ����ȸ(�� 56����)
// 5/30 ~ 6/20 �������� ��û��
// 
// Associative Container - set, multi_set, map, multi_map
// set - ������ key�� compare�� �����ϰ� �ִ�. ã��/�߰�/���� O(log N)
//      - set�� �ֿ� ������ �˾ƺ���. (���� ã�� ���� �����̳�)
//      - ���� ���� �ڷ���(class Dog)�� set�� �־� ����
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <set>

#include "save.h"
#include "STRING.h"

using namespace std;

extern bool ����;

// [����]
// Ű���� �Է��� �ܾ set<STRING>�� �־��
// set<STRING>�� ���ı����� �ܾ���� ���������̴�
// set�� ȭ�鿡 ����϶�
//

class ���̼�
{
public:
	bool operator()(const STRING& a, const STRING& b) const
	{
		return a.getNum() < b.getNum();
	}
};

int main()
{
	save("�ҽ�.cpp");

	set<STRING, ���̼�> s{ istream_iterator<STRING>{cin}, {} };
	
	for (const STRING& word : s)
		cout << word << endl;

}