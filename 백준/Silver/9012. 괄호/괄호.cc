#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        stack<char> s;
        int count = 0;
        string str;
        getline(cin, str);

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
                s.push('(');
            else
            {
                if (!s.empty())
                    s.pop();
                else
                    count++;
            }
        }

        if (!s.empty()||count!=0)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}
