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

const LL mod = 1e9 + 7;
const int N = 1;
const ld pi = 3.14159265359;

void Solve() {
    int tc, x, a, b;
    cin >> tc >> x;
    bool  yes =0;
    while (tc--) {
        cin >> a >> b;
        if (a == x || a == 7 - x || b == x || b == 7 - x) {
            yes  = 1 ;
            break;
        }
    }
    if (yes)
        cout<<"NO";
    else
        cout<<"YES";
}

signed main() {
    sad;
//    FILE
//    Test
    Solve(), cout << el;
}
