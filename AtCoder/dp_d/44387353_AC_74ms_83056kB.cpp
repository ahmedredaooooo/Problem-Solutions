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
struct item
{
    int weight, value;
};
void Solve()
{
    int n, w;
    cin >> n >> w;
    vector<item> v(n);
    for (auto &[l, r]: v)cin >> l >> r;

    vector<vector<int>> dp(n + 1, vector<int>(w + 1));
    int take;
    for (int i = n - 1; i >= 0; --i)
        for (int remainingCapacity = 0; remainingCapacity <= w; ++remainingCapacity)
        {
            dp[i][remainingCapacity] = dp[i + 1][remainingCapacity];
            take = remainingCapacity - v[i].weight;
            if (take >= 0)
                dp[i][remainingCapacity] = max(dp[i][remainingCapacity], dp[i + 1][take] + v[i].value);
        }
    cout << dp[0][w];
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}