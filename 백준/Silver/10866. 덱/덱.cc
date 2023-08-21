#include <iostream>
#include <algorithm>
using namespace std;

class Dequeue
{
	int d[20001];
	int Front=10000; //앞
	int Rear=10000;  //뒤
public:
	void push_front_X(int x);
	void push_back_X(int x);
	void pop_front();
	void pop_back();
	void size();
	int empty();
	void front();
	void back();
};
void Dequeue::push_front_X(int x)
{
	d[Front++] = x;
}
void Dequeue::push_back_X(int x)
{
	d[--Rear] = x;
}
void Dequeue::pop_front()
{
	if (empty())
		cout << -1 << '\n';
	else
		cout << d[--Front] << '\n';
}
void Dequeue::pop_back()
{
	if (empty())
		cout << -1 << '\n';
	else
		cout << d[Rear++] << '\n'; 
}
void Dequeue::size()
{
	cout << Front-Rear << '\n';
}
int Dequeue::empty()
{
	if (Rear == Front )
		return 1;
	else
		return 0;
}
void Dequeue::front()
{
	if (empty())
		cout << -1 << '\n';
	else
		cout << d[Front-1] << '\n';
}
void Dequeue::back()
{
	if (empty())
		cout << -1 << '\n';
	else
		cout << d[Rear] << '\n';
}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Dequeue d;
	int N;
	cin >> N;
	while (N--)
	{
		string str;
		cin >> str;
		if (str == "push_back")
		{
			int num;
			cin >> num;
			d.push_back_X(num);
		}
		else if (str == "push_front")
		{
			int num;
			cin >> num;
			d.push_front_X(num);
		}
		else if (str == "front")
		{
			d.front();
		}
		else if (str == "back")
		{
			d.back();
		}
		else if (str == "empty")
		{
			cout<<d.empty()<<'\n';
			
		}
		else if (str == "size")
		{
			d.size();
		}
		else if (str == "pop_front")
		{
			d.pop_front();
		}
		else if (str == "pop_back")
		{
			d.pop_back();
		}
	}
}