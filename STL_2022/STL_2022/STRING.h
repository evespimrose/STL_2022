#pragma once

class STRING {
public:
	STRING(const char* s) : num{ strlen(s) }, p{ new char[num] } {
		memcpy(p, s, num);

		id = ++cid;

		// �����޽����� �Ѹ� ����Ѵ�.
		cout << "ctor [" << id << "] " << this << endl;
	};
	~STRING() {
		// �����޽����� �Ѹ� ����Ѵ�.
		cout << "dtor [" << id << "] " << this << endl;

		delete[] p;
	}

private:
	size_t num;							// Ȯ���� �ڿ��� ��
	char* p;							// Ȯ���� �ڿ��� ��ġ
	int id;								// ���� �� �ο�
	static int cid;						// ��ü�� ������ ������ 1 ����

	friend std::ostream& operator<<(std::ostream&, const STRING&);
};

int STRING::cid{};

std::ostream& operator<<(std::ostream& os, const STRING& s)
{
	for (int i = 0; i < s.num; ++i)
		os << s.p[i];
	return os;
}