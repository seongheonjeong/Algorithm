#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M,a,b, arr[100001]={},arr1[100001]={}, temp = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i]; // 5 4 3 2 1
		
		arr1[i] = arr1[i - 1] + arr[i]; // 5 9 12 14 15
	}

	for (int i = 0; i < M; i++)
	{
		cin >> a >> b; 
		cout << arr1[b]-arr1[a-1] << '\n';
	}
}