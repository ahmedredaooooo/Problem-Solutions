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
    int n;cin >> n;
    string s;cin >> s;
    string ans = "1";
    for (int i = 1; i < n; i++) {
        if ('1' + s[i] != ans[i - 1] + s[i - 1])ans += '1';
        else ans += '0';
    }
    cout << ans;
}
signed main() {
    sad;
//    FILE
    Test
    Solve(), cout << el;
}
