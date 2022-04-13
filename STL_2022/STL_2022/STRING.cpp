//----------------------------------------------------------------------------------------------
// STRING.cpp - 자원을 관리하는 STL 관찰용 클래스
// 
// 2022.3.20
//

#pragma once
#include <iostream>
#include "STRING.h"

bool 관찰{ false };

STRING::STRING() : num{}, p{}, id{ ++cid }
{
	if (관찰)
	{
		print("디폴트");
	}
};
STRING::STRING(const char* s) : num{ strlen(s) }, id{ ++cid }
{
	p = new char[num];

	memcpy(p, s, num);

	if (관찰)
	{
		print("생성자(*)");
	}
};
STRING::~STRING() {
	// 관찰메시지를 켜면 출력한다.
	//std::cout << "dtor [" << id << "] " << this << std::endl;

	if (관찰)
	{
		print("소멸자");
	}

	delete[] p;
}

STRING::STRING(const STRING& other) : num{ other.num }, id{ ++cid }
{
	p = new char[other.num];
	memcpy(p, other.p, num);
	if (관찰)
	{
		print("복사생성");
	}
}

STRING::STRING(STRING&& other) noexcept : id{ ++cid }, num { other.num }
{
	p = other.p;

	other.p = nullptr;
	other.num = 0;

	if (관찰)
	{
		print("이동생성");
	}
}

STRING STRING::operator+(const STRING& rhs) const
{
	STRING tmp;

	tmp.num = num + rhs.num;
	tmp.p = new char[num + rhs.num];

	memcpy(tmp.p, p, num);
	memcpy(tmp.p + num, rhs.p, rhs.num);

	return tmp;
}

bool STRING::operator<(const STRING& rhs) const
{
	return num < rhs.num;
}

//bool STRING::operator==(const STRING& rhs)
//{
//	return num < rhs.num;
//}

STRING STRING::operator=(const STRING& other)
{
	if (this == &other)
		return *this;

	if (num)
		delete[] p;

	num = other.num;
	p = new char[num];

	memcpy(p, other.p, num);

	if (관찰)
		print("복사할당");

	return *this;
}

STRING& STRING::operator=(STRING&& other) noexcept
{
	if (this != &other) {
		if (num)
			delete p;
		num = other.num;
		p = other.p;

		other.num = 0;
		other.p = nullptr;
	}

	if (관찰)
	{
		print("이동할당");
	}

	return *this;
}

void STRING::print(const char* s)
{
	std::cout << s << ", [" << id << "] 객체 : " << this;
	if (num)
	{
		std::cout << " 자원 수 : " << num << " 주소 : " << (void*)p;
	}
	else
	{
		std::cout << " 자원없음";
	}
	std::cout << std::endl;
}

size_t STRING::getNum()
{
	return num;
}


int STRING::cid{};

std::ostream& operator<<(std::ostream& os, const STRING& s)
{
	for (int i = 0; i < s.num; ++i)
		os << s.p[i];
	return os;
}