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



void Solve() {
    int n;
    cin >> n;
    vector<int>dp(n + 1, 2e9);
    dp[0] = 0;
    for (int i = 0; i < n + 1; i++)
        for (auto j: to_string(i))
            dp[i] = min(dp[i], dp[i - (j - '0')] + 1);
//    for (int i = 0; i < n + 1; i++)cout << dp[i] << " ";
    cout << dp[n];
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}