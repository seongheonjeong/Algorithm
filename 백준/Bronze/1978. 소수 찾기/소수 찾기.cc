#include <iostream>
using namespace std;

bool check(int num)
{
	if (num < 2) return false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	int count = 0;
	int num[101] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		if (check(num[i]))
			count++;
	}
	cout << count << endl;
}