//Pr_동적계획법_피보나치 수.cpp : Programmers 12945_피보나치 수 (동적계획법/DP)
#include <string>
#include <vector>

using namespace std;

int dp[100001] = { 0 }; 

int fibo(int num) {

	if (num <= 1) //n이 0, 1 이면 0,1 그대로 리턴
	{
		dp[num] = num;
		return dp[num];
	}

	if (dp[num] != 0) //값을 구한 경우 구해놓은 값 리턴
	{
		return dp[num];
	}

	dp[num] = (fibo(num - 1) + fibo(num - 2)) % 1234567;

	return dp[num];
}

int solution(int n) {
	int answer = 0;

	answer = fibo(n);
	return answer;
}