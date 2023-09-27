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
int n, capacity, maxValue;
vector<item>items;

vector<vector<int>> dp;
int Solve(int idx, int v)
{
    if (v <= 0)
        return 0;
    if (idx == n)
        return 1e16;

    auto &ret = dp[idx][v];
    if (~ret) return ret;

    ret = min(Solve(idx + 1, v - items[idx].value) + items[idx].weight, Solve(idx + 1, v));
    return ret;
}

void Solve()
{
    cin >> n >> capacity;
    items = vector<item>(n);
    for(auto & [w,v] : items)cin >> w >> v, maxValue += v;

    dp = vector<vector<int>> (n, vector<int>(1e5 + 55, -1));
    for (int i = 1e5+5; i >= 0; --i)
        if (Solve(0, i) <= capacity)
            return void (cout << i);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}