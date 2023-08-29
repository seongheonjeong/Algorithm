#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> s;
	
	while (1)
	{
		
		string str;
		
		getline(cin, str);
		
		if (str[0] == '.')
			break;
		int cnt = 0;
		int cnt2 = 0;
		for (int i = 0; i < str.size(); i++)
		{
			
			if (str[i] == '(')
			{
				s.push('(');
			}
			else if (str[i] == '[')
			{
				s.push('[');
				
			}
			else if (str[i] == ')')
			{
				if (!s.empty()&&s.top()=='(')
				{
					s.pop();
				}
				else
					cnt++;
			}
			else if (str[i] == ']')
			{
				if (!s.empty()&&s.top() =='[')
				{
					s.pop();

				}
				else
					cnt2++;
			}
		}
		if (s.empty() && cnt == 0 && cnt2==0)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';

		while (!s.empty())
			s.pop();
	}
}
