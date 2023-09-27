#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define Time(i, x...) x
#define debug(x...)  1
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define all(x,i,j) x.begin() + i, x.begin() + j
#define Test int TC; cin >> TC; while(TC--)


void Solve() {
    int n;
    cin >> n;
    vector<pair<int, int>>v(n);
    set<pair<int, int>>sp;
    for (int i = 0; i < n; ++i)
        cin >> v[i].first,
        v[i].second = i;

    sort(allc(v));
    int mx = LLONG_MIN;
    sp.insert({v[0], v[1], v[n-1], v[n-2]});
    for(auto it = sp.begin(); it != sp.end(); it++)
        for(auto jt = next(it); jt != sp.end(); jt++)
            mx = max(it->first * jt->first, mx);
   cout << mx;
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);
    Test
        Solve(), cout << "\n";
    return 0;
}