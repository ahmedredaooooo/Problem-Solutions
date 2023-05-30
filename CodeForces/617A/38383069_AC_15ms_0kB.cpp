
#include <iostream>
using namespace std;
int main()
{
	long long a, b, c;
	cin >> a;
	if (a % 5 == 0) {
		cout << a / 5;
		return 0;
	}
	cout << a / 5 + 1;

}

