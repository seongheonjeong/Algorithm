#include <iostream>
#include <stack>
using namespace std;

int n, arr[100001], arr1[100001],answer[100001];
char c[200002];

int main()
{
	stack<int> s;

	int index = 0, cindex = 0, idx=0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr1[i] = num; //4,3,6,8,7,5,2,1
		arr[i] = i + 1; //1,2,3,4,5,6,7,8
	}
	
	for (int i = 0; i < n; i++)
	{
		while (!s.empty() && arr[s.top()] == arr1[index])
		{
			answer[idx++] = arr[s.top()];
			s.pop();
			c[cindex++] = '-';
			index++;
		}
			s.push(i);
			c[cindex++] = '+';
	}
	
	while (!s.empty())
	{
		answer[idx++] = arr[s.top()];
		s.pop();
		c[cindex++] = '-';
	}
	
	
	for (int i = 0; i < n; i++)
	{
		if (answer[i] != arr1[i])
		{
			cout << "NO" << '\n';
			return 0;
		}
	}
	for (int i = 0; c[i] != '\0'; i++)
	{
		cout << c[i]<<'\n';
	}
}