//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 3�� 23�� ������
// ��78��23 (3�� 2��)
// 
// ���� �ð� : RAII / STACK UNWINDING
// 
// �̹� �ð� : ȣ�Ⱑ��(CALLABLE) Ÿ�� -  ������ ����(SORT)
// �ڿ��� �����ϴ� Ŭ������ ����� �����ϸ鼭 - �����̳� / �ݺ��� / �˰���
// STRING Ŭ������ ����� �����鼭 STL�� �����غ���.
// 
//----------------------------------------------------------------------------------------

#INCLUDE <IOSTREAM>
#INCLUDE <FSTREAM>
#INCLUDE <ALGORITHM>
#INCLUDE "SAVE.H"

USING NAMESPACE STD;

// [����] �� "�ҽ�.CPP" ������ �ҹ��ڸ� ���� �빮�ڷ� �ٲ�
// "�ҽ� �빮��.CPP"�� �����϶�.

INT MAIN()
{


	IFSTREAM IN("�ҽ�.CPP");
	OFSTREAM OUT("�ҽ� �빮��.CPP");

	IN >> NOSKIPWS;

	IF(FALSE) {
		// C �Լ� ��� ���
		CHAR C;
		WHILE (IN >> C)
		{
			IF (ISLOWER(C))
				C = TOUPPER(C);
			OUT << C;
		}
	}
	{
		// STL ��� ���
		//TRANSFORM(������, ��������, ���⿡ ����, �̷��� �ٲ㼭)
		//TRANSFORM(ISTREAMBUF_ITERATOR<CHAR>{IN}, {}, OSTREAMBUF_ITERATOR{ OUT }, TOUPPER);
		TRANSFORM(ISTREAMBUF_ITERATOR<CHAR>{IN}, {}, OSTREAMBUF_ITERATOR{ OUT }, [](CHAR C) {RETURN TOUPPER(C); });

	}
	SAVE("�ҽ�.CPP");
}