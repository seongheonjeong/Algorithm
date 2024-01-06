#include<bits/stdc++.h>
using namespace std;
int N, K,cnt;
queue<int>q;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	cout << "<";
	while (!q.empty())
	{
		cnt++;
		int temp = q.front();
		q.pop();
		if (cnt == K)
		{
			cout << temp;
			if (!q.empty())
				cout << ", ";
			cnt = 0;
		}
		else
		{
			q.push(temp);
		}
	}
	cout << ">";
}