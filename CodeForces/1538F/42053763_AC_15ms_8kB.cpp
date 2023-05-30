#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define debug(...) 1
#define Time(i, x...) x
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define all(x,i,j) x.begin() + i, x.begin() + j
#define Test int TC; cin >> TC; while(TC--)

/**
 3000 20
 300 2
 30 0
 3 0
 999 1
 99 0
 9 0

 
 
 */
int l, r, ans = 0;

void Solve() {
    ans = 0;
    cin >> l >> r;
    while (r)
        ans += r - l, l /= 10, r /= 10;
cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
Test
    Solve(), cout << "\n";
    return 0;
}