#include <bits/stdc++.h>
using namespace std;

int N,arr[26][26];
bool check[26][26];
queue<pair<int, int>>q;
vector<int>v;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = str[j] - '0';
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (!arr[i][j] || check[i][j])continue;
            int count = 0;
            q.push({ i,j });
            check[i][j] = true;
            while (!q.empty())
            {
                count++;
                pair<int, int>cur = q.front();
                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int tempX = cur.first + dx[i];
                    int tempY = cur.second + dy[i];
                    if (tempX < 0 || tempX >= N || tempY < 0 || tempY >= N) continue;
                    if (!arr[tempX][tempY] || check[tempX][tempY]) continue;

                    q.push({ tempX,tempY });
                    check[tempX][tempY] = true;
                } 
            }
            v.push_back(count);
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
}
