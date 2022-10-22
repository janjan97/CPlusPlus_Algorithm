#include <iostream>
#include <vector>
using namespace std;
#include <thread>
// 해시 테이블
// map vs hash_map (C++11 표준 unordered_map)

// map : Red-Black Tree
// - 추가/탐색/삭제 O(logN)

// C# dictionary = C++ map (X)..
// C# dictionary = C++ unordered_map

// hash_map (unordered_map)
// - 추가/탐색/삭제 O(1)

// 메모리를 내주고 속도를 취한다!

// '해시' '테이블'
// O(1)
void TestTable()
{
	struct User
	{
		int userId = 0; // 1~999
		string username;
	};

	vector<User> users;
	users.resize(1000);

	// 777번 유저 정보 세팅
	users[777] = User{ 777, "JanJan" };

	// 777번 유저 이름은?
	string name = users[777].username;
	cout << name << endl;

	// 테이블
	// 키를 알면, 데이터를 단번에 찾을 수 있다

	// 문제의 상황
	// int32_max (3억~)
	// 메모리도 무한은 아니다!
}

// 보안
// id: JanJan + pw: qwer1234
// id: JanJan + pw: hash(qwer1234) -> sdaf123!@#asdfasdf1234
// DB [JanJan][sdaf123!@#asdfasdf1234]
// 비밀번호 찾기 -> 아이디 입력 / 폰 인증 -> 새 비밀번호를 입력하세요

void TestHash()
{
	struct User
	{
		int userId = 0; // 1~int32_max
		string username;
	};

	//       []
	// [][][][][][][][]
	vector<User> users;
	users.resize(1000);
	
	const int userId = 123456789;
	int key = (userId % 1000); // hash < 고유번호

	// 123456789번 유저 정보 세팅
	users[key] = User{ userId, "JanJan" };

	// 123456789번 유저 이름은?
	User& user = users[key];
	if (user.userId == userId)
	{
		string name = user.username;
		cout << name << endl;
	}

	// 충돌 문제
	// 충돌이 발생한 자리를 대신해서 다른 빈자리를 찾아나서면 된다
	// - 선형 조사법 (linear probing)
	// hash(key)+1 -> hash(key)+2
	// - 이차 조사법 (quadratic probing)
	// hash(key)+1^2 -> hash(key)+2^2
	// - etc

	// 체이닝
	// 

}

// O(1)
void TestHashTableChaining()
{
	struct User
	{
		int userId = 0; // 1~int32_max
		string username;
	};

	// [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
	vector<vector<User>> users;
	users.resize(1000);

	const int userId = 123456789;
	int key = (userId % 1000); // hash < 고유번호

	// 123456789번 유저 정보 세팅
	users[key].push_back(User{ userId, "JanJan" });
	users[789].push_back(User{ 789, "FaKer" });

	// 123456789번 유저 이름은?
	vector<User>& bucket = users[key];
	for (User& user : bucket)
	{
		if (user.userId == userId)
		{
			string name = user.username;
			cout << name << endl;
		}
	}
}

int main()
{
	//TestTable();
	TestHash();
}