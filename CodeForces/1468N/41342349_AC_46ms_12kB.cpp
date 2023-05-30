/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#else
#define debug(...) 1
#define Time(i, x...) x
#endif

using namespace std;
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
//int x = accumulate(all(v),0LL);
//partial_sum(all(v), v.begin);




void Solve() {
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    c1 -= a1;
    c2 -= a2;
    c3 -= a3;
    if (c1 < 0 || c2 < 0 || c3 < 0) {
        NO
        return;
    }
    a4 -= c1;
    a5 -= c2;
    a4 = max(a4, 0ll);
    a5 = max(a5, 0LL);
    if (c3 >= a4 + a5)
        YES
    else
        NO
}

signed main() {
    sad;
//    FILE
    Test
        Solve(), cout << el;
}