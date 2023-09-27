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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n + 2, vector<char>(m + 2, '#'));
    vector<vector<int>> dp(n + 2, vector<int>(m + 2));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> grid[i][j];
        }
    }




    dp[1][1] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (grid[i][j] == '.')
                (dp[i][j] += dp[i - 1][j] + dp[i][j - 1]) %= (int)1e9 + 7;
        }
    }
cout << dp[n][m];

}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}