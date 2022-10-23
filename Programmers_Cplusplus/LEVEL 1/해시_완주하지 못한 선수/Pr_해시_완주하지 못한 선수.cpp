//Pr_해시_완주하지 못한 선수.cpp : Programmers 42576 완주하지 못한 선수 (해시/unordered_map)
#include <string>
#include <vector>
#include <unordered_map> 
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	unordered_map <string, int>umap;

	for (string name : participant)
		umap[name]++;
	for (string name : completion)
		umap[name]--;
	for (string name : participant)
	{
		if (umap[name] == 1)
			answer = name;
	}
	return answer;
}