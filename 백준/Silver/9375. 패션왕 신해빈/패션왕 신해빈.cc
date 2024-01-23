#include<bits/stdc++.h>
using namespace std;

int n,T,answer=1;
map<string, int>m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        m.clear();
        for (int j = 0; j < n; j++)
        {
            string s1, s2;
            cin >> s1 >> s2;
            ++m[s2];      
        }

        for (auto iter = m.begin(); iter != m.end(); iter++)
        {
            answer *= (iter->second )+1;
        }
        cout << answer-1 << '\n';
        answer = 1;
    }


}