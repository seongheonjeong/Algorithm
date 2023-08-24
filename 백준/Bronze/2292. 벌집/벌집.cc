#include <iostream>
using namespace std;

int main()
{
	int N;
	int temp = 1;
	cin >> N;
	int idx = 1;
	int x = 6;

	if (N == 1)
	{
		cout << 1 << '\n';
		return 0;
	}
	while (1)
	{
		temp += idx * x; //temp값에 테두리별로 가장 큰 수
		idx++;
		if (N <= temp)
		{
			break;
		}
	}
	cout << idx << '\n';
}