

#include <iostream>
using namespace std;
int main()
{
	long long a, b,c,s=0;
	cin >> a;
	s = a / 100;
	s += (a % 100) / 20;
	s += ((a % 100) % 20) / 10;
	s +=( ((a % 100) % 20) % 10)/5;
	s += ((((a % 100) % 20) % 10) % 5)/1;
	cout << s;
}

