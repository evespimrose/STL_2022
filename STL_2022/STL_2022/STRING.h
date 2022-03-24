#pragma once

class STRING {
public:
	STRING(const char* s) : num{ strlen(s) }, p{ new char[num] } {
		memcpy(p, s, num);

		id = ++cid;

		// 관찰메시지를 켜면 출력한다.
		std::cout << "ctor [" << id << "] " << this << std::endl;
	};
	STRING(int n, const char* s) : num{ n }, p{ new char[num] } {
		memcpy(p, s, num);

		id = ++cid;

		// 관찰메시지를 켜면 출력한다.
		std::cout << "ctor [" << id << "] " << this << std::endl;
	};
	~STRING() {
		// 관찰메시지를 켜면 출력한다.
		std::cout << "dtor [" << id << "] " << this << std::endl;

		delete[] p;
	}

private:
	size_t num;							// 확보한 자원의 수
	char* p;							// 확보한 자원의 위치
	int id;								// 생성 시 부여
	static int cid;						// 객체가 생성될 때마다 1 증가

	friend std::ostream& operator<<(std::ostream&, const STRING&);
	friend STRING operator+(STRING&, STRING&);

};

int STRING::cid{};

std::ostream& operator<<(std::ostream& os, const STRING& s)
{
	for (int i = 0; i < s.num; ++i)
		os << s.p[i];
	return os;
}

STRING operator+(STRING& l, STRING& r)
{
	char* ch = new char[l.num + r.num];

	//STRING tmp{ l.num + r.num , l.p + r.p};


}
