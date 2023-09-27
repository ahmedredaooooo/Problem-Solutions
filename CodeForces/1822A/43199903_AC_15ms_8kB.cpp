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
    int n, t;
    cin >> n >> t;
    vector<pair<int, pair<int, int>>> vp(n);


    for (int i = 0; i < n; ++i) {
        cin >> vp[i].first;
        vp[i].second.second = i + 1;
        vp[i].first += i;
    }

    for (int i = 0; i < n; ++i) {
        cin >> vp[i].second.first;
    }

//    sort(allc(vp), greater<>());
    int mx = LLONG_MIN, ans = 0;
    for (int i = 0; i < n; ++i) {
        if (vp[i].first <= t)
        {
//            mx = max(mx, vp[i].second.first);
            if (mx < vp[i].second.first)
                mx = vp[i].second.first, ans = vp[i].second.second;
        }
    }
    if (ans)
        cout << ans;
    else
        cout << -1;

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);
    Test
        Solve(), cout << "\n";
    return 0;
}