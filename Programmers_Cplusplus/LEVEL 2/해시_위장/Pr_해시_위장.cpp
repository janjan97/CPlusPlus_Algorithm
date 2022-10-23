//Pr_해시_위장.cpp : Programmers 42578 (해시/unordered_map)
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 0;
	unordered_map<string, int>genre;

	for (int i = 0; i < clothes.size(); i++)
	{
		genre[clothes[i][1]]++;
	}

	int tmp = 1;
	for (auto i = genre.begin(); i != genre.end(); i++)
	{
		tmp = tmp * (i->second + 1);
	}
	answer = tmp - 1;

	return answer;
}