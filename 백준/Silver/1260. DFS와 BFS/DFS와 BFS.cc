#include <bits/stdc++.h>
using namespace std;

int n, m, v,arr[1001][1001];
bool check1[1001],check2[1001];
queue <int> q;
void dfs(int v)
{
    cout << v << ' ';
    check1[v] = true;
    for (int i = 1; i <= n; i++)
    {
        if (arr[v][i] && !check1[i])
            dfs(i);
    }
}
void bfs(int v)
{
    q.push(v);
    check2[v] = true;
    while (!q.empty())
    {
        int cur = q.front();
        cout << cur << ' ';
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (arr[cur][i]&&!check2[i])
            {
                q.push(i);
                check2[i] = true;
            }
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a][b] = arr[b][a] = 1;
    }
    dfs(v);
    cout << '\n';
    bfs(v);
}
