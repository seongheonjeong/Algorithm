#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
int k;

void solve()
{
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int num;
		cin >> num;
		if (num == 0)
		{
			s.pop();
			continue;
		}
		s.push(num);
	}
	
	int temp = 0;

	while(!s.empty())
	{
		int cur = s.top();
		s.pop();
		temp += cur;
	}
	cout << temp << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
}