#include<bits/stdc++.h>
using namespace std;

int N, M,arr[8],arr2[8];
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

	for (int i = num; i < N; i++)
	{
		arr[depth] = arr2[i];
		dfs(i, depth + 1);
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