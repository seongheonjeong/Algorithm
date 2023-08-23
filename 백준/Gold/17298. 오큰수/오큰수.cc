#include <iostream>
#include <stack>
using namespace std;

int N, arr[1000001],ans[1000001],num;

int main()
{
	stack<int> s;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		arr[i] = num;
		while (1)
		{
			if (s.empty())
			{
				s.push(i); //인덱스 값을 넣어줌
				break;
			}
			int beforeidx=s.top();
			if (num > arr[beforeidx])
			{
				ans[beforeidx] = num;
				s.pop();
			}
			else
			{
				s.push(i);
				break;
			}

		}
	}

	while (!s.empty())
	{
		int index=s.top();
		ans[index] = -1;
		s.pop();
	}

	for (int i = 0; i < N; i++)
	{
		cout << ans[i] << ' ';
	}
}
