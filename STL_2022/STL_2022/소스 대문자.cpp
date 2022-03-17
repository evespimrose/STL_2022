//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 17일 목요일
// 수78목23 (3주 1일)
// 
// - 지난 시간 배운 것 - 앞으로 INT[100] 대신에 -> ARRAY<INT,100> 사용하자
// - 오늘 알아본 것 - 앞으로 INT* 대신에 -> UNIQUE_PTR<INT> 사용하자
//					- INT*가 NEW INT[100] 대신에 -> UNIQUE_PTR<INT[]> 사용하자 
//----------------------------------------------------------------------------------------

#INCLUDE <IOSTREAM>
#INCLUDE <FSTREAM>
#INCLUDE "SAVE.H"

USING NAMESPACE STD;

// [문제] 이 "소스.CPP" 파일의 소문자를 전부 대문자로 바꿔
// "소스 대문자.CPP"로 저장하라.

INT MAIN()
{
	IFSTREAM IN("소스.CPP");
	OFSTREAM OUT("소스 대문자.CPP");

	CHAR C;
	WHILE (IN >> NOSKIPWS >> C)
	{
		C = TOUPPER(C);
		OUT << C ;
	}

	SAVE("소스.CPP");
}