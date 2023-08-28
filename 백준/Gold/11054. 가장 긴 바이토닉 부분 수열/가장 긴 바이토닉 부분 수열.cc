#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int arr[1001] = {};
	int start[1001] = {};
	int end[1001] = {};
	int max_sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		start[i] = 1;
		end[i] = 1;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				start[i] = max(start[j] + 1, start[i]);
			}
		}
	}
	
	for (int i = N-1; i >= 0; i--)
	{
		for (int j = N-1; j > i; j--)
		{
			if (arr[i] > arr[j])
			{
				end[i] = max(end[j] + 1, end[i]);
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		max_sum = max(start[i] + end[i]-1, max_sum);
	}
	cout << max_sum  << '\n';
}