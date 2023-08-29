#include <iostream>
using namespace std;

int main()
{
	int dp[12] = {1,1,2};
	int T;
	int num;
	cin >> T;
	while (T--)
	{
		cin >> num;
		for (int i = 3; i <= num; i++)
		{
			dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
		}
		cout << dp[num] << '\n';
	}
}