#include<bits/stdc++.h>
using namespace std;

long long N,arr[101][101],dp[101][101],answer;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == 0) continue;

            if (dp[i][j] != 0)
            {
                

                int nextX = i + arr[i][j];
                int nextY = j + arr[i][j];

                if (nextX < N) dp[nextX][j] += dp[i][j];
                if (nextY < N) dp[i][nextY] += dp[i][j];
            }
        }
    }
    cout << dp[N - 1][N - 1];


}
