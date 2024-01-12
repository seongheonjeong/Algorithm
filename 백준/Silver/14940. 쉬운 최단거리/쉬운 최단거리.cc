#include<bits/stdc++.h>
using namespace std;
int n, m, arr[1001][1001],answer[1001][1001],x,y;
bool check[1001][1001];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue<pair<int, int>>q;
void bfs(int x,int y)
{
    q.push({ x,y });
    check[x][y] = true;
    while (!q.empty())
    {
        pair<int, int>cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int tempX = cur.first + dx[i];
            int tempY = cur.second + dy[i];
            if (tempX < 0 || tempX >= n || tempY < 0 || tempY >= m) continue;
            if (!arr[tempX][tempY] || check[tempX][tempY]) continue;
            answer[tempX][tempY] = answer[cur.first][cur.second] + 1;
            q.push({ tempX ,tempY });
            check[tempX][tempY] = true;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 2)
            {
                x = i;
                y = j;
            }
            arr[i][j] = temp;
        }
    }
    bfs(x, y);
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0) {
                cout << 0 << " ";
            }
            else if (x == i && y == j)
                cout << 0 << " ";
            else if (!check[i][j])
                cout << -1 << " ";
            else
            {
                cout << answer[i][j] << " ";
            }
        }
        cout << '\n';
    }
}
