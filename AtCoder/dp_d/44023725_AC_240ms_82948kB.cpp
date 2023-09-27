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
    int weight, cost;
};

int n, cap;
vector<item> items;
vector<vector<int>> dp;

int knapsack(int idx, int curCap)
{
    if (idx == n)
        return 0;
    int &ret = dp[idx][curCap];
    if (~ret)
        return ret;

    ret = knapsack(idx + 1, curCap);
    if (curCap - items[idx].weight >= 0)
        ret = max(ret, knapsack(idx + 1, curCap - items[idx].weight) + items[idx].cost);

    return ret;
}

void Solve()
{
    cin >> n >> cap;
    items = vector<item>(n);
    dp = vector<vector<int>>(n + 1, vector<int>(cap + 1, -1));
    for(auto &[w, c] : items)cin >> w >> c;
cout << knapsack(0, cap);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}