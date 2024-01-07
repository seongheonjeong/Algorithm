#include <bits/stdc++.h>
using namespace std;

int N;
vector<int>v[100001];
int p[100001];
void dfs(int n)
{
    for (int next : v[n])
    {
        if (next == p[n]) continue;
        p[next] = n;
        dfs(next);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for (int i = 0; i < N - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    for (int i = 2; i <= N; i++)
    {
        cout << p[i] << '\n';
    }
}
