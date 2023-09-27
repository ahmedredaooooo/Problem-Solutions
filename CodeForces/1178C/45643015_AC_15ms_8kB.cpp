#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#define fastIO 1;
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define debug(...) 1
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);
#define Time(i, x...) x
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)

inline LL fastPowerIter(LL b, LL p, LL m)
{
    LL r = 1;
    while (p)
    {
        if (p & 1)
            r  = r * b % m;
        b = b * b % m;
        p /= 2;
    }
    return r;
}

void Solve()
{
    int n, m;cin >> n >> m;
    cout << fastPowerIter(2, n + m, 998244353);
}

signed main()
{
    fastIO

    Solve(), cout << '\n';

    return 0;
}
