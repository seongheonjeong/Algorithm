#include <iostream>
#include <algorithm>
using namespace std;

int num[3];

int main()
{
	
	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> num[i];
		}
		if (num[0]==0&&num[1]==0&&num[2]==0)
			return 0;
		
		sort(num, num + 3);


		if (num[2]*num[2] == num[0]*num[0] + num[1] * num[1])
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
	return 0;
}