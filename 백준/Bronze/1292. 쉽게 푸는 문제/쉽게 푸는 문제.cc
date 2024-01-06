#include<bits/stdc++.h>
using namespace std;
int a,b,arr[1001],cnt,answer;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a >> b;
	for (int i = 1; cnt<1000; i++)
	{
		for (int j = 0; j < i; j++)
		{
			arr[cnt++] = i;
			if (cnt == 1000) break;
			
		}
	}
	for (int i = a-1; i < b; i++)
	{
		answer += arr[i];
	}
	cout << answer;
}