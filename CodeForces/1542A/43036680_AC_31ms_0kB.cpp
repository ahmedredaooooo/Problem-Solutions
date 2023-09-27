#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    int n, o = 0, e = o, x;
    cin >> n;n *= 2;
    while (n-- && cin >> x)
        (x % 2)?  o++: e++;
    
    if ((o - e) == 0)
        cout << "YeS";
    else cout << "nO";
}

signed main()
{
    int t;cin >> t;
    while (t--)Solve(), cout << "\n";

}