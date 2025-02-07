#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> numbers;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		numbers.push_back(temp);
	}
	int answer = 0;
	for (int n = 0; n < N / 2; n++)
	{
		if (numbers[n] == numbers[n + N / 2])
			answer += 1;
	}
	cout << 2*answer;
	return 0;
}