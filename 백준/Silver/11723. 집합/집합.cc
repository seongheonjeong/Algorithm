#include <iostream>
using namespace std;

class Set
{
	int S[21] = {}; //int형 하나로 집합처럼 이용
public:
	void add_x(int x);
	void remove_x(int x);
	int check_x(int x);
	void toggle_x(int x);
	void all();
	void empty();
};
int Set::check_x(int x)
{
	if (S[x] == 0) //s가 없으면
		return 0;
	else
		return 1; //x가 있으면
}
void Set::add_x(int x)
{
	if (check_x(x))
		return;
	S[x] = x;
}
void Set::remove_x(int x)
{
	if (!check_x(x))
		return;
	S[x] = 0;
}

void Set::toggle_x(int x)
{
	if (check_x(x))
	{
		S[x] = 0;
	}
	else
		S[x] = x;
	
}
void Set::all()
{
	for (int i = 1; i <= 20; i++)
	{
		S[i] = i;
	}
}
void Set::empty()
{
	for (int i = 1; i <= 20; i++)
	{
		S[i] = 0;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	Set s;
	int M;
	cin >> M;
	while (M--)
	{
		cin.ignore();
		string str;
		cin >> str;
		if (str == "add")
		{
			int x;
			cin >> x;
			s.add_x(x);
		}
		else if (str == "remove")
		{
			int x;
			cin >> x;
			s.remove_x(x);
		}
		else if (str == "check")
		{
			int x;
			cin >> x;
			cout << s.check_x(x) << '\n';
		}
		else if (str == "toggle")
		{
			int x;
			cin >> x;
			s.toggle_x(x);
		}
		else if (str == "all")
		{
			s.all();
		}
		else if (str == "empty")
		{
			s.empty();
		}
	}
}