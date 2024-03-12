#include<bits/stdc++.h>
using namespace std;

int N, M, arr[8];
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

    for (int i = num; i <= N; i++)
    {
            arr[depth] = i;
            dfs(i,depth + 1);
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    dfs(1,0);
}
