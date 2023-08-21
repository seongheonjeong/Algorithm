#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> v;
vector<pair<int, string>> p; //length,사전순
int N;

void solve()
{
	
	sort(p.begin(), p.end());
	p.erase(unique(p.begin(), p.end()), p.end());
	
	for (int i = 0; i < p.size(); i++)
	{
		cout << p[i].second << '\n';
	}
}

void input()
{
	cin >> N;
	cin.ignore();
	while(N--)
	{
		string s;
		getline(cin, s);
		p.push_back({ s.length(),s });
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