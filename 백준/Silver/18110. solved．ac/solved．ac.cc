#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n,difficult[300001];

void solve()
{
    if (n == 0)
    {
        cout << 0 << '\n';
        return ;
    }
    int a = round(n * 0.15); double temp = 0; \
    
    for (int i = 0; i < n -(a*2) ; i++)
    {
        temp += difficult[i+a];
    }
    
    cout << round(temp / (n - (a * 2))) << '\n';
}

void input()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> difficult[i]; //12,15,3,16,13,12의 평균만 계산되게
    }
    sort(difficult, difficult + n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solve();
}