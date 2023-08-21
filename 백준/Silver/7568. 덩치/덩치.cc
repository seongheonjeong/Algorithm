#include <iostream>
using namespace std;

pair<int, int> p[51];

int main()
{
    int small[51] = {};
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        p[i].first = x;
        p[i].second = y;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (p[i].first > p[j].first && p[i].second > p[j].second)
                small[j]++;
            else if (p[i].first < p[j].first && p[i].second < p[j].second)
                small[i]++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << small[i] + 1 << " ";
    }

    return 0;
}
