//Pr_스택_같은 숫자는 싫어.cpp : Programmers 12906_같은 숫자는 싫어 스택(stack)
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	int _size = arr.size();
	for (int i = 0; i < _size - 1; i++)
	{
		if (i == 0)
		{
			answer.push_back(arr[i]);
		}
		if (arr[i] != arr[i + 1])
		{
			answer.push_back(arr[i + 1]);
		}
	}

	return answer;
}