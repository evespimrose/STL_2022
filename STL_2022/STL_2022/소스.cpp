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
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>

#include "save.h"
#include "STRING.h"

// [����] ����ڰ� �Է��� �ܾ "�ܾ��.txt"�� �ִ� �ܾ����� Ȯ���Ѵ�. 
// �ִٸ� anagram�� ã�� ȭ�鿡 ����϶�.
//

using namespace std;

extern bool ����;

int main()
{
    ifstream in{ "�ܾ��.txt" };
    //save("�ҽ�.cpp");

    /* {
        long long cnt{};
        string s{};

        while (in >> s)
            ++cnt;
        cout << cnt;
    }*/

    
    vector<string> v{ istream_iterator<string>{in},{} };

    while (true)
    {
        string word;
        cout << "ã�� �ܾ��?";
        cin >> word;

        if (!binary_search(v.begin(), v.end(), word))
        {
            cout << word << "�� �����ϴ�" << endl;
            continue;
        }
        // �ֳʱ׷��� ã�� ���
        // word�� �� ������ �ܾ��txt�� �ֳ� Ȯ���ϸ� ��
        // ���� word�� �����Ѵ�
        sort(word.begin(), word.end());
        do {
            if (binary_search(v.begin(), v.end(), word))
                cout << word << " ";
        } while (next_permutation(word.begin(), word.end()));
        cout << endl;
    }

}