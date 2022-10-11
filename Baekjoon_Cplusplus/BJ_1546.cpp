// BJ_1546.cpp : 평균( sort사용(최대값) )
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    double max = 0;
    int n;
    cin >> n;

    double score[1001] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    sort(score, score + n);

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (score[i] / score[n - 1] * 100);
    }

    cout << sum / n;

    return 0;
}