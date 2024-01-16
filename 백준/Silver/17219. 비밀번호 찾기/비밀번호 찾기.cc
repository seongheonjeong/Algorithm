#include<bits/stdc++.h>
using namespace std;

int n, m;
map<string, string>ma;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        ma.insert({ s1,s2 });
    }
    for (int i = 0; i < m; i++)
    {
        string s1;
        cin >> s1;
        cout << ma[s1] << '\n';
    }
}