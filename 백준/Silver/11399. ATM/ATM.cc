#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>v;
	int N;
	int sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());  // 1,2,3,3,4
	for (int i = 0; i<N; i++)
	{
		for (int j = N-i; j > 0; j--)
		{
			sum += v[j-1]; // 1,12,123,1233,12334 
		}
	}
	cout << sum << '\n';
}