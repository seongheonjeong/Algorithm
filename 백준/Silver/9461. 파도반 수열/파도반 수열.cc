#include<bits/stdc++.h>
using namespace std;

long long T, dp[101] = { 0,1,1,1,2,2,3,4,5,7,9,12 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) 
    {
        int N;
        cin >> N;
        for (int j = 12; j <= N; j++)
        {
            dp[j] = dp[j - 5] + dp[j - 1];
        }
        cout << dp[N] << '\n';
    }

    return 0;
}
