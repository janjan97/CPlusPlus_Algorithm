#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

// 코드포스 1 - Medium Number
//int main()
//{
//	int T;
//	vector<int> answer;
//
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		vector<int> v;
//		int a, b, c;
//		cin >> a >> b >> c;
//		v.push_back(a);
//		v.push_back(b);
//		v.push_back(c);
//
//		sort(v.begin(), v.end());
//		answer.push_back(v[1]);
//	}
//
//	for (int i = 0; i < T; i++)
//	{
//		cout << answer[i] << "\n";
//	}
//	return 0;
//}

//코드포스 2 - Atilla's Favorite Problem	
//int main()
//{
//	int T;
//	vector<int> answer;
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		int n;
//		cin >> n;
//		
//		string s;
//		s.resize(n);
//		cin >> s;
//
//		sort(s.begin(), s.end());
//		char ch;
//		ch = s[s.size()-1];
//		
//		int num;
//		num = ch - 'a'+ 1;
//		answer.push_back(num);
//
//	}
//	for (int i = 0; i < T; i++)
//	{
//		cout << answer[i] << "\n";
//	}
//	return 0;
//}