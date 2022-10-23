//Pr_해시_전화번호 목록.cpp : Programmers 42577 전화번호 목록 (해시/unordered_map)
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;
	unordered_map<string, int>umap;
	for (string phone : phone_book)
	{
		umap[phone] = 1;
	}

	for (string phone : phone_book)
	{
		for (int i = 1; i < phone.size(); i++)
		{
			if (umap[phone.substr(0, i)] == 1)
				answer = false;
		}
	}
	return answer;
}