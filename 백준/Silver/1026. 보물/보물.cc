#include <bits/stdc++.h>
using namespace std;

int N,a[51],b[51],answer;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }
    sort(a, a + N);
    sort(b, b + N, greater<int>());
    for (int i = 0; i < N; i++)
    {
        answer += (a[i] * b[i]);
    }
    cout << answer << '\n';
}
