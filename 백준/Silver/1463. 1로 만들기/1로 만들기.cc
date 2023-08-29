#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int X; //정수 X 
	int dp[1000001] = { 0,0,1,1 }; //index 0 사용 x , 1일때 0, 2일때 1, 3일떄 1 
	cin >> X; //정수 입력

	for (int i = 4; i <= X; i++)
	{
		dp[i] = dp[i - 1] + 1; // 1 뺴주기, 뺴주면서 연산 횟수 추가 되기에 +1해줌
		if (i % 2 == 0)
			dp[i] = min(dp[i / 2]+1, dp[i]); //2로 나누었을떄와,1로 뺴주었을때 연산횟수가 적은 것을 택함
		if (i % 3 == 0)
			dp[i] = min(dp[i / 3] + 1, dp[i]); //3으로 나누었을떄와,1로 뺴주었을때 연산횟수가 적은 것을 택함
	}
	cout << dp[X];

	return 0;
}