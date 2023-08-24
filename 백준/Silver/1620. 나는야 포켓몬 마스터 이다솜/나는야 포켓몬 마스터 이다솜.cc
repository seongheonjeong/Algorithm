#include <iostream>
#include <map>
#include <string>
using namespace std;


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	map<string, int>Pokemon1; 
	map<int, string>Pokemon2;
	string str; //문자열 입력
	int n,m; //n=포켓몬 개수 , m=맞춰야 하는 문제의 개수
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		Pokemon1.insert({ str, i });
		Pokemon2.insert({ i, str });
	}
	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (str[0] >= 'A' && str[0] <= 'Z')
			cout << Pokemon1[str] << '\n'; //key값 str에 대한 value 값 출력
		else
			cout << Pokemon2[stoi(str)] << '\n'; //문자열 정수변환 stoi()사용  
	}
}
