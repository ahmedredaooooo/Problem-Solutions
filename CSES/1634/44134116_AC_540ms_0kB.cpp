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
int n, x;
vector<int>dp, coins;
 
 
 
int Solve(int money)
{
    if (money >= x)
        if (money == x)
            return 0;
        else
            return -2;
 
    int &ret = dp[money];
    if (~ret)
        return ret;
 
    int ans = LONG_MAX;
 
    for(auto i : coins)
    {
        int val = Solve(money + i);
        if (val != -2)
            ans = min(ans, val + 1);
    }
 
    if (ans == LONG_MAX)
        ans = -2;
 
    return ret = ans;
}
 
void Solve()
{
    cin >> n >> x;
    coins = vector<int>(n);
    for(auto & i : coins)cin >> i;
    dp = vector<int>(1e6 + 5, -1);
 
    int ans = Solve(0);
    if (ans == -2)
        ans = -1;
    cout << ans;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}