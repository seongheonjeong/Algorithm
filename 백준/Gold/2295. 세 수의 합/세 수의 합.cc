#include<bits/stdc++.h>
using namespace std;

int N, arr[1001];
vector <int> v;
bool bn_search(int target)
{
	int start = 0, end = v.size() - 1,mid=0;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (target == v[mid])
			return true;
		else if (target > v[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			v.push_back(arr[i] + arr[j]);
		}
	}
	sort(arr, arr + N);
	sort(v.begin(), v.end());

	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 0; j < N; j++)
		{
			if (bn_search(arr[i] - arr[j]))//해당 값 있을 경우
			{
				cout << arr[i];
				return 0;
			}

		}
	}





}