// BJ_1065.cpp : 한수  
#include <iostream>
using namespace std;


int sequence(int num) {
	int cnt = 0; // 한수 카운팅

	if (num < 100) {
		return num;
	}
	else {
		cnt = 99;

		for (int i = 100; i <= num; i++) {
			int hun = i / 100;		 // 100의자리
			int ten = (i / 10) % 10; // 10의자리
			int one = i % 10;

			if ((hun - ten) == (ten - one)) { // 각 자릿수가 수열을 이루면
				cnt++;
			}
		}
	}
	return cnt;
}

int main(int argc, char const* argv[]) {

	int N;
	cin >> N;

	int result = sequence(N);
	cout << result;
	return 0;
}