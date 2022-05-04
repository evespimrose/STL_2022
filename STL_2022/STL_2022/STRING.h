//----------------------------------------------------------------------------------------------
// STRING.cpp - �ڿ��� �����ϴ� STL ������ Ŭ����
// 
// 2022.3.20
//

#pragma once

#include <iostream>

class STRING_iterator {
	// 2022. 4. 28
public:	// ǥ�� �ݺ��ڶ�� �� �ټ����� Ÿ���� �����ؾ� �Ѵ�.
	using iterator_category = std::random_access_iterator_tag;
	using value_type = char;
	using difference_type = ptrdiff_t;
	using pointer = char*;
	using reference = char&;

private:
	char* p;

public:
	STRING_iterator(char* p) : p{ p } {	}

	char& operator*() const {
		return *p;
	};

	STRING_iterator& operator++() {
		++p;
		return *this;
	};

	// 2022. 4. 27 sort�� �䱸�ϴ� - ����
	difference_type operator-(const STRING_iterator& rhs) const {
		return p - rhs.p;
	}

	// 2022. 4. 28 sort�� �䱸�ϴ� -- ����
	STRING_iterator& operator--() {
		--p;
		return *this;
	}

	STRING_iterator operator+(difference_type d) const {
		return STRING_iterator{ p + d };
	}

	STRING_iterator operator-(difference_type d) const {
		return STRING_iterator{ p - d };
	}



	// <, >, <=, >=, ==, != 
	// ���迬���ڸ� �ڵ����� �����ϴ� ���ּ� �����ڸ� ����Ѵ�.
	// spaceship operator(three-way comparison operator)

	auto operator<=>(const STRING_iterator& rhs) const = default;

	// ������(strong order), �����(weak), �κм���(partial)
	//bool operator!=( const STRING_iterator& rhs ) const {
	//	std::cout << "�̰� �켱 ���" << "\n";
	//	return p != rhs.p;
	//}
};

class STRING_reverse_iterator {
	char* p;

public:
	STRING_reverse_iterator(char* p) : p{ p } { }

	char& operator*() const {
		return *(p - 1);
	};

	STRING_reverse_iterator& operator++() {
		--p;
		return *this;
	};

	// <, >, <=, >=, ==, != 
	// ���迬���ڸ� �ڵ����� �����ϴ� ���ּ� �����ڸ� ����Ѵ�.
	// spaceship operator(three-way comparison operator)

	auto operator<=>(const STRING_reverse_iterator& rhs) const = default;
};

class STRING {
	// ��� 4����Ʈ �ӵ��� ���� �����
	int id;								// ���� �� �ο�
	size_t num;							// Ȯ���� �ڿ��� ��
	char* p;							// Ȯ���� �ڿ��� ��ġ
	static int cid;						// ��ü�� ������ ������ 1 ����

public:
	// 2022. 4. 27
	using iterator = STRING_iterator;
	using reverse_iterator = STRING_reverse_iterator;
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
	iterator begin() const {
		return iterator{ p };
	}

	iterator end() const {
		return iterator{ p + num };
	}

	reverse_iterator rbegin() const {
		return reverse_iterator{ p + num };
	}

	reverse_iterator rend() const {
		return reverse_iterator{ p };
	}

private:
	friend std::ostream& operator<<(std::ostream&, const STRING&);
	// 2022. 4. 28 �߰�
	friend std::istream& operator>>(std::istream&, STRING&);
};

