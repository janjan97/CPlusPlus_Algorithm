//LV.1 자리수 더하기
#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int num = 0;

    while (n != 0) {
        answer += n % 10; //10으로 나눈나머지 = 1의자리
        n = n / 10; //10씩 나눠서 자리수를 차감. 
    }

    return answer;
}