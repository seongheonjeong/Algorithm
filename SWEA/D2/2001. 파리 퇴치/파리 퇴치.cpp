#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cout.tie();
	cin.tie(0);

	int T;
	cin >> T;
	int temp = 1;
	while (T--)
	{

		int N = 0, M = 0, arr[16][16] = {}, maxSum = 0;
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}
				for (int i = 0; i <= N - M; i++) {
					for (int j = 0; j <= N - M; j++) {
						int sum = 0;
						for (int k = i; k < i + M; k++) {
							for (int q = j; q < M + j; q++) {
								sum += arr[k][q];
							}
						}
						if (maxSum < sum) maxSum = sum;
					}
				}
				cout << "#" << temp++ << " " << maxSum << "\n";
			}
	return 0;
}
		