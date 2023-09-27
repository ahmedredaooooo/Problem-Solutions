/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()

#define Test int TC; cin >> TC; while(TC--)
/*
 * base if idx == n
 *      return sum == x
 * for i (1 -> n)
 *      fun(idx + 1, sum + v[i])
 *      fun(idx + 1, sum)
 */




void Solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1);
    vector<int> dp(x + 1);
    for (int i = 1; i <= n; ++i)cin >> v[i];
    dp[0] = 1;
    for (int i = 0; i <= x; ++i)
        if (dp[i])
            for (int coin = 1; coin <= n; ++coin)
                if (i + v[coin] <= x)
                    (dp[i + v[coin]] += dp[i]) %= (int) 1e9 + 7;


    cout << dp[x];

}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}