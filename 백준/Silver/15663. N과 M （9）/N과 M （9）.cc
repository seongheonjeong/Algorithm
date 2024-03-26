#include<bits/stdc++.h>
using namespace std;

bool check[8];
int N, M,arr[8],arr2[8];
set<int>s;
void dfs(int num, int depth)
{
	if (depth == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	int temp = 0;
	for (int i = 0; i < N; i++)
	{
		if (!check[i]&&temp!=arr2[i])
		{
			check[i] = true;
			arr[depth] = arr2[i];
			temp = arr2[i];
			dfs(i,depth+1);
			check[i] = false;
		}
	}
}
int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> arr2[i];
	}
	sort(arr2, arr2 + N);
	dfs(0, 0);
}