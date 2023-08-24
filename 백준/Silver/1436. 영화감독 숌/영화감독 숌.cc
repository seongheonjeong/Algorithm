#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N;
    vector<int> v;
    int cnt = 0;
    cin >> N;
    for (int i = 0; ; i++) // 1부터 천만까지 범위 수정
    {
        if (to_string(i).find("666") != string::npos)
        {
            v.push_back(i);
            cnt++;
        }
        if (cnt == N)
            break;
    }
    cout << v[N - 1]<<'\n';
}
