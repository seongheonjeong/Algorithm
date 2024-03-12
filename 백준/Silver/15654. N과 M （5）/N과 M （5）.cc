#include<bits/stdc++.h>
using namespace std;

int N, M, arr[8],n[8];
bool visited[8];
void dfs(int num,int depth)
{
    if (depth == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << ' ';
            
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            arr[depth] = n[i];
            dfs(i, depth + 1);
            visited[i] = false;

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
        cin >> n[i];
    }
    sort(n, n+N);
    dfs(0,0);
}
