#include <bits/stdc++.h>
using namespace std;


void Solve()
{
    int n;cin >> n;
    bool selfLoop = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0, x; j < n; ++j)
        {
            cin >> x;
            if (i == j && x)
                selfLoop = 1;
        }
    cout << (selfLoop ? "YES" : "NO");
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
