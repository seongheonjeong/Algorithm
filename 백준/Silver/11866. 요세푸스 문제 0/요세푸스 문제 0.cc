#include <iostream>
#include <queue>
using namespace std;

queue <int> q;

int main()
{
	int count = 0; 
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,K;
	cin >> N>>K;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);   //1,2,3,4,5,6,7 이 들어있고 q.pop 하면 7부터 빠짐. //pop=front 1 증가 push=rear 1증가
	}
	cout << "<";
	while (!q.empty())
	{
		for (int i = 0; i < N; i++)
		{
			count++; 
			int temp = q.front();
			q.pop();
			if (count  == K )
			{
				cout << temp;
				count = 0;
				if (!q.empty())
					cout << ',' << ' ';
			}
			else
				q.push(temp);
		}
	}
	cout << '>' << '\n';
}