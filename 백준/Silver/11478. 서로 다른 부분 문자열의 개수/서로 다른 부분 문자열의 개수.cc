#include <bits/stdc++.h>
using namespace std;

set<string> s;
int main()
{
	string str;
	cin >> str;
	string str2 = "";
	for (int i = 0; i < str.size(); i++)
	{
		str2 = " ";
		for (int j = i; j < str.size(); j++)
		{
			str2 += str[j];
			s.insert(str2);
		}
		
	}
	cout << s.size();
}