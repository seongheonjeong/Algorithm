#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int arr[1001] = {};
	int dp[1001] = {};
	int longest = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		dp[i] = 1;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
	}
	longest = dp[0];
	for (int i = 1; i < N; i++)
	{
		longest = max(dp[i], longest);
	}
	cout << longest << '\n';
}