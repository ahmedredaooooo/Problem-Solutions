/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())

ll mod = 1e9 + 7;


string s, st = "";
int n, l, r, k, x;
ll a[100006], b[100006], c[100006];

ll solve(int num = 0, int sum = 0) {
    if(num == n)
        return mod;
    ll ans = mod;
    if (a[num] < c[num])
        ans = (b[num]);
    return min(ans, solve(num + 1));

}


int main ()
{
    sad;;;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i] >> b[i] >> c[i];

    if (solve() == mod) {
        cout << "-1\n";
    } else cout << solve();

}