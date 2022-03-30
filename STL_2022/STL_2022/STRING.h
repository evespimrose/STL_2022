#pragma once
bool ����{false};

class STRING {
	// ��� 4����Ʈ �ӵ��� ���� �����
	int id;								// ���� �� �ο�
	size_t num;							// Ȯ���� �ڿ��� ��
	char* p;							// Ȯ���� �ڿ��� ��ġ
	static int cid;						// ��ü�� ������ ������ 1 ����

public:
	STRING() : num{}, p{}, id{cid++}
	{
		if (����)
		{
			print("����Ʈ");
		}
	};
	STRING(const char* s) : num{ strlen(s) } , id{++cid}
	{
		p = new char[num];

		memcpy(p, s, num);

		// �����޽����� �Ѹ� ����Ѵ�.
		std::cout << "ctor [" << id << "] " << this << std::endl;

		if (����)
		{
			print("������(*)");
		}
	};
	~STRING() {
		// �����޽����� �Ѹ� ����Ѵ�.
		std::cout << "dtor [" << id << "] " << this << std::endl;

		if (����)
		{
			print("�Ҹ���");
		}

		if(num)
			delete[] p;
	}

	STRING(const STRING& other) : num{other.num}, id{++cid}
	{
		p = new char[other.num];
		memcpy(p, other.p, num);
		if (����)
		{
			print("�������");
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

		if (����)
			print("�����Ҵ�");

		return *this;
	}

	void print(const char* s)
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