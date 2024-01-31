#include<bits/stdc++.h>
#define INF 9999999999
using namespace std;

int V, E,K,u,v,w;
vector<pair<int, int>>graph[20001];
long long dist[20001];
priority_queue<pair<long long,int>, vector<pair<long long, int>>, greater<pair<long long, int>>>pq;
void dijkstra(int start)
{
    fill(dist, dist + 20001, INF);
    pq.push({ 0,start });
    dist[start] = 0;
    while (!pq.empty())
    {
        pair<long long, int>p = pq.top();
        pq.pop();
        if (p.first > dist[p.second]) continue;
        for (int i = 0; i < graph[p.second].size(); i++)
        {
            pair<long long, int>next = graph[p.second][i];
            if (dist[next.second] > dist[p.second] + next.first)
            {
                dist[next.second] = dist[p.second] + next.first;
                pq.push({ dist[next.second],next.second });
            }
        }
    }

}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> V >> E;
    cin >> K;
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >> w;
        graph[u].push_back({ w,v });
    }
    dijkstra(K);
    for (int i = 1; i <= V; i++)
    {
        if (dist[i] == INF)
            cout << "INF" << '\n';
        else
            cout << dist[i]<<'\n';
    }
}
