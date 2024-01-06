#include<bits/stdc++.h>
using namespace std;
int N,M,graph[1001][1001],cnt=1;
bool check[1001];
void dfs(int n)
{
	check[n] = true;
	for (int i = 1; i <= N; i++)
	{
		if (graph[n][i] && !check[i])
			dfs(i);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N>>M; //정점 개수,간선 개수
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		graph[a][b] = graph[b][a] = 1;
	}
	dfs(1);
	for (int i = 2; i <= N; i++)
	{
		if (!check[i]) cnt++;
		dfs(i);
	}
	cout << cnt;
}