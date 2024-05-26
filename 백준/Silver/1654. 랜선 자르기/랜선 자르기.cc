#include<bits/stdc++.h>
using namespace std;

long long K, N,arr[10001],answer;
int bn_search()
{
	long long maxNum = 0;
	for (int i = 0; i < K; i++)
	{
		maxNum = max(maxNum, arr[i]);
	}
	long long start = 1, end = maxNum;
	while (start <= end)
	{
		long long mid = (start + end) / 2;
		long long count = 0;
		for (int i = 0; i < K; i++)
		{
			count += arr[i] / mid;
		}
		if (count >= N)
		{
			start = mid + 1;
			answer = max(answer, mid);
		}
		else if (count < N)
		{
			end = mid - 1;
		}
	}
	return answer;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> K >> N;
	for (int i = 0; i < K; i++)
	{
		cin >> arr[i];
	}
	cout << bn_search();

}