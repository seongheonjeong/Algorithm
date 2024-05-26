#include<bits/stdc++.h>
using namespace std;

int N;
vector<pair<int, string>>v;
bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int age = 0; string s = " ";
		cin >> age >> s;
		v.push_back({ age,s });
	}
	stable_sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << '\n';
	}

}