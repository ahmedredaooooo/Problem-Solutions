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


void Solve()
{
    int n, k;cin >> n >> k;
    vector<int>height(n);
    for(auto & i : height)cin >> i;

    vector<int>dp(n + 1, LONG_MAX);
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {

        for (int j = i + 1; j <= i + k && j < n; ++j)

            dp[j] = min(dp[i] + abs(height[i] - height[j]), dp[j]);             //dp[i] : Minimum cost to reach stone i.


    }
//    for (int i = 0; i < n; ++i)
    cout << dp[n - 1];
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}