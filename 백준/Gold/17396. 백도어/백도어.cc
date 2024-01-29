#include<bits/stdc++.h>
#define INF 9999999999
using namespace std;

int N, M,a,b,t;
long long dist[100001];
int v[100001]; //갈 수 있는 곳인지 아닌지(시야에 보이는가)
vector<pair<int,int>>graph[100001];
priority_queue<pair<int, long long>, vector<pair<int, long long>>, greater<pair<int, long long>>>pq;
void dijkstra()
{
    fill(dist, dist + 100001, INF);
    pq.push({ 0,0 });
    dist[0] = 0;
    while (!pq.empty())
    {
        pair<int, long long>cur = pq.top(); 
        pq.pop();
        if (cur.first == N - 1)break;
        if (cur.second > dist[cur.first]) continue;
        for (int i = 0; i < graph[cur.first].size(); i++)
        {
            pair<int, long long>next = graph[cur.first][i];
            if (v[next.first] == 1) continue;
            if (dist[cur.first]+next.second < dist[next.first])
            {
                dist[next.first] = next.second+dist[cur.first];          
                pq.push({ next.first,dist[next.first]});         
            }
        }
    }
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    v[N - 1] = 0;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b >> t;
        graph[a].push_back({b,t});
        graph[b].push_back({ a,t });
    }
    dijkstra();
    if (dist[N - 1] == INF)
        cout << -1;
    else
        cout << dist[N - 1];
}
