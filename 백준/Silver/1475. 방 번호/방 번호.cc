#include <bits/stdc++.h>
using namespace std;

int N,arr[10],answer;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	while (N != 0)
	{
		int temp = N % 10;
		N /= 10;
		arr[temp]++;
	}
	int sixNine = (arr[6] + arr[9] + 1) / 2;
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
			continue;
		answer = max(answer,arr[i]);
	}
	answer = max(answer, sixNine);
	cout << answer << '\n';
}