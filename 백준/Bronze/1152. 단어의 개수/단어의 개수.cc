#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int word = 1;
	if (str.empty())
	{
		cout << "0" << endl;
		return 0;
	}
	else
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ')
				word++;
		}
		if (str[0] == ' ') word--;
		if (str[str.size() - 1]==' ') word--;
	}
	cout << word;

}