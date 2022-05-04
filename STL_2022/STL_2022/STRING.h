//----------------------------------------------------------------------------------------------
// STRING.cpp - 자원을 관리하는 STL 관찰용 클래스
// 
// 2022.3.20
//

#pragma once

#include <iostream>

class STRING_iterator {
	// 2022. 4. 28
public:	// 표준 반복자라면 이 다섯가지 타입을 제공해야 한다.
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

	// 2022. 4. 27 sort가 요구하는 - 연산
	difference_type operator-(const STRING_iterator& rhs) const {
		return p - rhs.p;
	}

	// 2022. 4. 28 sort가 요구하는 -- 연산
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
	// 관계연산자를 자동으로 생성하는 우주선 연산자를 사용한다.
	// spaceship operator(three-way comparison operator)

	auto operator<=>(const STRING_iterator& rhs) const = default;

	// 강순서(strong order), 약순서(weak), 부분순서(partial)
	//bool operator!=( const STRING_iterator& rhs ) const {
	//	std::cout << "이게 우선 사용" << "\n";
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
	// 관계연산자를 자동으로 생성하는 우주선 연산자를 사용한다.
	// spaceship operator(three-way comparison operator)

	auto operator<=>(const STRING_reverse_iterator& rhs) const = default;
};

class STRING {
	// 페딩 4바이트 속도를 위해 비워둠
	int id;								// 생성 시 부여
	size_t num;							// 확보한 자원의 수
	char* p;							// 확보한 자원의 위치
	static int cid;						// 객체가 생성될 때마다 1 증가

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

	// 2022.04.21 begin(), end() 코딩
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
	// 2022. 4. 28 추가
	friend std::istream& operator>>(std::istream&, STRING&);
};

