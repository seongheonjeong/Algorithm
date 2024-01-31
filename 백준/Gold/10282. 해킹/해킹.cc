#include <bits/stdc++.h>
#define INF 987654321
using namespace std;

int T, n, d, c, a, b, s, answer;
int dist[10001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
vector<pair<int, int>> graph[10001];

void dijkstra()
{
    int finalNode = 0;
    answer = 0;
    fill(dist, dist + 10001, INF);
    while (!pq.empty()) pq.pop();
    pq.push({ 0, c });
    dist[c] = 0;
    while (!pq.empty())
    {
        pair<int, int> cur = pq.top();
        pq.pop();
        if (cur.first > dist[cur.second])
            continue;
        for (int i = 0; i < graph[cur.second].size(); i++)
        {
            pair<int, int> next = graph[cur.second][i];
            if (dist[cur.second] + next.first < dist[next.second])
            {
                dist[next.second] = dist[cur.second] + next.first;
                pq.push({ dist[next.second], next.second });
            }
        }
    }
    int cnt = 0;
    int time = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dist[i] != INF)
        {
            if (time < dist[i])
                time = max(time,dist[i]);
            cnt++;
        }
    }
    cout << cnt << " " << time << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n >> d >> c;
        for (int j = 0; j < d; j++)
        {
            cin >> a >> b >> s;
            graph[b].push_back({ s, a });
        }
        dijkstra();
        for (int i = 1; i <= n; i++)
        {
            graph[i].clear();
        }
       
    }
   
}
