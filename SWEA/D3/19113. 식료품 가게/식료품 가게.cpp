

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie(0);
	
	int TC = 0, temp = 1;
	cin >> TC;
	while (TC--)
	{
		int N = 0, idx = 0;
		long long arr[201]={}, arr2[201] = {};
		bool match[201] = {};
		cin >> N;
		for(int i = 0; i < N * 2; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + 2 * N);
		for(int i = 0; i < N * 2; i++) {
			if (match[i] == true) 
				continue;

			long long discount = arr[i];
			long long price = discount * 4 / 3;
			for (int j = i + 1; j < N * 2; j++) {
				if (!match[j] && arr[j] == price) {
					match[i] = true;
					match[j] = true;
					arr2[idx++] = arr[i];
					break;
				}
			}
		}
		sort(arr2, arr2 + idx);
		cout << '#' << temp++ << " ";
		for (int i = 0; i < idx; i++) {
			cout << arr2[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}