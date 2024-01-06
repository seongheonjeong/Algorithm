#include<bits/stdc++.h>
using namespace std;
int N,M,graph[1001][1001],cnt;
bool check[1001];
void bfs(int n)
{
	queue <int> q;
	check[n] = 1;
	q.push(n);
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (int i = 1; i <= N; i++)
		{
			if (graph[cur][i] && !check[i])
			{
				q.push(i);
				check[i] = true;
			}
		}
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
	for (int i = 1; i <= N; i++)
	{
		if (!check[i]) cnt++;
		bfs(i);
	}
	cout << cnt;
}
