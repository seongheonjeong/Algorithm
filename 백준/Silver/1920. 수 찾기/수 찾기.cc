#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a;
int N, M;

void solve(int x)
{
    int low = 0;
    int high = N - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            cout << 1 << '\n';
            return; // 원소를 찾은 후 함수를 종료합니다.
        }
        else if (a[mid] < x)
            low = mid + 1;
        else if (a[mid] > x)
            high = mid - 1;
    }
    cout << 0 << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;
        solve(num);
    }

    return 0;
}

