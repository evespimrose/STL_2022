//----------------------------------------------------------------------------------------------
// STRING.cpp - �ڿ��� �����ϴ� STL ������ Ŭ����
// 
// 2022.3.20
//

#pragma once
#include <iostream>
#include "STRING.h"

bool ����{ false };

STRING::STRING() : num{}, p{}, id{ ++cid }
{
	if (����)
	{
		print("����Ʈ");
	}
};
STRING::STRING(const char* s) : num{ strlen(s) }, id{ ++cid }
{
	p = new char[num];

	memcpy(p, s, num);

	if (����)
	{
		print("������(*)");
	}
};
STRING::~STRING() {
	// �����޽����� �Ѹ� ����Ѵ�.
	//std::cout << "dtor [" << id << "] " << this << std::endl;

	if (����)
	{
		print("�Ҹ���");
	}

	delete[] p;
}

STRING::STRING(const STRING& other) : num{ other.num }, id{ ++cid }
{
	p = new char[other.num];
	memcpy(p, other.p, num);
	if (����)
	{
		print("�������");
	}
}

STRING::STRING(STRING&& other) noexcept : id{ ++cid }, num { other.num }
{
	p = other.p;

	other.p = nullptr;
	other.num = 0;

	if (����)
	{
		print("�̵�����");
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

	if (����)
		print("�����Ҵ�");

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

	if (����)
	{
		print("�̵��Ҵ�");
	}

	return *this;
}

void STRING::print(const char* s)
{
	std::cout << s << ", [" << id << "] ��ü : " << this;
	if (num)
	{
		std::cout << " �ڿ� �� : " << num << " �ּ� : " << (void*)p;
	}
	else
	{
		std::cout << " �ڿ�����";
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