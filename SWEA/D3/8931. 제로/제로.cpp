
#include<iostream>
#include <stack>
using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
cout.tie();
cin.tie(0);

int TC = 0,temp=1;
cin >> TC;
while (TC--)
{
	stack<int> s;
	int K = 0, sum = 0;
	cin >> K;
	for (int i = 0; i < K; i++) {
		int num = 0;
		cin >> num;
		if (num != 0) {
			s.push(num);
		}
		else {
			s.pop();
		}
	}
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << '#' << temp++<< ' ' << sum << '\n';
}
return 0;
}