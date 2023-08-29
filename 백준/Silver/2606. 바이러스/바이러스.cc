#include <iostream>
#include <vector>
using namespace std;

vector<int> v[101];
int cpt, connect, answer;
bool visited[101];

void dfs(int start)
{
	visited[start] = true;
	answer++;
	for (int i = 0; i < v[start].size(); i++)
	{
		int nextnode = v[start][i];
		if (!visited[nextnode])
		{
			dfs(nextnode);
		}
	}
}
int main()
{
	
	cin >> cpt >> connect;
	for (int i = 0; i < connect; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	cout << answer - 1 << '\n';
}