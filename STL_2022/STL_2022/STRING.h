#pragma once

class STRING {
public:
	STRING(const char* s) : num{ strlen(s) }, p{ new char[num] } {
		memcpy(p, s, num);

		id = ++cid;

		// �����޽����� �Ѹ� ����Ѵ�.
		std::cout << "ctor [" << id << "] " << this << std::endl;
	};
	STRING(int n, const char* s) : num{ n }, p{ new char[num] } {
		memcpy(p, s, num);

		id = ++cid;

		// �����޽����� �Ѹ� ����Ѵ�.
		std::cout << "ctor [" << id << "] " << this << std::endl;
	};
	~STRING() {
		// �����޽����� �Ѹ� ����Ѵ�.
		std::cout << "dtor [" << id << "] " << this << std::endl;

		delete[] p;
	}

private:
	size_t num;							// Ȯ���� �ڿ��� ��
	char* p;							// Ȯ���� �ڿ��� ��ġ
	int id;								// ���� �� �ο�
	static int cid;						// ��ü�� ������ ������ 1 ����

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
