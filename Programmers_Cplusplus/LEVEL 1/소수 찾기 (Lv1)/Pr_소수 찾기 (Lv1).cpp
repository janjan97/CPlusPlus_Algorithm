//Pr_소수 찾기 (Lv1).cpp : Programmers 12921 소수 찾기 (에라토스테네스의 체) 
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;
	int arr[1000000] = { 0 };

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] == 0)
		{
			answer++;
			for (int j = 1; i * j <= n; j++)
			{
				arr[i * j] = 1;
			}
		}
	}


	return answer;
}