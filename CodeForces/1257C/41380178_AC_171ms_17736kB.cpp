/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
//#include "Debug.cpp"
#else
#define debug(...) 1
#define Time(i, x...) x
#endif

#define sad ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define el '\n'
#define all(x) x.begin(), x.end()
#define LL  long long
#define int LL
#define ld long double
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
#define NO cout<<"NO";
#define YES cout<<"YES";
#define FILE freopen("Input.txt", "r", stdin);

void Solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; ++i) cin >> v[i], mp[v[i]].push_back(i);
    int mn = LLONG_MAX;
    for (auto [num, pos]: mp) {
        for (int i = 0; i < pos.size() - 1; ++i) {
            mn = min(mn, pos[i + 1] - pos[i] + 1);
        }
    }
    if (mn == LLONG_MAX)
        cout << -1;
    else
        cout << mn;
}
signed main() {
    sad;
//    FILE
    Test
    Solve(), cout << el;
}
