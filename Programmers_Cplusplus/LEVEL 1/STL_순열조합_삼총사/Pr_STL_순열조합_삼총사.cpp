//Pr_STL_순열조합_삼총사.cpp : Programmers 131705_삼총사 (순열조합/next_permutation) 
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> number) {
	int answer = 0;
	vector<bool> v(number.size() - 3, false);

	v.push_back(true);
	v.push_back(true);
	v.push_back(true); //3개

	do {
		int sum = 0;
		for (int i = 0; i < v.size(); i++)
			if (v[i]) //3개 더하기
			{
				sum += number[i];
			}
		if (sum == 0)
		{
			++answer;
		}
	} while (next_permutation(v.begin(), v.end())); //모든경우의수 조합

	return answer;
}