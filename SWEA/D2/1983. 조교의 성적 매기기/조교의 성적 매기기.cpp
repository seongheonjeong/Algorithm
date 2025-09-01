

#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int T = 0,temp=1;
double targetScore = 0;
cin >> T;
string grade[10] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };
while (T--) 
{
	int N = 0, K = 0,rank=0;
	vector<pair<int, double>> scores;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		double a = 0, b = 0, c = 0;
		cin >> a>>b>>c;
		scores.push_back(make_pair(i, a * 0.35 + b * 0.45 + c * 0.2));
		if (K == i) targetScore = a * 0.35 + b * 0.45 + c * 0.2;
	}
	sort(scores.begin(), scores.end(), [](auto& a, auto& b) {
		return a.second > b.second;  // 점수 큰 게 앞으로
		});
	for (int i = 0; i < N; i++) {
		if (scores[i].first == K) {
			rank = i;
			break;
		}
	}
	int index = rank / (N / 10);
	cout << "#" << temp++ << " " << grade[index] << "\n";
	}
    return 0;
}