#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#define fastIO 1;
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define debug(...) 1
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);
#define Time(i, x...) x
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)

int n, k;
string s;
map<char, bool>canUse;
vector<int>dp;

int Solve(int idx, int c = 0)                                                       ///recursive
{
    if(idx == n)
        return 0;
    auto & ret = dp[idx];
    if (~ret)return ret;
    if (canUse[s[idx]])
        return ret = Solve(idx + 1, c + 1) + c + 1;
    else
        return ret = Solve(idx + 1, 0) + 0;
}

void Solve()
{
    cin >> n >> k;
    char c;
    cin >> s;
    while (k--) cin >> c, canUse[c] = 1;
    dp = vector<int>(n + 1, 0);

    // dp[i] -> number of substrings till index i
    /* transactions
     * if s[i] not in the keyboard then dp[i] = the same value of the dp[i - 1]
     * else if s[i] is in the keyboard the I'll add 1 to the one before me + how many consecutive letters before me;
     * */
    int ans = 0;                        ///iterative
    for (int i = 0; i < n; ++i)
    {
        if (!canUse[s[i]])
            dp[i + 1] = 0;
        else
            dp[i + 1] = dp[i] + 1;
        ans += dp[i];
    }

    cout << "\n" << ans + dp[n];
}

signed main()
{
    fastIO

    Solve(), cout << '\n';

    return 0;
}
