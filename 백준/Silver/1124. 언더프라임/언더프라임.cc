#include <iostream>
#include <cstdlib>
using namespace std;

int factorization(int n)
{
	int result = 0;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			result++;
			i = 1;
		}
	}
	return result;
}

int main()
{
	int a, b, cnt = 0;
	cin >> a >> b;
	int* arr = new int[b + 1];
	for (int i = 2; i <= b; i++) arr[i] = 1;
	for (int i = 2; i <= b; i++) if (arr[i] == 1) for (int m = 2; i * m <= b; m++)arr[i * m] = 0;
	
	for (int i = a; i <= b; i++)
	{
		if (arr[i] == 1) continue;
		else if (arr[factorization(i)] == 1) cnt++;
	}

	cout << cnt;
	delete[]arr;
	return 0;
}