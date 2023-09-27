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
    int n;cin >> n;
    vector<vector<int>>dp(n + 1, vector<int>(3)), v(n, vector<int>(3));

    for (int i = 0; i < n; ++i)
    {
        for(auto &j : v[i])
            cin >> j;
    }
    dp[0][0] = v[0][0];
    dp[0][1] = v[0][1];
    dp[0][2] = v[0][2];

    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (j == 0)
                dp[i][j] = max(dp[i - 1][1], dp[i - 1][2]) + v[i][j];
            else if (j == 1)
                dp[i][j] = max(dp[i - 1][0], dp[i - 1][2]) + v[i][j];
            else if (j == 2)
                dp[i][j] = max(dp[i - 1][0], dp[i - 1][1]) + v[i][j];
        }
    }
    cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});

}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}