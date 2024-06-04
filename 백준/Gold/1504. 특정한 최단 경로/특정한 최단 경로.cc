#include<bits/stdc++.h>
using namespace std;
#define INF 987654321
int N, E,arr[801][801],num1,num2,answer1= 987654321,answer2= 987654321;
vector<pair<int, int>>v[801];
int dist[801];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
int dijkstra(int start,int end)
{
	fill(dist, dist + N+1, INF);
	pq.push({ 0,start });
	dist[start] = 0;
	while (!pq.empty())
	{
		pair<int, int> cur = pq.top();
		pq.pop();
		for (int i = 0; i < v[cur.second].size(); i++)
		{
			pair<int, int>next = v[cur.second][i];
			if (dist[next.second] > dist[cur.second] + next.first)
			{
				dist[next.second] = dist[cur.second] + next.first;
				pq.push({ dist[next.second],next.second });
			}
		}
	}
	return dist[end];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> E;
	for (int i = 0; i < E; i++)
	{
		int a = 0, b = 0, c = 0;
		cin >> a >> b >> c;
		v[a].push_back({ c,b });
		v[b].push_back({ c,a });
	}
	cin >> num1 >> num2;
	if (dijkstra(1, num1) == INF || dijkstra(num1, num2) == INF || dijkstra(num2, N) == INF)
		answer1 = INF;
	else
		answer1=dijkstra(1, num1) + dijkstra(num1, num2) + dijkstra(num2, N);

	if (dijkstra(1, num2) == INF || dijkstra(num2, num1) == INF || dijkstra(num1, N) == INF)
		answer1 = INF;
	else
		answer2=dijkstra(1, num2) + dijkstra(num2, num1) + dijkstra(num1, N);

	int answer3 = min(answer1, answer2);

	if (answer3 == INF)
		cout << -1;
	else
		cout << answer3;

}