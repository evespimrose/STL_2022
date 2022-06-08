//----------------------------------------------------------------------------------------
// 2022. 1�б� STL 6�� 8�� ������
// ��78��23 (14�� 1��)
// 
// 5/30 ~ 6/20 �������� ��û��
// 
// C++20 ��� 4���� �ٽ� ��ȭ
// concepts
// range / view
// coroutine
// module
// 
// ���� - 15�� 1�� : 6�� 15�� ������
// 
//----------------------------------------------------------------------------------------
#include <iostream>
#include <ranges>
#include <format>

#include "save.h"
#include "STRING.h"

// constrained algorithm : concept���� coding
// span<T> : [], string, array, vector
// [����] �Ҽ�(prime number)�� ����϶�.
//

using namespace std;

extern bool ����;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    // [����] �Ҽ�(prime number)�� 100���� ����϶�.
    for (int n : views::iota(2) | views::filter(isPrime)|views::take(100)

        )
    {
        cout << format("{:8}", n);
    }


    //save("�ҽ�.cpp");
}