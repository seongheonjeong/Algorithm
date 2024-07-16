#include <bits/stdc++.h>

using namespace std;

int N,arr[500001],sum,Max,fre,result,cnt,freq[8010];
double ans;
int arithmetic_mean() {
    double ans = 0;
    for (int i = 0; i < N; i++) {
        ans += arr[i];
    }
    return round(ans / N);
}// 산술평균
int solve()
{
    int result;
    int count = 0;
    int cnt2[8001] = { 0 };
    for (int i = 0; i < N; i++) {
        cnt2[arr[i] + 4000]++;
    }
    int max_mode = *max_element(cnt2, cnt2 + 8001);
    for (int i = 0; i < 8001; i++) {
        if (cnt2[i] == max_mode) {
            count++;
            result = i - 4000;
        }
        if (count == 2) {
            break;
        }
    }
    return result;
}
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num = 0;
		cin >> num;
		ans += num;
		arr[i] = num;
	}
	sort(arr, arr + N);

	
	cout << arithmetic_mean() << '\n';
    cout << arr[(N - 1) / 2] << '\n';
    cout << solve() << '\n';
    cout << arr[N-1]-arr[0] << '\n';
}