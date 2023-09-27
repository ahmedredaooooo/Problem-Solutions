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

void Solve() {
//    int c = 0;
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            for (int k = 1; k <= n; ++k) {
//                for (int l = 1; l <= n; ++l) {
//                    for (int m = 1; m <= n; ++m) {
//                        for (int i1 = 1; i1 <= n; ++i1) {
//                            for (int k1 = 1; k1 <= n; ++k1) {
//                                for (int l1 = 1; l1 <= n; ++l1) {
//                                    vector<int> arr;
//                                    arr.push_back(i), arr.push_back(j), arr.push_back(k), arr.push_back(l), arr.push_back(
//                                            m), arr.push_back(i1), arr.push_back(k1), arr.push_back(l1);
//                                    if (is_sorted(allc(arr)) || is_sorted(rallc(arr)))
//                                        debug(arr), c++;
//                                }
//
//                            }
//
//                        }
//
//
//                    }
//                }
//            }
//        }
//    }
//    cerr << c;

int n;cin >> n;cout << fastPowerIter(5, n, 100);
}
signed main()
{
    fastIO

    Solve(), cout << '\n';

    return 0;
}
