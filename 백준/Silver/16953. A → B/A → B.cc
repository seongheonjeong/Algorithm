#include<bits/stdc++.h>
using namespace std;

long long A, B;
queue<pair<long long, long long>>q;
int bfs(int start)
{
    q.push({ start,1 });
    while (!q.empty())
    {
        pair<long,long>p = q.front();
        q.pop();
        if (p.first == B)
        {
            return p.second;
        }
        if(p.first*2<=B)
        {
            q.push({ p.first * 2,p.second + 1 });
        }
        if (p.first * 10 + 1 <= B)
        {
            q.push({ p.first * 10+1,p.second + 1 });
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> A >> B;
    cout<<bfs(A);
}
