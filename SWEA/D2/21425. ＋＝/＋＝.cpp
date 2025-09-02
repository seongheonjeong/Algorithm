
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie(0);
	int T;
	cin >> T;
	while (T--)
	{
		int A = 0, B = 0, N = 0, count = 0;
		cin >> A >> B >> N;
	while (A <= N && B <= N)
	{
		if (A > B) {
			B += A;
		}
		else {
			A += B;
		}
		count++;
	}
	
	cout << count << "\n";
	}
	return 0;
}