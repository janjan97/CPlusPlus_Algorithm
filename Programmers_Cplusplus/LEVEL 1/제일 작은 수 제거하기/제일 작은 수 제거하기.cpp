// 제일 작은 수 제거하기.cpp : vector.erase() 또는 min_element
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0]; //첫번째 인덱스 최소값으로 지정
    for (int i = 0; i < arr.size(); i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        answer.push_back(arr[i]);
    }
    for (int i = 0; i < answer.size(); i++)
    {
        if (min == answer[i])
            answer.erase(answer.begin() + i); //vector.erase()
    }

    if (answer.empty())
    {
        answer.push_back(-1);
    }

    return answer;
}