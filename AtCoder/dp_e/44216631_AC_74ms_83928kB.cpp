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
    int n, capacity, maxValue = 0;cin >> n >> capacity;
    vector<item>items(n + 1);

    for (int i = 1; i <= n; ++i)
        cin >> items[i].weight >> items[i].value, maxValue += items[i].value;


    maxValue = 1e5+5;
    vector<vector<int>> dp(n + 2, vector<int>(maxValue + 1, 0));
    for (int v = 1; v <= maxValue; ++v) dp[0][v] = 1e16;

    for (int i = 1; i <= n; ++i)
        for(int v = 0; v <= maxValue; v++)
        {
            dp[i][v] = dp[i - 1][v];
            if(items[i].value > v)
                continue;
            dp[i][v] = min(dp[i][v], dp[i - 1][v - items[i].value] + items[i].weight);
        }


    for (int v = maxValue; v >= 0; --v)
        if (dp[n][v] <= capacity)
            return cout << v << " ", void();
}
/*
definition:
    dp[i][v] --> minimum sum of weights selected out of the first "i" items such that sum of values of selected items is exactly "v"
base case:
    dp[i][0] = 0;
    dp[n][v] = inf;

backward formula:
    dp[i][v] --> dp[i-1][v]                          // when the current item is not included
             --> weight[i] + dp[i - 1][v - value[i]] // on including the current item
*/
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}