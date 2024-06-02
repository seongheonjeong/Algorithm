#include<bits/stdc++.h>
using namespace std;

int N,num1,num2,m,arr[101][101],visited[101],answer;
queue<int> q;
void bfs(int start)
{
	
	q.push(start);
	visited[start] = 1;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (int i = 1; i <= N; i++)
		{
			if (!visited[i] && arr[cur][i])
			{
				q.push(i);
				visited[i] = visited[cur] + 1;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	cin >> num1 >> num2;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x = 0, y = 0;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	bfs(num1);
	if (visited[num1] == 0)
		visited[num1] = -1;

	cout << visited[num2]-1;
}