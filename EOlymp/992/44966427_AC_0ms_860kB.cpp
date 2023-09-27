#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define ll LL
#define Test LL tc; cin >> tc; while(tc--)



void Solve()
{                                       /// each cell represents if there is a undirected road between node i and node j and this represents a symmetric matrix
    int n, c = 0;cin >> n;
    for (int i = 0, x; i < n * n; ++i)
        cin >> x, c += x;
    cout << c / 2;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
