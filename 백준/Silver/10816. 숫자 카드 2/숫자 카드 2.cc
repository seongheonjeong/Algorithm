#include <iostream>
#include <algorithm>
using namespace std;

int N, M, arr1[500001], arr2[500001];

void solve()
{
    for (int i = 0; i < M; i++)
    {
        cout << upper_bound(arr1, arr1 + N, arr2[i]) - lower_bound(arr1, arr1 + N, arr2[i]) << ' ';
    }
}

void input()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
   
    sort(arr1, arr1 + N);

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> arr2[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solve();
}
