#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (c == 0 && a > b || c == 1 && a >= b)
		cout << "Takahashi";
	else
		cout << "Aoki";
 
	return 0;
}