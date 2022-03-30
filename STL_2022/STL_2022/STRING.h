#pragma once
bool 관찰{false};

class STRING {
	// 페딩 4바이트 속도를 위해 비워둠
	int id;								// 생성 시 부여
	size_t num;							// 확보한 자원의 수
	char* p;							// 확보한 자원의 위치
	static int cid;						// 객체가 생성될 때마다 1 증가

public:
	STRING() : num{}, p{}, id{cid++}
	{
		if (관찰)
		{
			print("디폴트");
		}
	};
	STRING(const char* s) : num{ strlen(s) } , id{++cid}
	{
		p = new char[num];

		memcpy(p, s, num);

		// 관찰메시지를 켜면 출력한다.
		std::cout << "ctor [" << id << "] " << this << std::endl;

		if (관찰)
		{
			print("생성자(*)");
		}
	};
	~STRING() {
		// 관찰메시지를 켜면 출력한다.
		std::cout << "dtor [" << id << "] " << this << std::endl;

		if (관찰)
		{
			print("소멸자");
		}

		if(num)
			delete[] p;
	}

	STRING(const STRING& other) : num{other.num}, id{++cid}
	{
		p = new char[other.num];
		memcpy(p, other.p, num);
		if (관찰)
		{
			print("복사생성");
		}
	}

	STRING operator+(const STRING& rhs) const
	{
		STRING tmp;
		
		tmp.num = num + rhs.num;
		tmp.p = new char[num + rhs.num];

		memcpy(tmp.p, p, num);
		memcpy(tmp.p + num, rhs.p, rhs.num);
		
		return tmp;
	}

	STRING operator=(const STRING& other)
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

	void print(const char* s)
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

private:
	friend std::ostream& operator<<(std::ostream&, const STRING&);


};

int STRING::cid{};

std::ostream& operator<<(std::ostream& os, const STRING& s)
{
	for (int i = 0; i < s.num; ++i)
		os << s.p[i];
	return os;
}