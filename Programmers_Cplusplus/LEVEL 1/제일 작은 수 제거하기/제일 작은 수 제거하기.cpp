// ���� ���� �� �����ϱ�.cpp : vector.erase() �Ǵ� min_element
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0]; //ù��° �ε��� �ּҰ����� ����
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