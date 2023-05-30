/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
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
    string s;cin >> s;
    vector<int>v(s.size());
    for (int i = 0; i < s.size()-1; ++i)    v[i+1] = s[i + 1] == s[i];
    
    partial_sum(all(v), v.begin());

    int q;cin >> q;
    while (q--){
        int l,r;cin >> l >> r;
        cout << v[r-1]-v[l-1]<<el;
    }
}
signed main() {
    sad;
//    FILE
//    Test
    Solve(), cout << el;
}
