// BJ_4344.cpp : 평균은 넘겠지
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void func() 
{
    int sum = 0;
 

    int N;
    cin >> N;

    vector<int> vec;


        for (int i = 0; i < N; i++)
        {
            int score;
            cin >> score;
            vec.push_back(score); //벡터 마지막원소뒤에 원소추가
        }

        //평균
        double avg = 0;
        for (auto& sc : vec)
        {
            avg += sc;
        }
        avg = avg / N;

        //평균 넘는 인원
        double count = 0;
        for (auto& sc : vec)
        {
            if (sc > avg)
            {
                count++;
            }
        }

        double result = (count / N) * 100;

        cout << fixed;
        cout.precision(3);
        cout << result << "%\n";
 
}

int main()
{
    int C;
    cin >> C;

    for (int i = 0; i < C; i++)
    {
        func();
    }

    return 0;
}