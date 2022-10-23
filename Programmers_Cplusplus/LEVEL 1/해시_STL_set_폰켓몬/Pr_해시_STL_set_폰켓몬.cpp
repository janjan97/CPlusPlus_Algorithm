//Pr_해시_STL_set_폰켓몬.cpp : Programmers 1845 폰켓몬 해시/STL(set 사용)
#include <vector>
#include <set> //

using namespace std;

int solution(vector<int> nums)
{
	set<int> st;
	for (const auto& num : nums)
		st.insert(num);
	return min(nums.size() / 2, st.size());
}