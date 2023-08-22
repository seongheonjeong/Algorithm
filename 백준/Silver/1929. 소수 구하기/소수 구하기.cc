#include <iostream>
#include <cmath>
using namespace std;

bool arr[1000001] = { 0,1 };
int M, N;

int main()
{
	
	cin >> M >> N;

	
	for (int i = 2; i <= sqrt(N); i++)
	{
		for (int j = i * i; j <= N; j += i)
		{
			arr[j] = true; //소수가 아니면 true
		}
	}

	for (int i = M; i <= N; i++)
	{
		if (!arr[i])
			cout << i << '\n';
	}
}