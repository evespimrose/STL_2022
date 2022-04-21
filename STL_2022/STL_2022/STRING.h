//----------------------------------------------------------------------------------------------
// STRING.cpp - �ڿ��� �����ϴ� STL ������ Ŭ����
// 
// 2022.3.20
//

#pragma once

#include <iostream>

class STRING {
	// ��� 4����Ʈ �ӵ��� ���� �����
	int id;								// ���� �� �ο�
	size_t num;							// Ȯ���� �ڿ��� ��
	char* p;							// Ȯ���� �ڿ��� ��ġ
	static int cid;						// ��ü�� ������ ������ 1 ����

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

	// 2022.04.21 begin(), end() �ڵ�
	STRING_iterator begin()
	{
		// �޸� ���۹����� �˷��ָ� �ȴ�.
		return STRING_iterator(p);
	}

	STRING_iterator end()
	{
		// �޸� �� ������ �˷��ָ� �ȴ�.
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