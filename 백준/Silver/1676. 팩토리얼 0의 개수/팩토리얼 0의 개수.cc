#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int count = 0;
	for (int i = 1; i <= N; i++)
	{
		int num = i; 
		while (num % 5 == 0)
		{
			count++;
			num /= 5;
		}
	}

	cout << count << '\n';
}