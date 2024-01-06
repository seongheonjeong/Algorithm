#include<bits/stdc++.h>
using namespace std;
int N,answer;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	int temp = N;
	while (true)
	{
		answer++;
		N = (N % 10 * 10) + ((N % 10 + N / 10))%10;
	
		if (N == temp)
			break;
	}
	cout << answer;
}