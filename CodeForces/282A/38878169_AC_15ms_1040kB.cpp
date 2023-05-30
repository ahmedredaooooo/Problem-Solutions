#include<iostream>
using namespace std;
int main()
{
	int x,c=0;
	cin >> x ;
	string s;
	for (int i = 0; i < x; i++)
	{
		cin >> s;
		if (s[1] == '+')
			c++;
		else c--;
	}
	cout << c;
	return 0;
}