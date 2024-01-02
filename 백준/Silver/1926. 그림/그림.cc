#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[501][501],n,m,cnt,maxArea;
bool check[501][501];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue<pair<int, int>> q;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }     
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] != 1 || check[i][j]) continue;
            int area = 0;
            cnt++;
            q.push({ i,j });
            check[i][j] = true;
            
            while (!q.empty())
            {
                area++;
                pair<int, int>cur = q.front();
                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int tempX = cur.X + dx[i];
                    int tempY = cur.Y + dy[i];
                    
                    if (tempX < 0 || tempX >= n || tempY < 0 || tempY >= m) continue;
                    if (board[tempX][tempY] != 1 || check[tempX][tempY]) continue;
                    q.push({ tempX,tempY });
                    check[tempX][tempY] = true;         
                }
            }
            maxArea = max(maxArea, area);
        }
    }
    cout << cnt << '\n' << maxArea;
    



     
   
}
