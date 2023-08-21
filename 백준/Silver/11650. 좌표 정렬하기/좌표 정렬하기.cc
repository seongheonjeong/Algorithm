#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> p[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		p[i].first = x;
		p[i].second = y;
	}
	sort(p,p+n);
	
	for (int i = 0; i < n; i++)
	{
		cout << p[i].first << " " << p[i].second << '\n';
	}

}