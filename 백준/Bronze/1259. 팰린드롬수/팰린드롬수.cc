#include <iostream>
using namespace std;


bool check(string str)
{
	for (int i = 0; i<str.size()/2; i++)
	{
		if (str[i] != str[str.size() - 1 - i])
			return false;
	}
	return true;
}

int main()
{
	while (1) {
		string str;
		cin >> str;

		if (str == "0")
		{
			return 0;
		}
	
		if (check(str))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}