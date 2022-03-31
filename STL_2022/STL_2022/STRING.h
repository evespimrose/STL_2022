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

	void print(const char*);

	size_t getNum();

private:
	friend std::ostream& operator<<(std::ostream&, const STRING&);
};

