#include<bits/stdc++.h>
using namespace std;

int N,answer;
priority_queue<int, vector<int>, greater<int> > q;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        q.push(n);
    }
    while (!q.empty())
    {
        int temp = q.top();
        q.pop();
        if (!q.empty())
        {
            int nextTemp = q.top();
            q.pop();
            answer += temp + nextTemp;
            q.push(temp + nextTemp);
        }
    }
    cout << answer;
  

}
