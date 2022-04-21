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

	bool operator==(const STRING&);

	STRING(STRING&& other)noexcept;

	STRING& operator=(STRING&& other)noexcept;

	void print(const char*);

	size_t getNum();

	// 2022.04.21 begin(), end() 코딩
	STRING_iterator begin()
	{
		// 메모리 시작번지를 알려주면 된다.
		return STRING_iterator(p);
	}

	STRING_iterator end()
	{
		// 메모리 끝 번지를 알려주면 된다.
		return STRING_iterator(p + num);
	}

private:
	friend std::ostream& operator<<(std::ostream&, const STRING&);
};

class STRING_iterator
{
	char* p;
public:
	STRING_iterator() = default;
	STRING_iterator(char* p) : p{ p } {}
};