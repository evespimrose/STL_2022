//----------------------------------------------------------------------------------------------
// STRING.cpp - 자원을 관리하는 STL 관찰용 클래스
// 
// 2022.3.20
//

#pragma once

#include <iostream>

class STRING {
	// 페딩 4바이트 속도를 위해 비워둠
	int id;								// 생성 시 부여
	size_t num;							// 확보한 자원의 수
	char* p;							// 확보한 자원의 위치
	static int cid;						// 객체가 생성될 때마다 1 증가

public:
	STRING();
	STRING(const char*);
	~STRING();

	STRING(const STRING&);

	STRING operator+(const STRING&) const;

	bool operator<(const STRING&) const;

	STRING operator=(const STRING&);

	void print(const char*);

	size_t getNum();

private:
	friend std::ostream& operator<<(std::ostream&, const STRING&);
};

