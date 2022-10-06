// BJ_1110.cpp : 더하기사이클 (for, while )
//

#include <iostream>
using namespace std;

int main()
{
    int n, Fn;
    int count = 0;
    cin >> n;

    Fn = n;

    while (true)
    {

        n = (((n % 10) * 10) + (((n / 10 + n % 10) % 10)));
        count++;
        if (n == Fn)
        {
            break;
        }
    }
    cout << count;

    return 0;
}

