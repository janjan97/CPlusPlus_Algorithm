// BJ_8958.cpp : OX���� (string,for-each,���������ʱ�ȭ)
#include <iostream>
#include <string>
using namespace std;

int Quiz(string& s)
{
    int cum=0;
    int sum=0;

    for (char& v : s)
    {
        if (v == 'O')
        {
            cum++;
            sum += cum;
        }
        else
        {
            cum = 0;
        }
    }

    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string s;
        cin >> s;

        cout << Quiz(s) << "\n";
    }

    return 0;
}