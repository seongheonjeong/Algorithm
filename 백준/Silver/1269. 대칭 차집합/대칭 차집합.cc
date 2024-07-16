#include <bits/stdc++.h>
using namespace std;

int n1, n2;
set<int>s1, s2;
int main()
{
	cin >> n1 >> n2;
	for (int i = 0; i < n1; i++)
	{
		int a = 0;
		cin >> a;
		s1.insert(a);
	}
	int y = s1.size();
	for (int i = 0; i < n2; i++)
	{
		int b = 0;
		cin >> b;
		s2.insert(b);
		s1.insert(b);
	}
	int beforeCountA = s1.size(); //6개  중복인거 빼고, 지금 2개
	int beforeCountB = s2.size(); //5개 
	int sumCount = y + beforeCountB; //8개
	int mNus = sumCount - beforeCountA; //2개
	cout << beforeCountA - mNus;
	

	

}