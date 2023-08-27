#include <iostream>
using namespace std;

int main()
{
	int N;
	int sum = 0;
	int temp = 0;
	int index = 0;
	cin >> N;
	
	for (int i = 1; i <= N; i++)
	{
		sum = i; // 196 
		index = i;
		while (index > 0)
		{
			temp = index % 10; //temp=6..9..1 
			sum += temp; //196+6+9+1
			index /= 10; //i=19..1..0
		}

		if (sum == N)
		{
			cout << i << '\n';
			return 0;
		}
	}
	cout << 0 << '\n';
}