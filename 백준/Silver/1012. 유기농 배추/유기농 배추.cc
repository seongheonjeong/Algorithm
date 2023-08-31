#include <iostream>
#include <cstring>
using namespace std;

int T, M, N, K, arr[51][51], answer;
bool visited[51][51];
int x_dir[4] = { -1, 1, 0, 0 };
int y_dir[4] = { 0, 0, -1, 1 };

void dfs(int y, int x)
{
	for (int i = 0; i < 4; i++)
	{
		int new_x = x + x_dir[i];
		int new_y = y + y_dir[i];

		if (new_x >= 0 && new_y >= 0 && new_x < M && new_y < N && !visited[new_y][new_x] && arr[new_y][new_x])
		{
			visited[new_y][new_x] = true;
			dfs(new_y, new_x);
		}
	}
}

int main()
{
	cin >> T;
	while (T--)
	{
		cin >> M >> N >> K;
		answer = 0;

		memset(arr, 0, sizeof(arr));
		memset(visited, false, sizeof(visited));

		for (int i = 0; i < K; i++)
		{
			int a, b;
			cin >> a >> b;
			arr[b][a] = 1;
		}


		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (!visited[i][j] && arr[i][j])
				{
					answer++;
					visited[i][j] = true;
					dfs(i, j);

				}
			}
		}
		cout << answer << '\n';
	}
}