//----------------------------------------------------------------------------------------
// 2022. 1학기 STL 3월 23일 수요일
// 수78목23 (3주 2일)
// 
// 지난 시간 : RAII / STACK UNWINDING
// 
// 이번 시간 : 호출가능(CALLABLE) 타입 -  예제는 정렬(SORT)
// 자원을 관리하는 클래스를 만들어 관찰하면서 - 컨테이너 / 반복자 / 알고리즘
// STRING 클래스를 만들어 나가면서 STL을 이해해본다.
// 
//----------------------------------------------------------------------------------------

#INCLUDE <IOSTREAM>
#INCLUDE <FSTREAM>
#INCLUDE <ALGORITHM>
#INCLUDE "SAVE.H"

USING NAMESPACE STD;

// [문제] 이 "소스.CPP" 파일의 소문자를 전부 대문자로 바꿔
// "소스 대문자.CPP"로 저장하라.

INT MAIN()
{


	IFSTREAM IN("소스.CPP");
	OFSTREAM OUT("소스 대문자.CPP");

	IN >> NOSKIPWS;

	IF(FALSE) {
		// C 함수 사용 방식
		CHAR C;
		WHILE (IN >> C)
		{
			IF (ISLOWER(C))
				C = TOUPPER(C);
			OUT << C;
		}
	}
	{
		// STL 사용 방식
		//TRANSFORM(어디부터, 어디까지를, 저기에 저장, 이렇게 바꿔서)
		//TRANSFORM(ISTREAMBUF_ITERATOR<CHAR>{IN}, {}, OSTREAMBUF_ITERATOR{ OUT }, TOUPPER);
		TRANSFORM(ISTREAMBUF_ITERATOR<CHAR>{IN}, {}, OSTREAMBUF_ITERATOR{ OUT }, [](CHAR C) {RETURN TOUPPER(C); });

	}
	SAVE("소스.CPP");
}