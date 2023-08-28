#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

map<string, int> p1;
map<int, string> p2;
int main()
{
    cin.tie(0);
	ios::sync_with_stdio(0);
    cout.tie(0);
    
	int M,N; //정답 개수, 문제 개수 
	cin >> M >> N;
	for (int i = 1; i <= M; i++)
	{
		string str;
		cin >> str;
		p1.insert({ str, i });
		p2.insert({ i, str });
	}

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		if (str[0]>='A'&&str[0]<='Z') //문자열을 정수 값으로 변환 , 정수값 없을 시에 0 리턴
			cout << p1[str] << '\n';
		else
			cout << p2[stoi(str)]<<'\n';
	}
}