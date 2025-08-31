
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{

	int T=0;
cin >> T;
while (T--) 
{
	int n = 0;
	int arr[1000] = {};
	int freq[101] = {};
	int maxCount = 0;
	int maxValue = 0;
	cin >> n;
	for (int i = 0; i < 1000; i++) {
		cin >> arr[i];
		freq[arr[i]]++;
	}

	for (int i = 0; i <= 100; i++) {
		if (maxCount < freq[i]) {
			maxCount = freq[i];
			maxValue = i;
		}
		else if (maxCount == freq[i]) {
			maxValue = i;
		}
	}
	cout << '#' << n << ' ' << maxValue<<'\n';
}

	return 0;
}