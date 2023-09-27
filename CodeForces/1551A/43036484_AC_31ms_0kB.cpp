#include <bits/stdc++.h>
using namespace std;

int Solve()
{

    int n;
    cin >> n;
    if (!(n % 3))
        return (cout << n / 3 << " " << n / 3, 0);
    if (n % 3 == 1)
        return (cout << n / 3 + 1 << " " << n / 3, 0);
    return (cout << n / 3 << " " << n / 3 + 1, 0);
}

signed main()
{
    int t;cin >> t;
    while (t--)Solve(), cout << "\n";

}