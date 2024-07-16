#include <bits/stdc++.h>

using namespace std;

int A, B, C;
int main()
{
	cin >> A >> B >> C;
	int answer = (A) + B - C;
	string str1 = to_string(A);
	string str2 = to_string(B);
	string str3 = str1+str2;
	cout << answer << '\n';
	cout << stoi(str3) - C;
}