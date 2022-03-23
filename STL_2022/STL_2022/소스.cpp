//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 23�� ������
// ��78��23 (3�� 2��)
// 
// ���� �ð� : RAII / stack unwinding
// 
// �̹� �ð� : ȣ�Ⱑ��(Callable) Ÿ�� -  ������ ����(sort)
// �ڿ��� �����ϴ� Ŭ������ ����� �����ϸ鼭 - �����̳� / �ݺ��� / �˰���
// String Ŭ������ ����� �����鼭 STL�� �����غ���.
// 
//----------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <algorithm>
#include "save.h"

using namespace std;

// [����] �� "�ҽ�.cpp" ������ 
// ���ڸ� *�� �ٲ��.
// "�ҽ� �빮��.cpp"�� �����϶�.

int main()
{


	ifstream in("�ҽ�.cpp");
	ofstream out("�ҽ� �빮��.cpp");

	in >> noskipws;

	if(false) {
		// c �Լ� ��� ���
		char c;
		while (in >> c)
		{
			if (islower(c))
				c = toupper(c);
			out << c;
		}
	}
	{
		// STL ��� ���
		//transform(������, ��������, ���⿡ ����, �̷��� �ٲ㼭)
		//transform(istreambuf_iterator<char>{in}, {}, ostreambuf_iterator{ out }, toupper);
		transform(istreambuf_iterator<char>{in}, {}, ostreambuf_iterator{ cout }, [](char c) {
			if (isdigit(c))
				c = '*';
			return c; 
			});

	}
	save("�ҽ�.cpp");
}